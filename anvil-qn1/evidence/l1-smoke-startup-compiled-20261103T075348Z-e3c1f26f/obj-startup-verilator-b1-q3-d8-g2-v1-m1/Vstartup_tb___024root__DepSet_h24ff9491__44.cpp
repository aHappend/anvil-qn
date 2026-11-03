// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vstartup_tb.h for the primary calling header

#include "Vstartup_tb__pch.h"
#include "Vstartup_tb___024root.h"

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__5(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__5\n"); );
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

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__7(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__7\n"); );
    // Body
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_error;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0 
            = (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
               >> 0x1cU);
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0 
            = (0xfffffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag);
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_data 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_data;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_error = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_h8649b870__0 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0 = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_data = 0U;
    }
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_valid) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_tag 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_tag = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__response_bad 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_valid) 
           & ((((~ ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                    | ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                       | (9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state))))) 
                | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_error)) 
               | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_tag 
                  != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__expected_tag)) 
              | ((9U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__normalization__DOT__state)) 
                 & ((0U != (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data 
                            >> 0x10U)) | ([&]() {
                            vlSelf->__Vfunc_bf16_invalid__49__value 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__rsp_data);
                            vlSelf->__Vfunc_bf16_invalid__49__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__49__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__49__Vfuncout))))));
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__9(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__9\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a = 0U;
    if ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__product;
    } else if ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__score;
    } else if ((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__denominator;
    } else if ((0xcU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = ((((0U == (0x1fU & VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U)))
                  ? 0U : (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[
                          (((IData)(0xfU) + (0x7fU 
                                             & VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U))) 
                           >> 5U)] << ((IData)(0x20U) 
                                       - (0x1fU & VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U))))) 
                | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__value[
                   (3U & (VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U) 
                          >> 5U))] >> (0x1fU & VL_SHIFTL_III(7,32,32, vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__cursor, 4U)))) 
               << 0x10U);
    } else if ((0xdU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerator_q;
    } else if ((0x10U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__alu_a 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__numerator_q;
    }
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__17(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__17\n"); );
    // Body
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_tag 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_tag = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_valid) 
           & ((((~ ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                    | ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                       | (8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state))))) 
                | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_error)) 
               | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_tag 
                  != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__expected_tag)) 
              | ((8U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__residuals__DOT__legal__DOT__state)) 
                 & ((0U != (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data 
                            >> 0x10U)) | ([&]() {
                            vlSelf->__Vfunc_bf16_invalid__54__value 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__rsp_data);
                            vlSelf->__Vfunc_bf16_invalid__54__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__54__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__54__Vfuncout))))));
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__18(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__18\n"); );
    // Body
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_tag 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_tag = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_valid) 
           & ((((~ ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                    | ((8U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                       | (0xeU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))))) 
                | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_error)) 
               | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_tag 
                  != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__expected_tag)) 
              | ((0xeU != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state)) 
                 & ((0U != (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data 
                            >> 0x10U)) | ([&]() {
                            vlSelf->__Vfunc_bf16_invalid__57__value 
                                = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__rsp_data);
                            vlSelf->__Vfunc_bf16_invalid__57__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__57__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__57__Vfuncout))))));
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__19(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__19\n"); );
    // Body
    if (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT____VdfgTmp_hd60cd98f__0;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data 
            = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_data;
    } else {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data = 0U;
    }
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_valid) 
           & (((((((((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__load_state)) 
                     | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_error)) 
                    | (0U != (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag 
                              >> 9U))) | ((1U & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag 
                                                 >> 8U)) 
                                          != (0xaU 
                                              == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)))) 
                  | (8U <= (0xffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag))) 
                 | ((0xffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag) 
                    >= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__issued))) 
                | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__seen) 
                   >> (7U & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_tag))) 
               | (0U != (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data 
                         >> 0x10U))) | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__78__value 
                        = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__rsp_data);
                    vlSelf->__Vfunc_bf16_invalid__78__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__78__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__78__Vfuncout))));
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__26(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__26\n"); );
    // Body
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__reserved_bad 
        = ((((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
             | (3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) 
            | (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) 
           & ((0U != (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data 
                      >> 0x10U)) | ([&]() {
                    vlSelf->__Vfunc_bf16_invalid__188__value 
                        = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data);
                    vlSelf->__Vfunc_bf16_invalid__188__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__188__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__188__Vfuncout))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__scale_bad 
        = ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
           & ([&]() {
                vlSelf->__Vfunc_bf16_scale_invalid__189__value 
                    = (0xffffU & vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data);
                vlSelf->__Vfunc_bf16_scale_invalid__189__Vfuncout 
                    = (([&]() {
                            vlSelf->__Vfunc_bf16_invalid__190__value 
                                = vlSelf->__Vfunc_bf16_scale_invalid__189__value;
                            vlSelf->__Vfunc_bf16_invalid__190__Vfuncout 
                                = (0xffU == (0xffU 
                                             & ((IData)(vlSelf->__Vfunc_bf16_invalid__190__value) 
                                                >> 7U)));
                        }(), (IData)(vlSelf->__Vfunc_bf16_invalid__190__Vfuncout)) 
                       | (((IData)(vlSelf->__Vfunc_bf16_scale_invalid__189__value) 
                           >> 0xfU) & (0U != (0x7fffU 
                                              & (IData)(vlSelf->__Vfunc_bf16_scale_invalid__189__value)))));
            }(), (IData)(vlSelf->__Vfunc_bf16_scale_invalid__189__Vfuncout)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_bad 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
           & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__load_state)) 
              | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_error) 
                 | ((0U != ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid)
                             ? ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid)
                                 ? (0x1ffffU & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                                                >> 0xbU))
                                 : 0U) : 0U)) | ((~ 
                                                  ((2U 
                                                    == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                    ? 
                                                   ((2U 
                                                     == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
                                                    | (3U 
                                                       == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)))
                                                    : 
                                                   ((0U 
                                                     == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)) 
                                                    | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type) 
                                                       == 
                                                       ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                                                         ? 1U
                                                         : 4U))))) 
                                                 | ((~ 
                                                     ((2U 
                                                       == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                       ? 
                                                      ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                       < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_groups))
                                                       : 
                                                      ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                       < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes)))) 
                                                    | (((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index) 
                                                          << 1U) 
                                                         | ((2U 
                                                             == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))
                                                             ? 
                                                            (3U 
                                                             == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))
                                                             : 
                                                            (0U 
                                                             != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type)))) 
                                                        >= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued)) 
                                                       | ((0x500U 
                                                           <= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)) 
                                                          | (((0x4ffU 
                                                               >= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)) 
                                                              && (1U 
                                                                  & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[
                                                                     ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address) 
                                                                      >> 5U)] 
                                                                     >> 
                                                                     (0x1fU 
                                                                      & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address))))) 
                                                             | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__reserved_bad) 
                                                                | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__scale_bad)))))))))));
}

VL_INLINE_OPT void Vstartup_tb___024root___nba_comb__TOP__35(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___nba_comb__TOP__35\n"); );
    // Init
    CData/*0:0*/ startup_tb__DOT__dut__DOT__native__DOT__logic_fault;
    startup_tb__DOT__dut__DOT__native__DOT__logic_fault = 0;
    CData/*0:0*/ startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0;
    startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0 = 0;
    CData/*0:0*/ startup_tb__DOT__dut__DOT____VdfgTmp_hf3048814__0;
    startup_tb__DOT__dut__DOT____VdfgTmp_hf3048814__0 = 0;
    CData/*0:0*/ startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request;
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request = 0;
    IData/*31:0*/ startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0;
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0 = 0;
    CData/*0:0*/ startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0;
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7475__Vfuncout;
    __Vfunc_event_add64__7475__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7475__value;
    __Vfunc_event_add64__7475__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7475__delta;
    __Vfunc_event_add64__7475__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7475__low;
    __Vfunc_event_add64__7475__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7475__carry1;
    __Vfunc_event_add64__7475__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7475__carry2;
    __Vfunc_event_add64__7475__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7475__carry3;
    __Vfunc_event_add64__7475__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7476__Vfuncout;
    __Vfunc_event_add64__7476__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7476__value;
    __Vfunc_event_add64__7476__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7476__delta;
    __Vfunc_event_add64__7476__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7476__low;
    __Vfunc_event_add64__7476__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7476__carry1;
    __Vfunc_event_add64__7476__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7476__carry2;
    __Vfunc_event_add64__7476__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7476__carry3;
    __Vfunc_event_add64__7476__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7477__Vfuncout;
    __Vfunc_event_add64__7477__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7477__value;
    __Vfunc_event_add64__7477__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7477__delta;
    __Vfunc_event_add64__7477__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7477__low;
    __Vfunc_event_add64__7477__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7477__carry1;
    __Vfunc_event_add64__7477__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7477__carry2;
    __Vfunc_event_add64__7477__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7477__carry3;
    __Vfunc_event_add64__7477__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7478__Vfuncout;
    __Vfunc_event_add64__7478__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7478__value;
    __Vfunc_event_add64__7478__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7478__delta;
    __Vfunc_event_add64__7478__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7478__low;
    __Vfunc_event_add64__7478__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7478__carry1;
    __Vfunc_event_add64__7478__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7478__carry2;
    __Vfunc_event_add64__7478__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7478__carry3;
    __Vfunc_event_add64__7478__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7479__Vfuncout;
    __Vfunc_event_add64__7479__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7479__value;
    __Vfunc_event_add64__7479__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7479__delta;
    __Vfunc_event_add64__7479__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7479__low;
    __Vfunc_event_add64__7479__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7479__carry1;
    __Vfunc_event_add64__7479__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7479__carry2;
    __Vfunc_event_add64__7479__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7479__carry3;
    __Vfunc_event_add64__7479__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7480__Vfuncout;
    __Vfunc_event_add64__7480__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7480__value;
    __Vfunc_event_add64__7480__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7480__delta;
    __Vfunc_event_add64__7480__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7480__low;
    __Vfunc_event_add64__7480__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7480__carry1;
    __Vfunc_event_add64__7480__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7480__carry2;
    __Vfunc_event_add64__7480__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7480__carry3;
    __Vfunc_event_add64__7480__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7481__Vfuncout;
    __Vfunc_event_add64__7481__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7481__value;
    __Vfunc_event_add64__7481__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7481__delta;
    __Vfunc_event_add64__7481__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7481__low;
    __Vfunc_event_add64__7481__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7481__carry1;
    __Vfunc_event_add64__7481__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7481__carry2;
    __Vfunc_event_add64__7481__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7481__carry3;
    __Vfunc_event_add64__7481__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7482__Vfuncout;
    __Vfunc_event_add64__7482__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7482__value;
    __Vfunc_event_add64__7482__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7482__delta;
    __Vfunc_event_add64__7482__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7482__low;
    __Vfunc_event_add64__7482__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7482__carry1;
    __Vfunc_event_add64__7482__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7482__carry2;
    __Vfunc_event_add64__7482__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7482__carry3;
    __Vfunc_event_add64__7482__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7483__Vfuncout;
    __Vfunc_event_add64__7483__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7483__value;
    __Vfunc_event_add64__7483__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7483__delta;
    __Vfunc_event_add64__7483__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7483__low;
    __Vfunc_event_add64__7483__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7483__carry1;
    __Vfunc_event_add64__7483__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7483__carry2;
    __Vfunc_event_add64__7483__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7483__carry3;
    __Vfunc_event_add64__7483__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7484__Vfuncout;
    __Vfunc_event_add64__7484__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7484__value;
    __Vfunc_event_add64__7484__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7484__delta;
    __Vfunc_event_add64__7484__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7484__low;
    __Vfunc_event_add64__7484__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7484__carry1;
    __Vfunc_event_add64__7484__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7484__carry2;
    __Vfunc_event_add64__7484__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7484__carry3;
    __Vfunc_event_add64__7484__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7485__Vfuncout;
    __Vfunc_event_add64__7485__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7485__value;
    __Vfunc_event_add64__7485__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7485__delta;
    __Vfunc_event_add64__7485__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7485__low;
    __Vfunc_event_add64__7485__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7485__carry1;
    __Vfunc_event_add64__7485__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7485__carry2;
    __Vfunc_event_add64__7485__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7485__carry3;
    __Vfunc_event_add64__7485__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7486__Vfuncout;
    __Vfunc_event_add64__7486__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7486__value;
    __Vfunc_event_add64__7486__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7486__delta;
    __Vfunc_event_add64__7486__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7486__low;
    __Vfunc_event_add64__7486__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7486__carry1;
    __Vfunc_event_add64__7486__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7486__carry2;
    __Vfunc_event_add64__7486__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7486__carry3;
    __Vfunc_event_add64__7486__carry3 = 0;
    QData/*63:0*/ __Vfunc_event_add64__7487__Vfuncout;
    __Vfunc_event_add64__7487__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_event_add64__7487__value;
    __Vfunc_event_add64__7487__value = 0;
    CData/*2:0*/ __Vfunc_event_add64__7487__delta;
    __Vfunc_event_add64__7487__delta = 0;
    IData/*16:0*/ __Vfunc_event_add64__7487__low;
    __Vfunc_event_add64__7487__low = 0;
    CData/*0:0*/ __Vfunc_event_add64__7487__carry1;
    __Vfunc_event_add64__7487__carry1 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7487__carry2;
    __Vfunc_event_add64__7487__carry2 = 0;
    CData/*0:0*/ __Vfunc_event_add64__7487__carry3;
    __Vfunc_event_add64__7487__carry3 = 0;
    // Body
    startup_tb__DOT__dut__DOT__native__DOT__logic_fault 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_error) 
           | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_error) 
              | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid) 
                  & ((4U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                     | ((1U > (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count)) 
                        | ((5U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_count)) 
                           | ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid)
                                 ? ((IData)(1U) + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__position)
                                 : 0U) != ((IData)(1U) 
                                           + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position)) 
                              | ((1ULL <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__batch_end) 
                                 | ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__staged_extent 
                                     != ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__batch_end) 
                                         - (IData)(1U))) 
                                    | ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained)) 
                                       | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned))))))))) 
                 | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_valid) 
                     & ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                        & ((4U < (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent)) 
                           | ((1U <= vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_position) 
                              | ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent))
                                  ? (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_position 
                                     != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__host_position)
                                  : ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned)) 
                                     | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_parent) 
                                         >= (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__owned_draft_count)) 
                                        | ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid)) 
                                           | ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__staged_extent 
                                               < vlSelf->startup_tb__DOT__dut__DOT__native__DOT__committed_extent) 
                                              | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_position 
                                                 != 
                                                 ((IData)(1U) 
                                                  + vlSelf->startup_tb__DOT__dut__DOT__native__DOT__staged_extent))))))))))) 
                    | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
                       & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_write)) 
                          & (((9U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_kind)) 
                              | (0xaU == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_kind))) 
                             & (((3U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                                 & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned)) 
                                    | (4U != (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)))) 
                                | ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_row 
                                    > vlSelf->startup_tb__DOT__dut__DOT__native__DOT__evaluating_position) 
                                   | ((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_row 
                                       != vlSelf->startup_tb__DOT__dut__DOT__native__DOT__evaluating_position) 
                                      & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__sequence_valid)) 
                                         | (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_row 
                                            > vlSelf->startup_tb__DOT__dut__DOT__native__DOT__staged_extent))))))))))));
    vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__req_valid 
        = ((~ (IData)(startup_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid));
    vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready 
        = ((~ (IData)(startup_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->startup_tb__DOT__mem_req_ready));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 0U;
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_owned;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 0U;
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0 
        = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__request_slot
        [0U];
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected[0U] 
        = startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____Vlvbound_h7edc0b40__0;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
    if (((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [0U] == vlSelf->startup_tb__DOT__mem_rsp_tag) 
         & ((2U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [0U]) | (((((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__flush))) 
                        & (IData)(startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (0U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 0U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 1U;
    }
    if (((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [1U] == vlSelf->startup_tb__DOT__mem_rsp_tag) 
         & ((2U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [1U]) | (((((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__flush))) 
                        & (IData)(startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (1U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 1U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 1U;
    }
    if (((vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__tag
          [2U] == vlSelf->startup_tb__DOT__mem_rsp_tag) 
         & ((2U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__state
             [2U]) | (((((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining)) 
                         & (~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__flush))) 
                        & (IData)(startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request)) 
                       & (2U == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__selected
                          [0U])) & (IData)(vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__bank_scheduler__mem_req_ready))))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__matched[0U] = 2U;
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match = 1U;
    }
    if ((((IData)(vlSelf->startup_tb__DOT__rst_n) & (IData)(vlSelf->startup_tb__DOT__mem_rsp_valid)) 
         & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_match)) 
            | (IData)(vlSelf->startup_tb__DOT__mem_rsp_error)))) {
        vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault = 1U;
    }
    startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0 
        = ((~ ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__flush) 
               | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__draining) 
                  | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)))) 
           & (IData)(vlSelf->startup_tb__DOT__rst_n));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_fault 
        = ((IData)(vlSelf->startup_tb__DOT__rst_n) 
           & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__fault_reg) 
              | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__transaction_fault)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid 
        = ((IData)(startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_request));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid 
        = ((IData)(startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_valid));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_req_ready 
        = ((IData)(startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT____VdfgTmp_haf599044__0) 
           & ((~ (IData)((0xffffffffffffffffULL == vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__serial))) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__have_free)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__token_transfer 
        = ((IData)(vlSelf->startup_tb__DOT__token_valid) 
           & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
              & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_fault)) 
                 & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_error)) 
                    & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_error)) 
                       & ((0U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                          & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__done_reg)) 
                             & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__error_reg)) 
                                & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__cancel_done_reg)) 
                                   & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained) 
                                      & ((~ ((IData)(vlSelf->startup_tb__DOT__csr_rsp_valid) 
                                             | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__mode_valid))) 
                                         & (IData)(vlSelf->startup_tb__DOT__csr_ready))))))))))));
    vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__csr_perf__mem_error 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_fault));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__detected_fault 
        = ((IData)(startup_tb__DOT__dut__DOT__native__DOT__logic_fault) 
           | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_fault));
    vlSelf->startup_tb__DOT__mem_req_valid = ((~ (IData)(startup_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
                                              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_mem_valid));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
           & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__bad_response) 
              | ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                   << 7U) | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
                              << 6U) | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                         << 5U) | (
                                                   ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                                             << 1U) 
                                                            | (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active)))))))) 
                 >> ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__drsp_valid)
                      ? (7U & (vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_scheduler__DOT__legal__DOT__output_tag 
                               >> 0x1cU)) : 0U))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready 
        = ((~ (IData)(startup_tb__DOT__dut__DOT__native__DOT__logic_fault)) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_req_ready));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment[0xbU] 
        = vlSelf->startup_tb__DOT__dut__DOT____Vcellinp__native__DOT__csr_perf__mem_error;
    startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0 
        = ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__detected_fault)) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
           & ((1U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready)));
    vlSelf->startup_tb__DOT__logit_valid = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0) 
                                            & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_logit_valid));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_start_valid 
        = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0) 
           & ((2U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                 & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned)) 
                    & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_valid)))));
    startup_tb__DOT__dut__DOT____VdfgTmp_hf3048814__0 
        = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0) 
           & (4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_result_ready 
        = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0) 
           & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained) 
              & ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                 | ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                    & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned) 
                       & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_rsp_ready))))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment[0xcU] 
        = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hbae8379b__0) 
           & ((5U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
              & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__exhausted) 
                 & ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__bank_drained) 
                    & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_ready)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__cr 
        = ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
             & ((7U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready))) 
            << 7U) | ((((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
                        & ((6U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready))) 
                       << 6U) | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__residuals__req_ready) 
                                  << 5U) | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__req_ready) 
                                             << 4U) 
                                            | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__attention__req_ready) 
                                                << 3U) 
                                               | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__normalization__req_ready) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready) 
                                                      << 1U) 
                                                     | ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_valid) 
                                                        & ((0U 
                                                            == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder__DOT__memory_router__DOT__selected)) 
                                                           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dreq_ready))))))))));
    vlSelf->startup_tb__DOT__commit_valid = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hf3048814__0) 
                                             & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_commit_valid));
    vlSelf->startup_tb__DOT__draft_ready = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hf3048814__0) 
                                            & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__draft_owned)) 
                                               & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__ctrl_draft_ready)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__verify_ready 
        = ((IData)(startup_tb__DOT__dut__DOT____VdfgTmp_hf3048814__0) 
           & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_owned)) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_ready)));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__result_transfer 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_result_valid) 
           & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__decoder_result_ready));
    __Vfunc_event_add64__7475__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0U];
    __Vfunc_event_add64__7475__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0U];
    __Vfunc_event_add64__7475__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7475__value)) 
                                                  + (IData)(__Vfunc_event_add64__7475__delta)));
    __Vfunc_event_add64__7475__carry1 = (1U & (__Vfunc_event_add64__7475__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7475__carry2 = ((IData)(__Vfunc_event_add64__7475__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7475__value)));
    __Vfunc_event_add64__7475__carry3 = ((IData)(__Vfunc_event_add64__7475__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7475__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7475__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7475__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7475__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7475__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7475__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7475__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7475__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7475__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0U] 
        = __Vfunc_event_add64__7475__Vfuncout;
    __Vfunc_event_add64__7476__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [1U];
    __Vfunc_event_add64__7476__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [1U];
    __Vfunc_event_add64__7476__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7476__value)) 
                                                  + (IData)(__Vfunc_event_add64__7476__delta)));
    __Vfunc_event_add64__7476__carry1 = (1U & (__Vfunc_event_add64__7476__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7476__carry2 = ((IData)(__Vfunc_event_add64__7476__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7476__value)));
    __Vfunc_event_add64__7476__carry3 = ((IData)(__Vfunc_event_add64__7476__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7476__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7476__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7476__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7476__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7476__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7476__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7476__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7476__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7476__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[1U] 
        = __Vfunc_event_add64__7476__Vfuncout;
    __Vfunc_event_add64__7477__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [2U];
    __Vfunc_event_add64__7477__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [2U];
    __Vfunc_event_add64__7477__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7477__value)) 
                                                  + (IData)(__Vfunc_event_add64__7477__delta)));
    __Vfunc_event_add64__7477__carry1 = (1U & (__Vfunc_event_add64__7477__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7477__carry2 = ((IData)(__Vfunc_event_add64__7477__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7477__value)));
    __Vfunc_event_add64__7477__carry3 = ((IData)(__Vfunc_event_add64__7477__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7477__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7477__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7477__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7477__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7477__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7477__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7477__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7477__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7477__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[2U] 
        = __Vfunc_event_add64__7477__Vfuncout;
    __Vfunc_event_add64__7478__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [3U];
    __Vfunc_event_add64__7478__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [3U];
    __Vfunc_event_add64__7478__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7478__value)) 
                                                  + (IData)(__Vfunc_event_add64__7478__delta)));
    __Vfunc_event_add64__7478__carry1 = (1U & (__Vfunc_event_add64__7478__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7478__carry2 = ((IData)(__Vfunc_event_add64__7478__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7478__value)));
    __Vfunc_event_add64__7478__carry3 = ((IData)(__Vfunc_event_add64__7478__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7478__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7478__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7478__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7478__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7478__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7478__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7478__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7478__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7478__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[3U] 
        = __Vfunc_event_add64__7478__Vfuncout;
    __Vfunc_event_add64__7479__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [4U];
    __Vfunc_event_add64__7479__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [4U];
    __Vfunc_event_add64__7479__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7479__value)) 
                                                  + (IData)(__Vfunc_event_add64__7479__delta)));
    __Vfunc_event_add64__7479__carry1 = (1U & (__Vfunc_event_add64__7479__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7479__carry2 = ((IData)(__Vfunc_event_add64__7479__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7479__value)));
    __Vfunc_event_add64__7479__carry3 = ((IData)(__Vfunc_event_add64__7479__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7479__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7479__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7479__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7479__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7479__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7479__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7479__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7479__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7479__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[4U] 
        = __Vfunc_event_add64__7479__Vfuncout;
    __Vfunc_event_add64__7480__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [5U];
    __Vfunc_event_add64__7480__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [5U];
    __Vfunc_event_add64__7480__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7480__value)) 
                                                  + (IData)(__Vfunc_event_add64__7480__delta)));
    __Vfunc_event_add64__7480__carry1 = (1U & (__Vfunc_event_add64__7480__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7480__carry2 = ((IData)(__Vfunc_event_add64__7480__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7480__value)));
    __Vfunc_event_add64__7480__carry3 = ((IData)(__Vfunc_event_add64__7480__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7480__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7480__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7480__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7480__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7480__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7480__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7480__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7480__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7480__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[5U] 
        = __Vfunc_event_add64__7480__Vfuncout;
    __Vfunc_event_add64__7481__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [6U];
    __Vfunc_event_add64__7481__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [6U];
    __Vfunc_event_add64__7481__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7481__value)) 
                                                  + (IData)(__Vfunc_event_add64__7481__delta)));
    __Vfunc_event_add64__7481__carry1 = (1U & (__Vfunc_event_add64__7481__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7481__carry2 = ((IData)(__Vfunc_event_add64__7481__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7481__value)));
    __Vfunc_event_add64__7481__carry3 = ((IData)(__Vfunc_event_add64__7481__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7481__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7481__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7481__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7481__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7481__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7481__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7481__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7481__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7481__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[6U] 
        = __Vfunc_event_add64__7481__Vfuncout;
    __Vfunc_event_add64__7482__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [7U];
    __Vfunc_event_add64__7482__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [7U];
    __Vfunc_event_add64__7482__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7482__value)) 
                                                  + (IData)(__Vfunc_event_add64__7482__delta)));
    __Vfunc_event_add64__7482__carry1 = (1U & (__Vfunc_event_add64__7482__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7482__carry2 = ((IData)(__Vfunc_event_add64__7482__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7482__value)));
    __Vfunc_event_add64__7482__carry3 = ((IData)(__Vfunc_event_add64__7482__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7482__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7482__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7482__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7482__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7482__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7482__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7482__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7482__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7482__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[7U] 
        = __Vfunc_event_add64__7482__Vfuncout;
    __Vfunc_event_add64__7483__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [8U];
    __Vfunc_event_add64__7483__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [8U];
    __Vfunc_event_add64__7483__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7483__value)) 
                                                  + (IData)(__Vfunc_event_add64__7483__delta)));
    __Vfunc_event_add64__7483__carry1 = (1U & (__Vfunc_event_add64__7483__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7483__carry2 = ((IData)(__Vfunc_event_add64__7483__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7483__value)));
    __Vfunc_event_add64__7483__carry3 = ((IData)(__Vfunc_event_add64__7483__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7483__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7483__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7483__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7483__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7483__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7483__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7483__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7483__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7483__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[8U] 
        = __Vfunc_event_add64__7483__Vfuncout;
    __Vfunc_event_add64__7484__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [9U];
    __Vfunc_event_add64__7484__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [9U];
    __Vfunc_event_add64__7484__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7484__value)) 
                                                  + (IData)(__Vfunc_event_add64__7484__delta)));
    __Vfunc_event_add64__7484__carry1 = (1U & (__Vfunc_event_add64__7484__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7484__carry2 = ((IData)(__Vfunc_event_add64__7484__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7484__value)));
    __Vfunc_event_add64__7484__carry3 = ((IData)(__Vfunc_event_add64__7484__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7484__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7484__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7484__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7484__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7484__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7484__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7484__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7484__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7484__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[9U] 
        = __Vfunc_event_add64__7484__Vfuncout;
    __Vfunc_event_add64__7485__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0xaU];
    __Vfunc_event_add64__7485__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0xaU];
    __Vfunc_event_add64__7485__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7485__value)) 
                                                  + (IData)(__Vfunc_event_add64__7485__delta)));
    __Vfunc_event_add64__7485__carry1 = (1U & (__Vfunc_event_add64__7485__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7485__carry2 = ((IData)(__Vfunc_event_add64__7485__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7485__value)));
    __Vfunc_event_add64__7485__carry3 = ((IData)(__Vfunc_event_add64__7485__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7485__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7485__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7485__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7485__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7485__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7485__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7485__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7485__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7485__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0xaU] 
        = __Vfunc_event_add64__7485__Vfuncout;
    __Vfunc_event_add64__7486__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0xbU];
    __Vfunc_event_add64__7486__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0xbU];
    __Vfunc_event_add64__7486__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7486__value)) 
                                                  + (IData)(__Vfunc_event_add64__7486__delta)));
    __Vfunc_event_add64__7486__carry1 = (1U & (__Vfunc_event_add64__7486__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7486__carry2 = ((IData)(__Vfunc_event_add64__7486__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7486__value)));
    __Vfunc_event_add64__7486__carry3 = ((IData)(__Vfunc_event_add64__7486__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7486__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7486__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7486__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7486__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7486__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7486__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7486__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7486__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7486__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0xbU] 
        = __Vfunc_event_add64__7486__Vfuncout;
    __Vfunc_event_add64__7487__delta = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__increment
        [0xcU];
    __Vfunc_event_add64__7487__value = vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__live
        [0xcU];
    __Vfunc_event_add64__7487__low = (0x1ffffU & ((0xffffU 
                                                   & (IData)(__Vfunc_event_add64__7487__value)) 
                                                  + (IData)(__Vfunc_event_add64__7487__delta)));
    __Vfunc_event_add64__7487__carry1 = (1U & (__Vfunc_event_add64__7487__low 
                                               >> 0x10U));
    __Vfunc_event_add64__7487__carry2 = ((IData)(__Vfunc_event_add64__7487__carry1) 
                                         & (0xffff0000ULL 
                                            == (0xffff0000ULL 
                                                & __Vfunc_event_add64__7487__value)));
    __Vfunc_event_add64__7487__carry3 = ((IData)(__Vfunc_event_add64__7487__carry1) 
                                         & (0xffffffffU 
                                            == (IData)(
                                                       (__Vfunc_event_add64__7487__value 
                                                        >> 0x10U))));
    __Vfunc_event_add64__7487__Vfuncout = (((QData)((IData)(
                                                            ((((IData)(
                                                                       (__Vfunc_event_add64__7487__value 
                                                                        >> 0x30U)) 
                                                               + (IData)(__Vfunc_event_add64__7487__carry3)) 
                                                              << 0x10U) 
                                                             | (0xffffU 
                                                                & ((IData)(
                                                                           (__Vfunc_event_add64__7487__value 
                                                                            >> 0x20U)) 
                                                                   + (IData)(__Vfunc_event_add64__7487__carry2)))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(
                                                                        (__Vfunc_event_add64__7487__value 
                                                                         >> 0x10U)) 
                                                                + (IData)(__Vfunc_event_add64__7487__carry1)) 
                                                               << 0x10U) 
                                                              | (0xffffU 
                                                                 & __Vfunc_event_add64__7487__low)))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__csr_perf__DOT__incremented[0xcU] 
        = __Vfunc_event_add64__7487__Vfuncout;
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__root_publication 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__result_transfer) 
           & ((3U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
              | ((4U == (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__state)) 
                 & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__backend_root))));
    vlSelf->startup_tb__DOT__dut__DOT__native__DOT__observed_valid 
        = ((IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__dual_think_ctrl__DOT__active) 
           & ((~ (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__input_precommitted)) 
              & (IData)(vlSelf->startup_tb__DOT__dut__DOT__native__DOT__root_publication)));
}

void Vstartup_tb___024root___timing_resume(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___timing_resume\n"); );
    // Body
    if ((0x4000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf0e2429d__0.resume("@(posedge startup_tb.clk)");
    }
    if ((0x10000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VtrigSched_hf0e2435c__0.resume("@(negedge startup_tb.clk)");
    }
    if ((0x8000000ULL & vlSelf->__VactTriggered.word(0U))) {
        vlSelf->__VdlySched.resume();
    }
}

void Vstartup_tb___024root___timing_commit(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___timing_commit\n"); );
    // Body
    if ((! (0x4000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf0e2429d__0.commit("@(posedge startup_tb.clk)");
    }
    if ((! (0x10000000ULL & vlSelf->__VactTriggered.word(0U)))) {
        vlSelf->__VtrigSched_hf0e2435c__0.commit("@(negedge startup_tb.clk)");
    }
}

void Vstartup_tb___024root___eval_triggers__act(Vstartup_tb___024root* vlSelf);
void Vstartup_tb___024root___eval_act(Vstartup_tb___024root* vlSelf);

bool Vstartup_tb___024root___eval_phase__act(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<29> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vstartup_tb___024root___eval_triggers__act(vlSelf);
    Vstartup_tb___024root___timing_commit(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vstartup_tb___024root___timing_resume(vlSelf);
        Vstartup_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vstartup_tb___024root___eval_nba(Vstartup_tb___024root* vlSelf);

bool Vstartup_tb___024root___eval_phase__nba(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vstartup_tb___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vstartup_tb___024root___dump_triggers__nba(Vstartup_tb___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vstartup_tb___024root___dump_triggers__act(Vstartup_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vstartup_tb___024root___eval(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vstartup_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("evidence/l1-smoke-startup-compiled-20261103T075348Z-e3c1f26f/startup-verilator-b1-q3-d8-g2-v1-m1.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vstartup_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("evidence/l1-smoke-startup-compiled-20261103T075348Z-e3c1f26f/startup-verilator-b1-q3-d8-g2-v1-m1.sv", 2, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vstartup_tb___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vstartup_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vstartup_tb___024root___eval_debug_assertions(Vstartup_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vstartup_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vstartup_tb___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
