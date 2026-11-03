// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__85(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__85\n"); );
    // Init
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0;
    anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 = 0;
    QData/*32:0*/ __Vfunc_round_pack32__7727__Vfuncout;
    __Vfunc_round_pack32__7727__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7727__exponent;
    __Vfunc_round_pack32__7727__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7727__significand;
    __Vfunc_round_pack32__7727__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7727__shifted;
    __Vfunc_round_pack32__7727__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__7727__rounded;
    __Vfunc_round_pack32__7727__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7727__adjusted;
    __Vfunc_round_pack32__7727__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__7727__biased;
    __Vfunc_round_pack32__7727__biased = 0;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11748__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11748__part 
                            = vlSelf->__Vfunc_leading_zero32__11748__value;
                        vlSelf->__Vfunc_leading_zero32__11748__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11748__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11748__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11748__count)));
                            vlSelf->__Vfunc_leading_zero32__11748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11748__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11748__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11748__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11748__count)));
                            vlSelf->__Vfunc_leading_zero32__11748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11748__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11748__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11748__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11748__count)));
                            vlSelf->__Vfunc_leading_zero32__11748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11748__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11748__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11748__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11748__count)));
                            vlSelf->__Vfunc_leading_zero32__11748__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11748__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11748__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11748__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11748__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11748__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11748__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11748__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11748__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11760__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11760__part 
                            = vlSelf->__Vfunc_leading_zero32__11760__value;
                        vlSelf->__Vfunc_leading_zero32__11760__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11760__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11760__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11760__count)));
                            vlSelf->__Vfunc_leading_zero32__11760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11760__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11760__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11760__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11760__count)));
                            vlSelf->__Vfunc_leading_zero32__11760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11760__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11760__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11760__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11760__count)));
                            vlSelf->__Vfunc_leading_zero32__11760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11760__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11760__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11760__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11760__count)));
                            vlSelf->__Vfunc_leading_zero32__11760__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11760__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11760__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11760__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11760__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11760__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11760__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11760__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11760__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11772__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11772__part 
                            = vlSelf->__Vfunc_leading_zero32__11772__value;
                        vlSelf->__Vfunc_leading_zero32__11772__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11772__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11772__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11772__count)));
                            vlSelf->__Vfunc_leading_zero32__11772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11772__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11772__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11772__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11772__count)));
                            vlSelf->__Vfunc_leading_zero32__11772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11772__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11772__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11772__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11772__count)));
                            vlSelf->__Vfunc_leading_zero32__11772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11772__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11772__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11772__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11772__count)));
                            vlSelf->__Vfunc_leading_zero32__11772__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11772__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11772__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11772__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11772__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11772__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11772__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11772__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11772__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11784__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11784__part 
                            = vlSelf->__Vfunc_leading_zero32__11784__value;
                        vlSelf->__Vfunc_leading_zero32__11784__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11784__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11784__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11784__count)));
                            vlSelf->__Vfunc_leading_zero32__11784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11784__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11784__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11784__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11784__count)));
                            vlSelf->__Vfunc_leading_zero32__11784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11784__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11784__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11784__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11784__count)));
                            vlSelf->__Vfunc_leading_zero32__11784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11784__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11784__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11784__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11784__count)));
                            vlSelf->__Vfunc_leading_zero32__11784__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11784__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11784__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11784__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11784__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11784__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11784__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11784__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11784__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11796__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11796__part 
                            = vlSelf->__Vfunc_leading_zero32__11796__value;
                        vlSelf->__Vfunc_leading_zero32__11796__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11796__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11796__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11796__count)));
                            vlSelf->__Vfunc_leading_zero32__11796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11796__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11796__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11796__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11796__count)));
                            vlSelf->__Vfunc_leading_zero32__11796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11796__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11796__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11796__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11796__count)));
                            vlSelf->__Vfunc_leading_zero32__11796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11796__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11796__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11796__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11796__count)));
                            vlSelf->__Vfunc_leading_zero32__11796__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11796__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11796__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11796__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11796__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11796__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11796__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11796__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11796__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11808__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11808__part 
                            = vlSelf->__Vfunc_leading_zero32__11808__value;
                        vlSelf->__Vfunc_leading_zero32__11808__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11808__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11808__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11808__count)));
                            vlSelf->__Vfunc_leading_zero32__11808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11808__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11808__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11808__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11808__count)));
                            vlSelf->__Vfunc_leading_zero32__11808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11808__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11808__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11808__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11808__count)));
                            vlSelf->__Vfunc_leading_zero32__11808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11808__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11808__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11808__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11808__count)));
                            vlSelf->__Vfunc_leading_zero32__11808__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11808__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11808__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11808__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11808__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11808__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11808__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11808__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11808__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11820__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11820__part 
                            = vlSelf->__Vfunc_leading_zero32__11820__value;
                        vlSelf->__Vfunc_leading_zero32__11820__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11820__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11820__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11820__count)));
                            vlSelf->__Vfunc_leading_zero32__11820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11820__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11820__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11820__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11820__count)));
                            vlSelf->__Vfunc_leading_zero32__11820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11820__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11820__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11820__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11820__count)));
                            vlSelf->__Vfunc_leading_zero32__11820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11820__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11820__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11820__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11820__count)));
                            vlSelf->__Vfunc_leading_zero32__11820__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11820__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11820__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11820__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11820__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11820__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11820__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11820__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11820__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11832__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11832__part 
                            = vlSelf->__Vfunc_leading_zero32__11832__value;
                        vlSelf->__Vfunc_leading_zero32__11832__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11832__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11832__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11832__count)));
                            vlSelf->__Vfunc_leading_zero32__11832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11832__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11832__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11832__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11832__count)));
                            vlSelf->__Vfunc_leading_zero32__11832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11832__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11832__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11832__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11832__count)));
                            vlSelf->__Vfunc_leading_zero32__11832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11832__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11832__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11832__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11832__count)));
                            vlSelf->__Vfunc_leading_zero32__11832__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11832__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11832__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11832__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11832__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11832__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11832__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11832__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11832__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11844__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11844__part 
                            = vlSelf->__Vfunc_leading_zero32__11844__value;
                        vlSelf->__Vfunc_leading_zero32__11844__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11844__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11844__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11844__count)));
                            vlSelf->__Vfunc_leading_zero32__11844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11844__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11844__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11844__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11844__count)));
                            vlSelf->__Vfunc_leading_zero32__11844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11844__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11844__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11844__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11844__count)));
                            vlSelf->__Vfunc_leading_zero32__11844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11844__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11844__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11844__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11844__count)));
                            vlSelf->__Vfunc_leading_zero32__11844__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11844__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11844__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11844__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11844__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11844__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11844__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11844__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11844__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11856__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11856__part 
                            = vlSelf->__Vfunc_leading_zero32__11856__value;
                        vlSelf->__Vfunc_leading_zero32__11856__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11856__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11856__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11856__count)));
                            vlSelf->__Vfunc_leading_zero32__11856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11856__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11856__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11856__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11856__count)));
                            vlSelf->__Vfunc_leading_zero32__11856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11856__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11856__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11856__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11856__count)));
                            vlSelf->__Vfunc_leading_zero32__11856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11856__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11856__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11856__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11856__count)));
                            vlSelf->__Vfunc_leading_zero32__11856__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11856__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11856__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11856__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11856__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11856__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11856__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11856__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11856__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11868__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11868__part 
                            = vlSelf->__Vfunc_leading_zero32__11868__value;
                        vlSelf->__Vfunc_leading_zero32__11868__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11868__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11868__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11868__count)));
                            vlSelf->__Vfunc_leading_zero32__11868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11868__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11868__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11868__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11868__count)));
                            vlSelf->__Vfunc_leading_zero32__11868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11868__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11868__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11868__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11868__count)));
                            vlSelf->__Vfunc_leading_zero32__11868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11868__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11868__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11868__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11868__count)));
                            vlSelf->__Vfunc_leading_zero32__11868__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11868__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11868__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11868__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11868__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11868__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11868__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11868__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11868__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11880__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11880__part 
                            = vlSelf->__Vfunc_leading_zero32__11880__value;
                        vlSelf->__Vfunc_leading_zero32__11880__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11880__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11880__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11880__count)));
                            vlSelf->__Vfunc_leading_zero32__11880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11880__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11880__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11880__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11880__count)));
                            vlSelf->__Vfunc_leading_zero32__11880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11880__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11880__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11880__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11880__count)));
                            vlSelf->__Vfunc_leading_zero32__11880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11880__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11880__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11880__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11880__count)));
                            vlSelf->__Vfunc_leading_zero32__11880__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11880__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11880__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11880__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11880__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11880__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11880__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11880__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11880__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11892__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11892__part 
                            = vlSelf->__Vfunc_leading_zero32__11892__value;
                        vlSelf->__Vfunc_leading_zero32__11892__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11892__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11892__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11892__count)));
                            vlSelf->__Vfunc_leading_zero32__11892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11892__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11892__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11892__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11892__count)));
                            vlSelf->__Vfunc_leading_zero32__11892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11892__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11892__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11892__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11892__count)));
                            vlSelf->__Vfunc_leading_zero32__11892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11892__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11892__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11892__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11892__count)));
                            vlSelf->__Vfunc_leading_zero32__11892__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11892__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11892__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11892__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11892__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11892__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11892__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11892__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11892__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11904__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11904__part 
                            = vlSelf->__Vfunc_leading_zero32__11904__value;
                        vlSelf->__Vfunc_leading_zero32__11904__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11904__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11904__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11904__count)));
                            vlSelf->__Vfunc_leading_zero32__11904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11904__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11904__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11904__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11904__count)));
                            vlSelf->__Vfunc_leading_zero32__11904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11904__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11904__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11904__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11904__count)));
                            vlSelf->__Vfunc_leading_zero32__11904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11904__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11904__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11904__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11904__count)));
                            vlSelf->__Vfunc_leading_zero32__11904__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11904__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11904__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11904__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11904__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11904__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11904__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11904__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11904__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11916__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11916__part 
                            = vlSelf->__Vfunc_leading_zero32__11916__value;
                        vlSelf->__Vfunc_leading_zero32__11916__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11916__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11916__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11916__count)));
                            vlSelf->__Vfunc_leading_zero32__11916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11916__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11916__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11916__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11916__count)));
                            vlSelf->__Vfunc_leading_zero32__11916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11916__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11916__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11916__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11916__count)));
                            vlSelf->__Vfunc_leading_zero32__11916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11916__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11916__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11916__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11916__count)));
                            vlSelf->__Vfunc_leading_zero32__11916__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11916__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11916__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11916__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11916__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11916__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11916__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11916__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11916__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11928__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11928__part 
                            = vlSelf->__Vfunc_leading_zero32__11928__value;
                        vlSelf->__Vfunc_leading_zero32__11928__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11928__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11928__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11928__count)));
                            vlSelf->__Vfunc_leading_zero32__11928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11928__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11928__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11928__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11928__count)));
                            vlSelf->__Vfunc_leading_zero32__11928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11928__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11928__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11928__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11928__count)));
                            vlSelf->__Vfunc_leading_zero32__11928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11928__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11928__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11928__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11928__count)));
                            vlSelf->__Vfunc_leading_zero32__11928__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11928__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11928__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11928__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11928__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11928__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11928__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11928__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11928__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11940__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11940__part 
                            = vlSelf->__Vfunc_leading_zero32__11940__value;
                        vlSelf->__Vfunc_leading_zero32__11940__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11940__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11940__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11940__count)));
                            vlSelf->__Vfunc_leading_zero32__11940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11940__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11940__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11940__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11940__count)));
                            vlSelf->__Vfunc_leading_zero32__11940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11940__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11940__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11940__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11940__count)));
                            vlSelf->__Vfunc_leading_zero32__11940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11940__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11940__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11940__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11940__count)));
                            vlSelf->__Vfunc_leading_zero32__11940__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11940__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11940__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11940__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11940__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11940__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11940__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11940__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11940__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__x_scale__DOT__shift_b 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__11952__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__raw_b;
                        vlSelf->__Vfunc_leading_zero32__11952__part 
                            = vlSelf->__Vfunc_leading_zero32__11952__value;
                        vlSelf->__Vfunc_leading_zero32__11952__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11952__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__11952__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11952__count)));
                            vlSelf->__Vfunc_leading_zero32__11952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11952__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11952__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__11952__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11952__count)));
                            vlSelf->__Vfunc_leading_zero32__11952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11952__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11952__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__11952__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11952__count)));
                            vlSelf->__Vfunc_leading_zero32__11952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11952__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__11952__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__11952__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11952__count)));
                            vlSelf->__Vfunc_leading_zero32__11952__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__11952__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__11952__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__11952__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__11952__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__11952__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__11952__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__11952__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__11952__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__response_transfer 
        = ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__dual_think_ctrl__verify_rsp_valid) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_rsp_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__protocol_fault 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__response_expected)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__dual_think_ctrl__verify_rsp_valid));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____VdfgTmp_h731e8005__0 
        = (1U & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__configuring_head)) 
                 | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__head_start_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__32__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__32__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__32__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__33__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__33__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__33__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__34__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__34__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__34__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__35__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__35__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__35__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__36__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__36__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__36__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__37__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__37__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__37__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__38__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__38__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__38__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__39__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__39__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__39__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__40__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__40__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__40__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__41__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__41__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__41__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__42__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__42__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__42__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__43__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__43__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__43__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__44__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__44__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__44__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__45__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__45__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__45__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__46__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__46__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__46__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__47__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__47__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__47__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__48__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__48__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__48__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__49__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__49__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__49__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__50__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__50__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__50__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__51__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__51__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__51__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__52__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__52__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__52__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__53__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__53__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__53__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__54__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__54__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__54__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__55__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__55__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__55__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__56__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__56__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__56__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__57__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__57__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__57__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__58__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__58__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__58__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__59__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__59__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__59__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__60__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__60__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__60__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__61__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__61__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__61__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__62__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__62__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__62__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__63__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__63__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__0__KET____DOT__pairs__BRA__63__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__16__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__17__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__18__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__19__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__20__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__21__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__22__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__23__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__24__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__25__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__26__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__27__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__28__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__29__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__30__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__1__KET____DOT__pairs__BRA__31__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__8__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__9__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__10__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__11__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__12__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__13__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__14__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__2__KET____DOT__pairs__BRA__15__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__4__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__5__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__6__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__3__KET____DOT__pairs__BRA__7__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__4__KET____DOT__pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__5__KET____DOT__pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__6__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__6__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_levels__BRA__6__KET____DOT__pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__input_exponent 
        = (0xfffU & (((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0))
                       ? 0xf82U : ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT____VdfgTmp_h06f650cb__0) 
                                   - (IData)(0x7fU))) 
                     - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shift)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__normalized_b 
        = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__raw_b, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_b)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__52__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__51__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__50__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__49__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__48__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__47__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__46__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__45__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__44__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__43__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__42__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__41__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__40__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__39__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__38__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__37__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__36__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__35__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__34__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__33__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__32__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__31__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__30__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__29__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__28__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__27__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__26__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__25__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__24__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__23__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__22__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__21__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__20__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__19__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__18__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__17__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__16__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__15__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__14__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__13__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__12__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__11__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__10__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__9__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__8__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__7__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__6__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__5__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__4__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__3__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__2__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__1__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_exponent 
        = ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                            >> 0x17U))) ? 0xf82U : 
           (0xfffU & ((0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__0__KET____DOT__rotate_x__DOT__large_value 
                                >> 0x17U)) - (IData)(0x7fU))));
    __Vfunc_round_pack32__7727__significand = (0x7fffff8U 
                                               & (VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_raw, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift)) 
                                                  << 3U));
    __Vfunc_round_pack32__7727__exponent = (0xfffU 
                                            & ((((0U 
                                                  == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____VdfgTmp_ha1a50253__0))
                                                  ? 0xf82U
                                                  : 
                                                 ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT____VdfgTmp_ha1a50253__0) 
                                                  - (IData)(0x7fU))) 
                                                - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_shift)) 
                                               - (IData)(7U)));
    __Vfunc_round_pack32__7727__adjusted = __Vfunc_round_pack32__7727__exponent;
    __Vfunc_round_pack32__7727__shifted = __Vfunc_round_pack32__7727__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__7727__exponent))) {
        vlSelf->__Vfunc_shift_jam27__7728__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__7727__exponent)));
        vlSelf->__Vfunc_shift_jam27__7728__value = __Vfunc_round_pack32__7727__significand;
        __Vfunc_round_pack32__7727__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__7728__distance))) {
            vlSelf->__Vfunc_shift_jam27__7728__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__7728__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__7728__distance))) {
            vlSelf->__Vfunc_shift_jam27__7728__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__7728__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__7728__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7728__value, (IData)(vlSelf->__Vfunc_shift_jam27__7728__distance)));
            vlSelf->__Vfunc_shift_jam27__7728__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7728__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__7728__distance)))));
            vlSelf->__Vfunc_shift_jam27__7728__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__7728__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__7728__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__7728__discarded))));
        }
        __Vfunc_round_pack32__7727__shifted = vlSelf->__Vfunc_shift_jam27__7728__Vfuncout;
    }
    __Vfunc_round_pack32__7727__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__7727__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__7727__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__7727__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__7727__rounded)) {
        __Vfunc_round_pack32__7727__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__7727__rounded, 1U));
        __Vfunc_round_pack32__7727__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__7727__adjusted)));
    }
    __Vfunc_round_pack32__7727__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__7727__rounded)) {
        __Vfunc_round_pack32__7727__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__7727__adjusted)));
    }
    __Vfunc_round_pack32__7727__Vfuncout = (((0U == __Vfunc_round_pack32__7727__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__7727__rounded))
                                             ? 0ULL
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__7727__adjusted))
                                                 ? 0x100000000ULL
                                                 : (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__7727__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__7727__rounded))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed 
        = __Vfunc_round_pack32__7727__Vfuncout;
    anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__protocol_fault)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__main_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_ready) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____VdfgTmp_h731e8005__0));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__below_one 
        = ((0xffffffU & VL_SHIFTL_III(24,24,6, (IData)(0x800000U), (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__shift_a))) 
           < vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__normalized_b);
    vlSelf->anvil_qn1_top__DOT__native__DOT__verify_valid 
        = ((IData)(anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
           & ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__state)) 
              | (6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__state))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid 
        = ((IData)(anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT____VdfgTmp_h8fc00891__0) 
           & (9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__state)));
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__verify_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__request_position;
        vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__request_parent;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent = 0U;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[0U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[1U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[2U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[3U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[4U] 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_pos 
            = ((IData)(1U) + vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__position);
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[0U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[1U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[2U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[3U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[4U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_pos = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_start_pos 
        = ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state))
            ? vlSelf->anvil_qn1_top__DOT__native__DOT__host_position
            : vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position);
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_start_token 
        = (((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
            | (4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent)))
            ? vlSelf->anvil_qn1_top__DOT__native__DOT__host_token
            : (((0U == (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent), 5U)))
                 ? 0U : (vlSelf->anvil_qn1_top__DOT__native__DOT__owned_drafts[
                         (((IData)(0x1fU) + (0x7fU 
                                             & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent), 5U))) 
                          >> 5U)] << ((IData)(0x20U) 
                                      - (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent), 5U))))) 
               | (vlSelf->anvil_qn1_top__DOT__native__DOT__owned_drafts[
                  (3U & (VL_SHIFTL_III(7,7,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent), 5U) 
                         >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,7,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent), 5U)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__batch_end 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__host_position)) 
                             + (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count))));
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__87(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__87\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial;
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__0(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__0\n"); );
    // Body
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_error 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_error;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0 
            = (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
               >> 0x1cU);
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0 
            = (0xfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag);
        vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_data 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_data;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_error = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_data = 0U;
    }
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_tag 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_tag = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__response_bad 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_valid) 
           & ((((~ ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                    | ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                       | (9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state))))) 
                | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_error)) 
               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_tag 
                  != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__expected_tag)) 
              | ((9U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                 & ((0U != (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data 
                            >> 0x10U)) | ([&]() {
                            vlSelf->__Vfunc_bf16_invalid__2__value 
                                = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data);
                            vlSelf->__Vfunc_bf16_invalid__2__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__2__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__2__Vfuncout))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__unit_flush)) 
                                     & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__response_bad)) 
                                        & ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                                           | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                                              | (8U 
                                                 == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)))))));
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_valid) {
        if ((8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state))) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_tag 
                = (2U | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__output_cursor 
                         << 2U));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_write = 1U;
        } else {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_tag 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__cursor 
                    << 2U) | (4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__state)));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_write = 0U;
        }
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_tag = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__normalization__req_write = 0U;
    }
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__2(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a = 0U;
    if ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product;
    } else if ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score;
    } else if ((9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator;
    } else if ((0xcU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = ((((0U == (0x1fU & VL_SHIFTL_III(11,32,32, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U)))
                  ? 0U : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[
                          (((IData)(0xfU) + (0x7ffU 
                                             & VL_SHIFTL_III(11,32,32, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U))) 
                           >> 5U)] << ((IData)(0x20U) 
                                       - (0x1fU & VL_SHIFTL_III(11,32,32, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U))))) 
                | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[
                   (0x3fU & (VL_SHIFTL_III(11,32,32, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U) 
                             >> 5U))] >> (0x1fU & VL_SHIFTL_III(11,32,32, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U)))) 
               << 0x10U);
    } else if ((0xdU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerator_q;
    } else if ((0x10U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerator_q;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a = 0U;
    if (((((((((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)) 
               | (6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
              | (7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
             | (8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
            | (9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
           | (0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
          | (0xcU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) 
         | (0xeU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state)))) {
        if ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                   << 0x10U);
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                   << 0x10U);
        } else if ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__right_q;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__left_q;
        } else if ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0x44800000U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__sum;
        } else if ((8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b = 0x358637bdU;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__mean;
        } else {
            if ((9U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__b 
                    = ((0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                        ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__root
                        : ((0xcU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                            ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__reciprocal
                            : ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__gamma_q) 
                               << 0x10U)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__a 
                = ((9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                    ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__variance
                    : ((0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                        ? 0x3f800000U : ((0xcU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__state))
                                          ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__raw_q) 
                                             << 0x10U)
                                          : ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__normalization__DOT__norm__DOT__legal__DOT__u) 
                                             << 0x10U))));
        }
    }
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__88(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__88\n"); );
    // Body
    vlSelf->done = ((IData)(vlSelf->anvil_qn1_top__DOT____VdfgTmp_hc9eec2f8__0) 
                    & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__done_reg));
    vlSelf->error = ((IData)(vlSelf->anvil_qn1_top__DOT____VdfgTmp_hc9eec2f8__0) 
                     & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__error_reg));
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__10(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__10\n"); );
    // Body
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_tag 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_tag = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) 
           & ((((~ ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                    | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                       | (8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))))) 
                | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_error)) 
               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_tag 
                  != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__expected_tag)) 
              | ((8U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                 & ((0U != (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data 
                            >> 0x10U)) | ([&]() {
                            vlSelf->__Vfunc_bf16_invalid__7__value 
                                = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data);
                            vlSelf->__Vfunc_bf16_invalid__7__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__7__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__7__Vfuncout))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid 
        = ((IData)(vlSelf->rst_n) & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__unit_flush)) 
                                     & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__response_bad)) 
                                        & ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                                           | ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                                              | (7U 
                                                 == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)))))));
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_tag 
            = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__cursor 
                << 2U) | (((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                           << 1U) | (3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))));
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_write 
            = (7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state));
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_tag = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__residuals__req_write = 0U;
    }
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__11(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__11\n"); );
    // Body
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_tag 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_tag = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) 
           & ((((~ ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                    | ((8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                       | (0xeU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))))) 
                | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_error)) 
               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_tag 
                  != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__expected_tag)) 
              | ((0xeU != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                 & ((0U != (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data 
                            >> 0x10U)) | ([&]() {
                            vlSelf->__Vfunc_bf16_invalid__10__value 
                                = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data);
                            vlSelf->__Vfunc_bf16_invalid__10__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__10__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__10__Vfuncout))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT____VdfgTmp_h3dfb0711__0 
        = ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__unit_flush) 
               | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__response_bad))) 
           & (IData)(vlSelf->rst_n));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mcommand 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT____VdfgTmp_h3dfb0711__0) 
           & ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
              | ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                 | (0xfU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT____VdfgTmp_h3dfb0711__0) 
           & ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
              | ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                 | (0xdU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlayer 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mcommand)
            ? vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__layer
            : 0U);
    if ((0x1eU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mcommand) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_proj 
                = ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                    ? 4U : ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                             ? 5U : 6U));
            if ((0xfU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input = 0xc00U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_output = 0x400U;
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input = 0x400U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_output = 0xc00U;
            }
        } else {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_proj = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_output = 0U;
        }
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_proj 
            = ((0xbU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                ? 1U : ((0xdU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                         ? 2U : ((0x17U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                                  ? 3U : 0U)));
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input 
            = ((0x17U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                ? 0x800U : 0x400U);
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_output 
            = ((9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                ? 0x800U : (((0xbU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)) 
                             | (0xdU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)))
                             ? 0x400U : ((0x17U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                                          ? 0x400U : 0x25180U)));
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_valid 
        = ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__configuring_head) 
             | ((0xdU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)) 
                | ((0x17U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)) 
                   | (0x23U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))))) 
            & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____VdfgTmp_h731e8005__0)) 
           | ((0x1eU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mcommand)));
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_tag 
            = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__cursor 
                << 3U) | (((0xdU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                           << 2U) | ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                                     << 1U)));
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_write 
            = (0xdU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state));
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_tag = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__mlp__req_write = 0U;
    }
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__12(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__12\n"); );
    // Body
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data 
            = vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) 
           & (((((((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__load_state)) 
                     | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_error)) 
                    | (0U != (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag 
                              >> 9U))) | ((1U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag 
                                                 >> 8U)) 
                                          != (0xaU 
                                              == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)))) 
                  | (0x80U <= (0xffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag))) 
                 | ((0xffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag) 
                    >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued))) 
                | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen[
                   (3U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag 
                          >> 5U))] >> (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag))) 
               | (0U != (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data 
                         >> 0x10U))) | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__31__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data);
                    vlSelf->__Vfunc_bf16_invalid__31__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__31__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__31__Vfuncout))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT____VdfgTmp_h72b1a6e1__0 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__response_bad)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention_out_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT____VdfgTmp_h72b1a6e1__0) 
           & (0x12U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__req_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT____VdfgTmp_h72b1a6e1__0) 
           & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__load_state) 
              & (0x80U > (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued))));
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__16(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__16\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__reserved_bad 
        = ((((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
             | (3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) 
            | (4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) 
           & ((0U != (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data 
                      >> 0x10U)) | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__1581__value 
                        = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data);
                    vlSelf->__Vfunc_bf16_invalid__1581__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__1581__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__1581__Vfuncout))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__scale_bad 
        = ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
           & ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__1582__value 
                    = (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data);
                vlSelf->__Vfunc_bf16_scale_invalid__1582__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__1583__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__1582__value;
                            vlSelf->__Vfunc_bf16_invalid__1583__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__1583__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__1583__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__1582__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__1582__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__1582__Vfuncout)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__load_state)) 
              | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_error) 
                 | ((0U != ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid)
                             ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_valid)
                                 ? (0x1ffffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                                                >> 0xbU))
                                 : 0U) : 0U)) | ((~ 
                                                  ((2U 
                                                    == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
                                                    | (3U 
                                                       == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
                                                    | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type) 
                                                       == 
                                                       ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                                                         ? 1U
                                                         : 4U))))) 
                                                 | ((~ 
                                                     ((2U 
                                                       == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                       < 
                                                       (0x3fU 
                                                        & VL_SHIFTR_III(9,9,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes), 7U)))
                                                       : 
                                                      ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                       < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes)))) 
                                                    | (((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                          << 1U) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                             ? 
                                                            (3U 
                                                             == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))
                                                             : 
                                                            (0U 
                                                             != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)))) 
                                                        >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued)) 
                                                       | ((0x500U 
                                                           <= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)) 
                                                          | (((0x4ffU 
                                                               >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)) 
                                                              && (1U 
                                                                  & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[
                                                                     ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address) 
                                                                      >> 5U)] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address))))) 
                                                             | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__reserved_bad) 
                                                                | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__scale_bad)))))))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h6e2e6b43__0 
        = (1U & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_bad)) 
                 & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__tensor_bad))));
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__22(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__22\n"); );
    // Init
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_fault;
    anvil_qn1_top__DOT__native__DOT__bank_fault = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible;
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible = 0;
    CData/*0:0*/ anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0;
    anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0 = 0;
    CData/*0:0*/ anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0;
    anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0 = 0;
    CData/*7:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing = 0;
    CData/*0:0*/ anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing = 0;
    QData/*63:0*/ __Vfunc_event_add64__14268__Vfuncout;
    __Vfunc_event_add64__14268__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14268__value;
    __Vfunc_event_add64__14268__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14268__delta;
    __Vfunc_event_add64__14268__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14268__low;
    __Vfunc_event_add64__14268__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14268__carry1;
    __Vfunc_event_add64__14268__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14268__carry2;
    __Vfunc_event_add64__14268__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14268__carry3;
    __Vfunc_event_add64__14268__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14269__Vfuncout;
    __Vfunc_event_add64__14269__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14269__value;
    __Vfunc_event_add64__14269__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14269__delta;
    __Vfunc_event_add64__14269__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14269__low;
    __Vfunc_event_add64__14269__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14269__carry1;
    __Vfunc_event_add64__14269__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14269__carry2;
    __Vfunc_event_add64__14269__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14269__carry3;
    __Vfunc_event_add64__14269__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14270__Vfuncout;
    __Vfunc_event_add64__14270__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14270__value;
    __Vfunc_event_add64__14270__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14270__delta;
    __Vfunc_event_add64__14270__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14270__low;
    __Vfunc_event_add64__14270__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14270__carry1;
    __Vfunc_event_add64__14270__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14270__carry2;
    __Vfunc_event_add64__14270__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14270__carry3;
    __Vfunc_event_add64__14270__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14271__Vfuncout;
    __Vfunc_event_add64__14271__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14271__value;
    __Vfunc_event_add64__14271__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14271__delta;
    __Vfunc_event_add64__14271__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14271__low;
    __Vfunc_event_add64__14271__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14271__carry1;
    __Vfunc_event_add64__14271__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14271__carry2;
    __Vfunc_event_add64__14271__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14271__carry3;
    __Vfunc_event_add64__14271__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14272__Vfuncout;
    __Vfunc_event_add64__14272__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14272__value;
    __Vfunc_event_add64__14272__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14272__delta;
    __Vfunc_event_add64__14272__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14272__low;
    __Vfunc_event_add64__14272__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14272__carry1;
    __Vfunc_event_add64__14272__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14272__carry2;
    __Vfunc_event_add64__14272__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14272__carry3;
    __Vfunc_event_add64__14272__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14273__Vfuncout;
    __Vfunc_event_add64__14273__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14273__value;
    __Vfunc_event_add64__14273__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14273__delta;
    __Vfunc_event_add64__14273__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14273__low;
    __Vfunc_event_add64__14273__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14273__carry1;
    __Vfunc_event_add64__14273__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14273__carry2;
    __Vfunc_event_add64__14273__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14273__carry3;
    __Vfunc_event_add64__14273__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14274__Vfuncout;
    __Vfunc_event_add64__14274__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14274__value;
    __Vfunc_event_add64__14274__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14274__delta;
    __Vfunc_event_add64__14274__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14274__low;
    __Vfunc_event_add64__14274__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14274__carry1;
    __Vfunc_event_add64__14274__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14274__carry2;
    __Vfunc_event_add64__14274__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14274__carry3;
    __Vfunc_event_add64__14274__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14275__Vfuncout;
    __Vfunc_event_add64__14275__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14275__value;
    __Vfunc_event_add64__14275__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14275__delta;
    __Vfunc_event_add64__14275__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14275__low;
    __Vfunc_event_add64__14275__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14275__carry1;
    __Vfunc_event_add64__14275__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14275__carry2;
    __Vfunc_event_add64__14275__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14275__carry3;
    __Vfunc_event_add64__14275__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14276__Vfuncout;
    __Vfunc_event_add64__14276__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14276__value;
    __Vfunc_event_add64__14276__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14276__delta;
    __Vfunc_event_add64__14276__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14276__low;
    __Vfunc_event_add64__14276__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14276__carry1;
    __Vfunc_event_add64__14276__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14276__carry2;
    __Vfunc_event_add64__14276__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14276__carry3;
    __Vfunc_event_add64__14276__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14277__Vfuncout;
    __Vfunc_event_add64__14277__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14277__value;
    __Vfunc_event_add64__14277__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14277__delta;
    __Vfunc_event_add64__14277__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14277__low;
    __Vfunc_event_add64__14277__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14277__carry1;
    __Vfunc_event_add64__14277__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14277__carry2;
    __Vfunc_event_add64__14277__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14277__carry3;
    __Vfunc_event_add64__14277__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14278__Vfuncout;
    __Vfunc_event_add64__14278__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14278__value;
    __Vfunc_event_add64__14278__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14278__delta;
    __Vfunc_event_add64__14278__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14278__low;
    __Vfunc_event_add64__14278__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14278__carry1;
    __Vfunc_event_add64__14278__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14278__carry2;
    __Vfunc_event_add64__14278__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14278__carry3;
    __Vfunc_event_add64__14278__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14279__Vfuncout;
    __Vfunc_event_add64__14279__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14279__value;
    __Vfunc_event_add64__14279__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14279__delta;
    __Vfunc_event_add64__14279__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14279__low;
    __Vfunc_event_add64__14279__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14279__carry1;
    __Vfunc_event_add64__14279__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14279__carry2;
    __Vfunc_event_add64__14279__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14279__carry3;
    __Vfunc_event_add64__14279__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__14280__Vfuncout;
    __Vfunc_event_add64__14280__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__14280__value;
    __Vfunc_event_add64__14280__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__14280__delta;
    __Vfunc_event_add64__14280__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__14280__low;
    __Vfunc_event_add64__14280__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__14280__carry1;
    __Vfunc_event_add64__14280__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14280__carry2;
    __Vfunc_event_add64__14280__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__14280__carry3;
    __Vfunc_event_add64__14280__carry3 = 0;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_error) 
           | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_error) 
              | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid) 
                  & ((4U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                     | ((1U > (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)) 
                        | ((5U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)) 
                           | ((vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_pos 
                               != ((IData)(1U) + vlSelf->anvil_qn1_top__DOT__native__DOT__host_position)) 
                              | ((0xa000ULL <= vlSelf->anvil_qn1_top__DOT__native__DOT__batch_end) 
                                 | ((vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent 
                                     != ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__batch_end) 
                                         - (IData)(1U))) 
                                    | ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained)) 
                                       | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned))))))))) 
                 | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_valid) 
                     & ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                        & ((4U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent)) 
                           | ((0xa000U <= vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position) 
                              | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent))
                                  ? (vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position 
                                     != vlSelf->anvil_qn1_top__DOT__native__DOT__host_position)
                                  : ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__draft_owned)) 
                                     | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_parent) 
                                         >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__owned_draft_count)) 
                                        | ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__sequence_valid)) 
                                           | ((vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent 
                                               < vlSelf->anvil_qn1_top__DOT__native__DOT__committed_extent) 
                                              | (vlSelf->anvil_qn1_top__DOT__native__DOT__verify_position 
                                                 != 
                                                 ((IData)(1U) 
                                                  + vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent))))))))))) 
                    | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
                       & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_write)) 
                          & (((9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_kind)) 
                              | (0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_kind))) 
                             & (((3U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                                 & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned)) 
                                    | (4U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)))) 
                                | ((vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row 
                                    > vlSelf->anvil_qn1_top__DOT__native__DOT__evaluating_position) 
                                   | ((vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row 
                                       != vlSelf->anvil_qn1_top__DOT__native__DOT__evaluating_position) 
                                      & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__sequence_valid)) 
                                         | (vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_row 
                                            > vlSelf->anvil_qn1_top__DOT__native__DOT__staged_extent))))))))))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__req_valid 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready 
        = ((IData)(vlSelf->mem_req_ready) & (- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 0U;
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[0U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [0U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[1U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [1U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[2U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [2U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[3U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [3U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[4U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [4U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[5U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [5U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[6U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [6U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[7U] 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [7U];
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0U;
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0U] == (((QData)((IData)(vlSelf->mem_rsp_tag[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (0U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [1U] == (((QData)((IData)(vlSelf->mem_rsp_tag[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [1U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (1U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 1U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [2U] == (((QData)((IData)(vlSelf->mem_rsp_tag[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [2U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 2U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (1U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & (IData)(vlSelf->mem_rsp_valid)) 
         & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match)) 
            | (IData)(vlSelf->mem_rsp_error)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [3U] == (((QData)((IData)(vlSelf->mem_rsp_tag[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[2U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [3U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 1U)) & (3U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [1U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 1U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 3U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [4U] == (((QData)((IData)(vlSelf->mem_rsp_tag[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[2U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [4U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 1U)) & (4U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [1U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 1U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 4U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [5U] == (((QData)((IData)(vlSelf->mem_rsp_tag[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[2U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [5U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 1U)) & (5U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [1U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 1U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[1U] = 5U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (2U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 1U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 1U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 1U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [6U] == (((QData)((IData)(vlSelf->mem_rsp_tag[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[4U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [6U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 2U)) & (6U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [2U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 2U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 6U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [7U] == (((QData)((IData)(vlSelf->mem_rsp_tag[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[4U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [7U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 2U)) & (7U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [2U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 2U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 7U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [8U] == (((QData)((IData)(vlSelf->mem_rsp_tag[5U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[4U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [8U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 2U)) & (8U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [2U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 2U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[2U] = 8U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (4U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 2U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 2U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 2U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [9U] == (((QData)((IData)(vlSelf->mem_rsp_tag[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[6U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [9U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                           >> 3U)) & (9U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                      [3U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                >> 3U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 9U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xaU] == (((QData)((IData)(vlSelf->mem_rsp_tag[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[6U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xaU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 3U)) & (0xaU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [3U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 3U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 0xaU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xbU] == (((QData)((IData)(vlSelf->mem_rsp_tag[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[6U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xbU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 3U)) & (0xbU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [3U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 3U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[3U] = 0xbU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (8U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 3U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 3U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 3U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xcU] == (((QData)((IData)(vlSelf->mem_rsp_tag[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[8U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xcU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 4U)) & (0xcU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [4U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 4U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0xcU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xdU] == (((QData)((IData)(vlSelf->mem_rsp_tag[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[8U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xdU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 4U)) & (0xdU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [4U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 4U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0xdU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xeU] == (((QData)((IData)(vlSelf->mem_rsp_tag[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[8U])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xeU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 4U)) & (0xeU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [4U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 4U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[4U] = 0xeU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x10U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 4U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 4U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 4U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0xfU] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xbU])) 
                      << 0x20U) | (QData)((IData)(vlSelf->mem_rsp_tag[0xaU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0xfU]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                           & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                             >> 5U)) & (0xfU == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [5U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                  >> 5U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0xfU;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x10U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xbU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xaU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x10U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 5U)) & (0x10U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [5U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 5U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0x10U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x11U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xbU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xaU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x11U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 5U)) & (0x11U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [5U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 5U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[5U] = 0x11U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x20U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 5U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 5U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 5U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x12U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xdU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xcU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x12U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 6U)) & (0x12U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [6U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 6U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0x12U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x13U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xdU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xcU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x13U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 6U)) & (0x13U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [6U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 6U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0x13U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x14U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xdU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xcU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x14U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 6U)) & (0x14U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [6U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 6U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[6U] = 0x14U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x40U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 6U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 6U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 6U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x15U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xeU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x15U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 7U)) & (0x15U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [7U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 7U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0x15U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x16U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xeU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x16U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 7U)) & (0x16U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [7U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 7U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0x16U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if (((vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0x17U] == (((QData)((IData)(vlSelf->mem_rsp_tag[0xfU])) 
                       << 0x20U) | (QData)((IData)(
                                                   vlSelf->mem_rsp_tag[0xeU])))) 
         & ((2U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0x17U]) | (((((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                            & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush))) 
                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
                              >> 7U)) & (0x17U == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                         [7U])) & ((IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready) 
                                                   >> 7U))))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[7U] = 0x17U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match 
            = (0x80U | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match));
    }
    if ((((IData)(vlSelf->rst_n) & ((IData)(vlSelf->mem_rsp_valid) 
                                    >> 7U)) & ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match) 
                                                   >> 7U)) 
                                               | ((IData)(vlSelf->mem_rsp_error) 
                                                  >> 7U)))) {
        vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    anvil_qn1_top__DOT__native__DOT__bank_fault = ((IData)(vlSelf->rst_n) 
                                                   & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__fault_reg) 
                                                      | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0 
        = ((~ ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush) 
               | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining) 
                  | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)))) 
           & (IData)(vlSelf->rst_n));
    vlSelf->token_ready = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                           & ((~ (IData)(anvil_qn1_top__DOT__native__DOT__bank_fault)) 
                              & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_error)) 
                                 & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_error)) 
                                    & ((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                                       & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__done_reg)) 
                                          & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__error_reg)) 
                                             & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__cancel_done_reg)) 
                                                & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained) 
                                                   & ((~ 
                                                       ((IData)(vlSelf->csr_valid) 
                                                        | ((IData)(vlSelf->csr_rsp_valid) 
                                                           | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__mode_valid)))) 
                                                      & (IData)(vlSelf->csr_ready)))))))))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__csr_perf__mem_error 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_fault));
    vlSelf->anvil_qn1_top__DOT__native__DOT__detected_fault 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault) 
           | (IData)(anvil_qn1_top__DOT__native__DOT__bank_fault));
    vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 7U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 6U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 5U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 4U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 3U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 2U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request) 
              >> 1U));
    anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[0xbU] 
        = vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__csr_perf__mem_error;
    anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0 = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__detected_fault)) 
                                                  & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active));
    vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response) 
              | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                   << 7U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                              << 6U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active)))))))) 
                 >> ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__drsp_valid)
                      ? (7U & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                               >> 0x1cU)) : 0U))));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing));
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_mem_valid 
        = (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing) 
            << 7U) | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing) 
                       << 6U) | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing) 
                                  << 5U) | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing) 
                                             << 4U) 
                                            | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing) 
                                                << 3U) 
                                               | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing) 
                                                   << 2U) 
                                                  | (((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing) 
                                                      << 1U) 
                                                     | (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing))))))));
    anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_start_valid 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
           & ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                 & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned)) 
                    & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_valid)))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__decoder__logit_ready 
        = ((IData)(vlSelf->logit_ready) & (IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0));
    vlSelf->logit_valid = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
                           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_logit_valid));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_result_ready 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
           & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained) 
              & ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                 | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                    & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__verify_rsp_ready))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[0xcU] 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
           & ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
              & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__exhausted) 
                 & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_drained) 
                    & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_ready)))));
    anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0 = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h3e9c30fa__0) 
                                                  & (4U 
                                                     == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)));
    vlSelf->mem_req_valid = (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible) 
                              << 7U) | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible) 
                                         << 6U) | (
                                                   ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible) 
                                                    << 5U) 
                                                   | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible) 
                                                       << 4U) 
                                                      | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible) 
                                                          << 3U) 
                                                         | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible) 
                                                             << 2U) 
                                                            | (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible) 
                                                                << 1U) 
                                                               | (IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible))))))));
    vlSelf->mem_req_write = ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible) 
                               & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing) 
                                  & ((0x17U >= (0x1fU 
                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                [7U])) 
                                     && (1U & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                               >> (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U])))))) 
                              << 7U) | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible) 
                                          & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing) 
                                             & ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [6U])) 
                                                && (1U 
                                                    & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                       >> 
                                                       (0x1fU 
                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                        [6U])))))) 
                                         << 6U) | (
                                                   (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible) 
                                                     & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing) 
                                                        & ((0x17U 
                                                            >= 
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [5U])) 
                                                           && (1U 
                                                               & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                  >> 
                                                                  (0x1fU 
                                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                   [5U])))))) 
                                                    << 5U) 
                                                   | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible) 
                                                        & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing) 
                                                           & ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [4U])) 
                                                              && (1U 
                                                                  & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                      [4U])))))) 
                                                       << 4U) 
                                                      | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible) 
                                                           & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing) 
                                                              & ((0x17U 
                                                                  >= 
                                                                  (0x1fU 
                                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                   [3U])) 
                                                                 && (1U 
                                                                     & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                        >> 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [3U])))))) 
                                                          << 3U) 
                                                         | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible) 
                                                              & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing) 
                                                                 & ((0x17U 
                                                                     >= 
                                                                     (0x1fU 
                                                                      & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                      [2U])) 
                                                                    && (1U 
                                                                        & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                           >> 
                                                                           (0x1fU 
                                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                            [2U])))))) 
                                                             << 2U) 
                                                            | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible) 
                                                                 & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing) 
                                                                    & ((0x17U 
                                                                        >= 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [1U])) 
                                                                       && (1U 
                                                                           & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                              >> 
                                                                              (0x1fU 
                                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                               [1U])))))) 
                                                                << 1U) 
                                                               | ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible) 
                                                                  & ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing) 
                                                                     & ((0x17U 
                                                                         >= 
                                                                         (0x1fU 
                                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                          [0U])) 
                                                                        && (1U 
                                                                            & (vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__writing 
                                                                               >> 
                                                                               (0x1fU 
                                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                                [0U])))))))))))));
    vlSelf->mem_req_kind = ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                               ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                   ? ((0x17U >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [7U]))
                                       ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                      [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [7U])] : 0U)
                                   : 0U) : 0U) << 0x1cU) 
                            | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                  ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                      ? ((0x17U >= 
                                          (0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])) ? 
                                         vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                         [(0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])] : 0U)
                                      : 0U) : 0U) << 0x18U) 
                               | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                     ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                         ? ((0x17U 
                                             >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [5U]))
                                             ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                            [(0x1fU 
                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                              [5U])]
                                             : 0U) : 0U)
                                     : 0U) << 0x14U) 
                                  | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U])]
                                                : 0U)
                                            : 0U) : 0U) 
                                      << 0x10U) | (
                                                   (((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                                      ? 
                                                     ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                                       ? 
                                                      ((0x17U 
                                                        >= 
                                                        (0x1fU 
                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                         [3U]))
                                                        ? 
                                                       vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                       [
                                                       (0x1fU 
                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                        [3U])]
                                                        : 0U)
                                                       : 0U)
                                                      : 0U) 
                                                    << 0xcU) 
                                                   | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                                         ? 
                                                        ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                                          ? 
                                                         ((0x17U 
                                                           >= 
                                                           (0x1fU 
                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [2U]))
                                                           ? 
                                                          vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                          [
                                                          (0x1fU 
                                                           & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [2U])]
                                                           : 0U)
                                                          : 0U)
                                                         : 0U) 
                                                       << 8U) 
                                                      | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [1U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [1U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U) 
                                                          << 4U) 
                                                         | ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [0U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__kind
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [0U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U))))))));
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [0U]))) {
                vlSelf->mem_req_layer[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->mem_req_row[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->mem_req_col[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
                vlSelf->mem_req_wdata[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [0U])];
            } else {
                vlSelf->mem_req_layer[0U] = 0U;
                vlSelf->mem_req_row[0U] = 0U;
                vlSelf->mem_req_col[0U] = 0U;
                vlSelf->mem_req_wdata[0U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[0U] = 0U;
            vlSelf->mem_req_row[0U] = 0U;
            vlSelf->mem_req_col[0U] = 0U;
            vlSelf->mem_req_wdata[0U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[0U] = 0U;
        vlSelf->mem_req_row[0U] = 0U;
        vlSelf->mem_req_col[0U] = 0U;
        vlSelf->mem_req_wdata[0U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [1U]))) {
                vlSelf->mem_req_layer[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
                vlSelf->mem_req_row[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
                vlSelf->mem_req_col[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
                vlSelf->mem_req_wdata[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [1U])];
            } else {
                vlSelf->mem_req_layer[1U] = 0U;
                vlSelf->mem_req_row[1U] = 0U;
                vlSelf->mem_req_col[1U] = 0U;
                vlSelf->mem_req_wdata[1U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[1U] = 0U;
            vlSelf->mem_req_row[1U] = 0U;
            vlSelf->mem_req_col[1U] = 0U;
            vlSelf->mem_req_wdata[1U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[1U] = 0U;
        vlSelf->mem_req_row[1U] = 0U;
        vlSelf->mem_req_col[1U] = 0U;
        vlSelf->mem_req_wdata[1U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [2U]))) {
                vlSelf->mem_req_layer[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
                vlSelf->mem_req_row[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
                vlSelf->mem_req_col[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
                vlSelf->mem_req_wdata[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [2U])];
            } else {
                vlSelf->mem_req_layer[2U] = 0U;
                vlSelf->mem_req_row[2U] = 0U;
                vlSelf->mem_req_col[2U] = 0U;
                vlSelf->mem_req_wdata[2U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[2U] = 0U;
            vlSelf->mem_req_row[2U] = 0U;
            vlSelf->mem_req_col[2U] = 0U;
            vlSelf->mem_req_wdata[2U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[2U] = 0U;
        vlSelf->mem_req_row[2U] = 0U;
        vlSelf->mem_req_col[2U] = 0U;
        vlSelf->mem_req_wdata[2U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [3U]))) {
                vlSelf->mem_req_layer[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
                vlSelf->mem_req_row[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
                vlSelf->mem_req_col[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
                vlSelf->mem_req_wdata[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [3U])];
            } else {
                vlSelf->mem_req_layer[3U] = 0U;
                vlSelf->mem_req_row[3U] = 0U;
                vlSelf->mem_req_col[3U] = 0U;
                vlSelf->mem_req_wdata[3U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[3U] = 0U;
            vlSelf->mem_req_row[3U] = 0U;
            vlSelf->mem_req_col[3U] = 0U;
            vlSelf->mem_req_wdata[3U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[3U] = 0U;
        vlSelf->mem_req_row[3U] = 0U;
        vlSelf->mem_req_col[3U] = 0U;
        vlSelf->mem_req_wdata[3U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [4U]))) {
                vlSelf->mem_req_layer[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
                vlSelf->mem_req_row[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
                vlSelf->mem_req_col[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
                vlSelf->mem_req_wdata[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [4U])];
            } else {
                vlSelf->mem_req_layer[4U] = 0U;
                vlSelf->mem_req_row[4U] = 0U;
                vlSelf->mem_req_col[4U] = 0U;
                vlSelf->mem_req_wdata[4U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[4U] = 0U;
            vlSelf->mem_req_row[4U] = 0U;
            vlSelf->mem_req_col[4U] = 0U;
            vlSelf->mem_req_wdata[4U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[4U] = 0U;
        vlSelf->mem_req_row[4U] = 0U;
        vlSelf->mem_req_col[4U] = 0U;
        vlSelf->mem_req_wdata[4U] = 0U;
    }
    if (anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible) {
        if (anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing) {
            if ((0x17U >= (0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                           [5U]))) {
                vlSelf->mem_req_layer[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
                vlSelf->mem_req_row[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
                vlSelf->mem_req_col[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
                vlSelf->mem_req_wdata[5U] = vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                    [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                      [5U])];
            } else {
                vlSelf->mem_req_layer[5U] = 0U;
                vlSelf->mem_req_row[5U] = 0U;
                vlSelf->mem_req_col[5U] = 0U;
                vlSelf->mem_req_wdata[5U] = 0U;
            }
        } else {
            vlSelf->mem_req_layer[5U] = 0U;
            vlSelf->mem_req_row[5U] = 0U;
            vlSelf->mem_req_col[5U] = 0U;
            vlSelf->mem_req_wdata[5U] = 0U;
        }
    } else {
        vlSelf->mem_req_layer[5U] = 0U;
        vlSelf->mem_req_row[5U] = 0U;
        vlSelf->mem_req_col[5U] = 0U;
        vlSelf->mem_req_wdata[5U] = 0U;
    }
    vlSelf->mem_req_layer[6U] = (IData)((((QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U)))));
    vlSelf->mem_req_layer[7U] = (IData)(((((QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [7U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                              ? 
                                                             ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                               ? 
                                                              ((0x17U 
                                                                >= 
                                                                (0x1fU 
                                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                 [6U]))
                                                                ? 
                                                               vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__layer
                                                               [
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U])]
                                                                : 0U)
                                                               : 0U)
                                                              : 0U)))) 
                                         >> 0x20U));
    vlSelf->mem_req_row[6U] = (IData)((((QData)((IData)(
                                                        ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                          ? 
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                           ? 
                                                          ((0x17U 
                                                            >= 
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U]))
                                                            ? 
                                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                           [
                                                           (0x1fU 
                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [7U])]
                                                            : 0U)
                                                           : 0U)
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                                      ? 
                                                                     ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                                       ? 
                                                                      ((0x17U 
                                                                        >= 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [6U]))
                                                                        ? 
                                                                       vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                                       [
                                                                       (0x1fU 
                                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                        [6U])]
                                                                        : 0U)
                                                                       : 0U)
                                                                      : 0U)))));
    vlSelf->mem_req_row[7U] = (IData)(((((QData)((IData)(
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                           ? 
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                            ? 
                                                           ((0x17U 
                                                             >= 
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U]))
                                                             ? 
                                                            vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                            [
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U])]
                                                             : 0U)
                                                            : 0U)
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__row
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [6U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U)))) 
                                       >> 0x20U));
    vlSelf->mem_req_col[6U] = (IData)((((QData)((IData)(
                                                        ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                          ? 
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                           ? 
                                                          ((0x17U 
                                                            >= 
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U]))
                                                            ? 
                                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                           [
                                                           (0x1fU 
                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                            [7U])]
                                                            : 0U)
                                                           : 0U)
                                                          : 0U))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                                      ? 
                                                                     ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                                       ? 
                                                                      ((0x17U 
                                                                        >= 
                                                                        (0x1fU 
                                                                         & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                         [6U]))
                                                                        ? 
                                                                       vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                                       [
                                                                       (0x1fU 
                                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                        [6U])]
                                                                        : 0U)
                                                                       : 0U)
                                                                      : 0U)))));
    vlSelf->mem_req_col[7U] = (IData)(((((QData)((IData)(
                                                         ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                           ? 
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                            ? 
                                                           ((0x17U 
                                                             >= 
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U]))
                                                             ? 
                                                            vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                            [
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [7U])]
                                                             : 0U)
                                                            : 0U)
                                                           : 0U))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__col
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [6U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U)))) 
                                       >> 0x20U));
    vlSelf->mem_req_wdata[6U] = (IData)((((QData)((IData)(
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [7U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [6U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U)))));
    vlSelf->mem_req_wdata[7U] = (IData)(((((QData)((IData)(
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                                             ? 
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                                              ? 
                                                             ((0x17U 
                                                               >= 
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [7U]))
                                                               ? 
                                                              vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                              [
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [7U])]
                                                               : 0U)
                                                              : 0U)
                                                             : 0U))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                                              ? 
                                                             ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                                               ? 
                                                              ((0x17U 
                                                                >= 
                                                                (0x1fU 
                                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                 [6U]))
                                                                ? 
                                                               vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__wdata
                                                               [
                                                               (0x1fU 
                                                                & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                                [6U])]
                                                                : 0U)
                                                               : 0U)
                                                              : 0U)))) 
                                         >> 0x20U));
    vlSelf->mem_req_proj = ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                               ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                   ? ((0x17U >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [7U]))
                                       ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                      [(0x1fU & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                        [7U])] : 0U)
                                   : 0U) : 0U) << 0x15U) 
                            | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                  ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                      ? ((0x17U >= 
                                          (0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])) ? 
                                         vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                         [(0x1fU & 
                                           vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                           [6U])] : 0U)
                                      : 0U) : 0U) << 0x12U) 
                               | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                     ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                         ? ((0x17U 
                                             >= (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [5U]))
                                             ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                            [(0x1fU 
                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                              [5U])]
                                             : 0U) : 0U)
                                     : 0U) << 0xfU) 
                                  | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U])]
                                                : 0U)
                                            : 0U) : 0U) 
                                      << 0xcU) | ((
                                                   ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                                     ? 
                                                    ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                                      ? 
                                                     ((0x17U 
                                                       >= 
                                                       (0x1fU 
                                                        & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                        [3U]))
                                                       ? 
                                                      vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                      [
                                                      (0x1fU 
                                                       & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                       [3U])]
                                                       : 0U)
                                                      : 0U)
                                                     : 0U) 
                                                   << 9U) 
                                                  | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                                        ? 
                                                       ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                                         ? 
                                                        ((0x17U 
                                                          >= 
                                                          (0x1fU 
                                                           & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                           [2U]))
                                                          ? 
                                                         vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                         [
                                                         (0x1fU 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                          [2U])]
                                                          : 0U)
                                                         : 0U)
                                                        : 0U) 
                                                      << 6U) 
                                                     | ((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                                           ? 
                                                          ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                                            ? 
                                                           ((0x17U 
                                                             >= 
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [1U]))
                                                             ? 
                                                            vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                            [
                                                            (0x1fU 
                                                             & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                             [1U])]
                                                             : 0U)
                                                            : 0U)
                                                           : 0U) 
                                                         << 3U) 
                                                        | ((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                                            ? 
                                                           ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                                             ? 
                                                            ((0x17U 
                                                              >= 
                                                              (0x1fU 
                                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                               [0U]))
                                                              ? 
                                                             vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__projection
                                                             [
                                                             (0x1fU 
                                                              & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                              [0U])]
                                                              : 0U)
                                                             : 0U)
                                                            : 0U))))))));
    vlSelf->mem_req_tag[0U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [0U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [0U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[1U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__0__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__0__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [0U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [0U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[2U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [1U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [1U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[3U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__1__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__1__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [1U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [1U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[4U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [2U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [2U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[5U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__2__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__2__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [2U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [2U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[6U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [3U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [3U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[7U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__3__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__3__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [3U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [3U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[8U] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                        ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                            ? ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U]))
                                                ? vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                               [(0x1fU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                 [4U])]
                                                : 0ULL)
                                            : 0ULL)
                                        : 0ULL));
    vlSelf->mem_req_tag[9U] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__4__KET____DOT__visible)
                                         ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__4__KET____DOT__issuing)
                                             ? ((0x17U 
                                                 >= 
                                                 (0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [4U]))
                                                 ? 
                                                vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                [(0x1fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                  [4U])]
                                                 : 0ULL)
                                             : 0ULL)
                                         : 0ULL) >> 0x20U));
    vlSelf->mem_req_tag[0xaU] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                          ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                              ? ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [5U]))
                                                  ? 
                                                 vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                 [(0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [5U])]
                                                  : 0ULL)
                                              : 0ULL)
                                          : 0ULL));
    vlSelf->mem_req_tag[0xbU] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__5__KET____DOT__visible)
                                           ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__5__KET____DOT__issuing)
                                               ? ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [5U]))
                                                   ? 
                                                  vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                  [
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [5U])]
                                                   : 0ULL)
                                               : 0ULL)
                                           : 0ULL) 
                                         >> 0x20U));
    vlSelf->mem_req_tag[0xcU] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                          ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                              ? ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [6U]))
                                                  ? 
                                                 vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                 [(0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [6U])]
                                                  : 0ULL)
                                              : 0ULL)
                                          : 0ULL));
    vlSelf->mem_req_tag[0xdU] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__6__KET____DOT__visible)
                                           ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__6__KET____DOT__issuing)
                                               ? ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [6U]))
                                                   ? 
                                                  vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                  [
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [6U])]
                                                   : 0ULL)
                                               : 0ULL)
                                           : 0ULL) 
                                         >> 0x20U));
    vlSelf->mem_req_tag[0xeU] = (IData)(((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                          ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                              ? ((0x17U 
                                                  >= 
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U]))
                                                  ? 
                                                 vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                 [(0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U])]
                                                  : 0ULL)
                                              : 0ULL)
                                          : 0ULL));
    vlSelf->mem_req_tag[0xfU] = (IData)((((IData)(anvil_qn1_top__DOT__native__DOT__external_banks__BRA__7__KET____DOT__visible)
                                           ? ((IData)(anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__banks__BRA__7__KET____DOT__issuing)
                                               ? ((0x17U 
                                                   >= 
                                                   (0x1fU 
                                                    & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                    [7U]))
                                                   ? 
                                                  vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
                                                  [
                                                  (0x1fU 
                                                   & vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                                                   [7U])]
                                                   : 0ULL)
                                               : 0ULL)
                                           : 0ULL) 
                                         >> 0x20U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_out_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate)) 
              | ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate)) 
                 & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_lm)
                     ? (IData)(vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__decoder__logit_ready)
                     : ((0U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__raw_projection)) 
                        & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_in_ready))))));
    if (vlSelf->logit_valid) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_logit_valid) {
            vlSelf->logit_index = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_index;
            vlSelf->logit_data = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_fp32;
        } else {
            vlSelf->logit_index = 0U;
            vlSelf->logit_data = 0U;
        }
    } else {
        vlSelf->logit_index = 0U;
        vlSelf->logit_data = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__result_transfer 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_result_valid) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_result_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__verify_ready 
        = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0) 
           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_owned)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder_ready)));
    vlSelf->draft_ready = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0) 
                           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__draft_owned)) 
                              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_draft_ready)));
    vlSelf->commit_valid = ((IData)(anvil_qn1_top__DOT____VdfgTmp_h9d812a1d__0) 
                            & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid));
    vlSelf->anvil_qn1_top__DOT__native__DOT__root_publication 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__result_transfer) 
           & ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__state)) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__backend_root))));
    vlSelf->anvil_qn1_top__DOT____Vcellinp__native__DOT__dual_think_ctrl__draft_valid 
        = ((IData)(vlSelf->draft_valid) & (IData)(vlSelf->draft_ready));
    if (vlSelf->commit_valid) {
        vlSelf->commit_count = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count;
        vlSelf->commit_tokens[0U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[0U];
        vlSelf->commit_tokens[1U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[1U];
        vlSelf->commit_tokens[2U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[2U];
        vlSelf->commit_tokens[3U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[3U];
        vlSelf->commit_tokens[4U] = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_tokens[4U];
        vlSelf->commit_pos = vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_pos;
    } else {
        vlSelf->commit_count = 0U;
        vlSelf->commit_tokens[0U] = 0U;
        vlSelf->commit_tokens[1U] = 0U;
        vlSelf->commit_tokens[2U] = 0U;
        vlSelf->commit_tokens[3U] = 0U;
        vlSelf->commit_tokens[4U] = 0U;
        vlSelf->commit_pos = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__publication 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_valid) 
           & ((IData)(vlSelf->commit_ready) & (IData)(vlSelf->commit_valid)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__commit_transfer 
        = ((IData)(vlSelf->commit_valid) & (IData)(vlSelf->commit_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__observed_valid 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__input_precommitted)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__root_publication)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 0U;
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 0U;
    if (vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__publication) {
        if ((0U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[0U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((1U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[1U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((2U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[2U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((3U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[3U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
        if ((4U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated_count))) {
            if ((0x25073U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_open = 1U;
            }
            if ((0x25074U == vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__generated[4U])) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__committed_close = 1U;
            }
        }
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[3U] 
        = (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__commit_transfer) 
            & (IData)(vlSelf->think_active)) ? (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)
            : 0U);
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment[4U] 
        = (((~ (IData)(vlSelf->think_active)) & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__commit_transfer))
            ? (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__ctrl_commit_count)
            : 0U);
    __Vfunc_event_add64__14268__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0U];
    __Vfunc_event_add64__14268__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0U];
    __Vfunc_event_add64__14268__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14268__value)) 
                                                   + (IData)(__Vfunc_event_add64__14268__delta)));
    __Vfunc_event_add64__14268__carry1 = (1U & (__Vfunc_event_add64__14268__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14268__carry2 = ((IData)(__Vfunc_event_add64__14268__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14268__value)));
    __Vfunc_event_add64__14268__carry3 = ((IData)(__Vfunc_event_add64__14268__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14268__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14268__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14268__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14268__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14268__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14268__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14268__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14268__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14268__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0U] 
        = __Vfunc_event_add64__14268__Vfuncout;
    __Vfunc_event_add64__14269__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [1U];
    __Vfunc_event_add64__14269__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [1U];
    __Vfunc_event_add64__14269__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14269__value)) 
                                                   + (IData)(__Vfunc_event_add64__14269__delta)));
    __Vfunc_event_add64__14269__carry1 = (1U & (__Vfunc_event_add64__14269__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14269__carry2 = ((IData)(__Vfunc_event_add64__14269__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14269__value)));
    __Vfunc_event_add64__14269__carry3 = ((IData)(__Vfunc_event_add64__14269__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14269__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14269__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14269__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14269__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14269__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14269__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14269__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14269__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14269__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[1U] 
        = __Vfunc_event_add64__14269__Vfuncout;
    __Vfunc_event_add64__14270__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [2U];
    __Vfunc_event_add64__14270__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [2U];
    __Vfunc_event_add64__14270__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14270__value)) 
                                                   + (IData)(__Vfunc_event_add64__14270__delta)));
    __Vfunc_event_add64__14270__carry1 = (1U & (__Vfunc_event_add64__14270__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14270__carry2 = ((IData)(__Vfunc_event_add64__14270__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14270__value)));
    __Vfunc_event_add64__14270__carry3 = ((IData)(__Vfunc_event_add64__14270__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14270__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14270__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14270__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14270__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14270__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14270__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14270__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14270__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14270__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[2U] 
        = __Vfunc_event_add64__14270__Vfuncout;
    __Vfunc_event_add64__14271__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [3U];
    __Vfunc_event_add64__14271__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [3U];
    __Vfunc_event_add64__14271__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14271__value)) 
                                                   + (IData)(__Vfunc_event_add64__14271__delta)));
    __Vfunc_event_add64__14271__carry1 = (1U & (__Vfunc_event_add64__14271__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14271__carry2 = ((IData)(__Vfunc_event_add64__14271__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14271__value)));
    __Vfunc_event_add64__14271__carry3 = ((IData)(__Vfunc_event_add64__14271__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14271__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14271__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14271__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14271__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14271__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14271__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14271__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14271__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14271__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[3U] 
        = __Vfunc_event_add64__14271__Vfuncout;
    __Vfunc_event_add64__14272__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [4U];
    __Vfunc_event_add64__14272__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [4U];
    __Vfunc_event_add64__14272__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14272__value)) 
                                                   + (IData)(__Vfunc_event_add64__14272__delta)));
    __Vfunc_event_add64__14272__carry1 = (1U & (__Vfunc_event_add64__14272__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14272__carry2 = ((IData)(__Vfunc_event_add64__14272__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14272__value)));
    __Vfunc_event_add64__14272__carry3 = ((IData)(__Vfunc_event_add64__14272__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14272__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14272__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14272__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14272__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14272__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14272__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14272__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14272__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14272__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[4U] 
        = __Vfunc_event_add64__14272__Vfuncout;
    __Vfunc_event_add64__14273__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [5U];
    __Vfunc_event_add64__14273__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [5U];
    __Vfunc_event_add64__14273__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14273__value)) 
                                                   + (IData)(__Vfunc_event_add64__14273__delta)));
    __Vfunc_event_add64__14273__carry1 = (1U & (__Vfunc_event_add64__14273__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14273__carry2 = ((IData)(__Vfunc_event_add64__14273__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14273__value)));
    __Vfunc_event_add64__14273__carry3 = ((IData)(__Vfunc_event_add64__14273__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14273__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14273__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14273__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14273__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14273__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14273__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14273__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14273__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14273__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[5U] 
        = __Vfunc_event_add64__14273__Vfuncout;
    __Vfunc_event_add64__14274__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [6U];
    __Vfunc_event_add64__14274__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [6U];
    __Vfunc_event_add64__14274__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14274__value)) 
                                                   + (IData)(__Vfunc_event_add64__14274__delta)));
    __Vfunc_event_add64__14274__carry1 = (1U & (__Vfunc_event_add64__14274__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14274__carry2 = ((IData)(__Vfunc_event_add64__14274__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14274__value)));
    __Vfunc_event_add64__14274__carry3 = ((IData)(__Vfunc_event_add64__14274__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14274__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14274__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14274__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14274__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14274__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14274__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14274__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14274__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14274__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[6U] 
        = __Vfunc_event_add64__14274__Vfuncout;
    __Vfunc_event_add64__14275__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [7U];
    __Vfunc_event_add64__14275__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [7U];
    __Vfunc_event_add64__14275__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14275__value)) 
                                                   + (IData)(__Vfunc_event_add64__14275__delta)));
    __Vfunc_event_add64__14275__carry1 = (1U & (__Vfunc_event_add64__14275__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14275__carry2 = ((IData)(__Vfunc_event_add64__14275__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14275__value)));
    __Vfunc_event_add64__14275__carry3 = ((IData)(__Vfunc_event_add64__14275__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14275__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14275__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14275__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14275__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14275__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14275__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14275__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14275__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14275__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[7U] 
        = __Vfunc_event_add64__14275__Vfuncout;
    __Vfunc_event_add64__14276__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [8U];
    __Vfunc_event_add64__14276__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [8U];
    __Vfunc_event_add64__14276__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14276__value)) 
                                                   + (IData)(__Vfunc_event_add64__14276__delta)));
    __Vfunc_event_add64__14276__carry1 = (1U & (__Vfunc_event_add64__14276__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14276__carry2 = ((IData)(__Vfunc_event_add64__14276__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14276__value)));
    __Vfunc_event_add64__14276__carry3 = ((IData)(__Vfunc_event_add64__14276__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14276__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14276__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14276__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14276__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14276__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14276__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14276__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14276__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14276__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[8U] 
        = __Vfunc_event_add64__14276__Vfuncout;
    __Vfunc_event_add64__14277__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [9U];
    __Vfunc_event_add64__14277__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [9U];
    __Vfunc_event_add64__14277__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14277__value)) 
                                                   + (IData)(__Vfunc_event_add64__14277__delta)));
    __Vfunc_event_add64__14277__carry1 = (1U & (__Vfunc_event_add64__14277__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14277__carry2 = ((IData)(__Vfunc_event_add64__14277__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14277__value)));
    __Vfunc_event_add64__14277__carry3 = ((IData)(__Vfunc_event_add64__14277__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14277__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14277__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14277__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14277__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14277__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14277__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14277__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14277__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14277__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[9U] 
        = __Vfunc_event_add64__14277__Vfuncout;
    __Vfunc_event_add64__14278__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0xaU];
    __Vfunc_event_add64__14278__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0xaU];
    __Vfunc_event_add64__14278__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14278__value)) 
                                                   + (IData)(__Vfunc_event_add64__14278__delta)));
    __Vfunc_event_add64__14278__carry1 = (1U & (__Vfunc_event_add64__14278__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14278__carry2 = ((IData)(__Vfunc_event_add64__14278__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14278__value)));
    __Vfunc_event_add64__14278__carry3 = ((IData)(__Vfunc_event_add64__14278__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14278__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14278__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14278__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14278__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14278__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14278__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14278__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14278__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14278__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0xaU] 
        = __Vfunc_event_add64__14278__Vfuncout;
    __Vfunc_event_add64__14279__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0xbU];
    __Vfunc_event_add64__14279__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0xbU];
    __Vfunc_event_add64__14279__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14279__value)) 
                                                   + (IData)(__Vfunc_event_add64__14279__delta)));
    __Vfunc_event_add64__14279__carry1 = (1U & (__Vfunc_event_add64__14279__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14279__carry2 = ((IData)(__Vfunc_event_add64__14279__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14279__value)));
    __Vfunc_event_add64__14279__carry3 = ((IData)(__Vfunc_event_add64__14279__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14279__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14279__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14279__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14279__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14279__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14279__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14279__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14279__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14279__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0xbU] 
        = __Vfunc_event_add64__14279__Vfuncout;
    __Vfunc_event_add64__14280__delta = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__increment
        [0xcU];
    __Vfunc_event_add64__14280__value = vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__live
        [0xcU];
    __Vfunc_event_add64__14280__low = (0x1ffffU & (
                                                   (0xffffU 
                                                    & (IData)(__Vfunc_event_add64__14280__value)) 
                                                   + (IData)(__Vfunc_event_add64__14280__delta)));
    __Vfunc_event_add64__14280__carry1 = (1U & (__Vfunc_event_add64__14280__low 
                                                >> 0x10U));
    __Vfunc_event_add64__14280__carry2 = ((IData)(__Vfunc_event_add64__14280__carry1) 
                                          & (0xffff0000ULL 
                                             == (0xffff0000ULL 
                                                 & __Vfunc_event_add64__14280__value)));
    __Vfunc_event_add64__14280__carry3 = ((IData)(__Vfunc_event_add64__14280__carry1) 
                                          & (0xffffffffU 
                                             == (IData)(
                                                        (__Vfunc_event_add64__14280__value 
                                                         >> 0x10U))));
    __Vfunc_event_add64__14280__Vfuncout = (((QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__14280__value 
                                                                         >> 0x30U)) 
                                                                + (IData)(__Vfunc_event_add64__14280__carry3)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & ((IData)(
                                                                            (__Vfunc_event_add64__14280__value 
                                                                             >> 0x20U)) 
                                                                    + (IData)(__Vfunc_event_add64__14280__carry2)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((((IData)(
                                                                         (__Vfunc_event_add64__14280__value 
                                                                          >> 0x10U)) 
                                                                 + (IData)(__Vfunc_event_add64__14280__carry1)) 
                                                                << 0x10U) 
                                                               | (0xffffU 
                                                                  & __Vfunc_event_add64__14280__low)))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__csr_perf__DOT__incremented[0xcU] 
        = __Vfunc_event_add64__14280__Vfuncout;
}

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_comb__TOP__23(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_comb__TOP__23\n"); );
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__bank_req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((~ (IData)((0xffffffffffffffffULL == vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial))) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__bank_req_ready));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
           & ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__cr 
        = ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
             & ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready))) 
            << 7U) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
                        & ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready))) 
                       << 6U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready) 
                                  << 5U) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready) 
                                             << 4U) 
                                            | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready) 
                                                << 3U) 
                                               | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_valid) 
                                                        & ((0U 
                                                            == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                                                           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__dreq_ready))))))))));
}

void Vanvil_qn1_top___024root___eval_triggers__act(Vanvil_qn1_top___024root* vlSelf);
void Vanvil_qn1_top___024root___eval_act(Vanvil_qn1_top___024root* vlSelf);

bool Vanvil_qn1_top___024root___eval_phase__act(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<27> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vanvil_qn1_top___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vanvil_qn1_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vanvil_qn1_top___024root___eval_nba(Vanvil_qn1_top___024root* vlSelf);

bool Vanvil_qn1_top___024root___eval_phase__nba(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vanvil_qn1_top___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_top___024root___dump_triggers__ico(Vanvil_qn1_top___024root* vlSelf);
#endif  // VL_DEBUG
bool Vanvil_qn1_top___024root___eval_phase__ico(Vanvil_qn1_top___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_top___024root___dump_triggers__nba(Vanvil_qn1_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vanvil_qn1_top___024root___dump_triggers__act(Vanvil_qn1_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vanvil_qn1_top___024root___eval(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_top___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_top.sv", 1, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vanvil_qn1_top___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vanvil_qn1_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("rtl/anvil_qn1_top.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vanvil_qn1_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("rtl/anvil_qn1_top.sv", 1, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vanvil_qn1_top___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vanvil_qn1_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vanvil_qn1_top___024root___eval_debug_assertions(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst_n & 0xfeU))) {
        Verilated::overWidthError("rst_n");}
    if (VL_UNLIKELY((vlSelf->cancel & 0xfeU))) {
        Verilated::overWidthError("cancel");}
    if (VL_UNLIKELY((vlSelf->token_valid & 0xfeU))) {
        Verilated::overWidthError("token_valid");}
    if (VL_UNLIKELY((vlSelf->new_sequence & 0xfeU))) {
        Verilated::overWidthError("new_sequence");}
    if (VL_UNLIKELY((vlSelf->token_phase & 0xfeU))) {
        Verilated::overWidthError("token_phase");}
    if (VL_UNLIKELY((vlSelf->logit_ready & 0xfeU))) {
        Verilated::overWidthError("logit_ready");}
    if (VL_UNLIKELY((vlSelf->draft_valid & 0xfeU))) {
        Verilated::overWidthError("draft_valid");}
    if (VL_UNLIKELY((vlSelf->draft_count & 0xf8U))) {
        Verilated::overWidthError("draft_count");}
    if (VL_UNLIKELY((vlSelf->draft_parents & 0xf000U))) {
        Verilated::overWidthError("draft_parents");}
    if (VL_UNLIKELY((vlSelf->commit_ready & 0xfeU))) {
        Verilated::overWidthError("commit_ready");}
    if (VL_UNLIKELY((vlSelf->csr_valid & 0xfeU))) {
        Verilated::overWidthError("csr_valid");}
    if (VL_UNLIKELY((vlSelf->csr_write & 0xfeU))) {
        Verilated::overWidthError("csr_write");}
    if (VL_UNLIKELY((vlSelf->csr_addr & 0xf000U))) {
        Verilated::overWidthError("csr_addr");}
    if (VL_UNLIKELY((vlSelf->csr_wstrb & 0xf0U))) {
        Verilated::overWidthError("csr_wstrb");}
    if (VL_UNLIKELY((vlSelf->csr_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("csr_rsp_ready");}
}
#endif  // VL_DEBUG
