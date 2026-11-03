// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_INLINE_OPT void Vstartup_tb___024root___act_comb__TOP__12(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___act_comb__TOP__12\n"); );
    // Init
    CData/*5:0*/ startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift;
    startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift = 0;
    CData/*0:0*/ startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0;
    startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 = 0;
    QData/*32:0*/ __Vfunc_round_pack32__6334__Vfuncout;
    __Vfunc_round_pack32__6334__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__6334__exponent;
    __Vfunc_round_pack32__6334__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__6334__significand;
    __Vfunc_round_pack32__6334__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__6334__shifted;
    __Vfunc_round_pack32__6334__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__6334__rounded;
    __Vfunc_round_pack32__6334__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__6334__adjusted;
    __Vfunc_round_pack32__6334__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__6334__biased;
    __Vfunc_round_pack32__6334__biased = 0;
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2841__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__92__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2841__part 
                            = vlSelf->__Vfunc_leading_zero32__2841__value;
                        vlSelf->__Vfunc_leading_zero32__2841__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2841__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2841__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2841__count)));
                            vlSelf->__Vfunc_leading_zero32__2841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2841__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2841__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2841__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2841__count)));
                            vlSelf->__Vfunc_leading_zero32__2841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2841__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2841__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2841__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2841__count)));
                            vlSelf->__Vfunc_leading_zero32__2841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2841__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2841__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2841__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2841__count)));
                            vlSelf->__Vfunc_leading_zero32__2841__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2841__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2841__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2841__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2841__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2841__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2841__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2841__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2841__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2853__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__93__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2853__part 
                            = vlSelf->__Vfunc_leading_zero32__2853__value;
                        vlSelf->__Vfunc_leading_zero32__2853__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2853__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2853__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2853__count)));
                            vlSelf->__Vfunc_leading_zero32__2853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2853__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2853__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2853__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2853__count)));
                            vlSelf->__Vfunc_leading_zero32__2853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2853__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2853__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2853__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2853__count)));
                            vlSelf->__Vfunc_leading_zero32__2853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2853__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2853__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2853__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2853__count)));
                            vlSelf->__Vfunc_leading_zero32__2853__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2853__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2853__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2853__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2853__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2853__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2853__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2853__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2853__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2865__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__94__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2865__part 
                            = vlSelf->__Vfunc_leading_zero32__2865__value;
                        vlSelf->__Vfunc_leading_zero32__2865__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2865__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2865__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2865__count)));
                            vlSelf->__Vfunc_leading_zero32__2865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2865__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2865__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2865__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2865__count)));
                            vlSelf->__Vfunc_leading_zero32__2865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2865__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2865__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2865__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2865__count)));
                            vlSelf->__Vfunc_leading_zero32__2865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2865__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2865__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2865__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2865__count)));
                            vlSelf->__Vfunc_leading_zero32__2865__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2865__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2865__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2865__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2865__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2865__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2865__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2865__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2865__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2877__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__95__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2877__part 
                            = vlSelf->__Vfunc_leading_zero32__2877__value;
                        vlSelf->__Vfunc_leading_zero32__2877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2877__count)));
                            vlSelf->__Vfunc_leading_zero32__2877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2877__count)));
                            vlSelf->__Vfunc_leading_zero32__2877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2877__count)));
                            vlSelf->__Vfunc_leading_zero32__2877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2877__count)));
                            vlSelf->__Vfunc_leading_zero32__2877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2877__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2889__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__96__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2889__part 
                            = vlSelf->__Vfunc_leading_zero32__2889__value;
                        vlSelf->__Vfunc_leading_zero32__2889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2889__count)));
                            vlSelf->__Vfunc_leading_zero32__2889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2889__count)));
                            vlSelf->__Vfunc_leading_zero32__2889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2889__count)));
                            vlSelf->__Vfunc_leading_zero32__2889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2889__count)));
                            vlSelf->__Vfunc_leading_zero32__2889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2901__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__97__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2901__part 
                            = vlSelf->__Vfunc_leading_zero32__2901__value;
                        vlSelf->__Vfunc_leading_zero32__2901__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2901__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2901__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2901__count)));
                            vlSelf->__Vfunc_leading_zero32__2901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2901__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2901__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2901__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2901__count)));
                            vlSelf->__Vfunc_leading_zero32__2901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2901__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2901__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2901__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2901__count)));
                            vlSelf->__Vfunc_leading_zero32__2901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2901__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2901__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2901__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2901__count)));
                            vlSelf->__Vfunc_leading_zero32__2901__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2901__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2901__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2901__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2901__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2901__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2901__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2901__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2901__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2913__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__98__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2913__part 
                            = vlSelf->__Vfunc_leading_zero32__2913__value;
                        vlSelf->__Vfunc_leading_zero32__2913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2913__count)));
                            vlSelf->__Vfunc_leading_zero32__2913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2913__count)));
                            vlSelf->__Vfunc_leading_zero32__2913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2913__count)));
                            vlSelf->__Vfunc_leading_zero32__2913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2913__count)));
                            vlSelf->__Vfunc_leading_zero32__2913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2913__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2925__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__99__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2925__part 
                            = vlSelf->__Vfunc_leading_zero32__2925__value;
                        vlSelf->__Vfunc_leading_zero32__2925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2925__count)));
                            vlSelf->__Vfunc_leading_zero32__2925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2925__count)));
                            vlSelf->__Vfunc_leading_zero32__2925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2925__count)));
                            vlSelf->__Vfunc_leading_zero32__2925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2925__count)));
                            vlSelf->__Vfunc_leading_zero32__2925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2937__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__100__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2937__part 
                            = vlSelf->__Vfunc_leading_zero32__2937__value;
                        vlSelf->__Vfunc_leading_zero32__2937__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2937__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2937__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2937__count)));
                            vlSelf->__Vfunc_leading_zero32__2937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2937__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2937__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2937__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2937__count)));
                            vlSelf->__Vfunc_leading_zero32__2937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2937__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2937__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2937__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2937__count)));
                            vlSelf->__Vfunc_leading_zero32__2937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2937__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2937__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2937__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2937__count)));
                            vlSelf->__Vfunc_leading_zero32__2937__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2937__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2937__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2937__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2937__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2937__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2937__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2937__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2937__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2949__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__101__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2949__part 
                            = vlSelf->__Vfunc_leading_zero32__2949__value;
                        vlSelf->__Vfunc_leading_zero32__2949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2949__count)));
                            vlSelf->__Vfunc_leading_zero32__2949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2949__count)));
                            vlSelf->__Vfunc_leading_zero32__2949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2949__count)));
                            vlSelf->__Vfunc_leading_zero32__2949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2949__count)));
                            vlSelf->__Vfunc_leading_zero32__2949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2949__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2961__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__102__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2961__part 
                            = vlSelf->__Vfunc_leading_zero32__2961__value;
                        vlSelf->__Vfunc_leading_zero32__2961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2961__count)));
                            vlSelf->__Vfunc_leading_zero32__2961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2961__count)));
                            vlSelf->__Vfunc_leading_zero32__2961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2961__count)));
                            vlSelf->__Vfunc_leading_zero32__2961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2961__count)));
                            vlSelf->__Vfunc_leading_zero32__2961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2961__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2973__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__103__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2973__part 
                            = vlSelf->__Vfunc_leading_zero32__2973__value;
                        vlSelf->__Vfunc_leading_zero32__2973__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2973__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2973__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2973__count)));
                            vlSelf->__Vfunc_leading_zero32__2973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2973__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2973__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2973__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2973__count)));
                            vlSelf->__Vfunc_leading_zero32__2973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2973__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2973__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2973__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2973__count)));
                            vlSelf->__Vfunc_leading_zero32__2973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2973__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2973__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2973__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2973__count)));
                            vlSelf->__Vfunc_leading_zero32__2973__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2973__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2973__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2973__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2973__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2973__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2973__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2973__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2973__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2985__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__104__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2985__part 
                            = vlSelf->__Vfunc_leading_zero32__2985__value;
                        vlSelf->__Vfunc_leading_zero32__2985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2985__count)));
                            vlSelf->__Vfunc_leading_zero32__2985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2985__count)));
                            vlSelf->__Vfunc_leading_zero32__2985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2985__count)));
                            vlSelf->__Vfunc_leading_zero32__2985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2985__count)));
                            vlSelf->__Vfunc_leading_zero32__2985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2985__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__2997__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__105__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__2997__part 
                            = vlSelf->__Vfunc_leading_zero32__2997__value;
                        vlSelf->__Vfunc_leading_zero32__2997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__2997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2997__count)));
                            vlSelf->__Vfunc_leading_zero32__2997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__2997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2997__count)));
                            vlSelf->__Vfunc_leading_zero32__2997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__2997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2997__count)));
                            vlSelf->__Vfunc_leading_zero32__2997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__2997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__2997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2997__count)));
                            vlSelf->__Vfunc_leading_zero32__2997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__2997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__2997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__2997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__2997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__2997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__2997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__2997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__2997__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3009__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__106__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3009__part 
                            = vlSelf->__Vfunc_leading_zero32__3009__value;
                        vlSelf->__Vfunc_leading_zero32__3009__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3009__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3009__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3009__count)));
                            vlSelf->__Vfunc_leading_zero32__3009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3009__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3009__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3009__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3009__count)));
                            vlSelf->__Vfunc_leading_zero32__3009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3009__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3009__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3009__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3009__count)));
                            vlSelf->__Vfunc_leading_zero32__3009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3009__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3009__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3009__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3009__count)));
                            vlSelf->__Vfunc_leading_zero32__3009__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3009__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3009__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3009__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3009__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3009__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3009__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3009__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3009__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3021__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__107__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3021__part 
                            = vlSelf->__Vfunc_leading_zero32__3021__value;
                        vlSelf->__Vfunc_leading_zero32__3021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3021__count)));
                            vlSelf->__Vfunc_leading_zero32__3021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3021__count)));
                            vlSelf->__Vfunc_leading_zero32__3021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3021__count)));
                            vlSelf->__Vfunc_leading_zero32__3021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3021__count)));
                            vlSelf->__Vfunc_leading_zero32__3021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3021__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3033__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__108__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3033__part 
                            = vlSelf->__Vfunc_leading_zero32__3033__value;
                        vlSelf->__Vfunc_leading_zero32__3033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3033__count)));
                            vlSelf->__Vfunc_leading_zero32__3033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3033__count)));
                            vlSelf->__Vfunc_leading_zero32__3033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3033__count)));
                            vlSelf->__Vfunc_leading_zero32__3033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3033__count)));
                            vlSelf->__Vfunc_leading_zero32__3033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3033__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3045__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__109__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3045__part 
                            = vlSelf->__Vfunc_leading_zero32__3045__value;
                        vlSelf->__Vfunc_leading_zero32__3045__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3045__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3045__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3045__count)));
                            vlSelf->__Vfunc_leading_zero32__3045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3045__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3045__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3045__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3045__count)));
                            vlSelf->__Vfunc_leading_zero32__3045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3045__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3045__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3045__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3045__count)));
                            vlSelf->__Vfunc_leading_zero32__3045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3045__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3045__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3045__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3045__count)));
                            vlSelf->__Vfunc_leading_zero32__3045__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3045__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3045__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3045__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3045__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3045__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3045__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3045__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3045__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3057__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__110__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3057__part 
                            = vlSelf->__Vfunc_leading_zero32__3057__value;
                        vlSelf->__Vfunc_leading_zero32__3057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3057__count)));
                            vlSelf->__Vfunc_leading_zero32__3057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3057__count)));
                            vlSelf->__Vfunc_leading_zero32__3057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3057__count)));
                            vlSelf->__Vfunc_leading_zero32__3057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3057__count)));
                            vlSelf->__Vfunc_leading_zero32__3057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3057__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3069__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__111__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3069__part 
                            = vlSelf->__Vfunc_leading_zero32__3069__value;
                        vlSelf->__Vfunc_leading_zero32__3069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3069__count)));
                            vlSelf->__Vfunc_leading_zero32__3069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3069__count)));
                            vlSelf->__Vfunc_leading_zero32__3069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3069__count)));
                            vlSelf->__Vfunc_leading_zero32__3069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3069__count)));
                            vlSelf->__Vfunc_leading_zero32__3069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3069__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3081__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__112__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3081__part 
                            = vlSelf->__Vfunc_leading_zero32__3081__value;
                        vlSelf->__Vfunc_leading_zero32__3081__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3081__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3081__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3081__count)));
                            vlSelf->__Vfunc_leading_zero32__3081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3081__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3081__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3081__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3081__count)));
                            vlSelf->__Vfunc_leading_zero32__3081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3081__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3081__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3081__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3081__count)));
                            vlSelf->__Vfunc_leading_zero32__3081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3081__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3081__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3081__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3081__count)));
                            vlSelf->__Vfunc_leading_zero32__3081__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3081__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3081__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3081__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3081__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3081__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3081__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3081__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3081__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3093__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__113__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3093__part 
                            = vlSelf->__Vfunc_leading_zero32__3093__value;
                        vlSelf->__Vfunc_leading_zero32__3093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3093__count)));
                            vlSelf->__Vfunc_leading_zero32__3093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3093__count)));
                            vlSelf->__Vfunc_leading_zero32__3093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3093__count)));
                            vlSelf->__Vfunc_leading_zero32__3093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3093__count)));
                            vlSelf->__Vfunc_leading_zero32__3093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3093__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3105__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__114__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3105__part 
                            = vlSelf->__Vfunc_leading_zero32__3105__value;
                        vlSelf->__Vfunc_leading_zero32__3105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3105__count)));
                            vlSelf->__Vfunc_leading_zero32__3105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3105__count)));
                            vlSelf->__Vfunc_leading_zero32__3105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3105__count)));
                            vlSelf->__Vfunc_leading_zero32__3105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3105__count)));
                            vlSelf->__Vfunc_leading_zero32__3105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3105__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3117__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__115__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3117__part 
                            = vlSelf->__Vfunc_leading_zero32__3117__value;
                        vlSelf->__Vfunc_leading_zero32__3117__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3117__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3117__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3117__count)));
                            vlSelf->__Vfunc_leading_zero32__3117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3117__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3117__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3117__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3117__count)));
                            vlSelf->__Vfunc_leading_zero32__3117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3117__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3117__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3117__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3117__count)));
                            vlSelf->__Vfunc_leading_zero32__3117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3117__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3117__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3117__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3117__count)));
                            vlSelf->__Vfunc_leading_zero32__3117__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3117__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3117__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3117__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3117__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3117__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3117__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3117__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3117__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3129__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__116__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3129__part 
                            = vlSelf->__Vfunc_leading_zero32__3129__value;
                        vlSelf->__Vfunc_leading_zero32__3129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3129__count)));
                            vlSelf->__Vfunc_leading_zero32__3129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3129__count)));
                            vlSelf->__Vfunc_leading_zero32__3129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3129__count)));
                            vlSelf->__Vfunc_leading_zero32__3129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3129__count)));
                            vlSelf->__Vfunc_leading_zero32__3129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3129__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3141__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__117__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3141__part 
                            = vlSelf->__Vfunc_leading_zero32__3141__value;
                        vlSelf->__Vfunc_leading_zero32__3141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3141__count)));
                            vlSelf->__Vfunc_leading_zero32__3141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3141__count)));
                            vlSelf->__Vfunc_leading_zero32__3141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3141__count)));
                            vlSelf->__Vfunc_leading_zero32__3141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3141__count)));
                            vlSelf->__Vfunc_leading_zero32__3141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3141__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3153__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__118__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3153__part 
                            = vlSelf->__Vfunc_leading_zero32__3153__value;
                        vlSelf->__Vfunc_leading_zero32__3153__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3153__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3153__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3153__count)));
                            vlSelf->__Vfunc_leading_zero32__3153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3153__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3153__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3153__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3153__count)));
                            vlSelf->__Vfunc_leading_zero32__3153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3153__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3153__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3153__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3153__count)));
                            vlSelf->__Vfunc_leading_zero32__3153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3153__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3153__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3153__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3153__count)));
                            vlSelf->__Vfunc_leading_zero32__3153__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3153__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3153__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3153__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3153__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3153__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3153__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3153__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3153__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3165__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__119__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3165__part 
                            = vlSelf->__Vfunc_leading_zero32__3165__value;
                        vlSelf->__Vfunc_leading_zero32__3165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3165__count)));
                            vlSelf->__Vfunc_leading_zero32__3165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3165__count)));
                            vlSelf->__Vfunc_leading_zero32__3165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3165__count)));
                            vlSelf->__Vfunc_leading_zero32__3165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3165__count)));
                            vlSelf->__Vfunc_leading_zero32__3165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3165__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3177__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__120__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3177__part 
                            = vlSelf->__Vfunc_leading_zero32__3177__value;
                        vlSelf->__Vfunc_leading_zero32__3177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3177__count)));
                            vlSelf->__Vfunc_leading_zero32__3177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3177__count)));
                            vlSelf->__Vfunc_leading_zero32__3177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3177__count)));
                            vlSelf->__Vfunc_leading_zero32__3177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3177__count)));
                            vlSelf->__Vfunc_leading_zero32__3177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3177__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3189__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__121__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3189__part 
                            = vlSelf->__Vfunc_leading_zero32__3189__value;
                        vlSelf->__Vfunc_leading_zero32__3189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3189__count)));
                            vlSelf->__Vfunc_leading_zero32__3189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3189__count)));
                            vlSelf->__Vfunc_leading_zero32__3189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3189__count)));
                            vlSelf->__Vfunc_leading_zero32__3189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3189__count)));
                            vlSelf->__Vfunc_leading_zero32__3189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3189__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3201__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__122__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3201__part 
                            = vlSelf->__Vfunc_leading_zero32__3201__value;
                        vlSelf->__Vfunc_leading_zero32__3201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3201__count)));
                            vlSelf->__Vfunc_leading_zero32__3201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3201__count)));
                            vlSelf->__Vfunc_leading_zero32__3201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3201__count)));
                            vlSelf->__Vfunc_leading_zero32__3201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3201__count)));
                            vlSelf->__Vfunc_leading_zero32__3201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3201__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3213__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__123__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3213__part 
                            = vlSelf->__Vfunc_leading_zero32__3213__value;
                        vlSelf->__Vfunc_leading_zero32__3213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3213__count)));
                            vlSelf->__Vfunc_leading_zero32__3213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3213__count)));
                            vlSelf->__Vfunc_leading_zero32__3213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3213__count)));
                            vlSelf->__Vfunc_leading_zero32__3213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3213__count)));
                            vlSelf->__Vfunc_leading_zero32__3213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3213__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3225__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__124__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3225__part 
                            = vlSelf->__Vfunc_leading_zero32__3225__value;
                        vlSelf->__Vfunc_leading_zero32__3225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3225__count)));
                            vlSelf->__Vfunc_leading_zero32__3225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3225__count)));
                            vlSelf->__Vfunc_leading_zero32__3225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3225__count)));
                            vlSelf->__Vfunc_leading_zero32__3225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3225__count)));
                            vlSelf->__Vfunc_leading_zero32__3225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3225__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3237__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__125__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3237__part 
                            = vlSelf->__Vfunc_leading_zero32__3237__value;
                        vlSelf->__Vfunc_leading_zero32__3237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3237__count)));
                            vlSelf->__Vfunc_leading_zero32__3237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3237__count)));
                            vlSelf->__Vfunc_leading_zero32__3237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3237__count)));
                            vlSelf->__Vfunc_leading_zero32__3237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3237__count)));
                            vlSelf->__Vfunc_leading_zero32__3237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3237__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3249__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__126__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3249__part 
                            = vlSelf->__Vfunc_leading_zero32__3249__value;
                        vlSelf->__Vfunc_leading_zero32__3249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3249__count)));
                            vlSelf->__Vfunc_leading_zero32__3249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3249__count)));
                            vlSelf->__Vfunc_leading_zero32__3249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3249__count)));
                            vlSelf->__Vfunc_leading_zero32__3249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3249__count)));
                            vlSelf->__Vfunc_leading_zero32__3249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3249__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3261__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__127__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3261__part 
                            = vlSelf->__Vfunc_leading_zero32__3261__value;
                        vlSelf->__Vfunc_leading_zero32__3261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3261__count)));
                            vlSelf->__Vfunc_leading_zero32__3261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3261__count)));
                            vlSelf->__Vfunc_leading_zero32__3261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3261__count)));
                            vlSelf->__Vfunc_leading_zero32__3261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3261__count)));
                            vlSelf->__Vfunc_leading_zero32__3261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3261__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3273__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__128__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3273__part 
                            = vlSelf->__Vfunc_leading_zero32__3273__value;
                        vlSelf->__Vfunc_leading_zero32__3273__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3273__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3273__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3273__count)));
                            vlSelf->__Vfunc_leading_zero32__3273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3273__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3273__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3273__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3273__count)));
                            vlSelf->__Vfunc_leading_zero32__3273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3273__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3273__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3273__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3273__count)));
                            vlSelf->__Vfunc_leading_zero32__3273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3273__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3273__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3273__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3273__count)));
                            vlSelf->__Vfunc_leading_zero32__3273__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3273__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3273__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3273__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3273__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3273__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3273__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3273__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3273__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3285__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__129__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3285__part 
                            = vlSelf->__Vfunc_leading_zero32__3285__value;
                        vlSelf->__Vfunc_leading_zero32__3285__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3285__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3285__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3285__count)));
                            vlSelf->__Vfunc_leading_zero32__3285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3285__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3285__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3285__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3285__count)));
                            vlSelf->__Vfunc_leading_zero32__3285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3285__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3285__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3285__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3285__count)));
                            vlSelf->__Vfunc_leading_zero32__3285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3285__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3285__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3285__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3285__count)));
                            vlSelf->__Vfunc_leading_zero32__3285__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3285__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3285__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3285__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3285__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3285__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3285__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3285__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3285__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3297__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__130__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3297__part 
                            = vlSelf->__Vfunc_leading_zero32__3297__value;
                        vlSelf->__Vfunc_leading_zero32__3297__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3297__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3297__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3297__count)));
                            vlSelf->__Vfunc_leading_zero32__3297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3297__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3297__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3297__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3297__count)));
                            vlSelf->__Vfunc_leading_zero32__3297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3297__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3297__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3297__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3297__count)));
                            vlSelf->__Vfunc_leading_zero32__3297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3297__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3297__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3297__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3297__count)));
                            vlSelf->__Vfunc_leading_zero32__3297__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3297__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3297__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3297__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3297__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3297__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3297__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3297__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3297__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3309__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__131__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3309__part 
                            = vlSelf->__Vfunc_leading_zero32__3309__value;
                        vlSelf->__Vfunc_leading_zero32__3309__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3309__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3309__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3309__count)));
                            vlSelf->__Vfunc_leading_zero32__3309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3309__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3309__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3309__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3309__count)));
                            vlSelf->__Vfunc_leading_zero32__3309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3309__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3309__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3309__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3309__count)));
                            vlSelf->__Vfunc_leading_zero32__3309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3309__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3309__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3309__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3309__count)));
                            vlSelf->__Vfunc_leading_zero32__3309__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3309__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3309__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3309__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3309__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3309__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3309__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3309__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3309__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3321__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__132__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3321__part 
                            = vlSelf->__Vfunc_leading_zero32__3321__value;
                        vlSelf->__Vfunc_leading_zero32__3321__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3321__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3321__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3321__count)));
                            vlSelf->__Vfunc_leading_zero32__3321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3321__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3321__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3321__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3321__count)));
                            vlSelf->__Vfunc_leading_zero32__3321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3321__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3321__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3321__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3321__count)));
                            vlSelf->__Vfunc_leading_zero32__3321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3321__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3321__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3321__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3321__count)));
                            vlSelf->__Vfunc_leading_zero32__3321__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3321__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3321__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3321__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3321__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3321__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3321__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3321__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3321__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3333__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__133__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3333__part 
                            = vlSelf->__Vfunc_leading_zero32__3333__value;
                        vlSelf->__Vfunc_leading_zero32__3333__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3333__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3333__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3333__count)));
                            vlSelf->__Vfunc_leading_zero32__3333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3333__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3333__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3333__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3333__count)));
                            vlSelf->__Vfunc_leading_zero32__3333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3333__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3333__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3333__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3333__count)));
                            vlSelf->__Vfunc_leading_zero32__3333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3333__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3333__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3333__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3333__count)));
                            vlSelf->__Vfunc_leading_zero32__3333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3333__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3333__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3333__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3333__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3333__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3333__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3333__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3333__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3345__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__134__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3345__part 
                            = vlSelf->__Vfunc_leading_zero32__3345__value;
                        vlSelf->__Vfunc_leading_zero32__3345__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3345__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3345__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3345__count)));
                            vlSelf->__Vfunc_leading_zero32__3345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3345__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3345__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3345__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3345__count)));
                            vlSelf->__Vfunc_leading_zero32__3345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3345__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3345__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3345__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3345__count)));
                            vlSelf->__Vfunc_leading_zero32__3345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3345__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3345__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3345__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3345__count)));
                            vlSelf->__Vfunc_leading_zero32__3345__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3345__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3345__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3345__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3345__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3345__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3345__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3345__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3345__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3357__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__135__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3357__part 
                            = vlSelf->__Vfunc_leading_zero32__3357__value;
                        vlSelf->__Vfunc_leading_zero32__3357__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3357__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3357__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3357__count)));
                            vlSelf->__Vfunc_leading_zero32__3357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3357__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3357__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3357__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3357__count)));
                            vlSelf->__Vfunc_leading_zero32__3357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3357__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3357__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3357__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3357__count)));
                            vlSelf->__Vfunc_leading_zero32__3357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3357__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3357__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3357__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3357__count)));
                            vlSelf->__Vfunc_leading_zero32__3357__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3357__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3357__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3357__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3357__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3357__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3357__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3357__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3357__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3369__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__136__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3369__part 
                            = vlSelf->__Vfunc_leading_zero32__3369__value;
                        vlSelf->__Vfunc_leading_zero32__3369__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3369__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3369__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3369__count)));
                            vlSelf->__Vfunc_leading_zero32__3369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3369__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3369__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3369__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3369__count)));
                            vlSelf->__Vfunc_leading_zero32__3369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3369__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3369__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3369__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3369__count)));
                            vlSelf->__Vfunc_leading_zero32__3369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3369__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3369__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3369__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3369__count)));
                            vlSelf->__Vfunc_leading_zero32__3369__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3369__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3369__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3369__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3369__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3369__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3369__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3369__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3369__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3381__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__137__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3381__part 
                            = vlSelf->__Vfunc_leading_zero32__3381__value;
                        vlSelf->__Vfunc_leading_zero32__3381__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3381__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3381__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3381__count)));
                            vlSelf->__Vfunc_leading_zero32__3381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3381__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3381__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3381__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3381__count)));
                            vlSelf->__Vfunc_leading_zero32__3381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3381__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3381__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3381__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3381__count)));
                            vlSelf->__Vfunc_leading_zero32__3381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3381__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3381__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3381__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3381__count)));
                            vlSelf->__Vfunc_leading_zero32__3381__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3381__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3381__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3381__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3381__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3381__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3381__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3381__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3381__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3393__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__138__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3393__part 
                            = vlSelf->__Vfunc_leading_zero32__3393__value;
                        vlSelf->__Vfunc_leading_zero32__3393__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3393__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3393__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3393__count)));
                            vlSelf->__Vfunc_leading_zero32__3393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3393__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3393__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3393__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3393__count)));
                            vlSelf->__Vfunc_leading_zero32__3393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3393__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3393__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3393__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3393__count)));
                            vlSelf->__Vfunc_leading_zero32__3393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3393__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3393__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3393__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3393__count)));
                            vlSelf->__Vfunc_leading_zero32__3393__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3393__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3393__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3393__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3393__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3393__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3393__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3393__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3393__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3405__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__139__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3405__part 
                            = vlSelf->__Vfunc_leading_zero32__3405__value;
                        vlSelf->__Vfunc_leading_zero32__3405__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3405__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3405__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3405__count)));
                            vlSelf->__Vfunc_leading_zero32__3405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3405__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3405__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3405__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3405__count)));
                            vlSelf->__Vfunc_leading_zero32__3405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3405__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3405__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3405__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3405__count)));
                            vlSelf->__Vfunc_leading_zero32__3405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3405__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3405__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3405__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3405__count)));
                            vlSelf->__Vfunc_leading_zero32__3405__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3405__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3405__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3405__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3405__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3405__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3405__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3405__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3405__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3417__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__140__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3417__part 
                            = vlSelf->__Vfunc_leading_zero32__3417__value;
                        vlSelf->__Vfunc_leading_zero32__3417__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3417__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3417__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3417__count)));
                            vlSelf->__Vfunc_leading_zero32__3417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3417__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3417__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3417__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3417__count)));
                            vlSelf->__Vfunc_leading_zero32__3417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3417__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3417__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3417__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3417__count)));
                            vlSelf->__Vfunc_leading_zero32__3417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3417__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3417__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3417__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3417__count)));
                            vlSelf->__Vfunc_leading_zero32__3417__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3417__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3417__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3417__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3417__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3417__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3417__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3417__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3417__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3429__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__141__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3429__part 
                            = vlSelf->__Vfunc_leading_zero32__3429__value;
                        vlSelf->__Vfunc_leading_zero32__3429__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3429__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3429__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3429__count)));
                            vlSelf->__Vfunc_leading_zero32__3429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3429__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3429__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3429__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3429__count)));
                            vlSelf->__Vfunc_leading_zero32__3429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3429__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3429__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3429__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3429__count)));
                            vlSelf->__Vfunc_leading_zero32__3429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3429__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3429__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3429__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3429__count)));
                            vlSelf->__Vfunc_leading_zero32__3429__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3429__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3429__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3429__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3429__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3429__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3429__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3429__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3429__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3441__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__142__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3441__part 
                            = vlSelf->__Vfunc_leading_zero32__3441__value;
                        vlSelf->__Vfunc_leading_zero32__3441__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3441__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3441__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3441__count)));
                            vlSelf->__Vfunc_leading_zero32__3441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3441__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3441__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3441__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3441__count)));
                            vlSelf->__Vfunc_leading_zero32__3441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3441__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3441__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3441__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3441__count)));
                            vlSelf->__Vfunc_leading_zero32__3441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3441__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3441__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3441__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3441__count)));
                            vlSelf->__Vfunc_leading_zero32__3441__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3441__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3441__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3441__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3441__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3441__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3441__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3441__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3441__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3453__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__143__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3453__part 
                            = vlSelf->__Vfunc_leading_zero32__3453__value;
                        vlSelf->__Vfunc_leading_zero32__3453__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3453__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3453__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3453__count)));
                            vlSelf->__Vfunc_leading_zero32__3453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3453__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3453__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3453__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3453__count)));
                            vlSelf->__Vfunc_leading_zero32__3453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3453__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3453__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3453__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3453__count)));
                            vlSelf->__Vfunc_leading_zero32__3453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3453__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3453__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3453__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3453__count)));
                            vlSelf->__Vfunc_leading_zero32__3453__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3453__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3453__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3453__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3453__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3453__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3453__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3453__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3453__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3465__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__144__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3465__part 
                            = vlSelf->__Vfunc_leading_zero32__3465__value;
                        vlSelf->__Vfunc_leading_zero32__3465__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3465__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3465__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3465__count)));
                            vlSelf->__Vfunc_leading_zero32__3465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3465__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3465__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3465__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3465__count)));
                            vlSelf->__Vfunc_leading_zero32__3465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3465__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3465__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3465__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3465__count)));
                            vlSelf->__Vfunc_leading_zero32__3465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3465__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3465__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3465__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3465__count)));
                            vlSelf->__Vfunc_leading_zero32__3465__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3465__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3465__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3465__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3465__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3465__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3465__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3465__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3465__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3477__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__145__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3477__part 
                            = vlSelf->__Vfunc_leading_zero32__3477__value;
                        vlSelf->__Vfunc_leading_zero32__3477__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3477__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3477__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3477__count)));
                            vlSelf->__Vfunc_leading_zero32__3477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3477__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3477__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3477__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3477__count)));
                            vlSelf->__Vfunc_leading_zero32__3477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3477__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3477__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3477__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3477__count)));
                            vlSelf->__Vfunc_leading_zero32__3477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3477__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3477__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3477__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3477__count)));
                            vlSelf->__Vfunc_leading_zero32__3477__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3477__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3477__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3477__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3477__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3477__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3477__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3477__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3477__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3489__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__146__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3489__part 
                            = vlSelf->__Vfunc_leading_zero32__3489__value;
                        vlSelf->__Vfunc_leading_zero32__3489__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3489__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3489__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3489__count)));
                            vlSelf->__Vfunc_leading_zero32__3489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3489__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3489__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3489__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3489__count)));
                            vlSelf->__Vfunc_leading_zero32__3489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3489__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3489__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3489__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3489__count)));
                            vlSelf->__Vfunc_leading_zero32__3489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3489__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3489__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3489__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3489__count)));
                            vlSelf->__Vfunc_leading_zero32__3489__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3489__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3489__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3489__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3489__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3489__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3489__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3489__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3489__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3501__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__147__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3501__part 
                            = vlSelf->__Vfunc_leading_zero32__3501__value;
                        vlSelf->__Vfunc_leading_zero32__3501__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3501__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3501__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3501__count)));
                            vlSelf->__Vfunc_leading_zero32__3501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3501__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3501__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3501__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3501__count)));
                            vlSelf->__Vfunc_leading_zero32__3501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3501__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3501__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3501__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3501__count)));
                            vlSelf->__Vfunc_leading_zero32__3501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3501__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3501__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3501__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3501__count)));
                            vlSelf->__Vfunc_leading_zero32__3501__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3501__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3501__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3501__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3501__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3501__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3501__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3501__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3501__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3513__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__148__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3513__part 
                            = vlSelf->__Vfunc_leading_zero32__3513__value;
                        vlSelf->__Vfunc_leading_zero32__3513__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3513__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3513__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3513__count)));
                            vlSelf->__Vfunc_leading_zero32__3513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3513__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3513__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3513__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3513__count)));
                            vlSelf->__Vfunc_leading_zero32__3513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3513__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3513__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3513__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3513__count)));
                            vlSelf->__Vfunc_leading_zero32__3513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3513__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3513__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3513__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3513__count)));
                            vlSelf->__Vfunc_leading_zero32__3513__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3513__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3513__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3513__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3513__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3513__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3513__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3513__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3513__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3525__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__149__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3525__part 
                            = vlSelf->__Vfunc_leading_zero32__3525__value;
                        vlSelf->__Vfunc_leading_zero32__3525__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3525__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3525__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3525__count)));
                            vlSelf->__Vfunc_leading_zero32__3525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3525__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3525__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3525__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3525__count)));
                            vlSelf->__Vfunc_leading_zero32__3525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3525__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3525__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3525__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3525__count)));
                            vlSelf->__Vfunc_leading_zero32__3525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3525__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3525__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3525__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3525__count)));
                            vlSelf->__Vfunc_leading_zero32__3525__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3525__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3525__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3525__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3525__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3525__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3525__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3525__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3525__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3537__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__150__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3537__part 
                            = vlSelf->__Vfunc_leading_zero32__3537__value;
                        vlSelf->__Vfunc_leading_zero32__3537__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3537__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3537__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3537__count)));
                            vlSelf->__Vfunc_leading_zero32__3537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3537__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3537__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3537__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3537__count)));
                            vlSelf->__Vfunc_leading_zero32__3537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3537__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3537__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3537__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3537__count)));
                            vlSelf->__Vfunc_leading_zero32__3537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3537__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3537__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3537__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3537__count)));
                            vlSelf->__Vfunc_leading_zero32__3537__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3537__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3537__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3537__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3537__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3537__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3537__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3537__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3537__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3549__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__151__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3549__part 
                            = vlSelf->__Vfunc_leading_zero32__3549__value;
                        vlSelf->__Vfunc_leading_zero32__3549__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3549__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3549__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3549__count)));
                            vlSelf->__Vfunc_leading_zero32__3549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3549__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3549__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3549__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3549__count)));
                            vlSelf->__Vfunc_leading_zero32__3549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3549__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3549__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3549__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3549__count)));
                            vlSelf->__Vfunc_leading_zero32__3549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3549__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3549__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3549__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3549__count)));
                            vlSelf->__Vfunc_leading_zero32__3549__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3549__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3549__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3549__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3549__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3549__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3549__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3549__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3549__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3561__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__152__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3561__part 
                            = vlSelf->__Vfunc_leading_zero32__3561__value;
                        vlSelf->__Vfunc_leading_zero32__3561__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3561__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3561__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3561__count)));
                            vlSelf->__Vfunc_leading_zero32__3561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3561__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3561__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3561__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3561__count)));
                            vlSelf->__Vfunc_leading_zero32__3561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3561__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3561__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3561__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3561__count)));
                            vlSelf->__Vfunc_leading_zero32__3561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3561__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3561__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3561__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3561__count)));
                            vlSelf->__Vfunc_leading_zero32__3561__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3561__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3561__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3561__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3561__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3561__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3561__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3561__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3561__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3573__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__153__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3573__part 
                            = vlSelf->__Vfunc_leading_zero32__3573__value;
                        vlSelf->__Vfunc_leading_zero32__3573__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3573__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3573__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3573__count)));
                            vlSelf->__Vfunc_leading_zero32__3573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3573__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3573__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3573__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3573__count)));
                            vlSelf->__Vfunc_leading_zero32__3573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3573__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3573__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3573__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3573__count)));
                            vlSelf->__Vfunc_leading_zero32__3573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3573__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3573__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3573__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3573__count)));
                            vlSelf->__Vfunc_leading_zero32__3573__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3573__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3573__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3573__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3573__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3573__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3573__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3573__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3573__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3585__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__154__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3585__part 
                            = vlSelf->__Vfunc_leading_zero32__3585__value;
                        vlSelf->__Vfunc_leading_zero32__3585__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3585__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3585__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3585__count)));
                            vlSelf->__Vfunc_leading_zero32__3585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3585__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3585__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3585__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3585__count)));
                            vlSelf->__Vfunc_leading_zero32__3585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3585__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3585__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3585__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3585__count)));
                            vlSelf->__Vfunc_leading_zero32__3585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3585__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3585__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3585__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3585__count)));
                            vlSelf->__Vfunc_leading_zero32__3585__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3585__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3585__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3585__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3585__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3585__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3585__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3585__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3585__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3597__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__155__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3597__part 
                            = vlSelf->__Vfunc_leading_zero32__3597__value;
                        vlSelf->__Vfunc_leading_zero32__3597__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3597__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3597__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3597__count)));
                            vlSelf->__Vfunc_leading_zero32__3597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3597__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3597__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3597__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3597__count)));
                            vlSelf->__Vfunc_leading_zero32__3597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3597__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3597__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3597__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3597__count)));
                            vlSelf->__Vfunc_leading_zero32__3597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3597__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3597__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3597__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3597__count)));
                            vlSelf->__Vfunc_leading_zero32__3597__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3597__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3597__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3597__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3597__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3597__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3597__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3597__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3597__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3609__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__156__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3609__part 
                            = vlSelf->__Vfunc_leading_zero32__3609__value;
                        vlSelf->__Vfunc_leading_zero32__3609__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3609__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3609__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3609__count)));
                            vlSelf->__Vfunc_leading_zero32__3609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3609__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3609__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3609__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3609__count)));
                            vlSelf->__Vfunc_leading_zero32__3609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3609__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3609__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3609__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3609__count)));
                            vlSelf->__Vfunc_leading_zero32__3609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3609__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3609__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3609__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3609__count)));
                            vlSelf->__Vfunc_leading_zero32__3609__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3609__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3609__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3609__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3609__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3609__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3609__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3609__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3609__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3621__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__157__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3621__part 
                            = vlSelf->__Vfunc_leading_zero32__3621__value;
                        vlSelf->__Vfunc_leading_zero32__3621__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3621__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3621__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3621__count)));
                            vlSelf->__Vfunc_leading_zero32__3621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3621__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3621__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3621__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3621__count)));
                            vlSelf->__Vfunc_leading_zero32__3621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3621__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3621__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3621__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3621__count)));
                            vlSelf->__Vfunc_leading_zero32__3621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3621__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3621__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3621__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3621__count)));
                            vlSelf->__Vfunc_leading_zero32__3621__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3621__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3621__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3621__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3621__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3621__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3621__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3621__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3621__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3633__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__158__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3633__part 
                            = vlSelf->__Vfunc_leading_zero32__3633__value;
                        vlSelf->__Vfunc_leading_zero32__3633__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3633__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3633__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3633__count)));
                            vlSelf->__Vfunc_leading_zero32__3633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3633__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3633__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3633__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3633__count)));
                            vlSelf->__Vfunc_leading_zero32__3633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3633__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3633__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3633__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3633__count)));
                            vlSelf->__Vfunc_leading_zero32__3633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3633__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3633__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3633__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3633__count)));
                            vlSelf->__Vfunc_leading_zero32__3633__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3633__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3633__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3633__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3633__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3633__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3633__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3633__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3633__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3645__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__159__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3645__part 
                            = vlSelf->__Vfunc_leading_zero32__3645__value;
                        vlSelf->__Vfunc_leading_zero32__3645__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3645__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3645__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3645__count)));
                            vlSelf->__Vfunc_leading_zero32__3645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3645__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3645__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3645__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3645__count)));
                            vlSelf->__Vfunc_leading_zero32__3645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3645__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3645__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3645__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3645__count)));
                            vlSelf->__Vfunc_leading_zero32__3645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3645__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3645__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3645__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3645__count)));
                            vlSelf->__Vfunc_leading_zero32__3645__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3645__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3645__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3645__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3645__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3645__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3645__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3645__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3645__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3657__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__160__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3657__part 
                            = vlSelf->__Vfunc_leading_zero32__3657__value;
                        vlSelf->__Vfunc_leading_zero32__3657__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3657__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3657__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3657__count)));
                            vlSelf->__Vfunc_leading_zero32__3657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3657__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3657__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3657__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3657__count)));
                            vlSelf->__Vfunc_leading_zero32__3657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3657__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3657__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3657__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3657__count)));
                            vlSelf->__Vfunc_leading_zero32__3657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3657__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3657__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3657__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3657__count)));
                            vlSelf->__Vfunc_leading_zero32__3657__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3657__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3657__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3657__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3657__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3657__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3657__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3657__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3657__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3669__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__161__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3669__part 
                            = vlSelf->__Vfunc_leading_zero32__3669__value;
                        vlSelf->__Vfunc_leading_zero32__3669__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3669__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3669__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3669__count)));
                            vlSelf->__Vfunc_leading_zero32__3669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3669__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3669__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3669__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3669__count)));
                            vlSelf->__Vfunc_leading_zero32__3669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3669__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3669__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3669__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3669__count)));
                            vlSelf->__Vfunc_leading_zero32__3669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3669__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3669__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3669__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3669__count)));
                            vlSelf->__Vfunc_leading_zero32__3669__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3669__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3669__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3669__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3669__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3669__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3669__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3669__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3669__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3681__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__162__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3681__part 
                            = vlSelf->__Vfunc_leading_zero32__3681__value;
                        vlSelf->__Vfunc_leading_zero32__3681__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3681__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3681__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3681__count)));
                            vlSelf->__Vfunc_leading_zero32__3681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3681__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3681__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3681__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3681__count)));
                            vlSelf->__Vfunc_leading_zero32__3681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3681__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3681__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3681__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3681__count)));
                            vlSelf->__Vfunc_leading_zero32__3681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3681__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3681__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3681__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3681__count)));
                            vlSelf->__Vfunc_leading_zero32__3681__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3681__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3681__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3681__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3681__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3681__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3681__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3681__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3681__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3693__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__163__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3693__part 
                            = vlSelf->__Vfunc_leading_zero32__3693__value;
                        vlSelf->__Vfunc_leading_zero32__3693__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3693__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3693__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3693__count)));
                            vlSelf->__Vfunc_leading_zero32__3693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3693__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3693__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3693__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3693__count)));
                            vlSelf->__Vfunc_leading_zero32__3693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3693__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3693__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3693__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3693__count)));
                            vlSelf->__Vfunc_leading_zero32__3693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3693__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3693__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3693__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3693__count)));
                            vlSelf->__Vfunc_leading_zero32__3693__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3693__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3693__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3693__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3693__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3693__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3693__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3693__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3693__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3705__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__164__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3705__part 
                            = vlSelf->__Vfunc_leading_zero32__3705__value;
                        vlSelf->__Vfunc_leading_zero32__3705__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3705__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3705__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3705__count)));
                            vlSelf->__Vfunc_leading_zero32__3705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3705__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3705__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3705__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3705__count)));
                            vlSelf->__Vfunc_leading_zero32__3705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3705__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3705__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3705__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3705__count)));
                            vlSelf->__Vfunc_leading_zero32__3705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3705__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3705__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3705__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3705__count)));
                            vlSelf->__Vfunc_leading_zero32__3705__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3705__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3705__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3705__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3705__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3705__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3705__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3705__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3705__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3717__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__165__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3717__part 
                            = vlSelf->__Vfunc_leading_zero32__3717__value;
                        vlSelf->__Vfunc_leading_zero32__3717__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3717__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3717__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3717__count)));
                            vlSelf->__Vfunc_leading_zero32__3717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3717__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3717__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3717__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3717__count)));
                            vlSelf->__Vfunc_leading_zero32__3717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3717__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3717__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3717__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3717__count)));
                            vlSelf->__Vfunc_leading_zero32__3717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3717__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3717__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3717__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3717__count)));
                            vlSelf->__Vfunc_leading_zero32__3717__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3717__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3717__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3717__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3717__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3717__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3717__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3717__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3717__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3729__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__166__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3729__part 
                            = vlSelf->__Vfunc_leading_zero32__3729__value;
                        vlSelf->__Vfunc_leading_zero32__3729__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3729__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3729__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3729__count)));
                            vlSelf->__Vfunc_leading_zero32__3729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3729__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3729__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3729__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3729__count)));
                            vlSelf->__Vfunc_leading_zero32__3729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3729__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3729__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3729__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3729__count)));
                            vlSelf->__Vfunc_leading_zero32__3729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3729__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3729__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3729__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3729__count)));
                            vlSelf->__Vfunc_leading_zero32__3729__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3729__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3729__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3729__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3729__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3729__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3729__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3729__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3729__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3741__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__167__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3741__part 
                            = vlSelf->__Vfunc_leading_zero32__3741__value;
                        vlSelf->__Vfunc_leading_zero32__3741__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3741__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3741__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3741__count)));
                            vlSelf->__Vfunc_leading_zero32__3741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3741__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3741__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3741__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3741__count)));
                            vlSelf->__Vfunc_leading_zero32__3741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3741__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3741__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3741__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3741__count)));
                            vlSelf->__Vfunc_leading_zero32__3741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3741__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3741__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3741__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3741__count)));
                            vlSelf->__Vfunc_leading_zero32__3741__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3741__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3741__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3741__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3741__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3741__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3741__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3741__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3741__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3753__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__168__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3753__part 
                            = vlSelf->__Vfunc_leading_zero32__3753__value;
                        vlSelf->__Vfunc_leading_zero32__3753__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3753__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3753__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3753__count)));
                            vlSelf->__Vfunc_leading_zero32__3753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3753__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3753__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3753__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3753__count)));
                            vlSelf->__Vfunc_leading_zero32__3753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3753__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3753__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3753__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3753__count)));
                            vlSelf->__Vfunc_leading_zero32__3753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3753__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3753__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3753__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3753__count)));
                            vlSelf->__Vfunc_leading_zero32__3753__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3753__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3753__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3753__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3753__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3753__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3753__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3753__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3753__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3765__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__169__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3765__part 
                            = vlSelf->__Vfunc_leading_zero32__3765__value;
                        vlSelf->__Vfunc_leading_zero32__3765__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3765__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3765__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3765__count)));
                            vlSelf->__Vfunc_leading_zero32__3765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3765__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3765__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3765__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3765__count)));
                            vlSelf->__Vfunc_leading_zero32__3765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3765__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3765__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3765__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3765__count)));
                            vlSelf->__Vfunc_leading_zero32__3765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3765__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3765__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3765__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3765__count)));
                            vlSelf->__Vfunc_leading_zero32__3765__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3765__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3765__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3765__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3765__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3765__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3765__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3765__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3765__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3777__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__170__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3777__part 
                            = vlSelf->__Vfunc_leading_zero32__3777__value;
                        vlSelf->__Vfunc_leading_zero32__3777__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3777__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3777__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3777__count)));
                            vlSelf->__Vfunc_leading_zero32__3777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3777__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3777__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3777__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3777__count)));
                            vlSelf->__Vfunc_leading_zero32__3777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3777__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3777__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3777__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3777__count)));
                            vlSelf->__Vfunc_leading_zero32__3777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3777__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3777__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3777__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3777__count)));
                            vlSelf->__Vfunc_leading_zero32__3777__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3777__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3777__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3777__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3777__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3777__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3777__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3777__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3777__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3789__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__171__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3789__part 
                            = vlSelf->__Vfunc_leading_zero32__3789__value;
                        vlSelf->__Vfunc_leading_zero32__3789__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3789__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3789__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3789__count)));
                            vlSelf->__Vfunc_leading_zero32__3789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3789__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3789__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3789__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3789__count)));
                            vlSelf->__Vfunc_leading_zero32__3789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3789__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3789__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3789__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3789__count)));
                            vlSelf->__Vfunc_leading_zero32__3789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3789__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3789__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3789__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3789__count)));
                            vlSelf->__Vfunc_leading_zero32__3789__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3789__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3789__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3789__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3789__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3789__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3789__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3789__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3789__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3801__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__172__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3801__part 
                            = vlSelf->__Vfunc_leading_zero32__3801__value;
                        vlSelf->__Vfunc_leading_zero32__3801__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3801__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                            vlSelf->__Vfunc_leading_zero32__3801__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3801__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3801__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3801__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3801__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3801__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3801__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3801__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3801__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3813__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__173__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3813__part 
                            = vlSelf->__Vfunc_leading_zero32__3813__value;
                        vlSelf->__Vfunc_leading_zero32__3813__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3813__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                            vlSelf->__Vfunc_leading_zero32__3813__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3813__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3813__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3813__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3813__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3813__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3813__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3813__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3813__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3825__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__174__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3825__part 
                            = vlSelf->__Vfunc_leading_zero32__3825__value;
                        vlSelf->__Vfunc_leading_zero32__3825__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3825__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                            vlSelf->__Vfunc_leading_zero32__3825__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3825__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3825__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3825__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3825__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3825__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3825__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3825__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3825__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3837__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__175__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3837__part 
                            = vlSelf->__Vfunc_leading_zero32__3837__value;
                        vlSelf->__Vfunc_leading_zero32__3837__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3837__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                            vlSelf->__Vfunc_leading_zero32__3837__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3837__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3837__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3837__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3837__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3837__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3837__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3837__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3837__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3849__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__176__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3849__part 
                            = vlSelf->__Vfunc_leading_zero32__3849__value;
                        vlSelf->__Vfunc_leading_zero32__3849__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3849__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                            vlSelf->__Vfunc_leading_zero32__3849__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3849__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3849__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3849__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3849__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3849__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3849__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3849__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3849__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3861__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__177__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3861__part 
                            = vlSelf->__Vfunc_leading_zero32__3861__value;
                        vlSelf->__Vfunc_leading_zero32__3861__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3861__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                            vlSelf->__Vfunc_leading_zero32__3861__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3861__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3861__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3861__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3861__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3861__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3861__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3861__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3861__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3873__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__178__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3873__part 
                            = vlSelf->__Vfunc_leading_zero32__3873__value;
                        vlSelf->__Vfunc_leading_zero32__3873__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3873__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                            vlSelf->__Vfunc_leading_zero32__3873__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3873__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3873__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3873__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3873__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3873__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3873__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3873__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3873__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3885__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__179__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3885__part 
                            = vlSelf->__Vfunc_leading_zero32__3885__value;
                        vlSelf->__Vfunc_leading_zero32__3885__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3885__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                            vlSelf->__Vfunc_leading_zero32__3885__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3885__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3885__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3885__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3885__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3885__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3885__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3885__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3885__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3897__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__180__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3897__part 
                            = vlSelf->__Vfunc_leading_zero32__3897__value;
                        vlSelf->__Vfunc_leading_zero32__3897__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3897__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                            vlSelf->__Vfunc_leading_zero32__3897__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3897__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3897__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3897__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3897__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3897__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3897__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3897__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3897__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3909__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__181__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3909__part 
                            = vlSelf->__Vfunc_leading_zero32__3909__value;
                        vlSelf->__Vfunc_leading_zero32__3909__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3909__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                            vlSelf->__Vfunc_leading_zero32__3909__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3909__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3909__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3909__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3909__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3909__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3909__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3909__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3909__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3921__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__182__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3921__part 
                            = vlSelf->__Vfunc_leading_zero32__3921__value;
                        vlSelf->__Vfunc_leading_zero32__3921__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3921__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                            vlSelf->__Vfunc_leading_zero32__3921__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3921__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3921__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3921__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3921__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3921__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3921__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3921__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3921__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3933__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__183__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3933__part 
                            = vlSelf->__Vfunc_leading_zero32__3933__value;
                        vlSelf->__Vfunc_leading_zero32__3933__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3933__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                            vlSelf->__Vfunc_leading_zero32__3933__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3933__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3933__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3933__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3933__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3933__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3933__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3933__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3933__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3945__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__184__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3945__part 
                            = vlSelf->__Vfunc_leading_zero32__3945__value;
                        vlSelf->__Vfunc_leading_zero32__3945__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3945__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                            vlSelf->__Vfunc_leading_zero32__3945__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3945__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3945__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3945__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3945__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3945__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3945__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3945__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3945__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3957__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__185__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3957__part 
                            = vlSelf->__Vfunc_leading_zero32__3957__value;
                        vlSelf->__Vfunc_leading_zero32__3957__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3957__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                            vlSelf->__Vfunc_leading_zero32__3957__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3957__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3957__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3957__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3957__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3957__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3957__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3957__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3957__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3969__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__186__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3969__part 
                            = vlSelf->__Vfunc_leading_zero32__3969__value;
                        vlSelf->__Vfunc_leading_zero32__3969__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3969__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                            vlSelf->__Vfunc_leading_zero32__3969__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3969__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3969__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3969__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3969__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3969__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3969__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3969__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3969__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3981__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__187__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3981__part 
                            = vlSelf->__Vfunc_leading_zero32__3981__value;
                        vlSelf->__Vfunc_leading_zero32__3981__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3981__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                            vlSelf->__Vfunc_leading_zero32__3981__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3981__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3981__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3981__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3981__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3981__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3981__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3981__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3981__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__3993__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__188__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__3993__part 
                            = vlSelf->__Vfunc_leading_zero32__3993__value;
                        vlSelf->__Vfunc_leading_zero32__3993__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__3993__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                            vlSelf->__Vfunc_leading_zero32__3993__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__3993__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__3993__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__3993__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__3993__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__3993__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__3993__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__3993__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__3993__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4005__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__189__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4005__part 
                            = vlSelf->__Vfunc_leading_zero32__4005__value;
                        vlSelf->__Vfunc_leading_zero32__4005__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4005__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                            vlSelf->__Vfunc_leading_zero32__4005__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4005__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4005__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4005__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4005__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4005__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4005__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4005__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4005__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4017__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__190__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4017__part 
                            = vlSelf->__Vfunc_leading_zero32__4017__value;
                        vlSelf->__Vfunc_leading_zero32__4017__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4017__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                            vlSelf->__Vfunc_leading_zero32__4017__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4017__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4017__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4017__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4017__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4017__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4017__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4017__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4017__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4029__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__191__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4029__part 
                            = vlSelf->__Vfunc_leading_zero32__4029__value;
                        vlSelf->__Vfunc_leading_zero32__4029__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4029__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                            vlSelf->__Vfunc_leading_zero32__4029__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4029__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4029__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4029__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4029__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4029__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4029__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4029__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4029__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4041__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__192__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4041__part 
                            = vlSelf->__Vfunc_leading_zero32__4041__value;
                        vlSelf->__Vfunc_leading_zero32__4041__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4041__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                            vlSelf->__Vfunc_leading_zero32__4041__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4041__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4041__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4041__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4041__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4041__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4041__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4041__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4041__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4053__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__193__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4053__part 
                            = vlSelf->__Vfunc_leading_zero32__4053__value;
                        vlSelf->__Vfunc_leading_zero32__4053__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4053__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                            vlSelf->__Vfunc_leading_zero32__4053__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4053__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4053__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4053__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4053__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4053__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4053__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4053__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4053__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4065__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__194__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4065__part 
                            = vlSelf->__Vfunc_leading_zero32__4065__value;
                        vlSelf->__Vfunc_leading_zero32__4065__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4065__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                            vlSelf->__Vfunc_leading_zero32__4065__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4065__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4065__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4065__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4065__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4065__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4065__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4065__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4065__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4077__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__195__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4077__part 
                            = vlSelf->__Vfunc_leading_zero32__4077__value;
                        vlSelf->__Vfunc_leading_zero32__4077__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4077__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                            vlSelf->__Vfunc_leading_zero32__4077__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4077__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4077__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4077__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4077__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4077__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4077__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4077__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4077__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4089__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__196__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4089__part 
                            = vlSelf->__Vfunc_leading_zero32__4089__value;
                        vlSelf->__Vfunc_leading_zero32__4089__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4089__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                            vlSelf->__Vfunc_leading_zero32__4089__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4089__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4089__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4089__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4089__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4089__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4089__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4089__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4089__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4101__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__197__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4101__part 
                            = vlSelf->__Vfunc_leading_zero32__4101__value;
                        vlSelf->__Vfunc_leading_zero32__4101__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4101__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                            vlSelf->__Vfunc_leading_zero32__4101__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4101__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4101__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4101__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4101__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4101__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4101__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4101__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4101__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4113__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__198__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4113__part 
                            = vlSelf->__Vfunc_leading_zero32__4113__value;
                        vlSelf->__Vfunc_leading_zero32__4113__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4113__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                            vlSelf->__Vfunc_leading_zero32__4113__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4113__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4113__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4113__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4113__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4113__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4113__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4113__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4113__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4125__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__199__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4125__part 
                            = vlSelf->__Vfunc_leading_zero32__4125__value;
                        vlSelf->__Vfunc_leading_zero32__4125__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4125__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                            vlSelf->__Vfunc_leading_zero32__4125__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4125__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4125__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4125__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4125__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4125__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4125__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4125__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4125__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4137__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__200__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4137__part 
                            = vlSelf->__Vfunc_leading_zero32__4137__value;
                        vlSelf->__Vfunc_leading_zero32__4137__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4137__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                            vlSelf->__Vfunc_leading_zero32__4137__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4137__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4137__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4137__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4137__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4137__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4137__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4137__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4137__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4149__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__201__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4149__part 
                            = vlSelf->__Vfunc_leading_zero32__4149__value;
                        vlSelf->__Vfunc_leading_zero32__4149__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4149__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                            vlSelf->__Vfunc_leading_zero32__4149__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4149__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4149__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4149__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4149__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4149__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4149__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4149__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4149__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4161__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__202__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4161__part 
                            = vlSelf->__Vfunc_leading_zero32__4161__value;
                        vlSelf->__Vfunc_leading_zero32__4161__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4161__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                            vlSelf->__Vfunc_leading_zero32__4161__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4161__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4161__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4161__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4161__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4161__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4161__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4161__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4161__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4173__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__203__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4173__part 
                            = vlSelf->__Vfunc_leading_zero32__4173__value;
                        vlSelf->__Vfunc_leading_zero32__4173__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4173__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                            vlSelf->__Vfunc_leading_zero32__4173__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4173__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4173__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4173__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4173__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4173__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4173__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4173__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4173__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4185__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__204__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4185__part 
                            = vlSelf->__Vfunc_leading_zero32__4185__value;
                        vlSelf->__Vfunc_leading_zero32__4185__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4185__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                            vlSelf->__Vfunc_leading_zero32__4185__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4185__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4185__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4185__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4185__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4185__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4185__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4185__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4185__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4197__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__205__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4197__part 
                            = vlSelf->__Vfunc_leading_zero32__4197__value;
                        vlSelf->__Vfunc_leading_zero32__4197__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4197__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                            vlSelf->__Vfunc_leading_zero32__4197__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4197__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4197__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4197__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4197__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4197__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4197__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4197__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4197__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4209__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__206__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4209__part 
                            = vlSelf->__Vfunc_leading_zero32__4209__value;
                        vlSelf->__Vfunc_leading_zero32__4209__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4209__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                            vlSelf->__Vfunc_leading_zero32__4209__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4209__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4209__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4209__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4209__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4209__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4209__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4209__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4209__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4221__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__207__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4221__part 
                            = vlSelf->__Vfunc_leading_zero32__4221__value;
                        vlSelf->__Vfunc_leading_zero32__4221__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4221__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                            vlSelf->__Vfunc_leading_zero32__4221__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4221__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4221__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4221__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4221__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4221__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4221__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4221__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4221__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4233__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__208__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4233__part 
                            = vlSelf->__Vfunc_leading_zero32__4233__value;
                        vlSelf->__Vfunc_leading_zero32__4233__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4233__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                            vlSelf->__Vfunc_leading_zero32__4233__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4233__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4233__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4233__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4233__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4233__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4233__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4233__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4233__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4245__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__209__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4245__part 
                            = vlSelf->__Vfunc_leading_zero32__4245__value;
                        vlSelf->__Vfunc_leading_zero32__4245__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4245__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                            vlSelf->__Vfunc_leading_zero32__4245__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4245__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4245__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4245__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4245__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4245__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4245__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4245__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4245__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4257__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__210__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4257__part 
                            = vlSelf->__Vfunc_leading_zero32__4257__value;
                        vlSelf->__Vfunc_leading_zero32__4257__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4257__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                            vlSelf->__Vfunc_leading_zero32__4257__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4257__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4257__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4257__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4257__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4257__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4257__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4257__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4257__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4269__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__211__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4269__part 
                            = vlSelf->__Vfunc_leading_zero32__4269__value;
                        vlSelf->__Vfunc_leading_zero32__4269__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4269__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                            vlSelf->__Vfunc_leading_zero32__4269__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4269__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4269__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4269__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4269__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4269__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4269__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4269__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4269__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4281__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__212__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4281__part 
                            = vlSelf->__Vfunc_leading_zero32__4281__value;
                        vlSelf->__Vfunc_leading_zero32__4281__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4281__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                            vlSelf->__Vfunc_leading_zero32__4281__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4281__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4281__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4281__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4281__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4281__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4281__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4281__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4281__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4293__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__213__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4293__part 
                            = vlSelf->__Vfunc_leading_zero32__4293__value;
                        vlSelf->__Vfunc_leading_zero32__4293__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4293__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                            vlSelf->__Vfunc_leading_zero32__4293__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4293__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4293__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4293__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4293__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4293__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4293__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4293__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4293__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4305__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__214__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4305__part 
                            = vlSelf->__Vfunc_leading_zero32__4305__value;
                        vlSelf->__Vfunc_leading_zero32__4305__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4305__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                            vlSelf->__Vfunc_leading_zero32__4305__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4305__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4305__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4305__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4305__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4305__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4305__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4305__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4305__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4317__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__215__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4317__part 
                            = vlSelf->__Vfunc_leading_zero32__4317__value;
                        vlSelf->__Vfunc_leading_zero32__4317__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4317__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                            vlSelf->__Vfunc_leading_zero32__4317__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4317__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4317__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4317__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4317__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4317__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4317__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4317__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4317__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4329__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__216__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4329__part 
                            = vlSelf->__Vfunc_leading_zero32__4329__value;
                        vlSelf->__Vfunc_leading_zero32__4329__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4329__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                            vlSelf->__Vfunc_leading_zero32__4329__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4329__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4329__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4329__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4329__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4329__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4329__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4329__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4329__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4341__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__217__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4341__part 
                            = vlSelf->__Vfunc_leading_zero32__4341__value;
                        vlSelf->__Vfunc_leading_zero32__4341__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4341__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                            vlSelf->__Vfunc_leading_zero32__4341__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4341__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4341__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4341__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4341__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4341__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4341__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4341__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4341__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4353__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__218__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4353__part 
                            = vlSelf->__Vfunc_leading_zero32__4353__value;
                        vlSelf->__Vfunc_leading_zero32__4353__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4353__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4353__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4353__count)));
                            vlSelf->__Vfunc_leading_zero32__4353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4353__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4353__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4353__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4353__count)));
                            vlSelf->__Vfunc_leading_zero32__4353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4353__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4353__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4353__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4353__count)));
                            vlSelf->__Vfunc_leading_zero32__4353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4353__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4353__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4353__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4353__count)));
                            vlSelf->__Vfunc_leading_zero32__4353__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4353__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4353__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4353__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4353__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4353__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4353__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4353__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4353__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4365__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__219__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4365__part 
                            = vlSelf->__Vfunc_leading_zero32__4365__value;
                        vlSelf->__Vfunc_leading_zero32__4365__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4365__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4365__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4365__count)));
                            vlSelf->__Vfunc_leading_zero32__4365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4365__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4365__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4365__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4365__count)));
                            vlSelf->__Vfunc_leading_zero32__4365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4365__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4365__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4365__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4365__count)));
                            vlSelf->__Vfunc_leading_zero32__4365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4365__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4365__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4365__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4365__count)));
                            vlSelf->__Vfunc_leading_zero32__4365__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4365__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4365__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4365__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4365__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4365__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4365__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4365__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4365__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4377__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__220__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4377__part 
                            = vlSelf->__Vfunc_leading_zero32__4377__value;
                        vlSelf->__Vfunc_leading_zero32__4377__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4377__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4377__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4377__count)));
                            vlSelf->__Vfunc_leading_zero32__4377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4377__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4377__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4377__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4377__count)));
                            vlSelf->__Vfunc_leading_zero32__4377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4377__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4377__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4377__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4377__count)));
                            vlSelf->__Vfunc_leading_zero32__4377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4377__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4377__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4377__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4377__count)));
                            vlSelf->__Vfunc_leading_zero32__4377__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4377__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4377__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4377__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4377__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4377__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4377__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4377__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4377__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4389__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__221__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4389__part 
                            = vlSelf->__Vfunc_leading_zero32__4389__value;
                        vlSelf->__Vfunc_leading_zero32__4389__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4389__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4389__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4389__count)));
                            vlSelf->__Vfunc_leading_zero32__4389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4389__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4389__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4389__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4389__count)));
                            vlSelf->__Vfunc_leading_zero32__4389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4389__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4389__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4389__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4389__count)));
                            vlSelf->__Vfunc_leading_zero32__4389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4389__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4389__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4389__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4389__count)));
                            vlSelf->__Vfunc_leading_zero32__4389__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4389__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4389__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4389__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4389__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4389__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4389__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4389__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4389__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4401__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__222__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4401__part 
                            = vlSelf->__Vfunc_leading_zero32__4401__value;
                        vlSelf->__Vfunc_leading_zero32__4401__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4401__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4401__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4401__count)));
                            vlSelf->__Vfunc_leading_zero32__4401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4401__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4401__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4401__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4401__count)));
                            vlSelf->__Vfunc_leading_zero32__4401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4401__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4401__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4401__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4401__count)));
                            vlSelf->__Vfunc_leading_zero32__4401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4401__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4401__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4401__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4401__count)));
                            vlSelf->__Vfunc_leading_zero32__4401__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4401__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4401__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4401__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4401__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4401__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4401__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4401__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4401__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4413__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__223__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4413__part 
                            = vlSelf->__Vfunc_leading_zero32__4413__value;
                        vlSelf->__Vfunc_leading_zero32__4413__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4413__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4413__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4413__count)));
                            vlSelf->__Vfunc_leading_zero32__4413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4413__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4413__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4413__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4413__count)));
                            vlSelf->__Vfunc_leading_zero32__4413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4413__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4413__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4413__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4413__count)));
                            vlSelf->__Vfunc_leading_zero32__4413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4413__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4413__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4413__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4413__count)));
                            vlSelf->__Vfunc_leading_zero32__4413__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4413__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4413__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4413__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4413__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4413__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4413__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4413__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4413__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4425__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__224__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4425__part 
                            = vlSelf->__Vfunc_leading_zero32__4425__value;
                        vlSelf->__Vfunc_leading_zero32__4425__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4425__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4425__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4425__count)));
                            vlSelf->__Vfunc_leading_zero32__4425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4425__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4425__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4425__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4425__count)));
                            vlSelf->__Vfunc_leading_zero32__4425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4425__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4425__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4425__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4425__count)));
                            vlSelf->__Vfunc_leading_zero32__4425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4425__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4425__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4425__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4425__count)));
                            vlSelf->__Vfunc_leading_zero32__4425__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4425__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4425__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4425__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4425__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4425__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4425__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4425__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4425__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4437__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__225__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4437__part 
                            = vlSelf->__Vfunc_leading_zero32__4437__value;
                        vlSelf->__Vfunc_leading_zero32__4437__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4437__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4437__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4437__count)));
                            vlSelf->__Vfunc_leading_zero32__4437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4437__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4437__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4437__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4437__count)));
                            vlSelf->__Vfunc_leading_zero32__4437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4437__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4437__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4437__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4437__count)));
                            vlSelf->__Vfunc_leading_zero32__4437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4437__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4437__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4437__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4437__count)));
                            vlSelf->__Vfunc_leading_zero32__4437__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4437__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4437__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4437__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4437__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4437__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4437__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4437__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4437__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4449__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__226__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4449__part 
                            = vlSelf->__Vfunc_leading_zero32__4449__value;
                        vlSelf->__Vfunc_leading_zero32__4449__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4449__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4449__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4449__count)));
                            vlSelf->__Vfunc_leading_zero32__4449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4449__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4449__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4449__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4449__count)));
                            vlSelf->__Vfunc_leading_zero32__4449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4449__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4449__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4449__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4449__count)));
                            vlSelf->__Vfunc_leading_zero32__4449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4449__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4449__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4449__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4449__count)));
                            vlSelf->__Vfunc_leading_zero32__4449__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4449__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4449__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4449__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4449__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4449__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4449__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4449__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4449__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4461__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__227__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4461__part 
                            = vlSelf->__Vfunc_leading_zero32__4461__value;
                        vlSelf->__Vfunc_leading_zero32__4461__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4461__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4461__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4461__count)));
                            vlSelf->__Vfunc_leading_zero32__4461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4461__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4461__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4461__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4461__count)));
                            vlSelf->__Vfunc_leading_zero32__4461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4461__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4461__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4461__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4461__count)));
                            vlSelf->__Vfunc_leading_zero32__4461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4461__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4461__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4461__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4461__count)));
                            vlSelf->__Vfunc_leading_zero32__4461__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4461__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4461__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4461__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4461__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4461__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4461__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4461__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4461__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4473__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__228__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4473__part 
                            = vlSelf->__Vfunc_leading_zero32__4473__value;
                        vlSelf->__Vfunc_leading_zero32__4473__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4473__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4473__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4473__count)));
                            vlSelf->__Vfunc_leading_zero32__4473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4473__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4473__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4473__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4473__count)));
                            vlSelf->__Vfunc_leading_zero32__4473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4473__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4473__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4473__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4473__count)));
                            vlSelf->__Vfunc_leading_zero32__4473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4473__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4473__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4473__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4473__count)));
                            vlSelf->__Vfunc_leading_zero32__4473__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4473__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4473__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4473__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4473__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4473__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4473__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4473__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4473__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4485__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__229__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4485__part 
                            = vlSelf->__Vfunc_leading_zero32__4485__value;
                        vlSelf->__Vfunc_leading_zero32__4485__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4485__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4485__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4485__count)));
                            vlSelf->__Vfunc_leading_zero32__4485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4485__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4485__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4485__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4485__count)));
                            vlSelf->__Vfunc_leading_zero32__4485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4485__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4485__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4485__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4485__count)));
                            vlSelf->__Vfunc_leading_zero32__4485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4485__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4485__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4485__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4485__count)));
                            vlSelf->__Vfunc_leading_zero32__4485__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4485__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4485__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4485__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4485__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4485__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4485__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4485__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4485__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4497__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__230__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4497__part 
                            = vlSelf->__Vfunc_leading_zero32__4497__value;
                        vlSelf->__Vfunc_leading_zero32__4497__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4497__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4497__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4497__count)));
                            vlSelf->__Vfunc_leading_zero32__4497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4497__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4497__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4497__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4497__count)));
                            vlSelf->__Vfunc_leading_zero32__4497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4497__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4497__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4497__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4497__count)));
                            vlSelf->__Vfunc_leading_zero32__4497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4497__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4497__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4497__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4497__count)));
                            vlSelf->__Vfunc_leading_zero32__4497__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4497__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4497__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4497__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4497__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4497__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4497__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4497__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4497__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4509__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__231__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4509__part 
                            = vlSelf->__Vfunc_leading_zero32__4509__value;
                        vlSelf->__Vfunc_leading_zero32__4509__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4509__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4509__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4509__count)));
                            vlSelf->__Vfunc_leading_zero32__4509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4509__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4509__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4509__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4509__count)));
                            vlSelf->__Vfunc_leading_zero32__4509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4509__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4509__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4509__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4509__count)));
                            vlSelf->__Vfunc_leading_zero32__4509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4509__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4509__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4509__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4509__count)));
                            vlSelf->__Vfunc_leading_zero32__4509__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4509__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4509__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4509__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4509__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4509__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4509__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4509__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4509__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4521__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__232__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4521__part 
                            = vlSelf->__Vfunc_leading_zero32__4521__value;
                        vlSelf->__Vfunc_leading_zero32__4521__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4521__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4521__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4521__count)));
                            vlSelf->__Vfunc_leading_zero32__4521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4521__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4521__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4521__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4521__count)));
                            vlSelf->__Vfunc_leading_zero32__4521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4521__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4521__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4521__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4521__count)));
                            vlSelf->__Vfunc_leading_zero32__4521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4521__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4521__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4521__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4521__count)));
                            vlSelf->__Vfunc_leading_zero32__4521__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4521__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4521__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4521__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4521__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4521__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4521__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4521__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4521__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4533__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__233__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4533__part 
                            = vlSelf->__Vfunc_leading_zero32__4533__value;
                        vlSelf->__Vfunc_leading_zero32__4533__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4533__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4533__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4533__count)));
                            vlSelf->__Vfunc_leading_zero32__4533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4533__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4533__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4533__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4533__count)));
                            vlSelf->__Vfunc_leading_zero32__4533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4533__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4533__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4533__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4533__count)));
                            vlSelf->__Vfunc_leading_zero32__4533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4533__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4533__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4533__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4533__count)));
                            vlSelf->__Vfunc_leading_zero32__4533__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4533__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4533__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4533__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4533__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4533__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4533__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4533__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4533__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4545__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__234__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4545__part 
                            = vlSelf->__Vfunc_leading_zero32__4545__value;
                        vlSelf->__Vfunc_leading_zero32__4545__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4545__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4545__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4545__count)));
                            vlSelf->__Vfunc_leading_zero32__4545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4545__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4545__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4545__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4545__count)));
                            vlSelf->__Vfunc_leading_zero32__4545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4545__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4545__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4545__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4545__count)));
                            vlSelf->__Vfunc_leading_zero32__4545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4545__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4545__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4545__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4545__count)));
                            vlSelf->__Vfunc_leading_zero32__4545__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4545__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4545__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4545__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4545__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4545__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4545__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4545__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4545__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4557__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__235__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4557__part 
                            = vlSelf->__Vfunc_leading_zero32__4557__value;
                        vlSelf->__Vfunc_leading_zero32__4557__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4557__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4557__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4557__count)));
                            vlSelf->__Vfunc_leading_zero32__4557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4557__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4557__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4557__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4557__count)));
                            vlSelf->__Vfunc_leading_zero32__4557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4557__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4557__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4557__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4557__count)));
                            vlSelf->__Vfunc_leading_zero32__4557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4557__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4557__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4557__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4557__count)));
                            vlSelf->__Vfunc_leading_zero32__4557__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4557__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4557__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4557__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4557__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4557__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4557__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4557__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4557__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4569__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__236__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4569__part 
                            = vlSelf->__Vfunc_leading_zero32__4569__value;
                        vlSelf->__Vfunc_leading_zero32__4569__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4569__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4569__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4569__count)));
                            vlSelf->__Vfunc_leading_zero32__4569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4569__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4569__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4569__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4569__count)));
                            vlSelf->__Vfunc_leading_zero32__4569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4569__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4569__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4569__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4569__count)));
                            vlSelf->__Vfunc_leading_zero32__4569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4569__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4569__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4569__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4569__count)));
                            vlSelf->__Vfunc_leading_zero32__4569__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4569__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4569__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4569__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4569__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4569__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4569__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4569__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4569__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4581__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__237__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4581__part 
                            = vlSelf->__Vfunc_leading_zero32__4581__value;
                        vlSelf->__Vfunc_leading_zero32__4581__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4581__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4581__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4581__count)));
                            vlSelf->__Vfunc_leading_zero32__4581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4581__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4581__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4581__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4581__count)));
                            vlSelf->__Vfunc_leading_zero32__4581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4581__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4581__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4581__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4581__count)));
                            vlSelf->__Vfunc_leading_zero32__4581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4581__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4581__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4581__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4581__count)));
                            vlSelf->__Vfunc_leading_zero32__4581__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4581__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4581__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4581__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4581__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4581__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4581__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4581__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4581__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4593__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__238__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4593__part 
                            = vlSelf->__Vfunc_leading_zero32__4593__value;
                        vlSelf->__Vfunc_leading_zero32__4593__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4593__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4593__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4593__count)));
                            vlSelf->__Vfunc_leading_zero32__4593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4593__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4593__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4593__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4593__count)));
                            vlSelf->__Vfunc_leading_zero32__4593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4593__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4593__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4593__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4593__count)));
                            vlSelf->__Vfunc_leading_zero32__4593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4593__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4593__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4593__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4593__count)));
                            vlSelf->__Vfunc_leading_zero32__4593__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4593__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4593__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4593__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4593__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4593__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4593__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4593__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4593__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4605__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__239__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4605__part 
                            = vlSelf->__Vfunc_leading_zero32__4605__value;
                        vlSelf->__Vfunc_leading_zero32__4605__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4605__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4605__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4605__count)));
                            vlSelf->__Vfunc_leading_zero32__4605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4605__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4605__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4605__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4605__count)));
                            vlSelf->__Vfunc_leading_zero32__4605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4605__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4605__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4605__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4605__count)));
                            vlSelf->__Vfunc_leading_zero32__4605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4605__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4605__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4605__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4605__count)));
                            vlSelf->__Vfunc_leading_zero32__4605__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4605__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4605__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4605__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4605__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4605__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4605__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4605__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4605__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4617__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__240__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4617__part 
                            = vlSelf->__Vfunc_leading_zero32__4617__value;
                        vlSelf->__Vfunc_leading_zero32__4617__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4617__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4617__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4617__count)));
                            vlSelf->__Vfunc_leading_zero32__4617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4617__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4617__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4617__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4617__count)));
                            vlSelf->__Vfunc_leading_zero32__4617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4617__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4617__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4617__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4617__count)));
                            vlSelf->__Vfunc_leading_zero32__4617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4617__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4617__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4617__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4617__count)));
                            vlSelf->__Vfunc_leading_zero32__4617__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4617__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4617__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4617__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4617__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4617__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4617__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4617__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4617__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4629__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__241__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4629__part 
                            = vlSelf->__Vfunc_leading_zero32__4629__value;
                        vlSelf->__Vfunc_leading_zero32__4629__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4629__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4629__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4629__count)));
                            vlSelf->__Vfunc_leading_zero32__4629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4629__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4629__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4629__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4629__count)));
                            vlSelf->__Vfunc_leading_zero32__4629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4629__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4629__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4629__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4629__count)));
                            vlSelf->__Vfunc_leading_zero32__4629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4629__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4629__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4629__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4629__count)));
                            vlSelf->__Vfunc_leading_zero32__4629__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4629__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4629__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4629__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4629__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4629__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4629__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4629__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4629__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4641__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__242__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4641__part 
                            = vlSelf->__Vfunc_leading_zero32__4641__value;
                        vlSelf->__Vfunc_leading_zero32__4641__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4641__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4641__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4641__count)));
                            vlSelf->__Vfunc_leading_zero32__4641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4641__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4641__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4641__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4641__count)));
                            vlSelf->__Vfunc_leading_zero32__4641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4641__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4641__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4641__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4641__count)));
                            vlSelf->__Vfunc_leading_zero32__4641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4641__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4641__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4641__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4641__count)));
                            vlSelf->__Vfunc_leading_zero32__4641__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4641__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4641__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4641__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4641__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4641__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4641__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4641__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4641__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4653__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__243__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4653__part 
                            = vlSelf->__Vfunc_leading_zero32__4653__value;
                        vlSelf->__Vfunc_leading_zero32__4653__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4653__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4653__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4653__count)));
                            vlSelf->__Vfunc_leading_zero32__4653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4653__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4653__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4653__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4653__count)));
                            vlSelf->__Vfunc_leading_zero32__4653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4653__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4653__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4653__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4653__count)));
                            vlSelf->__Vfunc_leading_zero32__4653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4653__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4653__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4653__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4653__count)));
                            vlSelf->__Vfunc_leading_zero32__4653__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4653__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4653__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4653__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4653__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4653__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4653__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4653__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4653__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4665__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__244__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4665__part 
                            = vlSelf->__Vfunc_leading_zero32__4665__value;
                        vlSelf->__Vfunc_leading_zero32__4665__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4665__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4665__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4665__count)));
                            vlSelf->__Vfunc_leading_zero32__4665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4665__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4665__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4665__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4665__count)));
                            vlSelf->__Vfunc_leading_zero32__4665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4665__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4665__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4665__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4665__count)));
                            vlSelf->__Vfunc_leading_zero32__4665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4665__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4665__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4665__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4665__count)));
                            vlSelf->__Vfunc_leading_zero32__4665__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4665__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4665__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4665__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4665__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4665__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4665__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4665__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4665__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4677__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__245__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4677__part 
                            = vlSelf->__Vfunc_leading_zero32__4677__value;
                        vlSelf->__Vfunc_leading_zero32__4677__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4677__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4677__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4677__count)));
                            vlSelf->__Vfunc_leading_zero32__4677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4677__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4677__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4677__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4677__count)));
                            vlSelf->__Vfunc_leading_zero32__4677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4677__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4677__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4677__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4677__count)));
                            vlSelf->__Vfunc_leading_zero32__4677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4677__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4677__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4677__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4677__count)));
                            vlSelf->__Vfunc_leading_zero32__4677__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4677__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4677__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4677__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4677__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4677__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4677__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4677__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4677__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4689__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__246__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4689__part 
                            = vlSelf->__Vfunc_leading_zero32__4689__value;
                        vlSelf->__Vfunc_leading_zero32__4689__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4689__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4689__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4689__count)));
                            vlSelf->__Vfunc_leading_zero32__4689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4689__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4689__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4689__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4689__count)));
                            vlSelf->__Vfunc_leading_zero32__4689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4689__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4689__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4689__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4689__count)));
                            vlSelf->__Vfunc_leading_zero32__4689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4689__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4689__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4689__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4689__count)));
                            vlSelf->__Vfunc_leading_zero32__4689__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4689__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4689__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4689__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4689__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4689__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4689__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4689__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4689__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4701__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__247__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4701__part 
                            = vlSelf->__Vfunc_leading_zero32__4701__value;
                        vlSelf->__Vfunc_leading_zero32__4701__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4701__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4701__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4701__count)));
                            vlSelf->__Vfunc_leading_zero32__4701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4701__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4701__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4701__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4701__count)));
                            vlSelf->__Vfunc_leading_zero32__4701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4701__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4701__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4701__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4701__count)));
                            vlSelf->__Vfunc_leading_zero32__4701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4701__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4701__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4701__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4701__count)));
                            vlSelf->__Vfunc_leading_zero32__4701__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4701__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4701__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4701__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4701__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4701__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4701__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4701__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4701__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4713__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__248__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4713__part 
                            = vlSelf->__Vfunc_leading_zero32__4713__value;
                        vlSelf->__Vfunc_leading_zero32__4713__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4713__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4713__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4713__count)));
                            vlSelf->__Vfunc_leading_zero32__4713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4713__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4713__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4713__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4713__count)));
                            vlSelf->__Vfunc_leading_zero32__4713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4713__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4713__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4713__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4713__count)));
                            vlSelf->__Vfunc_leading_zero32__4713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4713__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4713__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4713__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4713__count)));
                            vlSelf->__Vfunc_leading_zero32__4713__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4713__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4713__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4713__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4713__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4713__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4713__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4713__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4713__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4725__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__249__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4725__part 
                            = vlSelf->__Vfunc_leading_zero32__4725__value;
                        vlSelf->__Vfunc_leading_zero32__4725__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4725__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4725__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4725__count)));
                            vlSelf->__Vfunc_leading_zero32__4725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4725__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4725__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4725__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4725__count)));
                            vlSelf->__Vfunc_leading_zero32__4725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4725__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4725__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4725__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4725__count)));
                            vlSelf->__Vfunc_leading_zero32__4725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4725__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4725__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4725__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4725__count)));
                            vlSelf->__Vfunc_leading_zero32__4725__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4725__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4725__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4725__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4725__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4725__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4725__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4725__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4725__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4737__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__250__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4737__part 
                            = vlSelf->__Vfunc_leading_zero32__4737__value;
                        vlSelf->__Vfunc_leading_zero32__4737__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4737__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4737__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4737__count)));
                            vlSelf->__Vfunc_leading_zero32__4737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4737__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4737__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4737__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4737__count)));
                            vlSelf->__Vfunc_leading_zero32__4737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4737__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4737__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4737__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4737__count)));
                            vlSelf->__Vfunc_leading_zero32__4737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4737__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4737__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4737__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4737__count)));
                            vlSelf->__Vfunc_leading_zero32__4737__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4737__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4737__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4737__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4737__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4737__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4737__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4737__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4737__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4749__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__251__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4749__part 
                            = vlSelf->__Vfunc_leading_zero32__4749__value;
                        vlSelf->__Vfunc_leading_zero32__4749__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4749__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4749__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4749__count)));
                            vlSelf->__Vfunc_leading_zero32__4749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4749__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4749__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4749__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4749__count)));
                            vlSelf->__Vfunc_leading_zero32__4749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4749__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4749__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4749__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4749__count)));
                            vlSelf->__Vfunc_leading_zero32__4749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4749__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4749__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4749__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4749__count)));
                            vlSelf->__Vfunc_leading_zero32__4749__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4749__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4749__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4749__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4749__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4749__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4749__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4749__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4749__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4761__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__252__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4761__part 
                            = vlSelf->__Vfunc_leading_zero32__4761__value;
                        vlSelf->__Vfunc_leading_zero32__4761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4761__count)));
                            vlSelf->__Vfunc_leading_zero32__4761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4761__count)));
                            vlSelf->__Vfunc_leading_zero32__4761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4761__count)));
                            vlSelf->__Vfunc_leading_zero32__4761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4761__count)));
                            vlSelf->__Vfunc_leading_zero32__4761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4761__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4773__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__253__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4773__part 
                            = vlSelf->__Vfunc_leading_zero32__4773__value;
                        vlSelf->__Vfunc_leading_zero32__4773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4773__count)));
                            vlSelf->__Vfunc_leading_zero32__4773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4773__count)));
                            vlSelf->__Vfunc_leading_zero32__4773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4773__count)));
                            vlSelf->__Vfunc_leading_zero32__4773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4773__count)));
                            vlSelf->__Vfunc_leading_zero32__4773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4773__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4785__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__254__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4785__part 
                            = vlSelf->__Vfunc_leading_zero32__4785__value;
                        vlSelf->__Vfunc_leading_zero32__4785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4785__count)));
                            vlSelf->__Vfunc_leading_zero32__4785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4785__count)));
                            vlSelf->__Vfunc_leading_zero32__4785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4785__count)));
                            vlSelf->__Vfunc_leading_zero32__4785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4785__count)));
                            vlSelf->__Vfunc_leading_zero32__4785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4785__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__shift_a 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__4797__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__lanes__BRA__255__KET____DOT__activation_multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__4797__part 
                            = vlSelf->__Vfunc_leading_zero32__4797__value;
                        vlSelf->__Vfunc_leading_zero32__4797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__4797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4797__count)));
                            vlSelf->__Vfunc_leading_zero32__4797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__4797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4797__count)));
                            vlSelf->__Vfunc_leading_zero32__4797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__4797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4797__count)));
                            vlSelf->__Vfunc_leading_zero32__4797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__4797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__4797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4797__count)));
                            vlSelf->__Vfunc_leading_zero32__4797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__4797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__4797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__4797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__4797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__4797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__4797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__4797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__4797__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mcommand_ready 
        = ((0x1eU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__state)) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_ready));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projected_heads__start_valid 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__configuring_head) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_ready));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6414__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw;
                        vlSelf->__Vfunc_leading_zero32__6414__part 
                            = vlSelf->__Vfunc_leading_zero32__6414__value;
                        vlSelf->__Vfunc_leading_zero32__6414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                            vlSelf->__Vfunc_leading_zero32__6414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6419__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__6419__part 
                            = vlSelf->__Vfunc_leading_zero32__6419__value;
                        vlSelf->__Vfunc_leading_zero32__6419__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6419__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                            vlSelf->__Vfunc_leading_zero32__6419__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6419__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6419__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6419__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6419__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6419__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6419__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6419__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6419__Vfuncout)) 
                             - (IData)(8U))));
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__xc;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__b;
    }
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__xc;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__b;
    }
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__xc;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__b;
    }
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__a_larger) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__small_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__xc;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____Vcellinp__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__b;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__tensor_bad 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tov) 
           & ((((5U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tov) 
                   & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                      & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__7__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__error5)))) 
               | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tov)
                    ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tensor_array__DOT__tags
                   [0x30U] : 0U) != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row)) 
              | ([&]() {
                    vlSelf->__Vfunc_fp32_invalid__191__value 
                        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__tsum;
                    vlSelf->__Vfunc_fp32_invalid__191__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__191__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__191__Vfuncout))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7235__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7235__part 
                            = vlSelf->__Vfunc_leading_zero32__7235__value;
                        vlSelf->__Vfunc_leading_zero32__7235__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7235__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7235__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7235__count)));
                            vlSelf->__Vfunc_leading_zero32__7235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7235__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7235__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7235__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7235__count)));
                            vlSelf->__Vfunc_leading_zero32__7235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7235__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7235__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7235__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7235__count)));
                            vlSelf->__Vfunc_leading_zero32__7235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7235__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7235__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7235__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7235__count)));
                            vlSelf->__Vfunc_leading_zero32__7235__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7235__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7235__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7235__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7235__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7235__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7235__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7235__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7235__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7247__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7247__part 
                            = vlSelf->__Vfunc_leading_zero32__7247__value;
                        vlSelf->__Vfunc_leading_zero32__7247__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7247__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7247__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7247__count)));
                            vlSelf->__Vfunc_leading_zero32__7247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7247__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7247__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7247__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7247__count)));
                            vlSelf->__Vfunc_leading_zero32__7247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7247__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7247__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7247__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7247__count)));
                            vlSelf->__Vfunc_leading_zero32__7247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7247__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7247__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7247__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7247__count)));
                            vlSelf->__Vfunc_leading_zero32__7247__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7247__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7247__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7247__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7247__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7247__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7247__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7247__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7247__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7259__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7259__part 
                            = vlSelf->__Vfunc_leading_zero32__7259__value;
                        vlSelf->__Vfunc_leading_zero32__7259__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7259__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7259__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7259__count)));
                            vlSelf->__Vfunc_leading_zero32__7259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7259__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7259__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7259__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7259__count)));
                            vlSelf->__Vfunc_leading_zero32__7259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7259__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7259__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7259__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7259__count)));
                            vlSelf->__Vfunc_leading_zero32__7259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7259__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7259__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7259__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7259__count)));
                            vlSelf->__Vfunc_leading_zero32__7259__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7259__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7259__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7259__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7259__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7259__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7259__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7259__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7259__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7271__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7271__part 
                            = vlSelf->__Vfunc_leading_zero32__7271__value;
                        vlSelf->__Vfunc_leading_zero32__7271__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7271__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7271__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7271__count)));
                            vlSelf->__Vfunc_leading_zero32__7271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7271__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7271__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7271__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7271__count)));
                            vlSelf->__Vfunc_leading_zero32__7271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7271__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7271__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7271__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7271__count)));
                            vlSelf->__Vfunc_leading_zero32__7271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7271__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7271__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7271__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7271__count)));
                            vlSelf->__Vfunc_leading_zero32__7271__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7271__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7271__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7271__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7271__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7271__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7271__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7271__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7271__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7283__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7283__part 
                            = vlSelf->__Vfunc_leading_zero32__7283__value;
                        vlSelf->__Vfunc_leading_zero32__7283__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7283__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7283__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7283__count)));
                            vlSelf->__Vfunc_leading_zero32__7283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7283__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7283__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7283__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7283__count)));
                            vlSelf->__Vfunc_leading_zero32__7283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7283__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7283__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7283__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7283__count)));
                            vlSelf->__Vfunc_leading_zero32__7283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7283__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7283__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7283__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7283__count)));
                            vlSelf->__Vfunc_leading_zero32__7283__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7283__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7283__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7283__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7283__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7283__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7283__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7283__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7283__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7295__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7295__part 
                            = vlSelf->__Vfunc_leading_zero32__7295__value;
                        vlSelf->__Vfunc_leading_zero32__7295__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7295__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7295__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7295__count)));
                            vlSelf->__Vfunc_leading_zero32__7295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7295__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7295__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7295__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7295__count)));
                            vlSelf->__Vfunc_leading_zero32__7295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7295__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7295__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7295__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7295__count)));
                            vlSelf->__Vfunc_leading_zero32__7295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7295__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7295__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7295__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7295__count)));
                            vlSelf->__Vfunc_leading_zero32__7295__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7295__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7295__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7295__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7295__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7295__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7295__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7295__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7295__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7307__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7307__part 
                            = vlSelf->__Vfunc_leading_zero32__7307__value;
                        vlSelf->__Vfunc_leading_zero32__7307__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7307__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7307__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7307__count)));
                            vlSelf->__Vfunc_leading_zero32__7307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7307__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7307__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7307__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7307__count)));
                            vlSelf->__Vfunc_leading_zero32__7307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7307__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7307__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7307__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7307__count)));
                            vlSelf->__Vfunc_leading_zero32__7307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7307__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7307__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7307__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7307__count)));
                            vlSelf->__Vfunc_leading_zero32__7307__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7307__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7307__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7307__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7307__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7307__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7307__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7307__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7307__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7319__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__7319__part 
                            = vlSelf->__Vfunc_leading_zero32__7319__value;
                        vlSelf->__Vfunc_leading_zero32__7319__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7319__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7319__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7319__count)));
                            vlSelf->__Vfunc_leading_zero32__7319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7319__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7319__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7319__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7319__count)));
                            vlSelf->__Vfunc_leading_zero32__7319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7319__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7319__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7319__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7319__count)));
                            vlSelf->__Vfunc_leading_zero32__7319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7319__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7319__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7319__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7319__count)));
                            vlSelf->__Vfunc_leading_zero32__7319__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7319__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7319__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7319__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7319__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7319__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7319__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7319__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7319__Vfuncout)) 
                             - (IData)(8U))));
    startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift 
        = ((0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__6333__value 
                            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw;
                        vlSelf->__Vfunc_leading_zero32__6333__part 
                            = vlSelf->__Vfunc_leading_zero32__6333__value;
                        vlSelf->__Vfunc_leading_zero32__6333__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6333__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__6333__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6333__count)));
                            vlSelf->__Vfunc_leading_zero32__6333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6333__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6333__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__6333__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6333__count)));
                            vlSelf->__Vfunc_leading_zero32__6333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6333__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6333__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__6333__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6333__count)));
                            vlSelf->__Vfunc_leading_zero32__6333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6333__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__6333__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__6333__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6333__count)));
                            vlSelf->__Vfunc_leading_zero32__6333__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__6333__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__6333__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__6333__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__6333__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__6333__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__6333__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__6333__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__6333__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____VdfgTmp_h731e8005__0 
        = (1U & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__configuring_head)) 
                 | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__head_start_ready)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gemv_out_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate)) 
              | ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__gstate)) 
                 & ((1U & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_lm))) 
                    && ((0U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__raw_projection)) 
                        & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__hb_in_ready))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_transfer 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__dual_think_ctrl__verify_rsp_valid) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_rsp_ready));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__protocol_fault 
        = ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__response_expected)) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__dual_think_ctrl__verify_rsp_valid));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__input_exponent 
        = (0xfffU & (((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0))
                       ? 0xf82U : ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0) 
                                   - (IData)(0x7fU))) 
                     - (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shift)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__normalized_b 
        = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_b)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    __Vfunc_round_pack32__6334__significand = (0x7fffff8U 
                                               & (VL_SHIFTL_III(24,24,6, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw, (IData)(startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift)) 
                                                  << 3U));
    __Vfunc_round_pack32__6334__exponent = (0xfffU 
                                            & ((((0U 
                                                  == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____VdfgTmp_ha1a50253__0))
                                                  ? 0xf82U
                                                  : 
                                                 ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____VdfgTmp_ha1a50253__0) 
                                                  - (IData)(0x7fU))) 
                                                - (IData)(startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift)) 
                                               - (IData)(3U)));
    __Vfunc_round_pack32__6334__adjusted = __Vfunc_round_pack32__6334__exponent;
    __Vfunc_round_pack32__6334__shifted = __Vfunc_round_pack32__6334__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__6334__exponent))) {
        vlSelf->__Vfunc_shift_jam27__6335__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__6334__exponent)));
        vlSelf->__Vfunc_shift_jam27__6335__value = __Vfunc_round_pack32__6334__significand;
        __Vfunc_round_pack32__6334__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__6335__distance))) {
            vlSelf->__Vfunc_shift_jam27__6335__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__6335__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__6335__distance))) {
            vlSelf->__Vfunc_shift_jam27__6335__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__6335__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__6335__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6335__value, (IData)(vlSelf->__Vfunc_shift_jam27__6335__distance)));
            vlSelf->__Vfunc_shift_jam27__6335__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__6335__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__6335__distance)))));
            vlSelf->__Vfunc_shift_jam27__6335__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__6335__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__6335__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__6335__discarded))));
        }
        __Vfunc_round_pack32__6334__shifted = vlSelf->__Vfunc_shift_jam27__6335__Vfuncout;
    }
    __Vfunc_round_pack32__6334__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__6334__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__6334__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__6334__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__6334__rounded)) {
        __Vfunc_round_pack32__6334__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__6334__rounded, 1U));
        __Vfunc_round_pack32__6334__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__6334__adjusted)));
    }
    __Vfunc_round_pack32__6334__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__6334__rounded)) {
        __Vfunc_round_pack32__6334__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__6334__adjusted)));
    }
    __Vfunc_round_pack32__6334__Vfuncout = (((0U == __Vfunc_round_pack32__6334__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__6334__rounded))
                                             ? 0ULL
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__6334__adjusted))
                                                 ? 0x100000000ULL
                                                 : (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__6334__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__6334__rounded))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed 
        = __Vfunc_round_pack32__6334__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__main_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projection_ready) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____VdfgTmp_h731e8005__0));
    startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 
        = ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__protocol_fault)) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__below_one 
        = ((0xffffffU & VL_SHIFTL_III(24,24,6, (IData)(0x800000U), (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_a))) 
           < vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__normalized_b);
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid 
        = ((IData)(startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
           & (9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_valid 
        = ((IData)(startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
           & ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state)) 
              | (6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__state))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
            ? (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__generated_count)
            : 0U);
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_valid) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_position 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_position;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__request_parent;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_position = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__batch_end 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position)) 
                             + (QData)((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_pos 
        = ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state))
            ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position
            : vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_position);
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_token 
        = (((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
            | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent)))
            ? vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_token
            : (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U)))
                 ? 0U : (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U))))) 
               | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_drafts[
                  (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent), 5U)))));
}
