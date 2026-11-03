// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top__Syms.h"
#include "Vanvil_qn1_top___024root.h"

extern const VlWide<64>/*2047:0*/ Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0;
extern const VlWide<32>/*1023:0*/ Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0;
extern const VlWide<128>/*4095:0*/ Vanvil_qn1_top__ConstPool__CONST_h6e0f3f36_0;
extern const VlWide<40>/*1279:0*/ Vanvil_qn1_top__ConstPool__CONST_had224c38_0;

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__47(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__47\n"); );
    // Init
    IData/*31:0*/ anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane;
    anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane = 0;
    IData/*31:0*/ __Vilp;
    IData/*16:0*/ __Vfunc_round_bf16__11__Vfuncout;
    __Vfunc_round_bf16__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__11__value;
    __Vfunc_round_bf16__11__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__11__rounded;
    __Vfunc_round_bf16__11__rounded = 0;
    IData/*16:0*/ __Vfunc_round_bf16__33__Vfuncout;
    __Vfunc_round_bf16__33__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_round_bf16__33__value;
    __Vfunc_round_bf16__33__value = 0;
    IData/*16:0*/ __Vfunc_round_bf16__33__rounded;
    __Vfunc_round_bf16__33__rounded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7543__Vfuncout;
    __Vfunc_fp32_invalid__7543__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7543__value;
    __Vfunc_fp32_invalid__7543__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7544__Vfuncout;
    __Vfunc_fp32_invalid__7544__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7544__value;
    __Vfunc_fp32_invalid__7544__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7545__Vfuncout;
    __Vfunc_shift_jam27__7545__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7545__value;
    __Vfunc_shift_jam27__7545__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7545__distance;
    __Vfunc_shift_jam27__7545__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7545__shifted;
    __Vfunc_shift_jam27__7545__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7545__discarded;
    __Vfunc_shift_jam27__7545__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7549__Vfuncout;
    __Vfunc_fp32_invalid__7549__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7549__value;
    __Vfunc_fp32_invalid__7549__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7550__Vfuncout;
    __Vfunc_fp32_invalid__7550__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7550__value;
    __Vfunc_fp32_invalid__7550__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7551__Vfuncout;
    __Vfunc_shift_jam27__7551__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7551__value;
    __Vfunc_shift_jam27__7551__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7551__distance;
    __Vfunc_shift_jam27__7551__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7551__shifted;
    __Vfunc_shift_jam27__7551__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7551__discarded;
    __Vfunc_shift_jam27__7551__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7555__Vfuncout;
    __Vfunc_fp32_invalid__7555__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7555__value;
    __Vfunc_fp32_invalid__7555__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7556__Vfuncout;
    __Vfunc_fp32_invalid__7556__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7556__value;
    __Vfunc_fp32_invalid__7556__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7557__Vfuncout;
    __Vfunc_shift_jam27__7557__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7557__value;
    __Vfunc_shift_jam27__7557__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7557__distance;
    __Vfunc_shift_jam27__7557__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7557__shifted;
    __Vfunc_shift_jam27__7557__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7557__discarded;
    __Vfunc_shift_jam27__7557__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7561__Vfuncout;
    __Vfunc_fp32_invalid__7561__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7561__value;
    __Vfunc_fp32_invalid__7561__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7562__Vfuncout;
    __Vfunc_fp32_invalid__7562__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7562__value;
    __Vfunc_fp32_invalid__7562__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7563__Vfuncout;
    __Vfunc_shift_jam27__7563__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7563__value;
    __Vfunc_shift_jam27__7563__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7563__distance;
    __Vfunc_shift_jam27__7563__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7563__shifted;
    __Vfunc_shift_jam27__7563__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7563__discarded;
    __Vfunc_shift_jam27__7563__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7567__Vfuncout;
    __Vfunc_fp32_invalid__7567__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7567__value;
    __Vfunc_fp32_invalid__7567__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7568__Vfuncout;
    __Vfunc_fp32_invalid__7568__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7568__value;
    __Vfunc_fp32_invalid__7568__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7569__Vfuncout;
    __Vfunc_shift_jam27__7569__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7569__value;
    __Vfunc_shift_jam27__7569__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7569__distance;
    __Vfunc_shift_jam27__7569__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7569__shifted;
    __Vfunc_shift_jam27__7569__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7569__discarded;
    __Vfunc_shift_jam27__7569__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7573__Vfuncout;
    __Vfunc_fp32_invalid__7573__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7573__value;
    __Vfunc_fp32_invalid__7573__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7574__Vfuncout;
    __Vfunc_fp32_invalid__7574__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7574__value;
    __Vfunc_fp32_invalid__7574__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7575__Vfuncout;
    __Vfunc_shift_jam27__7575__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7575__value;
    __Vfunc_shift_jam27__7575__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7575__distance;
    __Vfunc_shift_jam27__7575__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7575__shifted;
    __Vfunc_shift_jam27__7575__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7575__discarded;
    __Vfunc_shift_jam27__7575__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7579__Vfuncout;
    __Vfunc_fp32_invalid__7579__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7579__value;
    __Vfunc_fp32_invalid__7579__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7580__Vfuncout;
    __Vfunc_fp32_invalid__7580__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7580__value;
    __Vfunc_fp32_invalid__7580__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7581__Vfuncout;
    __Vfunc_shift_jam27__7581__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7581__value;
    __Vfunc_shift_jam27__7581__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7581__distance;
    __Vfunc_shift_jam27__7581__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7581__shifted;
    __Vfunc_shift_jam27__7581__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7581__discarded;
    __Vfunc_shift_jam27__7581__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7585__Vfuncout;
    __Vfunc_fp32_invalid__7585__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7585__value;
    __Vfunc_fp32_invalid__7585__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7586__Vfuncout;
    __Vfunc_fp32_invalid__7586__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7586__value;
    __Vfunc_fp32_invalid__7586__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7587__Vfuncout;
    __Vfunc_shift_jam27__7587__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7587__value;
    __Vfunc_shift_jam27__7587__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7587__distance;
    __Vfunc_shift_jam27__7587__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7587__shifted;
    __Vfunc_shift_jam27__7587__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7587__discarded;
    __Vfunc_shift_jam27__7587__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7591__Vfuncout;
    __Vfunc_fp32_invalid__7591__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7591__value;
    __Vfunc_fp32_invalid__7591__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7592__Vfuncout;
    __Vfunc_fp32_invalid__7592__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7592__value;
    __Vfunc_fp32_invalid__7592__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7593__Vfuncout;
    __Vfunc_shift_jam27__7593__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7593__value;
    __Vfunc_shift_jam27__7593__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7593__distance;
    __Vfunc_shift_jam27__7593__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7593__shifted;
    __Vfunc_shift_jam27__7593__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7593__discarded;
    __Vfunc_shift_jam27__7593__discarded = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7597__Vfuncout;
    __Vfunc_fp32_invalid__7597__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7597__value;
    __Vfunc_fp32_invalid__7597__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__7598__Vfuncout;
    __Vfunc_fp32_invalid__7598__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__7598__value;
    __Vfunc_fp32_invalid__7598__value = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7599__Vfuncout;
    __Vfunc_shift_jam27__7599__Vfuncout = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7599__value;
    __Vfunc_shift_jam27__7599__value = 0;
    SData/*11:0*/ __Vfunc_shift_jam27__7599__distance;
    __Vfunc_shift_jam27__7599__distance = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7599__shifted;
    __Vfunc_shift_jam27__7599__shifted = 0;
    IData/*26:0*/ __Vfunc_shift_jam27__7599__discarded;
    __Vfunc_shift_jam27__7599__discarded = 0;
    QData/*32:0*/ __Vfunc_round_pack32__7637__Vfuncout;
    __Vfunc_round_pack32__7637__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__7637__negative;
    __Vfunc_round_pack32__7637__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7637__exponent;
    __Vfunc_round_pack32__7637__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7637__significand;
    __Vfunc_round_pack32__7637__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7637__shifted;
    __Vfunc_round_pack32__7637__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__7637__rounded;
    __Vfunc_round_pack32__7637__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7637__adjusted;
    __Vfunc_round_pack32__7637__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__7637__biased;
    __Vfunc_round_pack32__7637__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__7643__Vfuncout;
    __Vfunc_round_pack32__7643__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__7643__negative;
    __Vfunc_round_pack32__7643__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7643__exponent;
    __Vfunc_round_pack32__7643__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7643__significand;
    __Vfunc_round_pack32__7643__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7643__shifted;
    __Vfunc_round_pack32__7643__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__7643__rounded;
    __Vfunc_round_pack32__7643__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7643__adjusted;
    __Vfunc_round_pack32__7643__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__7643__biased;
    __Vfunc_round_pack32__7643__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__7649__Vfuncout;
    __Vfunc_round_pack32__7649__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__7649__negative;
    __Vfunc_round_pack32__7649__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7649__exponent;
    __Vfunc_round_pack32__7649__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7649__significand;
    __Vfunc_round_pack32__7649__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7649__shifted;
    __Vfunc_round_pack32__7649__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__7649__rounded;
    __Vfunc_round_pack32__7649__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7649__adjusted;
    __Vfunc_round_pack32__7649__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__7649__biased;
    __Vfunc_round_pack32__7649__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__7655__Vfuncout;
    __Vfunc_round_pack32__7655__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__7655__negative;
    __Vfunc_round_pack32__7655__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7655__exponent;
    __Vfunc_round_pack32__7655__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7655__significand;
    __Vfunc_round_pack32__7655__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7655__shifted;
    __Vfunc_round_pack32__7655__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__7655__rounded;
    __Vfunc_round_pack32__7655__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7655__adjusted;
    __Vfunc_round_pack32__7655__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__7655__biased;
    __Vfunc_round_pack32__7655__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__7661__Vfuncout;
    __Vfunc_round_pack32__7661__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__7661__negative;
    __Vfunc_round_pack32__7661__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7661__exponent;
    __Vfunc_round_pack32__7661__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7661__significand;
    __Vfunc_round_pack32__7661__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__7661__shifted;
    __Vfunc_round_pack32__7661__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__7661__rounded;
    __Vfunc_round_pack32__7661__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__7661__adjusted;
    __Vfunc_round_pack32__7661__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__7661__biased;
    __Vfunc_round_pack32__7661__biased = 0;
    // Body
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
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13877__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13877__part 
                            = vlSelf->__Vfunc_leading_zero32__13877__value;
                        vlSelf->__Vfunc_leading_zero32__13877__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13877__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                            vlSelf->__Vfunc_leading_zero32__13877__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13877__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13877__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13877__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13877__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13877__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13877__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13877__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13877__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13889__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__53__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13889__part 
                            = vlSelf->__Vfunc_leading_zero32__13889__value;
                        vlSelf->__Vfunc_leading_zero32__13889__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13889__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                            vlSelf->__Vfunc_leading_zero32__13889__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13889__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13889__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13889__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13889__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13889__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13889__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13889__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13889__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13907__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13907__part 
                            = vlSelf->__Vfunc_leading_zero32__13907__value;
                        vlSelf->__Vfunc_leading_zero32__13907__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13907__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                            vlSelf->__Vfunc_leading_zero32__13907__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13907__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13907__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13907__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13907__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13907__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13907__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13907__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13907__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13919__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13919__part 
                            = vlSelf->__Vfunc_leading_zero32__13919__value;
                        vlSelf->__Vfunc_leading_zero32__13919__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13919__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                            vlSelf->__Vfunc_leading_zero32__13919__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13919__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13919__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13919__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13919__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13919__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13919__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13919__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13919__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13913__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13913__part 
                            = vlSelf->__Vfunc_leading_zero32__13913__value;
                        vlSelf->__Vfunc_leading_zero32__13913__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13913__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                            vlSelf->__Vfunc_leading_zero32__13913__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13913__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13913__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13913__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13913__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13913__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13913__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13913__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13913__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13925__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__54__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13925__part 
                            = vlSelf->__Vfunc_leading_zero32__13925__value;
                        vlSelf->__Vfunc_leading_zero32__13925__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13925__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                            vlSelf->__Vfunc_leading_zero32__13925__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13925__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13925__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13925__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13925__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13925__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13925__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13925__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13925__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13943__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13943__part 
                            = vlSelf->__Vfunc_leading_zero32__13943__value;
                        vlSelf->__Vfunc_leading_zero32__13943__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13943__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                            vlSelf->__Vfunc_leading_zero32__13943__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13943__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13943__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13943__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13943__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13943__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13943__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13943__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13943__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13955__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13955__part 
                            = vlSelf->__Vfunc_leading_zero32__13955__value;
                        vlSelf->__Vfunc_leading_zero32__13955__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13955__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                            vlSelf->__Vfunc_leading_zero32__13955__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13955__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13955__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13955__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13955__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13955__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13955__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13955__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13955__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13949__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13949__part 
                            = vlSelf->__Vfunc_leading_zero32__13949__value;
                        vlSelf->__Vfunc_leading_zero32__13949__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13949__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                            vlSelf->__Vfunc_leading_zero32__13949__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13949__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13949__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13949__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13949__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13949__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13949__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13949__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13949__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13961__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__55__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13961__part 
                            = vlSelf->__Vfunc_leading_zero32__13961__value;
                        vlSelf->__Vfunc_leading_zero32__13961__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13961__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                            vlSelf->__Vfunc_leading_zero32__13961__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13961__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13961__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13961__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13961__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13961__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13961__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13961__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13961__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13979__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13979__part 
                            = vlSelf->__Vfunc_leading_zero32__13979__value;
                        vlSelf->__Vfunc_leading_zero32__13979__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13979__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                            vlSelf->__Vfunc_leading_zero32__13979__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13979__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13979__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13979__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13979__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13979__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13979__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13979__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13979__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13991__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13991__part 
                            = vlSelf->__Vfunc_leading_zero32__13991__value;
                        vlSelf->__Vfunc_leading_zero32__13991__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13991__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                            vlSelf->__Vfunc_leading_zero32__13991__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13991__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13991__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13991__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13991__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13991__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13991__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13991__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13991__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13985__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13985__part 
                            = vlSelf->__Vfunc_leading_zero32__13985__value;
                        vlSelf->__Vfunc_leading_zero32__13985__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13985__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                            vlSelf->__Vfunc_leading_zero32__13985__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13985__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13985__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13985__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13985__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13985__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13985__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13985__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13985__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__13997__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__56__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__13997__part 
                            = vlSelf->__Vfunc_leading_zero32__13997__value;
                        vlSelf->__Vfunc_leading_zero32__13997__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__13997__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                            vlSelf->__Vfunc_leading_zero32__13997__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__13997__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__13997__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__13997__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__13997__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__13997__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__13997__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__13997__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__13997__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14015__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14015__part 
                            = vlSelf->__Vfunc_leading_zero32__14015__value;
                        vlSelf->__Vfunc_leading_zero32__14015__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14015__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                            vlSelf->__Vfunc_leading_zero32__14015__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14015__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14015__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14015__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14015__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14015__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14015__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14015__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14015__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14027__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14027__part 
                            = vlSelf->__Vfunc_leading_zero32__14027__value;
                        vlSelf->__Vfunc_leading_zero32__14027__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14027__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                            vlSelf->__Vfunc_leading_zero32__14027__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14027__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14027__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14027__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14027__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14027__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14027__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14027__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14027__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14021__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14021__part 
                            = vlSelf->__Vfunc_leading_zero32__14021__value;
                        vlSelf->__Vfunc_leading_zero32__14021__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14021__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                            vlSelf->__Vfunc_leading_zero32__14021__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14021__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14021__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14021__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14021__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14021__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14021__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14021__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14021__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14033__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__57__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14033__part 
                            = vlSelf->__Vfunc_leading_zero32__14033__value;
                        vlSelf->__Vfunc_leading_zero32__14033__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14033__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                            vlSelf->__Vfunc_leading_zero32__14033__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14033__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14033__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14033__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14033__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14033__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14033__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14033__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14033__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14051__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14051__part 
                            = vlSelf->__Vfunc_leading_zero32__14051__value;
                        vlSelf->__Vfunc_leading_zero32__14051__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14051__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                            vlSelf->__Vfunc_leading_zero32__14051__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14051__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14051__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14051__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14051__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14051__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14051__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14051__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14051__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14063__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14063__part 
                            = vlSelf->__Vfunc_leading_zero32__14063__value;
                        vlSelf->__Vfunc_leading_zero32__14063__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14063__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                            vlSelf->__Vfunc_leading_zero32__14063__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14063__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14063__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14063__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14063__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14063__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14063__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14063__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14063__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14057__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14057__part 
                            = vlSelf->__Vfunc_leading_zero32__14057__value;
                        vlSelf->__Vfunc_leading_zero32__14057__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14057__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                            vlSelf->__Vfunc_leading_zero32__14057__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14057__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14057__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14057__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14057__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14057__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14057__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14057__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14057__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14069__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__58__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14069__part 
                            = vlSelf->__Vfunc_leading_zero32__14069__value;
                        vlSelf->__Vfunc_leading_zero32__14069__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14069__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                            vlSelf->__Vfunc_leading_zero32__14069__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14069__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14069__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14069__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14069__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14069__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14069__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14069__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14069__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14087__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14087__part 
                            = vlSelf->__Vfunc_leading_zero32__14087__value;
                        vlSelf->__Vfunc_leading_zero32__14087__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14087__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                            vlSelf->__Vfunc_leading_zero32__14087__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14087__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14087__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14087__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14087__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14087__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14087__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14087__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14087__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14099__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14099__part 
                            = vlSelf->__Vfunc_leading_zero32__14099__value;
                        vlSelf->__Vfunc_leading_zero32__14099__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14099__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                            vlSelf->__Vfunc_leading_zero32__14099__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14099__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14099__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14099__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14099__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14099__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14099__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14099__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14099__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14093__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14093__part 
                            = vlSelf->__Vfunc_leading_zero32__14093__value;
                        vlSelf->__Vfunc_leading_zero32__14093__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14093__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                            vlSelf->__Vfunc_leading_zero32__14093__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14093__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14093__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14093__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14093__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14093__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14093__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14093__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14093__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14105__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__59__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14105__part 
                            = vlSelf->__Vfunc_leading_zero32__14105__value;
                        vlSelf->__Vfunc_leading_zero32__14105__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14105__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                            vlSelf->__Vfunc_leading_zero32__14105__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14105__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14105__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14105__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14105__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14105__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14105__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14105__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14105__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14123__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14123__part 
                            = vlSelf->__Vfunc_leading_zero32__14123__value;
                        vlSelf->__Vfunc_leading_zero32__14123__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14123__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                            vlSelf->__Vfunc_leading_zero32__14123__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14123__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14123__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14123__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14123__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14123__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14123__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14123__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14123__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14135__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14135__part 
                            = vlSelf->__Vfunc_leading_zero32__14135__value;
                        vlSelf->__Vfunc_leading_zero32__14135__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14135__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                            vlSelf->__Vfunc_leading_zero32__14135__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14135__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14135__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14135__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14135__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14135__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14135__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14135__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14135__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14129__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14129__part 
                            = vlSelf->__Vfunc_leading_zero32__14129__value;
                        vlSelf->__Vfunc_leading_zero32__14129__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14129__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                            vlSelf->__Vfunc_leading_zero32__14129__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14129__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14129__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14129__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14129__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14129__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14129__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14129__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14129__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14141__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14141__part 
                            = vlSelf->__Vfunc_leading_zero32__14141__value;
                        vlSelf->__Vfunc_leading_zero32__14141__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14141__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                            vlSelf->__Vfunc_leading_zero32__14141__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14141__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14141__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14141__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14141__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14141__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14141__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14141__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14141__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14159__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14159__part 
                            = vlSelf->__Vfunc_leading_zero32__14159__value;
                        vlSelf->__Vfunc_leading_zero32__14159__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14159__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                            vlSelf->__Vfunc_leading_zero32__14159__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14159__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14159__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14159__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14159__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14159__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14159__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14159__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14159__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14171__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14171__part 
                            = vlSelf->__Vfunc_leading_zero32__14171__value;
                        vlSelf->__Vfunc_leading_zero32__14171__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14171__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                            vlSelf->__Vfunc_leading_zero32__14171__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14171__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14171__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14171__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14171__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14171__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14171__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14171__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14171__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14165__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14165__part 
                            = vlSelf->__Vfunc_leading_zero32__14165__value;
                        vlSelf->__Vfunc_leading_zero32__14165__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14165__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                            vlSelf->__Vfunc_leading_zero32__14165__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14165__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14165__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14165__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14165__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14165__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14165__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14165__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14165__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14177__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14177__part 
                            = vlSelf->__Vfunc_leading_zero32__14177__value;
                        vlSelf->__Vfunc_leading_zero32__14177__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14177__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                            vlSelf->__Vfunc_leading_zero32__14177__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14177__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14177__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14177__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14177__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14177__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14177__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14177__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14177__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14195__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14195__part 
                            = vlSelf->__Vfunc_leading_zero32__14195__value;
                        vlSelf->__Vfunc_leading_zero32__14195__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14195__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                            vlSelf->__Vfunc_leading_zero32__14195__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14195__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14195__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14195__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14195__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14195__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14195__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14195__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14195__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14207__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14207__part 
                            = vlSelf->__Vfunc_leading_zero32__14207__value;
                        vlSelf->__Vfunc_leading_zero32__14207__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14207__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                            vlSelf->__Vfunc_leading_zero32__14207__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14207__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14207__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14207__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14207__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14207__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14207__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14207__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14207__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14201__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14201__part 
                            = vlSelf->__Vfunc_leading_zero32__14201__value;
                        vlSelf->__Vfunc_leading_zero32__14201__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14201__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                            vlSelf->__Vfunc_leading_zero32__14201__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14201__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14201__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14201__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14201__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14201__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14201__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14201__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14201__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14213__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14213__part 
                            = vlSelf->__Vfunc_leading_zero32__14213__value;
                        vlSelf->__Vfunc_leading_zero32__14213__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14213__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                            vlSelf->__Vfunc_leading_zero32__14213__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14213__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14213__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14213__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14213__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14213__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14213__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14213__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14213__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14231__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14231__part 
                            = vlSelf->__Vfunc_leading_zero32__14231__value;
                        vlSelf->__Vfunc_leading_zero32__14231__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14231__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                            vlSelf->__Vfunc_leading_zero32__14231__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14231__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14231__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14231__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14231__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14231__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14231__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14231__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14231__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14243__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14243__part 
                            = vlSelf->__Vfunc_leading_zero32__14243__value;
                        vlSelf->__Vfunc_leading_zero32__14243__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14243__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                            vlSelf->__Vfunc_leading_zero32__14243__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14243__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14243__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14243__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14243__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14243__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14243__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14243__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14243__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_ys__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14237__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14237__part 
                            = vlSelf->__Vfunc_leading_zero32__14237__value;
                        vlSelf->__Vfunc_leading_zero32__14237__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14237__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                            vlSelf->__Vfunc_leading_zero32__14237__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14237__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14237__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14237__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14237__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14237__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14237__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14237__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14237__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14249__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__14249__part 
                            = vlSelf->__Vfunc_leading_zero32__14249__value;
                        vlSelf->__Vfunc_leading_zero32__14249__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14249__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                            vlSelf->__Vfunc_leading_zero32__14249__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14249__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14249__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14249__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14249__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14249__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14249__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14249__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14249__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__dual_think_ctrl__DOT__active 
        = ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__flush)) 
           & (IData)(vlSelf->rst_n));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 0U;
    anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane = 0U;
    while (VL_GTS_III(32, 0x80U, anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane)) {
        if (([&]() {
                    vlSelf->__Vfunc_bf16_invalid__32__value 
                        = (0xffffU & (((0U == (0x1fU 
                                               & VL_MULS_III(32, (IData)(0x10U), anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane)))
                                        ? 0U : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__query[
                                                (((IData)(0xfU) 
                                                  + 
                                                  (0x7ffU 
                                                   & VL_MULS_III(32, (IData)(0x10U), anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane))) 
                                                 >> 5U)] 
                                                << 
                                                ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & VL_MULS_III(32, (IData)(0x10U), anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane))))) 
                                      | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__query[
                                         (0x3fU & (
                                                   VL_MULS_III(32, (IData)(0x10U), anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane) 
                                                   >> 5U))] 
                                         >> (0x1fU 
                                             & VL_MULS_III(32, (IData)(0x10U), anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane)))));
                    vlSelf->__Vfunc_bf16_invalid__32__Vfuncout 
                        = (0xffU == (0xffU & ((IData)(vlSelf->__Vfunc_bf16_invalid__32__value) 
                                              >> 7U)));
                }(), (IData)(vlSelf->__Vfunc_bf16_invalid__32__Vfuncout))) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query_bad = 1U;
        }
        anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane 
            = ((IData)(1U) + anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__check_lane);
    }
    __Vfunc_round_bf16__33__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__quotient;
    __Vfunc_round_bf16__33__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__33__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__33__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__33__value)))))));
    __Vfunc_round_bf16__33__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__34__value 
                        = __Vfunc_round_bf16__33__value;
                    vlSelf->__Vfunc_fp32_invalid__34__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__34__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__34__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__33__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__33__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__33__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0xfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x10U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x11U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x12U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x13U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x14U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x15U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x16U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x17U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x18U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x19U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x1fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x20U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x21U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x22U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x23U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x24U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x25U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x26U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x27U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x28U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x29U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x2fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x30U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x31U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x32U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x33U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x34U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x35U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x36U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x37U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x38U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x39U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_b 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__key[0x3fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__0__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__1__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__2__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__3__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[1U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__4__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__5__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[2U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__6__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__7__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[3U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__8__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__9__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[4U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__10__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__11__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[5U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__12__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__13__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[6U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__14__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__15__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[7U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__16__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__17__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[8U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__18__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__19__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[9U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__20__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__21__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xaU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__22__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__23__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xbU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__24__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__25__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xcU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xdU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xeU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0xfU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x10U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x11U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x12U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x13U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x14U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x15U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x16U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x17U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x18U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x19U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x1fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x20U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x21U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x22U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x23U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x24U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x25U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x26U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x27U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x28U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x29U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x2fU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x30U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x31U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x32U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x33U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x34U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x35U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x36U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x37U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x38U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x39U]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3aU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3bU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3cU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3dU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3eU]));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU] 
                             >> 7U))) << 0x17U) | (0x7f0000U 
                                                   & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU] 
                                                      << 0x10U)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_a 
        = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU] 
                             >> 0x17U))) << 0x17U) 
           | (0x7f0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__query[0x3fU]));
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__unit_flush) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
        } else {
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__alu_valid) 
                 & (IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.in_ready))) {
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 1U;
            }
            if (((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting))) {
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
                if (((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid) 
                     & (IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__result_failed))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                } else if ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 3U;
                } else if ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__r 
                        = ((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term = 0x3f800000U;
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum = 0x3f800000U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order = 1U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 4U;
                } else if ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary 
                        = ((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 5U;
                } else if ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term 
                        = ((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 6U;
                } else if ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum 
                        = ((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.out_valid)
                            ? vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__arithmetic.__PVT__data
                            : 0U);
                    if ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order))) {
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 7U;
                    } else {
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order 
                            = (7U & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order)));
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 4U;
                    }
                } else {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                }
            } else if ((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if (((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
                     & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exp_ready))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__x 
                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent = 0U;
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
                    if ((([&]() {
                                    vlSelf->__Vfunc_fp32_invalid__1580__value 
                                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference;
                                    vlSelf->__Vfunc_fp32_invalid__1580__Vfuncout 
                                        = (0xffU == 
                                           (0xffU & 
                                            (vlSelf->__Vfunc_fp32_invalid__1580__value 
                                             >> 0x17U)));
                                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__1580__Vfuncout)) 
                         | ((~ (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference 
                                >> 0x1fU)) & (0U != 
                                              (0x7fffffffU 
                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))))) {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0U == (0x7fffffffU 
                                       & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))) {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0x3f800000U;
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                    } else if ((0x41800000U < (0x7fffffffU 
                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))) {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
                    } else {
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
                            = ((0x3f317218U > (0x7fffffffU 
                                               & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference))
                                ? 0U : (0x1fffffffU 
                                        & VL_SHIFTL_III(29,29,8, 
                                                        (0x800000U 
                                                         | (0x7fffffU 
                                                            & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference)), 
                                                        (0xffU 
                                                         & ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference 
                                                             >> 0x17U) 
                                                            - (IData)(0x7eU))))));
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 1U;
                    }
                }
            } else if ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if ((0xb17218U <= vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder)) {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
                        = (0x1fffffffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
                                          - (IData)(0xb17218U)));
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent)));
                } else {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 2U;
                }
            } else if ((7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__scaled 
                                   >> 0x20U)))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 1U;
                } else {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result 
                        = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__scaled);
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
                }
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 8U;
            } else if ((8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state))) {
                if ((8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state))) {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 0U;
                }
            }
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__waiting = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__x = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__r = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__term = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__temporary = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__result = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order = 0U;
    }
    __Vfunc_round_bf16__11__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__product;
    __Vfunc_round_bf16__11__rounded = (0x1ffffU & (
                                                   (__Vfunc_round_bf16__11__value 
                                                    >> 0x10U) 
                                                   + 
                                                   (1U 
                                                    & ((__Vfunc_round_bf16__11__value 
                                                        >> 0xfU) 
                                                       & (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x17fffU 
                                                                   & __Vfunc_round_bf16__11__value)))))));
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
            __Vilp = 0U;
            while ((__Vilp <= 0x3fU)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[__Vilp] 
                    = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_failed = 0U;
        } else {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 0U;
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_bad) 
                 | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__tensor_bad))) {
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
            } else {
                if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__projections__req_valid) 
                     & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__req_ready))) {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued)));
                }
                if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_valid) 
                     & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__load_state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vlvbound_h0c516f12__0 = 1U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received)));
                    if ((0x4ffU >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address))) {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address) 
                                                                                >> 5U)] 
                            = (((~ ((IData)(1U) << 
                                    (0x1fU & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address)))) 
                                & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[
                                ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address) 
                                 >> 5U)]) | ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____Vlvbound_h0c516f12__0) 
                                             << (0x1fU 
                                                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen_address))));
                    }
                    if ((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                        VL_ASSIGNSEL_WI(4096,16,(0xfffU 
                                                 & VL_SHIFTL_III(12,32,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index), 4U)), vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__activations, 
                                        (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data));
                    } else if ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                        VL_ASSIGNSEL_WI(1024,4,(0x3ffU 
                                                & VL_SHIFTL_III(10,32,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index), 2U)), vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized, 
                                        (0xfU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data 
                                                 >> (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__nibble_shift))));
                    } else if ((2U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                        if ((3U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                            if ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_type))) {
                                VL_ASSIGNSEL_WI(4096,16,
                                                (0xfffU 
                                                 & VL_SHIFTL_III(12,32,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__response_index), 4U)), vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__weights, 
                                                (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__projections__rsp_data));
                            }
                        }
                    }
                }
                if ((((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                      & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting))) 
                     & (IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.in_ready))) {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 1U;
                }
                if (((((((((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)) 
                           | (1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                          | (2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                         | (3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                        | (4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                       | (5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                      | (6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) 
                     | (7U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state)))) {
                    if ((0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_valid) 
                              & ((~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_done)) 
                                 & (0U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate)))) 
                             & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_start_ready))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_output;
                            if ((0x1eU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))) {
                                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__layer 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlayer;
                                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__source_slot 
                                    = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mcommand)
                                        ? ((0xfU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__state))
                                            ? 0xbU : 8U)
                                        : 0U);
                            } else {
                                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__layer 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__layer;
                                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__source_slot 
                                    = ((0x17U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                                        ? 5U : ((0x23U 
                                                 == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state))
                                                 ? 0xeU
                                                 : 1U));
                            }
                            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__projection 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_proj;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4 
                                = (0x23U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state));
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row = 0U;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base = 0U;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator = 0U;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state 
                                = ((((((1U > vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input) 
                                       | (0xc00U < vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input)) 
                                      | (1U > vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_output)) 
                                     | (0x25180U < vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_output)) 
                                    | ((0x23U != (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__state)) 
                                       & ((0U != (0x7fU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_input)) 
                                          | (6U < (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__command_proj)))))
                                    ? 0xaU : 1U);
                        }
                    } else if ((1U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received = 0U;
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[1U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[1U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[2U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[2U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[3U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[3U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[4U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[4U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[5U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[5U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[6U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[6U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[7U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[7U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[8U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[8U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[9U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[9U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xaU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xaU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xbU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xbU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xcU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xcU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xdU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xdU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xeU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xeU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xfU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xfU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x10U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x10U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x11U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x11U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x12U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x12U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x13U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x13U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x14U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x14U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x15U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x15U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x16U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x16U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x17U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x17U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x18U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x18U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x19U] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x19U];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1aU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1aU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1bU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1bU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1cU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1cU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1dU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1dU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1eU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1eU];
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1fU] 
                            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1fU];
                        VL_ASSIGN_W(4096,vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__activations, Vanvil_qn1_top__ConstPool__CONST_h6e0f3f36_0);
                        VL_ASSIGN_W(4096,vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__weights, Vanvil_qn1_top__ConstPool__CONST_h6e0f3f36_0);
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued = 0U;
                        __Vilp = 0U;
                        while ((__Vilp <= 0x27U)) {
                            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[__Vilp] 
                                = Vanvil_qn1_top__ConstPool__CONST_had224c38_0[__Vilp];
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state 
                            = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                                ? 2U : 3U);
                    } else if ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received) 
                              == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)) 
                             & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued) 
                                == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received = 0U;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued = 0U;
                            __Vilp = 0U;
                            while ((__Vilp <= 0x27U)) {
                                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[__Vilp] 
                                    = Vanvil_qn1_top__ConstPool__CONST_had224c38_0[__Vilp];
                                __Vilp = ((IData)(1U) 
                                          + __Vilp);
                            }
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 3U;
                        }
                    } else if ((3U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received) 
                              == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)) 
                             & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued) 
                                == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__request_count)))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 4U;
                        }
                    } else if ((4U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tv) 
                             & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce)))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 5U;
                        }
                    } else if ((5U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tov) 
                             & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tor))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__partial 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tsum;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 6U;
                        }
                    } else if ((6U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                        if (((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.out_valid) 
                             & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
                            if (((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.out_valid) 
                                 & (IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.__PVT__result_failed))) {
                                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
                            } else {
                                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator 
                                    = ((IData)(vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.out_valid)
                                        ? vlSymsp->TOP__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator_add.__PVT__data
                                        : 0U);
                                if (((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
                                      + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__active_lanes)) 
                                     == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent)) {
                                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 7U;
                                } else {
                                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
                                        = ((IData)(0x100U) 
                                           + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base);
                                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 1U;
                                }
                            }
                        }
                    } else {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__result 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator;
                        if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4) 
                             & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded 
                                >> 0x10U))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
                        } else {
                            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded_result 
                                = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4)
                                    ? (0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded)
                                    : 0U);
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 8U;
                        }
                    }
                } else if ((8U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                    if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_out_valid) 
                         & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gemv_out_ready))) {
                        if ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row 
                             == (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent 
                                 - (IData)(1U)))) {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 9U;
                        } else {
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row 
                                = ((IData)(1U) + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base = 0U;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator = 0U;
                            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 1U;
                        }
                    }
                } else if ((9U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 1U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
                } else if ((0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 1U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
                } else {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0xaU;
                }
            }
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_ready))) {
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
            }
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__owned) 
                 & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid)))) {
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age 
                    = (0xffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age)));
                if ((0x27U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age))) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean 
                        = ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed 
                                          >> 0x20U)))
                            ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed));
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_failed 
                        = (1U & ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__tree_failed[0U] 
                                  | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_packed 
                                             >> 0x20U))) 
                                 | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed)));
                }
                if ((0x84U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age))) {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 1U;
                    if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed) 
                         | (0U != (((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__rotated_failed[0U] 
                                     | vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__rotated_failed[1U]) 
                                    | vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__rotated_failed[2U]) 
                                   | vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__rotated_failed[3U])))) {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 1U;
                        __Vilp = 0U;
                        while ((__Vilp <= 0x3fU)) {
                            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[__Vilp] 
                                = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                    } else {
                        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
                        __Vilp = 0U;
                        while ((__Vilp <= 0x3fU)) {
                            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[__Vilp] 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__rounded_output[__Vilp];
                            __Vilp = ((IData)(1U) + __Vilp);
                        }
                    }
                }
            }
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fused_valid) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__fused_ready))) {
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 0U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
            }
        }
        if ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)))) {
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_ready))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__key_vector 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_key;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_head;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__layer 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_layer;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__position 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_pos;
            }
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__state = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__waiting = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__done_reg = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__error_reg = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__layer = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__source_slot = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__projection = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x27U)) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__seen[__Vilp] 
                = Vanvil_qn1_top__ConstPool__CONST_had224c38_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[1U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[1U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[2U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[2U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[3U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[3U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[4U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[4U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[5U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[5U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[6U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[6U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[7U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[7U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[8U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[8U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[9U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[9U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xaU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xaU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xbU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xbU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xcU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xcU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xdU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xdU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xeU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xeU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0xfU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0xfU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x10U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x10U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x11U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x11U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x12U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x12U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x13U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x13U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x14U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x14U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x15U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x15U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x16U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x16U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x17U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x17U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x18U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x18U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x19U] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x19U];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1aU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1aU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1bU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1bU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1cU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1cU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1dU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1dU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1eU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1eU];
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__quantized[0x1fU] 
            = Vanvil_qn1_top__ConstPool__CONST_hd6b7ba52_0[0x1fU];
        VL_ASSIGN_W(4096,vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__activations, Vanvil_qn1_top__ConstPool__CONST_h6e0f3f36_0);
        VL_ASSIGN_W(4096,vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__weights, Vanvil_qn1_top__ConstPool__CONST_h6e0f3f36_0);
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__accumulator = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__partial = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__result = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__rounded_result = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__key_vector = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__layer = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__position = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_failed = 0U;
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_data[__Vilp] 
                = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__mean_failed = 0U;
    }
    __Vfunc_round_bf16__11__Vfuncout = ((([&]() {
                    vlSelf->__Vfunc_fp32_invalid__12__value 
                        = __Vfunc_round_bf16__11__value;
                    vlSelf->__Vfunc_fp32_invalid__12__Vfuncout 
                        = (0xffU == (0xffU & (vlSelf->__Vfunc_fp32_invalid__12__value 
                                              >> 0x17U)));
                }(), (IData)(vlSelf->__Vfunc_fp32_invalid__12__Vfuncout)) 
                                         | (0xffU == 
                                            (0xffU 
                                             & (__Vfunc_round_bf16__11__rounded 
                                                >> 7U))))
                                         ? 0x10000U
                                         : (0xffffU 
                                            & __Vfunc_round_bf16__11__rounded));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__mlp__DOT__legal__DOT__rounded 
        = __Vfunc_round_bf16__11__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7636__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7636__part 
                            = vlSelf->__Vfunc_leading_zero32__7636__value;
                        vlSelf->__Vfunc_leading_zero32__7636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                            vlSelf->__Vfunc_leading_zero32__7636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7636__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__7637__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__significand4;
    __Vfunc_round_pack32__7637__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent4;
    __Vfunc_round_pack32__7637__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative4;
    __Vfunc_round_pack32__7637__adjusted = __Vfunc_round_pack32__7637__exponent;
    __Vfunc_round_pack32__7637__shifted = __Vfunc_round_pack32__7637__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__7637__exponent))) {
        vlSelf->__Vfunc_shift_jam27__7638__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__7637__exponent)));
        vlSelf->__Vfunc_shift_jam27__7638__value = __Vfunc_round_pack32__7637__significand;
        __Vfunc_round_pack32__7637__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__7638__distance))) {
            vlSelf->__Vfunc_shift_jam27__7638__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__7638__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__7638__distance))) {
            vlSelf->__Vfunc_shift_jam27__7638__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__7638__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__7638__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7638__value, (IData)(vlSelf->__Vfunc_shift_jam27__7638__distance)));
            vlSelf->__Vfunc_shift_jam27__7638__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7638__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__7638__distance)))));
            vlSelf->__Vfunc_shift_jam27__7638__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__7638__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__7638__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__7638__discarded))));
        }
        __Vfunc_round_pack32__7637__shifted = vlSelf->__Vfunc_shift_jam27__7638__Vfuncout;
    }
    __Vfunc_round_pack32__7637__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__7637__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__7637__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__7637__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__7637__rounded)) {
        __Vfunc_round_pack32__7637__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__7637__rounded, 1U));
        __Vfunc_round_pack32__7637__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__7637__adjusted)));
    }
    __Vfunc_round_pack32__7637__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__7637__rounded)) {
        __Vfunc_round_pack32__7637__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__7637__adjusted)));
    }
    __Vfunc_round_pack32__7637__Vfuncout = (((0U == __Vfunc_round_pack32__7637__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__7637__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__7637__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__7637__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__7637__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__7637__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__7637__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__packed5 
        = __Vfunc_round_pack32__7637__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7543__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7543__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7543__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7543__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7544__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7544__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7544__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7544__Vfuncout))));
            __Vfunc_shift_jam27__7545__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7545__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7545__distance))) {
                __Vfunc_shift_jam27__7545__Vfuncout 
                    = __Vfunc_shift_jam27__7545__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7545__distance))) {
                __Vfunc_shift_jam27__7545__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7545__value);
            } else {
                __Vfunc_shift_jam27__7545__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7545__value, (IData)(__Vfunc_shift_jam27__7545__distance)));
                __Vfunc_shift_jam27__7545__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7545__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7545__distance)))));
                __Vfunc_shift_jam27__7545__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7545__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7545__shifted 
                                | (0U != __Vfunc_shift_jam27__7545__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7545__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__error5 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7549__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7549__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7549__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7549__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7550__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7550__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7550__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7550__Vfuncout))));
            __Vfunc_shift_jam27__7551__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7551__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7551__distance))) {
                __Vfunc_shift_jam27__7551__Vfuncout 
                    = __Vfunc_shift_jam27__7551__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7551__distance))) {
                __Vfunc_shift_jam27__7551__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7551__value);
            } else {
                __Vfunc_shift_jam27__7551__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7551__value, (IData)(__Vfunc_shift_jam27__7551__distance)));
                __Vfunc_shift_jam27__7551__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7551__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7551__distance)))));
                __Vfunc_shift_jam27__7551__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7551__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7551__shifted 
                                | (0U != __Vfunc_shift_jam27__7551__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7551__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__error5 = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7642__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7642__part 
                            = vlSelf->__Vfunc_leading_zero32__7642__value;
                        vlSelf->__Vfunc_leading_zero32__7642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                            vlSelf->__Vfunc_leading_zero32__7642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7642__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__7643__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__significand4;
    __Vfunc_round_pack32__7643__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent4;
    __Vfunc_round_pack32__7643__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative4;
    __Vfunc_round_pack32__7643__adjusted = __Vfunc_round_pack32__7643__exponent;
    __Vfunc_round_pack32__7643__shifted = __Vfunc_round_pack32__7643__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__7643__exponent))) {
        vlSelf->__Vfunc_shift_jam27__7644__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__7643__exponent)));
        vlSelf->__Vfunc_shift_jam27__7644__value = __Vfunc_round_pack32__7643__significand;
        __Vfunc_round_pack32__7643__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__7644__distance))) {
            vlSelf->__Vfunc_shift_jam27__7644__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__7644__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__7644__distance))) {
            vlSelf->__Vfunc_shift_jam27__7644__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__7644__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__7644__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7644__value, (IData)(vlSelf->__Vfunc_shift_jam27__7644__distance)));
            vlSelf->__Vfunc_shift_jam27__7644__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7644__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__7644__distance)))));
            vlSelf->__Vfunc_shift_jam27__7644__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__7644__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__7644__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__7644__discarded))));
        }
        __Vfunc_round_pack32__7643__shifted = vlSelf->__Vfunc_shift_jam27__7644__Vfuncout;
    }
    __Vfunc_round_pack32__7643__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__7643__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__7643__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__7643__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__7643__rounded)) {
        __Vfunc_round_pack32__7643__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__7643__rounded, 1U));
        __Vfunc_round_pack32__7643__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__7643__adjusted)));
    }
    __Vfunc_round_pack32__7643__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__7643__rounded)) {
        __Vfunc_round_pack32__7643__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__7643__adjusted)));
    }
    __Vfunc_round_pack32__7643__Vfuncout = (((0U == __Vfunc_round_pack32__7643__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__7643__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__7643__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__7643__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__7643__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__7643__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__7643__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__packed5 
        = __Vfunc_round_pack32__7643__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7555__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7555__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7555__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7555__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7556__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7556__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7556__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7556__Vfuncout))));
            __Vfunc_shift_jam27__7557__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7557__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7557__distance))) {
                __Vfunc_shift_jam27__7557__Vfuncout 
                    = __Vfunc_shift_jam27__7557__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7557__distance))) {
                __Vfunc_shift_jam27__7557__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7557__value);
            } else {
                __Vfunc_shift_jam27__7557__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7557__value, (IData)(__Vfunc_shift_jam27__7557__distance)));
                __Vfunc_shift_jam27__7557__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7557__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7557__distance)))));
                __Vfunc_shift_jam27__7557__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7557__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7557__shifted 
                                | (0U != __Vfunc_shift_jam27__7557__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7557__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__error5 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7561__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7561__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7561__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7561__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7562__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7562__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7562__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7562__Vfuncout))));
            __Vfunc_shift_jam27__7563__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7563__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7563__distance))) {
                __Vfunc_shift_jam27__7563__Vfuncout 
                    = __Vfunc_shift_jam27__7563__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7563__distance))) {
                __Vfunc_shift_jam27__7563__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7563__value);
            } else {
                __Vfunc_shift_jam27__7563__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7563__value, (IData)(__Vfunc_shift_jam27__7563__distance)));
                __Vfunc_shift_jam27__7563__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7563__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7563__distance)))));
                __Vfunc_shift_jam27__7563__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7563__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7563__shifted 
                                | (0U != __Vfunc_shift_jam27__7563__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7563__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__error5 = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7648__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7648__part 
                            = vlSelf->__Vfunc_leading_zero32__7648__value;
                        vlSelf->__Vfunc_leading_zero32__7648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                            vlSelf->__Vfunc_leading_zero32__7648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7648__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__7649__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__significand4;
    __Vfunc_round_pack32__7649__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent4;
    __Vfunc_round_pack32__7649__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative4;
    __Vfunc_round_pack32__7649__adjusted = __Vfunc_round_pack32__7649__exponent;
    __Vfunc_round_pack32__7649__shifted = __Vfunc_round_pack32__7649__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__7649__exponent))) {
        vlSelf->__Vfunc_shift_jam27__7650__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__7649__exponent)));
        vlSelf->__Vfunc_shift_jam27__7650__value = __Vfunc_round_pack32__7649__significand;
        __Vfunc_round_pack32__7649__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__7650__distance))) {
            vlSelf->__Vfunc_shift_jam27__7650__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__7650__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__7650__distance))) {
            vlSelf->__Vfunc_shift_jam27__7650__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__7650__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__7650__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7650__value, (IData)(vlSelf->__Vfunc_shift_jam27__7650__distance)));
            vlSelf->__Vfunc_shift_jam27__7650__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7650__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__7650__distance)))));
            vlSelf->__Vfunc_shift_jam27__7650__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__7650__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__7650__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__7650__discarded))));
        }
        __Vfunc_round_pack32__7649__shifted = vlSelf->__Vfunc_shift_jam27__7650__Vfuncout;
    }
    __Vfunc_round_pack32__7649__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__7649__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__7649__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__7649__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__7649__rounded)) {
        __Vfunc_round_pack32__7649__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__7649__rounded, 1U));
        __Vfunc_round_pack32__7649__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__7649__adjusted)));
    }
    __Vfunc_round_pack32__7649__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__7649__rounded)) {
        __Vfunc_round_pack32__7649__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__7649__adjusted)));
    }
    __Vfunc_round_pack32__7649__Vfuncout = (((0U == __Vfunc_round_pack32__7649__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__7649__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__7649__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__7649__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__7649__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__7649__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__7649__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__packed5 
        = __Vfunc_round_pack32__7649__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7567__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7567__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7567__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7567__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7568__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7568__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7568__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7568__Vfuncout))));
            __Vfunc_shift_jam27__7569__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7569__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7569__distance))) {
                __Vfunc_shift_jam27__7569__Vfuncout 
                    = __Vfunc_shift_jam27__7569__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7569__distance))) {
                __Vfunc_shift_jam27__7569__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7569__value);
            } else {
                __Vfunc_shift_jam27__7569__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7569__value, (IData)(__Vfunc_shift_jam27__7569__distance)));
                __Vfunc_shift_jam27__7569__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7569__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7569__distance)))));
                __Vfunc_shift_jam27__7569__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7569__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7569__shifted 
                                | (0U != __Vfunc_shift_jam27__7569__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7569__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__error5 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7573__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7573__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7573__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7573__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7574__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7574__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7574__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7574__Vfuncout))));
            __Vfunc_shift_jam27__7575__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7575__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7575__distance))) {
                __Vfunc_shift_jam27__7575__Vfuncout 
                    = __Vfunc_shift_jam27__7575__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7575__distance))) {
                __Vfunc_shift_jam27__7575__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7575__value);
            } else {
                __Vfunc_shift_jam27__7575__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7575__value, (IData)(__Vfunc_shift_jam27__7575__distance)));
                __Vfunc_shift_jam27__7575__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7575__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7575__distance)))));
                __Vfunc_shift_jam27__7575__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7575__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7575__shifted 
                                | (0U != __Vfunc_shift_jam27__7575__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7575__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__error5 = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7654__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7654__part 
                            = vlSelf->__Vfunc_leading_zero32__7654__value;
                        vlSelf->__Vfunc_leading_zero32__7654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                            vlSelf->__Vfunc_leading_zero32__7654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7654__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__7655__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__significand4;
    __Vfunc_round_pack32__7655__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent4;
    __Vfunc_round_pack32__7655__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative4;
    __Vfunc_round_pack32__7655__adjusted = __Vfunc_round_pack32__7655__exponent;
    __Vfunc_round_pack32__7655__shifted = __Vfunc_round_pack32__7655__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__7655__exponent))) {
        vlSelf->__Vfunc_shift_jam27__7656__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__7655__exponent)));
        vlSelf->__Vfunc_shift_jam27__7656__value = __Vfunc_round_pack32__7655__significand;
        __Vfunc_round_pack32__7655__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__7656__distance))) {
            vlSelf->__Vfunc_shift_jam27__7656__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__7656__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__7656__distance))) {
            vlSelf->__Vfunc_shift_jam27__7656__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__7656__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__7656__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7656__value, (IData)(vlSelf->__Vfunc_shift_jam27__7656__distance)));
            vlSelf->__Vfunc_shift_jam27__7656__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7656__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__7656__distance)))));
            vlSelf->__Vfunc_shift_jam27__7656__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__7656__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__7656__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__7656__discarded))));
        }
        __Vfunc_round_pack32__7655__shifted = vlSelf->__Vfunc_shift_jam27__7656__Vfuncout;
    }
    __Vfunc_round_pack32__7655__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__7655__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__7655__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__7655__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__7655__rounded)) {
        __Vfunc_round_pack32__7655__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__7655__rounded, 1U));
        __Vfunc_round_pack32__7655__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__7655__adjusted)));
    }
    __Vfunc_round_pack32__7655__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__7655__rounded)) {
        __Vfunc_round_pack32__7655__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__7655__adjusted)));
    }
    __Vfunc_round_pack32__7655__Vfuncout = (((0U == __Vfunc_round_pack32__7655__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__7655__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__7655__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__7655__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__7655__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__7655__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__7655__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__packed5 
        = __Vfunc_round_pack32__7655__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7579__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7579__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7579__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7579__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7580__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7580__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7580__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7580__Vfuncout))));
            __Vfunc_shift_jam27__7581__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7581__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7581__distance))) {
                __Vfunc_shift_jam27__7581__Vfuncout 
                    = __Vfunc_shift_jam27__7581__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7581__distance))) {
                __Vfunc_shift_jam27__7581__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7581__value);
            } else {
                __Vfunc_shift_jam27__7581__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7581__value, (IData)(__Vfunc_shift_jam27__7581__distance)));
                __Vfunc_shift_jam27__7581__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7581__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7581__distance)))));
                __Vfunc_shift_jam27__7581__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7581__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7581__shifted 
                                | (0U != __Vfunc_shift_jam27__7581__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7581__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__error5 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7585__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7585__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7585__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7585__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7586__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7586__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7586__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7586__Vfuncout))));
            __Vfunc_shift_jam27__7587__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7587__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7587__distance))) {
                __Vfunc_shift_jam27__7587__Vfuncout 
                    = __Vfunc_shift_jam27__7587__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7587__distance))) {
                __Vfunc_shift_jam27__7587__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7587__value);
            } else {
                __Vfunc_shift_jam27__7587__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7587__value, (IData)(__Vfunc_shift_jam27__7587__distance)));
                __Vfunc_shift_jam27__7587__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7587__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7587__distance)))));
                __Vfunc_shift_jam27__7587__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7587__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7587__shifted 
                                | (0U != __Vfunc_shift_jam27__7587__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7587__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__error5 = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__7660__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__7660__part 
                            = vlSelf->__Vfunc_leading_zero32__7660__value;
                        vlSelf->__Vfunc_leading_zero32__7660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__7660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                            vlSelf->__Vfunc_leading_zero32__7660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__7660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__7660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__7660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__7660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__7660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__7660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__7660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__7660__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__7661__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__significand4;
    __Vfunc_round_pack32__7661__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent4;
    __Vfunc_round_pack32__7661__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative4;
    __Vfunc_round_pack32__7661__adjusted = __Vfunc_round_pack32__7661__exponent;
    __Vfunc_round_pack32__7661__shifted = __Vfunc_round_pack32__7661__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__7661__exponent))) {
        vlSelf->__Vfunc_shift_jam27__7662__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__7661__exponent)));
        vlSelf->__Vfunc_shift_jam27__7662__value = __Vfunc_round_pack32__7661__significand;
        __Vfunc_round_pack32__7661__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__7662__distance))) {
            vlSelf->__Vfunc_shift_jam27__7662__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__7662__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__7662__distance))) {
            vlSelf->__Vfunc_shift_jam27__7662__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__7662__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__7662__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7662__value, (IData)(vlSelf->__Vfunc_shift_jam27__7662__distance)));
            vlSelf->__Vfunc_shift_jam27__7662__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__7662__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__7662__distance)))));
            vlSelf->__Vfunc_shift_jam27__7662__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__7662__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__7662__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__7662__discarded))));
        }
        __Vfunc_round_pack32__7661__shifted = vlSelf->__Vfunc_shift_jam27__7662__Vfuncout;
    }
    __Vfunc_round_pack32__7661__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__7661__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__7661__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__7661__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__7661__rounded)) {
        __Vfunc_round_pack32__7661__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__7661__rounded, 1U));
        __Vfunc_round_pack32__7661__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__7661__adjusted)));
    }
    __Vfunc_round_pack32__7661__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__7661__rounded)) {
        __Vfunc_round_pack32__7661__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__7661__adjusted)));
    }
    __Vfunc_round_pack32__7661__Vfuncout = (((0U == __Vfunc_round_pack32__7661__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__7661__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__7661__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__7661__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__7661__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__7661__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__7661__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__4__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__packed5 
        = __Vfunc_round_pack32__7661__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7591__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7591__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7591__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7591__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7592__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7592__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7592__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7592__Vfuncout))));
            __Vfunc_shift_jam27__7593__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7593__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7593__distance))) {
                __Vfunc_shift_jam27__7593__Vfuncout 
                    = __Vfunc_shift_jam27__7593__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7593__distance))) {
                __Vfunc_shift_jam27__7593__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7593__value);
            } else {
                __Vfunc_shift_jam27__7593__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7593__value, (IData)(__Vfunc_shift_jam27__7593__distance)));
                __Vfunc_shift_jam27__7593__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7593__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7593__distance)))));
                __Vfunc_shift_jam27__7593__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7593__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7593__shifted 
                                | (0U != __Vfunc_shift_jam27__7593__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7593__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__error5 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small1 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__distance1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__significand4 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__value5 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__error5 = 0U;
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__ce) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed 
                = ((0x1eU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed) 
                             << 1U)) | ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                                          & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__add__DOT__error5) 
                                             | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__2__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__add__DOT__error5))) 
                                         | ([&]() {
                                __Vfunc_fp32_invalid__7597__value 
                                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__a;
                                __Vfunc_fp32_invalid__7597__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__7597__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__7597__Vfuncout))) 
                                        | ([&]() {
                            __Vfunc_fp32_invalid__7598__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__b;
                            __Vfunc_fp32_invalid__7598__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__7598__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__7598__Vfuncout))));
            __Vfunc_shift_jam27__7599__distance = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__distance1;
            __Vfunc_shift_jam27__7599__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small1;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large1;
            if ((0U == (IData)(__Vfunc_shift_jam27__7599__distance))) {
                __Vfunc_shift_jam27__7599__Vfuncout 
                    = __Vfunc_shift_jam27__7599__value;
            } else if ((0x1bU <= (IData)(__Vfunc_shift_jam27__7599__distance))) {
                __Vfunc_shift_jam27__7599__Vfuncout 
                    = (0U != __Vfunc_shift_jam27__7599__value);
            } else {
                __Vfunc_shift_jam27__7599__shifted 
                    = (0x7ffffffU & VL_SHIFTR_III(27,27,12, __Vfunc_shift_jam27__7599__value, (IData)(__Vfunc_shift_jam27__7599__distance)));
                __Vfunc_shift_jam27__7599__discarded 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,12, __Vfunc_shift_jam27__7599__value, 
                                                  (0xfffU 
                                                   & ((IData)(0x1bU) 
                                                      - (IData)(__Vfunc_shift_jam27__7599__distance)))));
                __Vfunc_shift_jam27__7599__Vfuncout 
                    = ((0x7fffffeU & __Vfunc_shift_jam27__7599__shifted) 
                       | (1U & (__Vfunc_shift_jam27__7599__shifted 
                                | (0U != __Vfunc_shift_jam27__7599__discarded))));
            }
            if ((0x8000000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3)) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__significand4 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3 
                                      >> 1U)) | (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent3)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__significand4 
                    = (0x7ffffffU & VL_SHIFTL_III(27,27,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift)));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent4 
                    = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent3) 
                                 - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__left_shift)));
            }
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative4 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative3;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__value5 
                = ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed) 
                           >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__packed5 
                                             >> 0x20U))))
                    ? 0U : (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__packed5));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__distance1 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large_exponent) 
                             - ((0U == (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)))
                                 ? 0xf82U : ((0xffU 
                                              & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small_value 
                                                 >> 0x17U)) 
                                             - (IData)(0x7fU)))));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2 
                = __Vfunc_shift_jam27__7599__Vfuncout;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__error5 
                = (1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed) 
                          >> 3U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__packed5 
                                            >> 0x20U))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large1 
                = (((0U != (0xffU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large_value 
                                     >> 0x17U))) << 0x1aU) 
                   | (0x3fffff8U & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large_value 
                                    << 3U)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent3 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent2;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative3 
                = ((~ ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum_next) 
                       & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2))) 
                   & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative2));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract1;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent1 
                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large_exponent;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative1 
                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large_value 
                   >> 0x1fU);
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract1 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__a 
                    ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT____Vcellinp__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__b) 
                   >> 0x1fU);
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small1 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__distance1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__significand4 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__value5 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__error5 = 0U;
    }
}
