// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_ATTR_COLD void Vstartup_tb___024root___stl_sequent__TOP__2(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___stl_sequent__TOP__2\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5385__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__97__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5385__part 
                            = vlSelf->__Vfunc_leading_zero32__5385__value;
                        vlSelf->__Vfunc_leading_zero32__5385__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5385__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5385__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5385__count)));
                            vlSelf->__Vfunc_leading_zero32__5385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5385__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5385__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5385__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5385__count)));
                            vlSelf->__Vfunc_leading_zero32__5385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5385__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5385__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5385__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5385__count)));
                            vlSelf->__Vfunc_leading_zero32__5385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5385__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5385__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5385__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5385__count)));
                            vlSelf->__Vfunc_leading_zero32__5385__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5385__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5385__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5385__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5385__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5385__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5385__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5385__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5385__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5391__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__98__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5391__part 
                            = vlSelf->__Vfunc_leading_zero32__5391__value;
                        vlSelf->__Vfunc_leading_zero32__5391__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5391__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5391__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5391__count)));
                            vlSelf->__Vfunc_leading_zero32__5391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5391__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5391__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5391__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5391__count)));
                            vlSelf->__Vfunc_leading_zero32__5391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5391__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5391__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5391__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5391__count)));
                            vlSelf->__Vfunc_leading_zero32__5391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5391__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5391__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5391__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5391__count)));
                            vlSelf->__Vfunc_leading_zero32__5391__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5391__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5391__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5391__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5391__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5391__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5391__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5391__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5391__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5397__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__99__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5397__part 
                            = vlSelf->__Vfunc_leading_zero32__5397__value;
                        vlSelf->__Vfunc_leading_zero32__5397__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5397__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5397__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5397__count)));
                            vlSelf->__Vfunc_leading_zero32__5397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5397__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5397__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5397__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5397__count)));
                            vlSelf->__Vfunc_leading_zero32__5397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5397__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5397__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5397__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5397__count)));
                            vlSelf->__Vfunc_leading_zero32__5397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5397__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5397__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5397__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5397__count)));
                            vlSelf->__Vfunc_leading_zero32__5397__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5397__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5397__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5397__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5397__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5397__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5397__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5397__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5397__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5403__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__100__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5403__part 
                            = vlSelf->__Vfunc_leading_zero32__5403__value;
                        vlSelf->__Vfunc_leading_zero32__5403__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5403__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5403__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5403__count)));
                            vlSelf->__Vfunc_leading_zero32__5403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5403__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5403__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5403__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5403__count)));
                            vlSelf->__Vfunc_leading_zero32__5403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5403__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5403__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5403__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5403__count)));
                            vlSelf->__Vfunc_leading_zero32__5403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5403__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5403__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5403__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5403__count)));
                            vlSelf->__Vfunc_leading_zero32__5403__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5403__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5403__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5403__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5403__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5403__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5403__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5403__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5403__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5409__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__101__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5409__part 
                            = vlSelf->__Vfunc_leading_zero32__5409__value;
                        vlSelf->__Vfunc_leading_zero32__5409__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5409__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5409__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5409__count)));
                            vlSelf->__Vfunc_leading_zero32__5409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5409__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5409__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5409__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5409__count)));
                            vlSelf->__Vfunc_leading_zero32__5409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5409__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5409__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5409__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5409__count)));
                            vlSelf->__Vfunc_leading_zero32__5409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5409__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5409__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5409__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5409__count)));
                            vlSelf->__Vfunc_leading_zero32__5409__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5409__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5409__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5409__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5409__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5409__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5409__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5409__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5409__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5415__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__102__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5415__part 
                            = vlSelf->__Vfunc_leading_zero32__5415__value;
                        vlSelf->__Vfunc_leading_zero32__5415__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5415__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5415__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5415__count)));
                            vlSelf->__Vfunc_leading_zero32__5415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5415__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5415__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5415__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5415__count)));
                            vlSelf->__Vfunc_leading_zero32__5415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5415__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5415__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5415__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5415__count)));
                            vlSelf->__Vfunc_leading_zero32__5415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5415__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5415__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5415__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5415__count)));
                            vlSelf->__Vfunc_leading_zero32__5415__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5415__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5415__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5415__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5415__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5415__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5415__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5415__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5415__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5421__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__103__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5421__part 
                            = vlSelf->__Vfunc_leading_zero32__5421__value;
                        vlSelf->__Vfunc_leading_zero32__5421__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5421__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5421__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5421__count)));
                            vlSelf->__Vfunc_leading_zero32__5421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5421__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5421__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5421__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5421__count)));
                            vlSelf->__Vfunc_leading_zero32__5421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5421__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5421__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5421__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5421__count)));
                            vlSelf->__Vfunc_leading_zero32__5421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5421__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5421__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5421__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5421__count)));
                            vlSelf->__Vfunc_leading_zero32__5421__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5421__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5421__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5421__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5421__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5421__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5421__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5421__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5421__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5427__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__104__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5427__part 
                            = vlSelf->__Vfunc_leading_zero32__5427__value;
                        vlSelf->__Vfunc_leading_zero32__5427__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5427__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5427__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5427__count)));
                            vlSelf->__Vfunc_leading_zero32__5427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5427__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5427__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5427__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5427__count)));
                            vlSelf->__Vfunc_leading_zero32__5427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5427__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5427__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5427__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5427__count)));
                            vlSelf->__Vfunc_leading_zero32__5427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5427__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5427__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5427__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5427__count)));
                            vlSelf->__Vfunc_leading_zero32__5427__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5427__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5427__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5427__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5427__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5427__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5427__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5427__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5427__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5433__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__105__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5433__part 
                            = vlSelf->__Vfunc_leading_zero32__5433__value;
                        vlSelf->__Vfunc_leading_zero32__5433__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5433__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5433__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5433__count)));
                            vlSelf->__Vfunc_leading_zero32__5433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5433__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5433__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5433__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5433__count)));
                            vlSelf->__Vfunc_leading_zero32__5433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5433__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5433__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5433__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5433__count)));
                            vlSelf->__Vfunc_leading_zero32__5433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5433__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5433__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5433__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5433__count)));
                            vlSelf->__Vfunc_leading_zero32__5433__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5433__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5433__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5433__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5433__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5433__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5433__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5433__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5433__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5439__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__106__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5439__part 
                            = vlSelf->__Vfunc_leading_zero32__5439__value;
                        vlSelf->__Vfunc_leading_zero32__5439__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5439__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5439__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5439__count)));
                            vlSelf->__Vfunc_leading_zero32__5439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5439__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5439__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5439__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5439__count)));
                            vlSelf->__Vfunc_leading_zero32__5439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5439__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5439__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5439__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5439__count)));
                            vlSelf->__Vfunc_leading_zero32__5439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5439__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5439__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5439__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5439__count)));
                            vlSelf->__Vfunc_leading_zero32__5439__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5439__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5439__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5439__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5439__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5439__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5439__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5439__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5439__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5445__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__107__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5445__part 
                            = vlSelf->__Vfunc_leading_zero32__5445__value;
                        vlSelf->__Vfunc_leading_zero32__5445__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5445__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5445__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5445__count)));
                            vlSelf->__Vfunc_leading_zero32__5445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5445__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5445__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5445__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5445__count)));
                            vlSelf->__Vfunc_leading_zero32__5445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5445__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5445__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5445__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5445__count)));
                            vlSelf->__Vfunc_leading_zero32__5445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5445__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5445__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5445__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5445__count)));
                            vlSelf->__Vfunc_leading_zero32__5445__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5445__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5445__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5445__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5445__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5445__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5445__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5445__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5445__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5451__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__108__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5451__part 
                            = vlSelf->__Vfunc_leading_zero32__5451__value;
                        vlSelf->__Vfunc_leading_zero32__5451__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5451__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5451__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5451__count)));
                            vlSelf->__Vfunc_leading_zero32__5451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5451__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5451__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5451__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5451__count)));
                            vlSelf->__Vfunc_leading_zero32__5451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5451__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5451__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5451__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5451__count)));
                            vlSelf->__Vfunc_leading_zero32__5451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5451__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5451__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5451__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5451__count)));
                            vlSelf->__Vfunc_leading_zero32__5451__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5451__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5451__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5451__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5451__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5451__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5451__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5451__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5451__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5457__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__109__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5457__part 
                            = vlSelf->__Vfunc_leading_zero32__5457__value;
                        vlSelf->__Vfunc_leading_zero32__5457__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5457__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5457__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5457__count)));
                            vlSelf->__Vfunc_leading_zero32__5457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5457__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5457__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5457__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5457__count)));
                            vlSelf->__Vfunc_leading_zero32__5457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5457__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5457__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5457__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5457__count)));
                            vlSelf->__Vfunc_leading_zero32__5457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5457__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5457__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5457__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5457__count)));
                            vlSelf->__Vfunc_leading_zero32__5457__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5457__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5457__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5457__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5457__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5457__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5457__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5457__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5457__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5463__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__110__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5463__part 
                            = vlSelf->__Vfunc_leading_zero32__5463__value;
                        vlSelf->__Vfunc_leading_zero32__5463__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5463__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5463__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5463__count)));
                            vlSelf->__Vfunc_leading_zero32__5463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5463__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5463__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5463__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5463__count)));
                            vlSelf->__Vfunc_leading_zero32__5463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5463__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5463__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5463__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5463__count)));
                            vlSelf->__Vfunc_leading_zero32__5463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5463__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5463__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5463__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5463__count)));
                            vlSelf->__Vfunc_leading_zero32__5463__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5463__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5463__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5463__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5463__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5463__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5463__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5463__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5463__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5469__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__111__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5469__part 
                            = vlSelf->__Vfunc_leading_zero32__5469__value;
                        vlSelf->__Vfunc_leading_zero32__5469__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5469__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5469__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5469__count)));
                            vlSelf->__Vfunc_leading_zero32__5469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5469__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5469__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5469__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5469__count)));
                            vlSelf->__Vfunc_leading_zero32__5469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5469__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5469__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5469__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5469__count)));
                            vlSelf->__Vfunc_leading_zero32__5469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5469__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5469__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5469__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5469__count)));
                            vlSelf->__Vfunc_leading_zero32__5469__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5469__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5469__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5469__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5469__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5469__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5469__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5469__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5469__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5475__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__112__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5475__part 
                            = vlSelf->__Vfunc_leading_zero32__5475__value;
                        vlSelf->__Vfunc_leading_zero32__5475__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5475__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5475__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5475__count)));
                            vlSelf->__Vfunc_leading_zero32__5475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5475__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5475__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5475__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5475__count)));
                            vlSelf->__Vfunc_leading_zero32__5475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5475__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5475__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5475__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5475__count)));
                            vlSelf->__Vfunc_leading_zero32__5475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5475__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5475__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5475__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5475__count)));
                            vlSelf->__Vfunc_leading_zero32__5475__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5475__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5475__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5475__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5475__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5475__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5475__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5475__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5475__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5481__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__113__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5481__part 
                            = vlSelf->__Vfunc_leading_zero32__5481__value;
                        vlSelf->__Vfunc_leading_zero32__5481__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5481__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5481__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5481__count)));
                            vlSelf->__Vfunc_leading_zero32__5481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5481__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5481__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5481__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5481__count)));
                            vlSelf->__Vfunc_leading_zero32__5481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5481__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5481__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5481__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5481__count)));
                            vlSelf->__Vfunc_leading_zero32__5481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5481__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5481__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5481__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5481__count)));
                            vlSelf->__Vfunc_leading_zero32__5481__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5481__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5481__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5481__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5481__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5481__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5481__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5481__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5481__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5487__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__114__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5487__part 
                            = vlSelf->__Vfunc_leading_zero32__5487__value;
                        vlSelf->__Vfunc_leading_zero32__5487__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5487__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5487__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5487__count)));
                            vlSelf->__Vfunc_leading_zero32__5487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5487__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5487__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5487__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5487__count)));
                            vlSelf->__Vfunc_leading_zero32__5487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5487__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5487__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5487__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5487__count)));
                            vlSelf->__Vfunc_leading_zero32__5487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5487__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5487__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5487__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5487__count)));
                            vlSelf->__Vfunc_leading_zero32__5487__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5487__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5487__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5487__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5487__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5487__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5487__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5487__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5487__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5493__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__115__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5493__part 
                            = vlSelf->__Vfunc_leading_zero32__5493__value;
                        vlSelf->__Vfunc_leading_zero32__5493__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5493__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5493__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5493__count)));
                            vlSelf->__Vfunc_leading_zero32__5493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5493__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5493__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5493__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5493__count)));
                            vlSelf->__Vfunc_leading_zero32__5493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5493__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5493__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5493__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5493__count)));
                            vlSelf->__Vfunc_leading_zero32__5493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5493__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5493__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5493__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5493__count)));
                            vlSelf->__Vfunc_leading_zero32__5493__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5493__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5493__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5493__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5493__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5493__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5493__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5493__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5493__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5499__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__116__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5499__part 
                            = vlSelf->__Vfunc_leading_zero32__5499__value;
                        vlSelf->__Vfunc_leading_zero32__5499__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5499__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5499__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5499__count)));
                            vlSelf->__Vfunc_leading_zero32__5499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5499__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5499__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5499__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5499__count)));
                            vlSelf->__Vfunc_leading_zero32__5499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5499__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5499__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5499__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5499__count)));
                            vlSelf->__Vfunc_leading_zero32__5499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5499__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5499__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5499__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5499__count)));
                            vlSelf->__Vfunc_leading_zero32__5499__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5499__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5499__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5499__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5499__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5499__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5499__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5499__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5499__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5505__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__117__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5505__part 
                            = vlSelf->__Vfunc_leading_zero32__5505__value;
                        vlSelf->__Vfunc_leading_zero32__5505__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5505__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5505__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5505__count)));
                            vlSelf->__Vfunc_leading_zero32__5505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5505__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5505__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5505__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5505__count)));
                            vlSelf->__Vfunc_leading_zero32__5505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5505__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5505__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5505__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5505__count)));
                            vlSelf->__Vfunc_leading_zero32__5505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5505__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5505__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5505__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5505__count)));
                            vlSelf->__Vfunc_leading_zero32__5505__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5505__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5505__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5505__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5505__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5505__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5505__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5505__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5505__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5511__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__118__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5511__part 
                            = vlSelf->__Vfunc_leading_zero32__5511__value;
                        vlSelf->__Vfunc_leading_zero32__5511__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5511__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5511__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5511__count)));
                            vlSelf->__Vfunc_leading_zero32__5511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5511__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5511__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5511__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5511__count)));
                            vlSelf->__Vfunc_leading_zero32__5511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5511__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5511__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5511__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5511__count)));
                            vlSelf->__Vfunc_leading_zero32__5511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5511__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5511__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5511__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5511__count)));
                            vlSelf->__Vfunc_leading_zero32__5511__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5511__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5511__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5511__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5511__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5511__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5511__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5511__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5511__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5517__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__119__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5517__part 
                            = vlSelf->__Vfunc_leading_zero32__5517__value;
                        vlSelf->__Vfunc_leading_zero32__5517__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5517__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5517__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5517__count)));
                            vlSelf->__Vfunc_leading_zero32__5517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5517__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5517__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5517__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5517__count)));
                            vlSelf->__Vfunc_leading_zero32__5517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5517__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5517__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5517__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5517__count)));
                            vlSelf->__Vfunc_leading_zero32__5517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5517__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5517__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5517__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5517__count)));
                            vlSelf->__Vfunc_leading_zero32__5517__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5517__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5517__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5517__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5517__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5517__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5517__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5517__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5517__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5523__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__120__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5523__part 
                            = vlSelf->__Vfunc_leading_zero32__5523__value;
                        vlSelf->__Vfunc_leading_zero32__5523__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5523__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5523__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5523__count)));
                            vlSelf->__Vfunc_leading_zero32__5523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5523__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5523__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5523__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5523__count)));
                            vlSelf->__Vfunc_leading_zero32__5523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5523__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5523__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5523__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5523__count)));
                            vlSelf->__Vfunc_leading_zero32__5523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5523__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5523__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5523__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5523__count)));
                            vlSelf->__Vfunc_leading_zero32__5523__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5523__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5523__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5523__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5523__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5523__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5523__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5523__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5523__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5529__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__121__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5529__part 
                            = vlSelf->__Vfunc_leading_zero32__5529__value;
                        vlSelf->__Vfunc_leading_zero32__5529__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5529__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5529__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5529__count)));
                            vlSelf->__Vfunc_leading_zero32__5529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5529__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5529__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5529__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5529__count)));
                            vlSelf->__Vfunc_leading_zero32__5529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5529__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5529__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5529__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5529__count)));
                            vlSelf->__Vfunc_leading_zero32__5529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5529__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5529__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5529__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5529__count)));
                            vlSelf->__Vfunc_leading_zero32__5529__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5529__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5529__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5529__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5529__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5529__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5529__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5529__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5529__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5535__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__122__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5535__part 
                            = vlSelf->__Vfunc_leading_zero32__5535__value;
                        vlSelf->__Vfunc_leading_zero32__5535__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5535__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5535__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5535__count)));
                            vlSelf->__Vfunc_leading_zero32__5535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5535__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5535__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5535__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5535__count)));
                            vlSelf->__Vfunc_leading_zero32__5535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5535__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5535__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5535__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5535__count)));
                            vlSelf->__Vfunc_leading_zero32__5535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5535__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5535__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5535__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5535__count)));
                            vlSelf->__Vfunc_leading_zero32__5535__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5535__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5535__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5535__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5535__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5535__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5535__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5535__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5535__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5541__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__123__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5541__part 
                            = vlSelf->__Vfunc_leading_zero32__5541__value;
                        vlSelf->__Vfunc_leading_zero32__5541__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5541__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5541__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5541__count)));
                            vlSelf->__Vfunc_leading_zero32__5541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5541__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5541__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5541__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5541__count)));
                            vlSelf->__Vfunc_leading_zero32__5541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5541__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5541__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5541__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5541__count)));
                            vlSelf->__Vfunc_leading_zero32__5541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5541__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5541__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5541__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5541__count)));
                            vlSelf->__Vfunc_leading_zero32__5541__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5541__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5541__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5541__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5541__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5541__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5541__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5541__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5541__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5547__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__124__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5547__part 
                            = vlSelf->__Vfunc_leading_zero32__5547__value;
                        vlSelf->__Vfunc_leading_zero32__5547__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5547__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5547__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5547__count)));
                            vlSelf->__Vfunc_leading_zero32__5547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5547__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5547__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5547__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5547__count)));
                            vlSelf->__Vfunc_leading_zero32__5547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5547__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5547__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5547__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5547__count)));
                            vlSelf->__Vfunc_leading_zero32__5547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5547__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5547__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5547__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5547__count)));
                            vlSelf->__Vfunc_leading_zero32__5547__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5547__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5547__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5547__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5547__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5547__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5547__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5547__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5547__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5553__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__125__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5553__part 
                            = vlSelf->__Vfunc_leading_zero32__5553__value;
                        vlSelf->__Vfunc_leading_zero32__5553__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5553__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5553__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5553__count)));
                            vlSelf->__Vfunc_leading_zero32__5553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5553__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5553__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5553__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5553__count)));
                            vlSelf->__Vfunc_leading_zero32__5553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5553__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5553__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5553__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5553__count)));
                            vlSelf->__Vfunc_leading_zero32__5553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5553__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5553__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5553__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5553__count)));
                            vlSelf->__Vfunc_leading_zero32__5553__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5553__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5553__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5553__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5553__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5553__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5553__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5553__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5553__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5559__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__126__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5559__part 
                            = vlSelf->__Vfunc_leading_zero32__5559__value;
                        vlSelf->__Vfunc_leading_zero32__5559__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5559__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5559__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5559__count)));
                            vlSelf->__Vfunc_leading_zero32__5559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5559__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5559__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5559__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5559__count)));
                            vlSelf->__Vfunc_leading_zero32__5559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5559__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5559__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5559__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5559__count)));
                            vlSelf->__Vfunc_leading_zero32__5559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5559__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5559__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5559__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5559__count)));
                            vlSelf->__Vfunc_leading_zero32__5559__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5559__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5559__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5559__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5559__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5559__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5559__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5559__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5559__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5565__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__127__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5565__part 
                            = vlSelf->__Vfunc_leading_zero32__5565__value;
                        vlSelf->__Vfunc_leading_zero32__5565__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5565__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5565__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5565__count)));
                            vlSelf->__Vfunc_leading_zero32__5565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5565__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5565__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5565__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5565__count)));
                            vlSelf->__Vfunc_leading_zero32__5565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5565__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5565__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5565__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5565__count)));
                            vlSelf->__Vfunc_leading_zero32__5565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5565__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5565__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5565__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5565__count)));
                            vlSelf->__Vfunc_leading_zero32__5565__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5565__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5565__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5565__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5565__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5565__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5565__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5565__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5565__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5571__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5571__part 
                            = vlSelf->__Vfunc_leading_zero32__5571__value;
                        vlSelf->__Vfunc_leading_zero32__5571__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5571__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5571__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5571__count)));
                            vlSelf->__Vfunc_leading_zero32__5571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5571__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5571__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5571__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5571__count)));
                            vlSelf->__Vfunc_leading_zero32__5571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5571__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5571__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5571__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5571__count)));
                            vlSelf->__Vfunc_leading_zero32__5571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5571__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5571__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5571__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5571__count)));
                            vlSelf->__Vfunc_leading_zero32__5571__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5571__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5571__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5571__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5571__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5571__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5571__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5571__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5571__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5577__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5577__part 
                            = vlSelf->__Vfunc_leading_zero32__5577__value;
                        vlSelf->__Vfunc_leading_zero32__5577__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5577__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5577__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5577__count)));
                            vlSelf->__Vfunc_leading_zero32__5577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5577__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5577__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5577__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5577__count)));
                            vlSelf->__Vfunc_leading_zero32__5577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5577__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5577__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5577__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5577__count)));
                            vlSelf->__Vfunc_leading_zero32__5577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5577__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5577__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5577__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5577__count)));
                            vlSelf->__Vfunc_leading_zero32__5577__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5577__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5577__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5577__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5577__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5577__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5577__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5577__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5577__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5583__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5583__part 
                            = vlSelf->__Vfunc_leading_zero32__5583__value;
                        vlSelf->__Vfunc_leading_zero32__5583__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5583__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5583__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5583__count)));
                            vlSelf->__Vfunc_leading_zero32__5583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5583__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5583__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5583__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5583__count)));
                            vlSelf->__Vfunc_leading_zero32__5583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5583__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5583__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5583__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5583__count)));
                            vlSelf->__Vfunc_leading_zero32__5583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5583__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5583__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5583__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5583__count)));
                            vlSelf->__Vfunc_leading_zero32__5583__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5583__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5583__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5583__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5583__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5583__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5583__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5583__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5583__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5589__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5589__part 
                            = vlSelf->__Vfunc_leading_zero32__5589__value;
                        vlSelf->__Vfunc_leading_zero32__5589__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5589__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5589__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5589__count)));
                            vlSelf->__Vfunc_leading_zero32__5589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5589__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5589__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5589__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5589__count)));
                            vlSelf->__Vfunc_leading_zero32__5589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5589__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5589__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5589__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5589__count)));
                            vlSelf->__Vfunc_leading_zero32__5589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5589__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5589__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5589__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5589__count)));
                            vlSelf->__Vfunc_leading_zero32__5589__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5589__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5589__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5589__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5589__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5589__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5589__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5589__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5589__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5595__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5595__part 
                            = vlSelf->__Vfunc_leading_zero32__5595__value;
                        vlSelf->__Vfunc_leading_zero32__5595__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5595__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5595__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5595__count)));
                            vlSelf->__Vfunc_leading_zero32__5595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5595__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5595__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5595__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5595__count)));
                            vlSelf->__Vfunc_leading_zero32__5595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5595__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5595__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5595__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5595__count)));
                            vlSelf->__Vfunc_leading_zero32__5595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5595__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5595__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5595__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5595__count)));
                            vlSelf->__Vfunc_leading_zero32__5595__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5595__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5595__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5595__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5595__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5595__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5595__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5595__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5595__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5601__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5601__part 
                            = vlSelf->__Vfunc_leading_zero32__5601__value;
                        vlSelf->__Vfunc_leading_zero32__5601__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5601__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5601__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5601__count)));
                            vlSelf->__Vfunc_leading_zero32__5601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5601__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5601__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5601__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5601__count)));
                            vlSelf->__Vfunc_leading_zero32__5601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5601__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5601__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5601__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5601__count)));
                            vlSelf->__Vfunc_leading_zero32__5601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5601__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5601__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5601__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5601__count)));
                            vlSelf->__Vfunc_leading_zero32__5601__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5601__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5601__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5601__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5601__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5601__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5601__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5601__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5601__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5607__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5607__part 
                            = vlSelf->__Vfunc_leading_zero32__5607__value;
                        vlSelf->__Vfunc_leading_zero32__5607__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5607__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5607__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5607__count)));
                            vlSelf->__Vfunc_leading_zero32__5607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5607__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5607__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5607__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5607__count)));
                            vlSelf->__Vfunc_leading_zero32__5607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5607__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5607__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5607__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5607__count)));
                            vlSelf->__Vfunc_leading_zero32__5607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5607__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5607__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5607__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5607__count)));
                            vlSelf->__Vfunc_leading_zero32__5607__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5607__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5607__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5607__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5607__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5607__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5607__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5607__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5607__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5613__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5613__part 
                            = vlSelf->__Vfunc_leading_zero32__5613__value;
                        vlSelf->__Vfunc_leading_zero32__5613__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5613__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5613__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5613__count)));
                            vlSelf->__Vfunc_leading_zero32__5613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5613__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5613__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5613__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5613__count)));
                            vlSelf->__Vfunc_leading_zero32__5613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5613__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5613__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5613__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5613__count)));
                            vlSelf->__Vfunc_leading_zero32__5613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5613__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5613__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5613__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5613__count)));
                            vlSelf->__Vfunc_leading_zero32__5613__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5613__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5613__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5613__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5613__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5613__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5613__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5613__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5613__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5619__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5619__part 
                            = vlSelf->__Vfunc_leading_zero32__5619__value;
                        vlSelf->__Vfunc_leading_zero32__5619__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5619__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5619__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5619__count)));
                            vlSelf->__Vfunc_leading_zero32__5619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5619__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5619__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5619__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5619__count)));
                            vlSelf->__Vfunc_leading_zero32__5619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5619__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5619__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5619__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5619__count)));
                            vlSelf->__Vfunc_leading_zero32__5619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5619__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5619__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5619__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5619__count)));
                            vlSelf->__Vfunc_leading_zero32__5619__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5619__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5619__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5619__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5619__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5619__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5619__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5619__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5619__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5625__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5625__part 
                            = vlSelf->__Vfunc_leading_zero32__5625__value;
                        vlSelf->__Vfunc_leading_zero32__5625__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5625__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5625__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5625__count)));
                            vlSelf->__Vfunc_leading_zero32__5625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5625__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5625__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5625__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5625__count)));
                            vlSelf->__Vfunc_leading_zero32__5625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5625__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5625__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5625__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5625__count)));
                            vlSelf->__Vfunc_leading_zero32__5625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5625__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5625__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5625__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5625__count)));
                            vlSelf->__Vfunc_leading_zero32__5625__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5625__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5625__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5625__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5625__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5625__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5625__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5625__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5625__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5631__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5631__part 
                            = vlSelf->__Vfunc_leading_zero32__5631__value;
                        vlSelf->__Vfunc_leading_zero32__5631__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5631__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5631__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5631__count)));
                            vlSelf->__Vfunc_leading_zero32__5631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5631__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5631__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5631__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5631__count)));
                            vlSelf->__Vfunc_leading_zero32__5631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5631__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5631__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5631__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5631__count)));
                            vlSelf->__Vfunc_leading_zero32__5631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5631__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5631__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5631__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5631__count)));
                            vlSelf->__Vfunc_leading_zero32__5631__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5631__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5631__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5631__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5631__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5631__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5631__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5631__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5631__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5637__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5637__part 
                            = vlSelf->__Vfunc_leading_zero32__5637__value;
                        vlSelf->__Vfunc_leading_zero32__5637__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5637__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5637__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5637__count)));
                            vlSelf->__Vfunc_leading_zero32__5637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5637__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5637__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5637__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5637__count)));
                            vlSelf->__Vfunc_leading_zero32__5637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5637__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5637__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5637__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5637__count)));
                            vlSelf->__Vfunc_leading_zero32__5637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5637__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5637__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5637__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5637__count)));
                            vlSelf->__Vfunc_leading_zero32__5637__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5637__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5637__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5637__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5637__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5637__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5637__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5637__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5637__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5643__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5643__part 
                            = vlSelf->__Vfunc_leading_zero32__5643__value;
                        vlSelf->__Vfunc_leading_zero32__5643__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5643__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5643__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5643__count)));
                            vlSelf->__Vfunc_leading_zero32__5643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5643__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5643__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5643__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5643__count)));
                            vlSelf->__Vfunc_leading_zero32__5643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5643__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5643__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5643__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5643__count)));
                            vlSelf->__Vfunc_leading_zero32__5643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5643__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5643__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5643__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5643__count)));
                            vlSelf->__Vfunc_leading_zero32__5643__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5643__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5643__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5643__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5643__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5643__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5643__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5643__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5643__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5649__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5649__part 
                            = vlSelf->__Vfunc_leading_zero32__5649__value;
                        vlSelf->__Vfunc_leading_zero32__5649__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5649__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5649__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5649__count)));
                            vlSelf->__Vfunc_leading_zero32__5649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5649__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5649__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5649__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5649__count)));
                            vlSelf->__Vfunc_leading_zero32__5649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5649__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5649__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5649__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5649__count)));
                            vlSelf->__Vfunc_leading_zero32__5649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5649__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5649__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5649__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5649__count)));
                            vlSelf->__Vfunc_leading_zero32__5649__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5649__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5649__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5649__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5649__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5649__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5649__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5649__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5649__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5655__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5655__part 
                            = vlSelf->__Vfunc_leading_zero32__5655__value;
                        vlSelf->__Vfunc_leading_zero32__5655__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5655__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5655__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5655__count)));
                            vlSelf->__Vfunc_leading_zero32__5655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5655__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5655__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5655__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5655__count)));
                            vlSelf->__Vfunc_leading_zero32__5655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5655__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5655__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5655__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5655__count)));
                            vlSelf->__Vfunc_leading_zero32__5655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5655__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5655__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5655__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5655__count)));
                            vlSelf->__Vfunc_leading_zero32__5655__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5655__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5655__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5655__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5655__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5655__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5655__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5655__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5655__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5661__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5661__part 
                            = vlSelf->__Vfunc_leading_zero32__5661__value;
                        vlSelf->__Vfunc_leading_zero32__5661__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5661__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5661__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5661__count)));
                            vlSelf->__Vfunc_leading_zero32__5661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5661__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5661__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5661__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5661__count)));
                            vlSelf->__Vfunc_leading_zero32__5661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5661__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5661__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5661__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5661__count)));
                            vlSelf->__Vfunc_leading_zero32__5661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5661__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5661__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5661__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5661__count)));
                            vlSelf->__Vfunc_leading_zero32__5661__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5661__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5661__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5661__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5661__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5661__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5661__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5661__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5661__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5667__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5667__part 
                            = vlSelf->__Vfunc_leading_zero32__5667__value;
                        vlSelf->__Vfunc_leading_zero32__5667__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5667__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5667__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5667__count)));
                            vlSelf->__Vfunc_leading_zero32__5667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5667__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5667__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5667__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5667__count)));
                            vlSelf->__Vfunc_leading_zero32__5667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5667__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5667__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5667__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5667__count)));
                            vlSelf->__Vfunc_leading_zero32__5667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5667__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5667__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5667__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5667__count)));
                            vlSelf->__Vfunc_leading_zero32__5667__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5667__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5667__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5667__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5667__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5667__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5667__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5667__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5667__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5673__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5673__part 
                            = vlSelf->__Vfunc_leading_zero32__5673__value;
                        vlSelf->__Vfunc_leading_zero32__5673__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5673__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5673__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5673__count)));
                            vlSelf->__Vfunc_leading_zero32__5673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5673__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5673__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5673__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5673__count)));
                            vlSelf->__Vfunc_leading_zero32__5673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5673__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5673__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5673__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5673__count)));
                            vlSelf->__Vfunc_leading_zero32__5673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5673__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5673__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5673__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5673__count)));
                            vlSelf->__Vfunc_leading_zero32__5673__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5673__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5673__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5673__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5673__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5673__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5673__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5673__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5673__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5679__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5679__part 
                            = vlSelf->__Vfunc_leading_zero32__5679__value;
                        vlSelf->__Vfunc_leading_zero32__5679__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5679__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5679__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5679__count)));
                            vlSelf->__Vfunc_leading_zero32__5679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5679__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5679__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5679__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5679__count)));
                            vlSelf->__Vfunc_leading_zero32__5679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5679__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5679__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5679__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5679__count)));
                            vlSelf->__Vfunc_leading_zero32__5679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5679__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5679__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5679__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5679__count)));
                            vlSelf->__Vfunc_leading_zero32__5679__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5679__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5679__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5679__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5679__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5679__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5679__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5679__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5679__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5685__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5685__part 
                            = vlSelf->__Vfunc_leading_zero32__5685__value;
                        vlSelf->__Vfunc_leading_zero32__5685__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5685__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5685__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5685__count)));
                            vlSelf->__Vfunc_leading_zero32__5685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5685__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5685__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5685__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5685__count)));
                            vlSelf->__Vfunc_leading_zero32__5685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5685__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5685__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5685__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5685__count)));
                            vlSelf->__Vfunc_leading_zero32__5685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5685__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5685__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5685__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5685__count)));
                            vlSelf->__Vfunc_leading_zero32__5685__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5685__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5685__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5685__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5685__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5685__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5685__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5685__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5685__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5691__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5691__part 
                            = vlSelf->__Vfunc_leading_zero32__5691__value;
                        vlSelf->__Vfunc_leading_zero32__5691__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5691__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5691__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5691__count)));
                            vlSelf->__Vfunc_leading_zero32__5691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5691__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5691__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5691__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5691__count)));
                            vlSelf->__Vfunc_leading_zero32__5691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5691__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5691__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5691__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5691__count)));
                            vlSelf->__Vfunc_leading_zero32__5691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5691__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5691__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5691__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5691__count)));
                            vlSelf->__Vfunc_leading_zero32__5691__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5691__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5691__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5691__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5691__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5691__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5691__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5691__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5691__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5697__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5697__part 
                            = vlSelf->__Vfunc_leading_zero32__5697__value;
                        vlSelf->__Vfunc_leading_zero32__5697__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5697__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5697__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5697__count)));
                            vlSelf->__Vfunc_leading_zero32__5697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5697__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5697__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5697__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5697__count)));
                            vlSelf->__Vfunc_leading_zero32__5697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5697__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5697__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5697__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5697__count)));
                            vlSelf->__Vfunc_leading_zero32__5697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5697__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5697__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5697__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5697__count)));
                            vlSelf->__Vfunc_leading_zero32__5697__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5697__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5697__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5697__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5697__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5697__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5697__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5697__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5697__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5703__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5703__part 
                            = vlSelf->__Vfunc_leading_zero32__5703__value;
                        vlSelf->__Vfunc_leading_zero32__5703__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5703__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5703__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5703__count)));
                            vlSelf->__Vfunc_leading_zero32__5703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5703__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5703__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5703__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5703__count)));
                            vlSelf->__Vfunc_leading_zero32__5703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5703__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5703__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5703__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5703__count)));
                            vlSelf->__Vfunc_leading_zero32__5703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5703__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5703__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5703__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5703__count)));
                            vlSelf->__Vfunc_leading_zero32__5703__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5703__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5703__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5703__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5703__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5703__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5703__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5703__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5703__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5709__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5709__part 
                            = vlSelf->__Vfunc_leading_zero32__5709__value;
                        vlSelf->__Vfunc_leading_zero32__5709__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5709__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5709__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5709__count)));
                            vlSelf->__Vfunc_leading_zero32__5709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5709__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5709__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5709__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5709__count)));
                            vlSelf->__Vfunc_leading_zero32__5709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5709__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5709__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5709__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5709__count)));
                            vlSelf->__Vfunc_leading_zero32__5709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5709__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5709__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5709__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5709__count)));
                            vlSelf->__Vfunc_leading_zero32__5709__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5709__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5709__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5709__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5709__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5709__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5709__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5709__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5709__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5715__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5715__part 
                            = vlSelf->__Vfunc_leading_zero32__5715__value;
                        vlSelf->__Vfunc_leading_zero32__5715__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5715__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5715__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5715__count)));
                            vlSelf->__Vfunc_leading_zero32__5715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5715__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5715__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5715__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5715__count)));
                            vlSelf->__Vfunc_leading_zero32__5715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5715__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5715__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5715__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5715__count)));
                            vlSelf->__Vfunc_leading_zero32__5715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5715__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5715__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5715__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5715__count)));
                            vlSelf->__Vfunc_leading_zero32__5715__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5715__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5715__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5715__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5715__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5715__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5715__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5715__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5715__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5721__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5721__part 
                            = vlSelf->__Vfunc_leading_zero32__5721__value;
                        vlSelf->__Vfunc_leading_zero32__5721__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5721__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5721__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5721__count)));
                            vlSelf->__Vfunc_leading_zero32__5721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5721__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5721__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5721__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5721__count)));
                            vlSelf->__Vfunc_leading_zero32__5721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5721__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5721__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5721__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5721__count)));
                            vlSelf->__Vfunc_leading_zero32__5721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5721__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5721__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5721__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5721__count)));
                            vlSelf->__Vfunc_leading_zero32__5721__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5721__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5721__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5721__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5721__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5721__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5721__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5721__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5721__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5727__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5727__part 
                            = vlSelf->__Vfunc_leading_zero32__5727__value;
                        vlSelf->__Vfunc_leading_zero32__5727__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5727__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5727__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5727__count)));
                            vlSelf->__Vfunc_leading_zero32__5727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5727__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5727__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5727__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5727__count)));
                            vlSelf->__Vfunc_leading_zero32__5727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5727__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5727__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5727__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5727__count)));
                            vlSelf->__Vfunc_leading_zero32__5727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5727__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5727__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5727__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5727__count)));
                            vlSelf->__Vfunc_leading_zero32__5727__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5727__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5727__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5727__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5727__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5727__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5727__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5727__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5727__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5733__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5733__part 
                            = vlSelf->__Vfunc_leading_zero32__5733__value;
                        vlSelf->__Vfunc_leading_zero32__5733__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5733__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5733__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5733__count)));
                            vlSelf->__Vfunc_leading_zero32__5733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5733__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5733__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5733__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5733__count)));
                            vlSelf->__Vfunc_leading_zero32__5733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5733__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5733__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5733__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5733__count)));
                            vlSelf->__Vfunc_leading_zero32__5733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5733__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5733__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5733__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5733__count)));
                            vlSelf->__Vfunc_leading_zero32__5733__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5733__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5733__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5733__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5733__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5733__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5733__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5733__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5733__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5739__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5739__part 
                            = vlSelf->__Vfunc_leading_zero32__5739__value;
                        vlSelf->__Vfunc_leading_zero32__5739__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5739__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5739__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5739__count)));
                            vlSelf->__Vfunc_leading_zero32__5739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5739__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5739__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5739__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5739__count)));
                            vlSelf->__Vfunc_leading_zero32__5739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5739__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5739__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5739__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5739__count)));
                            vlSelf->__Vfunc_leading_zero32__5739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5739__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5739__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5739__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5739__count)));
                            vlSelf->__Vfunc_leading_zero32__5739__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5739__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5739__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5739__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5739__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5739__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5739__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5739__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5739__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5745__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5745__part 
                            = vlSelf->__Vfunc_leading_zero32__5745__value;
                        vlSelf->__Vfunc_leading_zero32__5745__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5745__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5745__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5745__count)));
                            vlSelf->__Vfunc_leading_zero32__5745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5745__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5745__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5745__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5745__count)));
                            vlSelf->__Vfunc_leading_zero32__5745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5745__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5745__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5745__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5745__count)));
                            vlSelf->__Vfunc_leading_zero32__5745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5745__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5745__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5745__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5745__count)));
                            vlSelf->__Vfunc_leading_zero32__5745__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5745__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5745__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5745__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5745__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5745__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5745__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5745__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5745__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5751__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5751__part 
                            = vlSelf->__Vfunc_leading_zero32__5751__value;
                        vlSelf->__Vfunc_leading_zero32__5751__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5751__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5751__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5751__count)));
                            vlSelf->__Vfunc_leading_zero32__5751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5751__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5751__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5751__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5751__count)));
                            vlSelf->__Vfunc_leading_zero32__5751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5751__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5751__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5751__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5751__count)));
                            vlSelf->__Vfunc_leading_zero32__5751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5751__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5751__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5751__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5751__count)));
                            vlSelf->__Vfunc_leading_zero32__5751__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5751__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5751__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5751__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5751__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5751__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5751__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5751__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5751__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5757__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5757__part 
                            = vlSelf->__Vfunc_leading_zero32__5757__value;
                        vlSelf->__Vfunc_leading_zero32__5757__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5757__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5757__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5757__count)));
                            vlSelf->__Vfunc_leading_zero32__5757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5757__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5757__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5757__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5757__count)));
                            vlSelf->__Vfunc_leading_zero32__5757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5757__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5757__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5757__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5757__count)));
                            vlSelf->__Vfunc_leading_zero32__5757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5757__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5757__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5757__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5757__count)));
                            vlSelf->__Vfunc_leading_zero32__5757__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5757__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5757__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5757__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5757__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5757__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5757__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5757__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5757__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5763__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5763__part 
                            = vlSelf->__Vfunc_leading_zero32__5763__value;
                        vlSelf->__Vfunc_leading_zero32__5763__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5763__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5763__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5763__count)));
                            vlSelf->__Vfunc_leading_zero32__5763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5763__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5763__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5763__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5763__count)));
                            vlSelf->__Vfunc_leading_zero32__5763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5763__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5763__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5763__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5763__count)));
                            vlSelf->__Vfunc_leading_zero32__5763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5763__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5763__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5763__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5763__count)));
                            vlSelf->__Vfunc_leading_zero32__5763__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5763__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5763__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5763__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5763__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5763__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5763__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5763__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5763__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5769__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5769__part 
                            = vlSelf->__Vfunc_leading_zero32__5769__value;
                        vlSelf->__Vfunc_leading_zero32__5769__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5769__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5769__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5769__count)));
                            vlSelf->__Vfunc_leading_zero32__5769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5769__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5769__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5769__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5769__count)));
                            vlSelf->__Vfunc_leading_zero32__5769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5769__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5769__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5769__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5769__count)));
                            vlSelf->__Vfunc_leading_zero32__5769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5769__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5769__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5769__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5769__count)));
                            vlSelf->__Vfunc_leading_zero32__5769__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5769__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5769__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5769__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5769__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5769__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5769__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5769__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5769__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5775__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5775__part 
                            = vlSelf->__Vfunc_leading_zero32__5775__value;
                        vlSelf->__Vfunc_leading_zero32__5775__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5775__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5775__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5775__count)));
                            vlSelf->__Vfunc_leading_zero32__5775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5775__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5775__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5775__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5775__count)));
                            vlSelf->__Vfunc_leading_zero32__5775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5775__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5775__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5775__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5775__count)));
                            vlSelf->__Vfunc_leading_zero32__5775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5775__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5775__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5775__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5775__count)));
                            vlSelf->__Vfunc_leading_zero32__5775__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5775__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5775__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5775__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5775__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5775__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5775__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5775__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5775__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5781__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5781__part 
                            = vlSelf->__Vfunc_leading_zero32__5781__value;
                        vlSelf->__Vfunc_leading_zero32__5781__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5781__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5781__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5781__count)));
                            vlSelf->__Vfunc_leading_zero32__5781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5781__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5781__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5781__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5781__count)));
                            vlSelf->__Vfunc_leading_zero32__5781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5781__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5781__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5781__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5781__count)));
                            vlSelf->__Vfunc_leading_zero32__5781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5781__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5781__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5781__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5781__count)));
                            vlSelf->__Vfunc_leading_zero32__5781__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5781__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5781__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5781__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5781__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5781__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5781__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5781__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5781__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5787__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5787__part 
                            = vlSelf->__Vfunc_leading_zero32__5787__value;
                        vlSelf->__Vfunc_leading_zero32__5787__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5787__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5787__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5787__count)));
                            vlSelf->__Vfunc_leading_zero32__5787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5787__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5787__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5787__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5787__count)));
                            vlSelf->__Vfunc_leading_zero32__5787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5787__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5787__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5787__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5787__count)));
                            vlSelf->__Vfunc_leading_zero32__5787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5787__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5787__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5787__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5787__count)));
                            vlSelf->__Vfunc_leading_zero32__5787__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5787__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5787__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5787__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5787__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5787__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5787__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5787__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5787__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5793__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5793__part 
                            = vlSelf->__Vfunc_leading_zero32__5793__value;
                        vlSelf->__Vfunc_leading_zero32__5793__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5793__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5793__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5793__count)));
                            vlSelf->__Vfunc_leading_zero32__5793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5793__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5793__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5793__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5793__count)));
                            vlSelf->__Vfunc_leading_zero32__5793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5793__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5793__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5793__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5793__count)));
                            vlSelf->__Vfunc_leading_zero32__5793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5793__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5793__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5793__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5793__count)));
                            vlSelf->__Vfunc_leading_zero32__5793__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5793__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5793__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5793__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5793__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5793__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5793__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5793__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5793__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5799__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5799__part 
                            = vlSelf->__Vfunc_leading_zero32__5799__value;
                        vlSelf->__Vfunc_leading_zero32__5799__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5799__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5799__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5799__count)));
                            vlSelf->__Vfunc_leading_zero32__5799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5799__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5799__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5799__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5799__count)));
                            vlSelf->__Vfunc_leading_zero32__5799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5799__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5799__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5799__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5799__count)));
                            vlSelf->__Vfunc_leading_zero32__5799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5799__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5799__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5799__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5799__count)));
                            vlSelf->__Vfunc_leading_zero32__5799__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5799__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5799__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5799__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5799__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5799__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5799__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5799__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5799__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5805__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5805__part 
                            = vlSelf->__Vfunc_leading_zero32__5805__value;
                        vlSelf->__Vfunc_leading_zero32__5805__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5805__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5805__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5805__count)));
                            vlSelf->__Vfunc_leading_zero32__5805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5805__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5805__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5805__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5805__count)));
                            vlSelf->__Vfunc_leading_zero32__5805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5805__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5805__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5805__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5805__count)));
                            vlSelf->__Vfunc_leading_zero32__5805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5805__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5805__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5805__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5805__count)));
                            vlSelf->__Vfunc_leading_zero32__5805__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5805__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5805__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5805__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5805__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5805__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5805__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5805__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5805__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5811__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5811__part 
                            = vlSelf->__Vfunc_leading_zero32__5811__value;
                        vlSelf->__Vfunc_leading_zero32__5811__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5811__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5811__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5811__count)));
                            vlSelf->__Vfunc_leading_zero32__5811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5811__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5811__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5811__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5811__count)));
                            vlSelf->__Vfunc_leading_zero32__5811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5811__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5811__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5811__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5811__count)));
                            vlSelf->__Vfunc_leading_zero32__5811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5811__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5811__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5811__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5811__count)));
                            vlSelf->__Vfunc_leading_zero32__5811__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5811__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5811__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5811__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5811__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5811__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5811__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5811__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5811__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5817__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5817__part 
                            = vlSelf->__Vfunc_leading_zero32__5817__value;
                        vlSelf->__Vfunc_leading_zero32__5817__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5817__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5817__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5817__count)));
                            vlSelf->__Vfunc_leading_zero32__5817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5817__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5817__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5817__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5817__count)));
                            vlSelf->__Vfunc_leading_zero32__5817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5817__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5817__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5817__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5817__count)));
                            vlSelf->__Vfunc_leading_zero32__5817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5817__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5817__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5817__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5817__count)));
                            vlSelf->__Vfunc_leading_zero32__5817__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5817__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5817__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5817__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5817__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5817__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5817__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5817__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5817__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5823__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5823__part 
                            = vlSelf->__Vfunc_leading_zero32__5823__value;
                        vlSelf->__Vfunc_leading_zero32__5823__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5823__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5823__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5823__count)));
                            vlSelf->__Vfunc_leading_zero32__5823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5823__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5823__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5823__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5823__count)));
                            vlSelf->__Vfunc_leading_zero32__5823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5823__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5823__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5823__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5823__count)));
                            vlSelf->__Vfunc_leading_zero32__5823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5823__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5823__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5823__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5823__count)));
                            vlSelf->__Vfunc_leading_zero32__5823__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5823__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5823__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5823__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5823__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5823__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5823__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5823__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5823__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5829__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5829__part 
                            = vlSelf->__Vfunc_leading_zero32__5829__value;
                        vlSelf->__Vfunc_leading_zero32__5829__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5829__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5829__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5829__count)));
                            vlSelf->__Vfunc_leading_zero32__5829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5829__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5829__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5829__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5829__count)));
                            vlSelf->__Vfunc_leading_zero32__5829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5829__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5829__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5829__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5829__count)));
                            vlSelf->__Vfunc_leading_zero32__5829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5829__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5829__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5829__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5829__count)));
                            vlSelf->__Vfunc_leading_zero32__5829__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5829__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5829__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5829__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5829__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5829__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5829__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5829__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5829__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5835__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5835__part 
                            = vlSelf->__Vfunc_leading_zero32__5835__value;
                        vlSelf->__Vfunc_leading_zero32__5835__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5835__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5835__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5835__count)));
                            vlSelf->__Vfunc_leading_zero32__5835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5835__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5835__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5835__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5835__count)));
                            vlSelf->__Vfunc_leading_zero32__5835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5835__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5835__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5835__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5835__count)));
                            vlSelf->__Vfunc_leading_zero32__5835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5835__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5835__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5835__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5835__count)));
                            vlSelf->__Vfunc_leading_zero32__5835__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5835__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5835__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5835__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5835__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5835__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5835__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5835__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5835__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5841__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5841__part 
                            = vlSelf->__Vfunc_leading_zero32__5841__value;
                        vlSelf->__Vfunc_leading_zero32__5841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5841__count)));
                            vlSelf->__Vfunc_leading_zero32__5841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5841__count)));
                            vlSelf->__Vfunc_leading_zero32__5841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5841__count)));
                            vlSelf->__Vfunc_leading_zero32__5841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5841__count)));
                            vlSelf->__Vfunc_leading_zero32__5841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5841__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5847__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5847__part 
                            = vlSelf->__Vfunc_leading_zero32__5847__value;
                        vlSelf->__Vfunc_leading_zero32__5847__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5847__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5847__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5847__count)));
                            vlSelf->__Vfunc_leading_zero32__5847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5847__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5847__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5847__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5847__count)));
                            vlSelf->__Vfunc_leading_zero32__5847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5847__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5847__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5847__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5847__count)));
                            vlSelf->__Vfunc_leading_zero32__5847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5847__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5847__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5847__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5847__count)));
                            vlSelf->__Vfunc_leading_zero32__5847__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5847__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5847__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5847__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5847__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5847__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5847__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5847__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5847__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5853__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5853__part 
                            = vlSelf->__Vfunc_leading_zero32__5853__value;
                        vlSelf->__Vfunc_leading_zero32__5853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5853__count)));
                            vlSelf->__Vfunc_leading_zero32__5853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5853__count)));
                            vlSelf->__Vfunc_leading_zero32__5853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5853__count)));
                            vlSelf->__Vfunc_leading_zero32__5853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5853__count)));
                            vlSelf->__Vfunc_leading_zero32__5853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5853__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5859__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5859__part 
                            = vlSelf->__Vfunc_leading_zero32__5859__value;
                        vlSelf->__Vfunc_leading_zero32__5859__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5859__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5859__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5859__count)));
                            vlSelf->__Vfunc_leading_zero32__5859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5859__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5859__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5859__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5859__count)));
                            vlSelf->__Vfunc_leading_zero32__5859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5859__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5859__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5859__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5859__count)));
                            vlSelf->__Vfunc_leading_zero32__5859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5859__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5859__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5859__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5859__count)));
                            vlSelf->__Vfunc_leading_zero32__5859__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5859__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5859__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5859__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5859__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5859__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5859__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5859__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5859__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5865__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5865__part 
                            = vlSelf->__Vfunc_leading_zero32__5865__value;
                        vlSelf->__Vfunc_leading_zero32__5865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5865__count)));
                            vlSelf->__Vfunc_leading_zero32__5865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5865__count)));
                            vlSelf->__Vfunc_leading_zero32__5865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5865__count)));
                            vlSelf->__Vfunc_leading_zero32__5865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5865__count)));
                            vlSelf->__Vfunc_leading_zero32__5865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5865__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5871__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5871__part 
                            = vlSelf->__Vfunc_leading_zero32__5871__value;
                        vlSelf->__Vfunc_leading_zero32__5871__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5871__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5871__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5871__count)));
                            vlSelf->__Vfunc_leading_zero32__5871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5871__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5871__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5871__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5871__count)));
                            vlSelf->__Vfunc_leading_zero32__5871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5871__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5871__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5871__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5871__count)));
                            vlSelf->__Vfunc_leading_zero32__5871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5871__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5871__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5871__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5871__count)));
                            vlSelf->__Vfunc_leading_zero32__5871__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5871__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5871__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5871__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5871__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5871__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5871__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5871__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5871__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5877__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5877__part 
                            = vlSelf->__Vfunc_leading_zero32__5877__value;
                        vlSelf->__Vfunc_leading_zero32__5877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5877__count)));
                            vlSelf->__Vfunc_leading_zero32__5877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5877__count)));
                            vlSelf->__Vfunc_leading_zero32__5877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5877__count)));
                            vlSelf->__Vfunc_leading_zero32__5877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5877__count)));
                            vlSelf->__Vfunc_leading_zero32__5877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5877__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5883__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5883__part 
                            = vlSelf->__Vfunc_leading_zero32__5883__value;
                        vlSelf->__Vfunc_leading_zero32__5883__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5883__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5883__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5883__count)));
                            vlSelf->__Vfunc_leading_zero32__5883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5883__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5883__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5883__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5883__count)));
                            vlSelf->__Vfunc_leading_zero32__5883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5883__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5883__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5883__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5883__count)));
                            vlSelf->__Vfunc_leading_zero32__5883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5883__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5883__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5883__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5883__count)));
                            vlSelf->__Vfunc_leading_zero32__5883__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5883__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5883__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5883__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5883__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5883__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5883__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5883__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5883__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5889__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5889__part 
                            = vlSelf->__Vfunc_leading_zero32__5889__value;
                        vlSelf->__Vfunc_leading_zero32__5889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5889__count)));
                            vlSelf->__Vfunc_leading_zero32__5889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5889__count)));
                            vlSelf->__Vfunc_leading_zero32__5889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5889__count)));
                            vlSelf->__Vfunc_leading_zero32__5889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5889__count)));
                            vlSelf->__Vfunc_leading_zero32__5889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5889__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5895__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5895__part 
                            = vlSelf->__Vfunc_leading_zero32__5895__value;
                        vlSelf->__Vfunc_leading_zero32__5895__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5895__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5895__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5895__count)));
                            vlSelf->__Vfunc_leading_zero32__5895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5895__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5895__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5895__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5895__count)));
                            vlSelf->__Vfunc_leading_zero32__5895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5895__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5895__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5895__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5895__count)));
                            vlSelf->__Vfunc_leading_zero32__5895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5895__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5895__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5895__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5895__count)));
                            vlSelf->__Vfunc_leading_zero32__5895__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5895__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5895__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5895__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5895__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5895__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5895__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5895__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5895__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5901__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5901__part 
                            = vlSelf->__Vfunc_leading_zero32__5901__value;
                        vlSelf->__Vfunc_leading_zero32__5901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5901__count)));
                            vlSelf->__Vfunc_leading_zero32__5901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5901__count)));
                            vlSelf->__Vfunc_leading_zero32__5901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5901__count)));
                            vlSelf->__Vfunc_leading_zero32__5901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5901__count)));
                            vlSelf->__Vfunc_leading_zero32__5901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5901__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5907__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5907__part 
                            = vlSelf->__Vfunc_leading_zero32__5907__value;
                        vlSelf->__Vfunc_leading_zero32__5907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5907__count)));
                            vlSelf->__Vfunc_leading_zero32__5907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5907__count)));
                            vlSelf->__Vfunc_leading_zero32__5907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5907__count)));
                            vlSelf->__Vfunc_leading_zero32__5907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5907__count)));
                            vlSelf->__Vfunc_leading_zero32__5907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5907__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5913__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5913__part 
                            = vlSelf->__Vfunc_leading_zero32__5913__value;
                        vlSelf->__Vfunc_leading_zero32__5913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5913__count)));
                            vlSelf->__Vfunc_leading_zero32__5913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5913__count)));
                            vlSelf->__Vfunc_leading_zero32__5913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5913__count)));
                            vlSelf->__Vfunc_leading_zero32__5913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5913__count)));
                            vlSelf->__Vfunc_leading_zero32__5913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5913__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5919__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5919__part 
                            = vlSelf->__Vfunc_leading_zero32__5919__value;
                        vlSelf->__Vfunc_leading_zero32__5919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5919__count)));
                            vlSelf->__Vfunc_leading_zero32__5919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5919__count)));
                            vlSelf->__Vfunc_leading_zero32__5919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5919__count)));
                            vlSelf->__Vfunc_leading_zero32__5919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5919__count)));
                            vlSelf->__Vfunc_leading_zero32__5919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5919__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5925__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5925__part 
                            = vlSelf->__Vfunc_leading_zero32__5925__value;
                        vlSelf->__Vfunc_leading_zero32__5925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5925__count)));
                            vlSelf->__Vfunc_leading_zero32__5925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5925__count)));
                            vlSelf->__Vfunc_leading_zero32__5925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5925__count)));
                            vlSelf->__Vfunc_leading_zero32__5925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5925__count)));
                            vlSelf->__Vfunc_leading_zero32__5925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5925__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5931__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5931__part 
                            = vlSelf->__Vfunc_leading_zero32__5931__value;
                        vlSelf->__Vfunc_leading_zero32__5931__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5931__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5931__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5931__count)));
                            vlSelf->__Vfunc_leading_zero32__5931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5931__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5931__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5931__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5931__count)));
                            vlSelf->__Vfunc_leading_zero32__5931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5931__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5931__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5931__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5931__count)));
                            vlSelf->__Vfunc_leading_zero32__5931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5931__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5931__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5931__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5931__count)));
                            vlSelf->__Vfunc_leading_zero32__5931__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5931__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5931__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5931__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5931__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5931__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5931__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5931__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5931__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5937__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5937__part 
                            = vlSelf->__Vfunc_leading_zero32__5937__value;
                        vlSelf->__Vfunc_leading_zero32__5937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5937__count)));
                            vlSelf->__Vfunc_leading_zero32__5937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5937__count)));
                            vlSelf->__Vfunc_leading_zero32__5937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5937__count)));
                            vlSelf->__Vfunc_leading_zero32__5937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5937__count)));
                            vlSelf->__Vfunc_leading_zero32__5937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5937__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5943__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5943__part 
                            = vlSelf->__Vfunc_leading_zero32__5943__value;
                        vlSelf->__Vfunc_leading_zero32__5943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5943__count)));
                            vlSelf->__Vfunc_leading_zero32__5943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5943__count)));
                            vlSelf->__Vfunc_leading_zero32__5943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5943__count)));
                            vlSelf->__Vfunc_leading_zero32__5943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5943__count)));
                            vlSelf->__Vfunc_leading_zero32__5943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5943__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5949__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5949__part 
                            = vlSelf->__Vfunc_leading_zero32__5949__value;
                        vlSelf->__Vfunc_leading_zero32__5949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5949__count)));
                            vlSelf->__Vfunc_leading_zero32__5949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5949__count)));
                            vlSelf->__Vfunc_leading_zero32__5949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5949__count)));
                            vlSelf->__Vfunc_leading_zero32__5949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5949__count)));
                            vlSelf->__Vfunc_leading_zero32__5949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5949__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5955__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5955__part 
                            = vlSelf->__Vfunc_leading_zero32__5955__value;
                        vlSelf->__Vfunc_leading_zero32__5955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5955__count)));
                            vlSelf->__Vfunc_leading_zero32__5955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5955__count)));
                            vlSelf->__Vfunc_leading_zero32__5955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5955__count)));
                            vlSelf->__Vfunc_leading_zero32__5955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5955__count)));
                            vlSelf->__Vfunc_leading_zero32__5955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5955__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5961__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5961__part 
                            = vlSelf->__Vfunc_leading_zero32__5961__value;
                        vlSelf->__Vfunc_leading_zero32__5961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5961__count)));
                            vlSelf->__Vfunc_leading_zero32__5961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5961__count)));
                            vlSelf->__Vfunc_leading_zero32__5961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5961__count)));
                            vlSelf->__Vfunc_leading_zero32__5961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5961__count)));
                            vlSelf->__Vfunc_leading_zero32__5961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5961__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5967__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5967__part 
                            = vlSelf->__Vfunc_leading_zero32__5967__value;
                        vlSelf->__Vfunc_leading_zero32__5967__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5967__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5967__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5967__count)));
                            vlSelf->__Vfunc_leading_zero32__5967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5967__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5967__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5967__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5967__count)));
                            vlSelf->__Vfunc_leading_zero32__5967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5967__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5967__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5967__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5967__count)));
                            vlSelf->__Vfunc_leading_zero32__5967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5967__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5967__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5967__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5967__count)));
                            vlSelf->__Vfunc_leading_zero32__5967__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5967__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5967__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5967__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5967__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5967__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5967__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5967__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5967__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5973__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5973__part 
                            = vlSelf->__Vfunc_leading_zero32__5973__value;
                        vlSelf->__Vfunc_leading_zero32__5973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5973__count)));
                            vlSelf->__Vfunc_leading_zero32__5973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5973__count)));
                            vlSelf->__Vfunc_leading_zero32__5973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5973__count)));
                            vlSelf->__Vfunc_leading_zero32__5973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5973__count)));
                            vlSelf->__Vfunc_leading_zero32__5973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5973__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5979__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5979__part 
                            = vlSelf->__Vfunc_leading_zero32__5979__value;
                        vlSelf->__Vfunc_leading_zero32__5979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5979__count)));
                            vlSelf->__Vfunc_leading_zero32__5979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5979__count)));
                            vlSelf->__Vfunc_leading_zero32__5979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5979__count)));
                            vlSelf->__Vfunc_leading_zero32__5979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5979__count)));
                            vlSelf->__Vfunc_leading_zero32__5979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5979__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5985__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5985__part 
                            = vlSelf->__Vfunc_leading_zero32__5985__value;
                        vlSelf->__Vfunc_leading_zero32__5985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5985__count)));
                            vlSelf->__Vfunc_leading_zero32__5985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5985__count)));
                            vlSelf->__Vfunc_leading_zero32__5985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5985__count)));
                            vlSelf->__Vfunc_leading_zero32__5985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5985__count)));
                            vlSelf->__Vfunc_leading_zero32__5985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5985__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5991__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5991__part 
                            = vlSelf->__Vfunc_leading_zero32__5991__value;
                        vlSelf->__Vfunc_leading_zero32__5991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5991__count)));
                            vlSelf->__Vfunc_leading_zero32__5991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5991__count)));
                            vlSelf->__Vfunc_leading_zero32__5991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5991__count)));
                            vlSelf->__Vfunc_leading_zero32__5991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5991__count)));
                            vlSelf->__Vfunc_leading_zero32__5991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5991__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__5997__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__5997__part 
                            = vlSelf->__Vfunc_leading_zero32__5997__value;
                        vlSelf->__Vfunc_leading_zero32__5997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__5997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5997__count)));
                            vlSelf->__Vfunc_leading_zero32__5997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__5997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5997__count)));
                            vlSelf->__Vfunc_leading_zero32__5997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__5997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5997__count)));
                            vlSelf->__Vfunc_leading_zero32__5997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__5997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__5997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5997__count)));
                            vlSelf->__Vfunc_leading_zero32__5997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__5997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__5997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__5997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__5997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__5997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__5997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__5997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__5997__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6003__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6003__part 
                            = vlSelf->__Vfunc_leading_zero32__6003__value;
                        vlSelf->__Vfunc_leading_zero32__6003__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6003__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6003__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6003__count)));
                            vlSelf->__Vfunc_leading_zero32__6003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6003__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6003__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6003__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6003__count)));
                            vlSelf->__Vfunc_leading_zero32__6003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6003__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6003__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6003__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6003__count)));
                            vlSelf->__Vfunc_leading_zero32__6003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6003__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6003__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6003__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6003__count)));
                            vlSelf->__Vfunc_leading_zero32__6003__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6003__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6003__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6003__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6003__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6003__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6003__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6003__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6003__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6009__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6009__part 
                            = vlSelf->__Vfunc_leading_zero32__6009__value;
                        vlSelf->__Vfunc_leading_zero32__6009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6009__count)));
                            vlSelf->__Vfunc_leading_zero32__6009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6009__count)));
                            vlSelf->__Vfunc_leading_zero32__6009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6009__count)));
                            vlSelf->__Vfunc_leading_zero32__6009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6009__count)));
                            vlSelf->__Vfunc_leading_zero32__6009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6009__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6015__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6015__part 
                            = vlSelf->__Vfunc_leading_zero32__6015__value;
                        vlSelf->__Vfunc_leading_zero32__6015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6015__count)));
                            vlSelf->__Vfunc_leading_zero32__6015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6015__count)));
                            vlSelf->__Vfunc_leading_zero32__6015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6015__count)));
                            vlSelf->__Vfunc_leading_zero32__6015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6015__count)));
                            vlSelf->__Vfunc_leading_zero32__6015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6015__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6021__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6021__part 
                            = vlSelf->__Vfunc_leading_zero32__6021__value;
                        vlSelf->__Vfunc_leading_zero32__6021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6021__count)));
                            vlSelf->__Vfunc_leading_zero32__6021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6021__count)));
                            vlSelf->__Vfunc_leading_zero32__6021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6021__count)));
                            vlSelf->__Vfunc_leading_zero32__6021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6021__count)));
                            vlSelf->__Vfunc_leading_zero32__6021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6021__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6027__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6027__part 
                            = vlSelf->__Vfunc_leading_zero32__6027__value;
                        vlSelf->__Vfunc_leading_zero32__6027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6027__count)));
                            vlSelf->__Vfunc_leading_zero32__6027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6027__count)));
                            vlSelf->__Vfunc_leading_zero32__6027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6027__count)));
                            vlSelf->__Vfunc_leading_zero32__6027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6027__count)));
                            vlSelf->__Vfunc_leading_zero32__6027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6027__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6033__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6033__part 
                            = vlSelf->__Vfunc_leading_zero32__6033__value;
                        vlSelf->__Vfunc_leading_zero32__6033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6033__count)));
                            vlSelf->__Vfunc_leading_zero32__6033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6033__count)));
                            vlSelf->__Vfunc_leading_zero32__6033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6033__count)));
                            vlSelf->__Vfunc_leading_zero32__6033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6033__count)));
                            vlSelf->__Vfunc_leading_zero32__6033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6033__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6039__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6039__part 
                            = vlSelf->__Vfunc_leading_zero32__6039__value;
                        vlSelf->__Vfunc_leading_zero32__6039__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6039__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6039__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6039__count)));
                            vlSelf->__Vfunc_leading_zero32__6039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6039__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6039__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6039__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6039__count)));
                            vlSelf->__Vfunc_leading_zero32__6039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6039__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6039__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6039__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6039__count)));
                            vlSelf->__Vfunc_leading_zero32__6039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6039__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6039__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6039__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6039__count)));
                            vlSelf->__Vfunc_leading_zero32__6039__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6039__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6039__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6039__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6039__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6039__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6039__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6039__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6039__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6045__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6045__part 
                            = vlSelf->__Vfunc_leading_zero32__6045__value;
                        vlSelf->__Vfunc_leading_zero32__6045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6045__count)));
                            vlSelf->__Vfunc_leading_zero32__6045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6045__count)));
                            vlSelf->__Vfunc_leading_zero32__6045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6045__count)));
                            vlSelf->__Vfunc_leading_zero32__6045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6045__count)));
                            vlSelf->__Vfunc_leading_zero32__6045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6045__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6051__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6051__part 
                            = vlSelf->__Vfunc_leading_zero32__6051__value;
                        vlSelf->__Vfunc_leading_zero32__6051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6051__count)));
                            vlSelf->__Vfunc_leading_zero32__6051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6051__count)));
                            vlSelf->__Vfunc_leading_zero32__6051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6051__count)));
                            vlSelf->__Vfunc_leading_zero32__6051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6051__count)));
                            vlSelf->__Vfunc_leading_zero32__6051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6051__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6057__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6057__part 
                            = vlSelf->__Vfunc_leading_zero32__6057__value;
                        vlSelf->__Vfunc_leading_zero32__6057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6057__count)));
                            vlSelf->__Vfunc_leading_zero32__6057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6057__count)));
                            vlSelf->__Vfunc_leading_zero32__6057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6057__count)));
                            vlSelf->__Vfunc_leading_zero32__6057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6057__count)));
                            vlSelf->__Vfunc_leading_zero32__6057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6057__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6063__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6063__part 
                            = vlSelf->__Vfunc_leading_zero32__6063__value;
                        vlSelf->__Vfunc_leading_zero32__6063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6063__count)));
                            vlSelf->__Vfunc_leading_zero32__6063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6063__count)));
                            vlSelf->__Vfunc_leading_zero32__6063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6063__count)));
                            vlSelf->__Vfunc_leading_zero32__6063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6063__count)));
                            vlSelf->__Vfunc_leading_zero32__6063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6063__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6069__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6069__part 
                            = vlSelf->__Vfunc_leading_zero32__6069__value;
                        vlSelf->__Vfunc_leading_zero32__6069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6069__count)));
                            vlSelf->__Vfunc_leading_zero32__6069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6069__count)));
                            vlSelf->__Vfunc_leading_zero32__6069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6069__count)));
                            vlSelf->__Vfunc_leading_zero32__6069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6069__count)));
                            vlSelf->__Vfunc_leading_zero32__6069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6069__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6075__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6075__part 
                            = vlSelf->__Vfunc_leading_zero32__6075__value;
                        vlSelf->__Vfunc_leading_zero32__6075__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6075__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6075__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6075__count)));
                            vlSelf->__Vfunc_leading_zero32__6075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6075__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6075__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6075__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6075__count)));
                            vlSelf->__Vfunc_leading_zero32__6075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6075__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6075__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6075__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6075__count)));
                            vlSelf->__Vfunc_leading_zero32__6075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6075__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6075__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6075__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6075__count)));
                            vlSelf->__Vfunc_leading_zero32__6075__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6075__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6075__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6075__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6075__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6075__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6075__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6075__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6075__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6081__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6081__part 
                            = vlSelf->__Vfunc_leading_zero32__6081__value;
                        vlSelf->__Vfunc_leading_zero32__6081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6081__count)));
                            vlSelf->__Vfunc_leading_zero32__6081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6081__count)));
                            vlSelf->__Vfunc_leading_zero32__6081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6081__count)));
                            vlSelf->__Vfunc_leading_zero32__6081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6081__count)));
                            vlSelf->__Vfunc_leading_zero32__6081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6081__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6087__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6087__part 
                            = vlSelf->__Vfunc_leading_zero32__6087__value;
                        vlSelf->__Vfunc_leading_zero32__6087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6087__count)));
                            vlSelf->__Vfunc_leading_zero32__6087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6087__count)));
                            vlSelf->__Vfunc_leading_zero32__6087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6087__count)));
                            vlSelf->__Vfunc_leading_zero32__6087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6087__count)));
                            vlSelf->__Vfunc_leading_zero32__6087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6087__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6093__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6093__part 
                            = vlSelf->__Vfunc_leading_zero32__6093__value;
                        vlSelf->__Vfunc_leading_zero32__6093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6093__count)));
                            vlSelf->__Vfunc_leading_zero32__6093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6093__count)));
                            vlSelf->__Vfunc_leading_zero32__6093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6093__count)));
                            vlSelf->__Vfunc_leading_zero32__6093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6093__count)));
                            vlSelf->__Vfunc_leading_zero32__6093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6093__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6099__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6099__part 
                            = vlSelf->__Vfunc_leading_zero32__6099__value;
                        vlSelf->__Vfunc_leading_zero32__6099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6099__count)));
                            vlSelf->__Vfunc_leading_zero32__6099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6099__count)));
                            vlSelf->__Vfunc_leading_zero32__6099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6099__count)));
                            vlSelf->__Vfunc_leading_zero32__6099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6099__count)));
                            vlSelf->__Vfunc_leading_zero32__6099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6099__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6105__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6105__part 
                            = vlSelf->__Vfunc_leading_zero32__6105__value;
                        vlSelf->__Vfunc_leading_zero32__6105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6105__count)));
                            vlSelf->__Vfunc_leading_zero32__6105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6105__count)));
                            vlSelf->__Vfunc_leading_zero32__6105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6105__count)));
                            vlSelf->__Vfunc_leading_zero32__6105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6105__count)));
                            vlSelf->__Vfunc_leading_zero32__6105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6105__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6111__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6111__part 
                            = vlSelf->__Vfunc_leading_zero32__6111__value;
                        vlSelf->__Vfunc_leading_zero32__6111__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6111__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6111__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6111__count)));
                            vlSelf->__Vfunc_leading_zero32__6111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6111__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6111__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6111__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6111__count)));
                            vlSelf->__Vfunc_leading_zero32__6111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6111__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6111__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6111__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6111__count)));
                            vlSelf->__Vfunc_leading_zero32__6111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6111__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6111__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6111__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6111__count)));
                            vlSelf->__Vfunc_leading_zero32__6111__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6111__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6111__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6111__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6111__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6111__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6111__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6111__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6111__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6117__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6117__part 
                            = vlSelf->__Vfunc_leading_zero32__6117__value;
                        vlSelf->__Vfunc_leading_zero32__6117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6117__count)));
                            vlSelf->__Vfunc_leading_zero32__6117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6117__count)));
                            vlSelf->__Vfunc_leading_zero32__6117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6117__count)));
                            vlSelf->__Vfunc_leading_zero32__6117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6117__count)));
                            vlSelf->__Vfunc_leading_zero32__6117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6117__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6123__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6123__part 
                            = vlSelf->__Vfunc_leading_zero32__6123__value;
                        vlSelf->__Vfunc_leading_zero32__6123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6123__count)));
                            vlSelf->__Vfunc_leading_zero32__6123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6123__count)));
                            vlSelf->__Vfunc_leading_zero32__6123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6123__count)));
                            vlSelf->__Vfunc_leading_zero32__6123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6123__count)));
                            vlSelf->__Vfunc_leading_zero32__6123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6123__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6129__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6129__part 
                            = vlSelf->__Vfunc_leading_zero32__6129__value;
                        vlSelf->__Vfunc_leading_zero32__6129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6129__count)));
                            vlSelf->__Vfunc_leading_zero32__6129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6129__count)));
                            vlSelf->__Vfunc_leading_zero32__6129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6129__count)));
                            vlSelf->__Vfunc_leading_zero32__6129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6129__count)));
                            vlSelf->__Vfunc_leading_zero32__6129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6129__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6135__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6135__part 
                            = vlSelf->__Vfunc_leading_zero32__6135__value;
                        vlSelf->__Vfunc_leading_zero32__6135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6135__count)));
                            vlSelf->__Vfunc_leading_zero32__6135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6135__count)));
                            vlSelf->__Vfunc_leading_zero32__6135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6135__count)));
                            vlSelf->__Vfunc_leading_zero32__6135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6135__count)));
                            vlSelf->__Vfunc_leading_zero32__6135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6135__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6141__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6141__part 
                            = vlSelf->__Vfunc_leading_zero32__6141__value;
                        vlSelf->__Vfunc_leading_zero32__6141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6141__count)));
                            vlSelf->__Vfunc_leading_zero32__6141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6141__count)));
                            vlSelf->__Vfunc_leading_zero32__6141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6141__count)));
                            vlSelf->__Vfunc_leading_zero32__6141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6141__count)));
                            vlSelf->__Vfunc_leading_zero32__6141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6141__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6147__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6147__part 
                            = vlSelf->__Vfunc_leading_zero32__6147__value;
                        vlSelf->__Vfunc_leading_zero32__6147__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6147__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6147__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6147__count)));
                            vlSelf->__Vfunc_leading_zero32__6147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6147__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6147__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6147__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6147__count)));
                            vlSelf->__Vfunc_leading_zero32__6147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6147__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6147__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6147__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6147__count)));
                            vlSelf->__Vfunc_leading_zero32__6147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6147__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6147__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6147__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6147__count)));
                            vlSelf->__Vfunc_leading_zero32__6147__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6147__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6147__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6147__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6147__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6147__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6147__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6147__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6147__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6153__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6153__part 
                            = vlSelf->__Vfunc_leading_zero32__6153__value;
                        vlSelf->__Vfunc_leading_zero32__6153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6153__count)));
                            vlSelf->__Vfunc_leading_zero32__6153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6153__count)));
                            vlSelf->__Vfunc_leading_zero32__6153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6153__count)));
                            vlSelf->__Vfunc_leading_zero32__6153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6153__count)));
                            vlSelf->__Vfunc_leading_zero32__6153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6153__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6159__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6159__part 
                            = vlSelf->__Vfunc_leading_zero32__6159__value;
                        vlSelf->__Vfunc_leading_zero32__6159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6159__count)));
                            vlSelf->__Vfunc_leading_zero32__6159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6159__count)));
                            vlSelf->__Vfunc_leading_zero32__6159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6159__count)));
                            vlSelf->__Vfunc_leading_zero32__6159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6159__count)));
                            vlSelf->__Vfunc_leading_zero32__6159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6159__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6165__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6165__part 
                            = vlSelf->__Vfunc_leading_zero32__6165__value;
                        vlSelf->__Vfunc_leading_zero32__6165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6165__count)));
                            vlSelf->__Vfunc_leading_zero32__6165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6165__count)));
                            vlSelf->__Vfunc_leading_zero32__6165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6165__count)));
                            vlSelf->__Vfunc_leading_zero32__6165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6165__count)));
                            vlSelf->__Vfunc_leading_zero32__6165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6165__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6171__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6171__part 
                            = vlSelf->__Vfunc_leading_zero32__6171__value;
                        vlSelf->__Vfunc_leading_zero32__6171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6171__count)));
                            vlSelf->__Vfunc_leading_zero32__6171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6171__count)));
                            vlSelf->__Vfunc_leading_zero32__6171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6171__count)));
                            vlSelf->__Vfunc_leading_zero32__6171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6171__count)));
                            vlSelf->__Vfunc_leading_zero32__6171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6171__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6177__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6177__part 
                            = vlSelf->__Vfunc_leading_zero32__6177__value;
                        vlSelf->__Vfunc_leading_zero32__6177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6177__count)));
                            vlSelf->__Vfunc_leading_zero32__6177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6177__count)));
                            vlSelf->__Vfunc_leading_zero32__6177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6177__count)));
                            vlSelf->__Vfunc_leading_zero32__6177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6177__count)));
                            vlSelf->__Vfunc_leading_zero32__6177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6177__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6183__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6183__part 
                            = vlSelf->__Vfunc_leading_zero32__6183__value;
                        vlSelf->__Vfunc_leading_zero32__6183__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6183__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6183__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6183__count)));
                            vlSelf->__Vfunc_leading_zero32__6183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6183__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6183__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6183__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6183__count)));
                            vlSelf->__Vfunc_leading_zero32__6183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6183__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6183__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6183__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6183__count)));
                            vlSelf->__Vfunc_leading_zero32__6183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6183__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6183__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6183__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6183__count)));
                            vlSelf->__Vfunc_leading_zero32__6183__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6183__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6183__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6183__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6183__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6183__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6183__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6183__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6183__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6189__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6189__part 
                            = vlSelf->__Vfunc_leading_zero32__6189__value;
                        vlSelf->__Vfunc_leading_zero32__6189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6189__count)));
                            vlSelf->__Vfunc_leading_zero32__6189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6189__count)));
                            vlSelf->__Vfunc_leading_zero32__6189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6189__count)));
                            vlSelf->__Vfunc_leading_zero32__6189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6189__count)));
                            vlSelf->__Vfunc_leading_zero32__6189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6189__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6195__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6195__part 
                            = vlSelf->__Vfunc_leading_zero32__6195__value;
                        vlSelf->__Vfunc_leading_zero32__6195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6195__count)));
                            vlSelf->__Vfunc_leading_zero32__6195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6195__count)));
                            vlSelf->__Vfunc_leading_zero32__6195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6195__count)));
                            vlSelf->__Vfunc_leading_zero32__6195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6195__count)));
                            vlSelf->__Vfunc_leading_zero32__6195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6195__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6201__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6201__part 
                            = vlSelf->__Vfunc_leading_zero32__6201__value;
                        vlSelf->__Vfunc_leading_zero32__6201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6201__count)));
                            vlSelf->__Vfunc_leading_zero32__6201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6201__count)));
                            vlSelf->__Vfunc_leading_zero32__6201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6201__count)));
                            vlSelf->__Vfunc_leading_zero32__6201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6201__count)));
                            vlSelf->__Vfunc_leading_zero32__6201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6201__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6207__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6207__part 
                            = vlSelf->__Vfunc_leading_zero32__6207__value;
                        vlSelf->__Vfunc_leading_zero32__6207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6207__count)));
                            vlSelf->__Vfunc_leading_zero32__6207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6207__count)));
                            vlSelf->__Vfunc_leading_zero32__6207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6207__count)));
                            vlSelf->__Vfunc_leading_zero32__6207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6207__count)));
                            vlSelf->__Vfunc_leading_zero32__6207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6207__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6213__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6213__part 
                            = vlSelf->__Vfunc_leading_zero32__6213__value;
                        vlSelf->__Vfunc_leading_zero32__6213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6213__count)));
                            vlSelf->__Vfunc_leading_zero32__6213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6213__count)));
                            vlSelf->__Vfunc_leading_zero32__6213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6213__count)));
                            vlSelf->__Vfunc_leading_zero32__6213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6213__count)));
                            vlSelf->__Vfunc_leading_zero32__6213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6213__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6219__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6219__part 
                            = vlSelf->__Vfunc_leading_zero32__6219__value;
                        vlSelf->__Vfunc_leading_zero32__6219__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6219__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6219__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6219__count)));
                            vlSelf->__Vfunc_leading_zero32__6219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6219__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6219__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6219__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6219__count)));
                            vlSelf->__Vfunc_leading_zero32__6219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6219__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6219__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6219__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6219__count)));
                            vlSelf->__Vfunc_leading_zero32__6219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6219__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6219__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6219__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6219__count)));
                            vlSelf->__Vfunc_leading_zero32__6219__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6219__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6219__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6219__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6219__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6219__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6219__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6219__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6219__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6225__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6225__part 
                            = vlSelf->__Vfunc_leading_zero32__6225__value;
                        vlSelf->__Vfunc_leading_zero32__6225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6225__count)));
                            vlSelf->__Vfunc_leading_zero32__6225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6225__count)));
                            vlSelf->__Vfunc_leading_zero32__6225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6225__count)));
                            vlSelf->__Vfunc_leading_zero32__6225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6225__count)));
                            vlSelf->__Vfunc_leading_zero32__6225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6225__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6231__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6231__part 
                            = vlSelf->__Vfunc_leading_zero32__6231__value;
                        vlSelf->__Vfunc_leading_zero32__6231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6231__count)));
                            vlSelf->__Vfunc_leading_zero32__6231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6231__count)));
                            vlSelf->__Vfunc_leading_zero32__6231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6231__count)));
                            vlSelf->__Vfunc_leading_zero32__6231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6231__count)));
                            vlSelf->__Vfunc_leading_zero32__6231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6231__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6237__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6237__part 
                            = vlSelf->__Vfunc_leading_zero32__6237__value;
                        vlSelf->__Vfunc_leading_zero32__6237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6237__count)));
                            vlSelf->__Vfunc_leading_zero32__6237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6237__count)));
                            vlSelf->__Vfunc_leading_zero32__6237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6237__count)));
                            vlSelf->__Vfunc_leading_zero32__6237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6237__count)));
                            vlSelf->__Vfunc_leading_zero32__6237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6237__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6243__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6243__part 
                            = vlSelf->__Vfunc_leading_zero32__6243__value;
                        vlSelf->__Vfunc_leading_zero32__6243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6243__count)));
                            vlSelf->__Vfunc_leading_zero32__6243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6243__count)));
                            vlSelf->__Vfunc_leading_zero32__6243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6243__count)));
                            vlSelf->__Vfunc_leading_zero32__6243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6243__count)));
                            vlSelf->__Vfunc_leading_zero32__6243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6243__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6249__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6249__part 
                            = vlSelf->__Vfunc_leading_zero32__6249__value;
                        vlSelf->__Vfunc_leading_zero32__6249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6249__count)));
                            vlSelf->__Vfunc_leading_zero32__6249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6249__count)));
                            vlSelf->__Vfunc_leading_zero32__6249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6249__count)));
                            vlSelf->__Vfunc_leading_zero32__6249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6249__count)));
                            vlSelf->__Vfunc_leading_zero32__6249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6249__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6255__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6255__part 
                            = vlSelf->__Vfunc_leading_zero32__6255__value;
                        vlSelf->__Vfunc_leading_zero32__6255__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6255__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6255__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6255__count)));
                            vlSelf->__Vfunc_leading_zero32__6255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6255__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6255__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6255__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6255__count)));
                            vlSelf->__Vfunc_leading_zero32__6255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6255__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6255__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6255__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6255__count)));
                            vlSelf->__Vfunc_leading_zero32__6255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6255__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6255__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6255__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6255__count)));
                            vlSelf->__Vfunc_leading_zero32__6255__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6255__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6255__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6255__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6255__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6255__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6255__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6255__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6255__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6261__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6261__part 
                            = vlSelf->__Vfunc_leading_zero32__6261__value;
                        vlSelf->__Vfunc_leading_zero32__6261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6261__count)));
                            vlSelf->__Vfunc_leading_zero32__6261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6261__count)));
                            vlSelf->__Vfunc_leading_zero32__6261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6261__count)));
                            vlSelf->__Vfunc_leading_zero32__6261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6261__count)));
                            vlSelf->__Vfunc_leading_zero32__6261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6261__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6267__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6267__part 
                            = vlSelf->__Vfunc_leading_zero32__6267__value;
                        vlSelf->__Vfunc_leading_zero32__6267__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6267__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6267__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6267__count)));
                            vlSelf->__Vfunc_leading_zero32__6267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6267__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6267__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6267__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6267__count)));
                            vlSelf->__Vfunc_leading_zero32__6267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6267__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6267__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6267__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6267__count)));
                            vlSelf->__Vfunc_leading_zero32__6267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6267__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6267__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6267__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6267__count)));
                            vlSelf->__Vfunc_leading_zero32__6267__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6267__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6267__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6267__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6267__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6267__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6267__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6267__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6267__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6273__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6273__part 
                            = vlSelf->__Vfunc_leading_zero32__6273__value;
                        vlSelf->__Vfunc_leading_zero32__6273__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6273__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6273__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6273__count)));
                            vlSelf->__Vfunc_leading_zero32__6273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6273__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6273__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6273__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6273__count)));
                            vlSelf->__Vfunc_leading_zero32__6273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6273__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6273__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6273__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6273__count)));
                            vlSelf->__Vfunc_leading_zero32__6273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6273__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6273__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6273__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6273__count)));
                            vlSelf->__Vfunc_leading_zero32__6273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6273__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6273__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6273__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6273__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6273__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6273__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6273__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6273__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6279__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6279__part 
                            = vlSelf->__Vfunc_leading_zero32__6279__value;
                        vlSelf->__Vfunc_leading_zero32__6279__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6279__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6279__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6279__count)));
                            vlSelf->__Vfunc_leading_zero32__6279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6279__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6279__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6279__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6279__count)));
                            vlSelf->__Vfunc_leading_zero32__6279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6279__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6279__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6279__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6279__count)));
                            vlSelf->__Vfunc_leading_zero32__6279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6279__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6279__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6279__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6279__count)));
                            vlSelf->__Vfunc_leading_zero32__6279__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6279__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6279__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6279__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6279__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6279__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6279__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6279__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6279__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6285__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6285__part 
                            = vlSelf->__Vfunc_leading_zero32__6285__value;
                        vlSelf->__Vfunc_leading_zero32__6285__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6285__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6285__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6285__count)));
                            vlSelf->__Vfunc_leading_zero32__6285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6285__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6285__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6285__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6285__count)));
                            vlSelf->__Vfunc_leading_zero32__6285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6285__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6285__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6285__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6285__count)));
                            vlSelf->__Vfunc_leading_zero32__6285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6285__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6285__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6285__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6285__count)));
                            vlSelf->__Vfunc_leading_zero32__6285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6285__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6285__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6285__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6285__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6285__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6285__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6285__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6285__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6291__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6291__part 
                            = vlSelf->__Vfunc_leading_zero32__6291__value;
                        vlSelf->__Vfunc_leading_zero32__6291__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6291__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6291__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6291__count)));
                            vlSelf->__Vfunc_leading_zero32__6291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6291__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6291__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6291__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6291__count)));
                            vlSelf->__Vfunc_leading_zero32__6291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6291__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6291__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6291__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6291__count)));
                            vlSelf->__Vfunc_leading_zero32__6291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6291__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6291__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6291__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6291__count)));
                            vlSelf->__Vfunc_leading_zero32__6291__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6291__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6291__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6291__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6291__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6291__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6291__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6291__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6291__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6297__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6297__part 
                            = vlSelf->__Vfunc_leading_zero32__6297__value;
                        vlSelf->__Vfunc_leading_zero32__6297__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6297__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6297__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6297__count)));
                            vlSelf->__Vfunc_leading_zero32__6297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6297__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6297__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6297__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6297__count)));
                            vlSelf->__Vfunc_leading_zero32__6297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6297__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6297__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6297__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6297__count)));
                            vlSelf->__Vfunc_leading_zero32__6297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6297__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6297__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6297__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6297__count)));
                            vlSelf->__Vfunc_leading_zero32__6297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6297__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6297__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6297__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6297__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6297__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6297__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6297__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6297__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6303__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6303__part 
                            = vlSelf->__Vfunc_leading_zero32__6303__value;
                        vlSelf->__Vfunc_leading_zero32__6303__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6303__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6303__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6303__count)));
                            vlSelf->__Vfunc_leading_zero32__6303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6303__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6303__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6303__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6303__count)));
                            vlSelf->__Vfunc_leading_zero32__6303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6303__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6303__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6303__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6303__count)));
                            vlSelf->__Vfunc_leading_zero32__6303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6303__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6303__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6303__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6303__count)));
                            vlSelf->__Vfunc_leading_zero32__6303__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6303__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6303__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6303__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6303__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6303__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6303__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6303__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6303__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6309__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__5__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6309__part 
                            = vlSelf->__Vfunc_leading_zero32__6309__value;
                        vlSelf->__Vfunc_leading_zero32__6309__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6309__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6309__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6309__count)));
                            vlSelf->__Vfunc_leading_zero32__6309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6309__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6309__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6309__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6309__count)));
                            vlSelf->__Vfunc_leading_zero32__6309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6309__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6309__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6309__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6309__count)));
                            vlSelf->__Vfunc_leading_zero32__6309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6309__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6309__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6309__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6309__count)));
                            vlSelf->__Vfunc_leading_zero32__6309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6309__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6309__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6309__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6309__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6309__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6309__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6309__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6309__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6315__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6315__part 
                            = vlSelf->__Vfunc_leading_zero32__6315__value;
                        vlSelf->__Vfunc_leading_zero32__6315__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6315__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6315__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6315__count)));
                            vlSelf->__Vfunc_leading_zero32__6315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6315__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6315__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6315__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6315__count)));
                            vlSelf->__Vfunc_leading_zero32__6315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6315__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6315__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6315__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6315__count)));
                            vlSelf->__Vfunc_leading_zero32__6315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6315__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6315__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6315__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6315__count)));
                            vlSelf->__Vfunc_leading_zero32__6315__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6315__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6315__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6315__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6315__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6315__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6315__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6315__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6315__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6321__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__6__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6321__part 
                            = vlSelf->__Vfunc_leading_zero32__6321__value;
                        vlSelf->__Vfunc_leading_zero32__6321__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6321__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6321__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6321__count)));
                            vlSelf->__Vfunc_leading_zero32__6321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6321__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6321__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6321__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6321__count)));
                            vlSelf->__Vfunc_leading_zero32__6321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6321__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6321__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6321__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6321__count)));
                            vlSelf->__Vfunc_leading_zero32__6321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6321__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6321__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6321__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6321__count)));
                            vlSelf->__Vfunc_leading_zero32__6321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6321__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6321__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6321__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6321__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6321__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6321__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6321__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6321__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6327__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6327__part 
                            = vlSelf->__Vfunc_leading_zero32__6327__value;
                        vlSelf->__Vfunc_leading_zero32__6327__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6327__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6327__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6327__count)));
                            vlSelf->__Vfunc_leading_zero32__6327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6327__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6327__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6327__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6327__count)));
                            vlSelf->__Vfunc_leading_zero32__6327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6327__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6327__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6327__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6327__count)));
                            vlSelf->__Vfunc_leading_zero32__6327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6327__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6327__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6327__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6327__count)));
                            vlSelf->__Vfunc_leading_zero32__6327__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6327__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6327__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6327__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6327__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6327__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6327__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6327__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6327__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6408__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6408__part 
                            = vlSelf->__Vfunc_leading_zero32__6408__value;
                        vlSelf->__Vfunc_leading_zero32__6408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                            vlSelf->__Vfunc_leading_zero32__6408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6408__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6472__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6472__part 
                            = vlSelf->__Vfunc_leading_zero32__6472__value;
                        vlSelf->__Vfunc_leading_zero32__6472__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6472__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                            vlSelf->__Vfunc_leading_zero32__6472__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6472__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6472__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6472__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6472__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6472__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6472__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6472__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6472__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6478__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6478__part 
                            = vlSelf->__Vfunc_leading_zero32__6478__value;
                        vlSelf->__Vfunc_leading_zero32__6478__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6478__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                            vlSelf->__Vfunc_leading_zero32__6478__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6478__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6478__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6478__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6478__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6478__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6478__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6478__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6478__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6484__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6484__part 
                            = vlSelf->__Vfunc_leading_zero32__6484__value;
                        vlSelf->__Vfunc_leading_zero32__6484__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6484__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                            vlSelf->__Vfunc_leading_zero32__6484__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6484__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6484__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6484__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6484__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6484__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6484__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6484__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6484__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6490__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6490__part 
                            = vlSelf->__Vfunc_leading_zero32__6490__value;
                        vlSelf->__Vfunc_leading_zero32__6490__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6490__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                            vlSelf->__Vfunc_leading_zero32__6490__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6490__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6490__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6490__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6490__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6490__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6490__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6490__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6490__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6496__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6496__part 
                            = vlSelf->__Vfunc_leading_zero32__6496__value;
                        vlSelf->__Vfunc_leading_zero32__6496__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6496__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                            vlSelf->__Vfunc_leading_zero32__6496__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6496__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6496__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6496__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6496__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6496__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6496__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6496__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6496__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6502__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6502__part 
                            = vlSelf->__Vfunc_leading_zero32__6502__value;
                        vlSelf->__Vfunc_leading_zero32__6502__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6502__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                            vlSelf->__Vfunc_leading_zero32__6502__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6502__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6502__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6502__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6502__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6502__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6502__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6502__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6502__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6508__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6508__part 
                            = vlSelf->__Vfunc_leading_zero32__6508__value;
                        vlSelf->__Vfunc_leading_zero32__6508__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6508__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                            vlSelf->__Vfunc_leading_zero32__6508__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6508__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6508__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6508__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6508__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6508__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6508__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6508__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6508__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6514__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6514__part 
                            = vlSelf->__Vfunc_leading_zero32__6514__value;
                        vlSelf->__Vfunc_leading_zero32__6514__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6514__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                            vlSelf->__Vfunc_leading_zero32__6514__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6514__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6514__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6514__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6514__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6514__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6514__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6514__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6514__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6520__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6520__part 
                            = vlSelf->__Vfunc_leading_zero32__6520__value;
                        vlSelf->__Vfunc_leading_zero32__6520__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6520__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                            vlSelf->__Vfunc_leading_zero32__6520__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6520__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6520__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6520__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6520__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6520__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6520__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6520__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6520__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6526__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6526__part 
                            = vlSelf->__Vfunc_leading_zero32__6526__value;
                        vlSelf->__Vfunc_leading_zero32__6526__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6526__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                            vlSelf->__Vfunc_leading_zero32__6526__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6526__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6526__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6526__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6526__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6526__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6526__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6526__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6526__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6532__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6532__part 
                            = vlSelf->__Vfunc_leading_zero32__6532__value;
                        vlSelf->__Vfunc_leading_zero32__6532__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6532__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                            vlSelf->__Vfunc_leading_zero32__6532__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6532__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6532__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6532__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6532__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6532__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6532__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6532__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6532__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6538__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6538__part 
                            = vlSelf->__Vfunc_leading_zero32__6538__value;
                        vlSelf->__Vfunc_leading_zero32__6538__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6538__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                            vlSelf->__Vfunc_leading_zero32__6538__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6538__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6538__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6538__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6538__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6538__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6538__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6538__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6538__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6544__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6544__part 
                            = vlSelf->__Vfunc_leading_zero32__6544__value;
                        vlSelf->__Vfunc_leading_zero32__6544__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6544__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                            vlSelf->__Vfunc_leading_zero32__6544__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6544__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6544__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6544__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6544__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6544__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6544__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6544__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6544__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6550__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6550__part 
                            = vlSelf->__Vfunc_leading_zero32__6550__value;
                        vlSelf->__Vfunc_leading_zero32__6550__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6550__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                            vlSelf->__Vfunc_leading_zero32__6550__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6550__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6550__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6550__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6550__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6550__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6550__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6550__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6550__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6556__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6556__part 
                            = vlSelf->__Vfunc_leading_zero32__6556__value;
                        vlSelf->__Vfunc_leading_zero32__6556__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6556__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                            vlSelf->__Vfunc_leading_zero32__6556__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6556__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6556__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6556__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6556__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6556__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6556__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6556__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6556__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6562__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6562__part 
                            = vlSelf->__Vfunc_leading_zero32__6562__value;
                        vlSelf->__Vfunc_leading_zero32__6562__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6562__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                            vlSelf->__Vfunc_leading_zero32__6562__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6562__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6562__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6562__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6562__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6562__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6562__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6562__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6562__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6568__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6568__part 
                            = vlSelf->__Vfunc_leading_zero32__6568__value;
                        vlSelf->__Vfunc_leading_zero32__6568__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6568__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                            vlSelf->__Vfunc_leading_zero32__6568__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6568__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6568__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6568__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6568__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6568__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6568__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6568__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6568__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6574__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6574__part 
                            = vlSelf->__Vfunc_leading_zero32__6574__value;
                        vlSelf->__Vfunc_leading_zero32__6574__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6574__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                            vlSelf->__Vfunc_leading_zero32__6574__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6574__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6574__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6574__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6574__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6574__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6574__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6574__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6574__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6580__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6580__part 
                            = vlSelf->__Vfunc_leading_zero32__6580__value;
                        vlSelf->__Vfunc_leading_zero32__6580__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6580__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                            vlSelf->__Vfunc_leading_zero32__6580__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6580__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6580__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6580__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6580__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6580__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6580__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6580__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6580__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6586__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6586__part 
                            = vlSelf->__Vfunc_leading_zero32__6586__value;
                        vlSelf->__Vfunc_leading_zero32__6586__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6586__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                            vlSelf->__Vfunc_leading_zero32__6586__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6586__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6586__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6586__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6586__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6586__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6586__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6586__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6586__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6592__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6592__part 
                            = vlSelf->__Vfunc_leading_zero32__6592__value;
                        vlSelf->__Vfunc_leading_zero32__6592__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6592__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                            vlSelf->__Vfunc_leading_zero32__6592__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6592__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6592__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6592__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6592__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6592__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6592__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6592__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6592__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6598__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6598__part 
                            = vlSelf->__Vfunc_leading_zero32__6598__value;
                        vlSelf->__Vfunc_leading_zero32__6598__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6598__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                            vlSelf->__Vfunc_leading_zero32__6598__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6598__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6598__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6598__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6598__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6598__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6598__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6598__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6598__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6604__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6604__part 
                            = vlSelf->__Vfunc_leading_zero32__6604__value;
                        vlSelf->__Vfunc_leading_zero32__6604__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6604__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                            vlSelf->__Vfunc_leading_zero32__6604__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6604__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6604__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6604__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6604__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6604__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6604__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6604__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6604__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6610__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6610__part 
                            = vlSelf->__Vfunc_leading_zero32__6610__value;
                        vlSelf->__Vfunc_leading_zero32__6610__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6610__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                            vlSelf->__Vfunc_leading_zero32__6610__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6610__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6610__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6610__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6610__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6610__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6610__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6610__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6610__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6616__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__6616__part 
                            = vlSelf->__Vfunc_leading_zero32__6616__value;
                        vlSelf->__Vfunc_leading_zero32__6616__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6616__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                            vlSelf->__Vfunc_leading_zero32__6616__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6616__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6616__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6616__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6616__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6616__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6616__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6616__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6616__Vfuncout)) 
                             - (IData)(5U))));
}
