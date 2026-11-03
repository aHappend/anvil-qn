// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__28(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__28\n"); );
    // Init
    SData/*11:0*/ __Vfunc_round_pack32__9169__exponent;
    __Vfunc_round_pack32__9169__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9169__shifted;
    __Vfunc_round_pack32__9169__shifted = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9175__Vfuncout;
    __Vfunc_round_pack32__9175__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9175__negative;
    __Vfunc_round_pack32__9175__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9175__exponent;
    __Vfunc_round_pack32__9175__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9175__significand;
    __Vfunc_round_pack32__9175__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9175__shifted;
    __Vfunc_round_pack32__9175__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9175__rounded;
    __Vfunc_round_pack32__9175__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9175__adjusted;
    __Vfunc_round_pack32__9175__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9175__biased;
    __Vfunc_round_pack32__9175__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9181__Vfuncout;
    __Vfunc_round_pack32__9181__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9181__negative;
    __Vfunc_round_pack32__9181__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9181__exponent;
    __Vfunc_round_pack32__9181__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9181__significand;
    __Vfunc_round_pack32__9181__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9181__shifted;
    __Vfunc_round_pack32__9181__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9181__rounded;
    __Vfunc_round_pack32__9181__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9181__adjusted;
    __Vfunc_round_pack32__9181__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9181__biased;
    __Vfunc_round_pack32__9181__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9187__Vfuncout;
    __Vfunc_round_pack32__9187__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9187__negative;
    __Vfunc_round_pack32__9187__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9187__exponent;
    __Vfunc_round_pack32__9187__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9187__significand;
    __Vfunc_round_pack32__9187__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9187__shifted;
    __Vfunc_round_pack32__9187__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9187__rounded;
    __Vfunc_round_pack32__9187__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9187__adjusted;
    __Vfunc_round_pack32__9187__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9187__biased;
    __Vfunc_round_pack32__9187__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9193__Vfuncout;
    __Vfunc_round_pack32__9193__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9193__negative;
    __Vfunc_round_pack32__9193__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9193__exponent;
    __Vfunc_round_pack32__9193__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9193__significand;
    __Vfunc_round_pack32__9193__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9193__shifted;
    __Vfunc_round_pack32__9193__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9193__rounded;
    __Vfunc_round_pack32__9193__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9193__adjusted;
    __Vfunc_round_pack32__9193__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9193__biased;
    __Vfunc_round_pack32__9193__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9199__Vfuncout;
    __Vfunc_round_pack32__9199__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9199__negative;
    __Vfunc_round_pack32__9199__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9199__exponent;
    __Vfunc_round_pack32__9199__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9199__significand;
    __Vfunc_round_pack32__9199__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9199__shifted;
    __Vfunc_round_pack32__9199__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9199__rounded;
    __Vfunc_round_pack32__9199__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9199__adjusted;
    __Vfunc_round_pack32__9199__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9199__biased;
    __Vfunc_round_pack32__9199__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9205__Vfuncout;
    __Vfunc_round_pack32__9205__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9205__negative;
    __Vfunc_round_pack32__9205__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9205__exponent;
    __Vfunc_round_pack32__9205__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9205__significand;
    __Vfunc_round_pack32__9205__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9205__shifted;
    __Vfunc_round_pack32__9205__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9205__rounded;
    __Vfunc_round_pack32__9205__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9205__adjusted;
    __Vfunc_round_pack32__9205__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9205__biased;
    __Vfunc_round_pack32__9205__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9211__Vfuncout;
    __Vfunc_round_pack32__9211__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9211__negative;
    __Vfunc_round_pack32__9211__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9211__exponent;
    __Vfunc_round_pack32__9211__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9211__significand;
    __Vfunc_round_pack32__9211__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9211__shifted;
    __Vfunc_round_pack32__9211__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9211__rounded;
    __Vfunc_round_pack32__9211__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9211__adjusted;
    __Vfunc_round_pack32__9211__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9211__biased;
    __Vfunc_round_pack32__9211__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9217__Vfuncout;
    __Vfunc_round_pack32__9217__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9217__negative;
    __Vfunc_round_pack32__9217__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9217__exponent;
    __Vfunc_round_pack32__9217__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9217__significand;
    __Vfunc_round_pack32__9217__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9217__shifted;
    __Vfunc_round_pack32__9217__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9217__rounded;
    __Vfunc_round_pack32__9217__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9217__adjusted;
    __Vfunc_round_pack32__9217__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9217__biased;
    __Vfunc_round_pack32__9217__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9223__Vfuncout;
    __Vfunc_round_pack32__9223__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9223__negative;
    __Vfunc_round_pack32__9223__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9223__exponent;
    __Vfunc_round_pack32__9223__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9223__significand;
    __Vfunc_round_pack32__9223__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9223__shifted;
    __Vfunc_round_pack32__9223__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9223__rounded;
    __Vfunc_round_pack32__9223__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9223__adjusted;
    __Vfunc_round_pack32__9223__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9223__biased;
    __Vfunc_round_pack32__9223__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9229__Vfuncout;
    __Vfunc_round_pack32__9229__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9229__negative;
    __Vfunc_round_pack32__9229__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9229__exponent;
    __Vfunc_round_pack32__9229__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9229__significand;
    __Vfunc_round_pack32__9229__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9229__shifted;
    __Vfunc_round_pack32__9229__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9229__rounded;
    __Vfunc_round_pack32__9229__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9229__adjusted;
    __Vfunc_round_pack32__9229__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9229__biased;
    __Vfunc_round_pack32__9229__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9235__Vfuncout;
    __Vfunc_round_pack32__9235__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9235__negative;
    __Vfunc_round_pack32__9235__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9235__exponent;
    __Vfunc_round_pack32__9235__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9235__significand;
    __Vfunc_round_pack32__9235__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9235__shifted;
    __Vfunc_round_pack32__9235__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9235__rounded;
    __Vfunc_round_pack32__9235__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9235__adjusted;
    __Vfunc_round_pack32__9235__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9235__biased;
    __Vfunc_round_pack32__9235__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9241__Vfuncout;
    __Vfunc_round_pack32__9241__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9241__negative;
    __Vfunc_round_pack32__9241__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9241__exponent;
    __Vfunc_round_pack32__9241__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9241__significand;
    __Vfunc_round_pack32__9241__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9241__shifted;
    __Vfunc_round_pack32__9241__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9241__rounded;
    __Vfunc_round_pack32__9241__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9241__adjusted;
    __Vfunc_round_pack32__9241__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9241__biased;
    __Vfunc_round_pack32__9241__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9247__Vfuncout;
    __Vfunc_round_pack32__9247__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9247__negative;
    __Vfunc_round_pack32__9247__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9247__exponent;
    __Vfunc_round_pack32__9247__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9247__significand;
    __Vfunc_round_pack32__9247__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9247__shifted;
    __Vfunc_round_pack32__9247__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9247__rounded;
    __Vfunc_round_pack32__9247__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9247__adjusted;
    __Vfunc_round_pack32__9247__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9247__biased;
    __Vfunc_round_pack32__9247__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9253__Vfuncout;
    __Vfunc_round_pack32__9253__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9253__negative;
    __Vfunc_round_pack32__9253__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9253__exponent;
    __Vfunc_round_pack32__9253__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9253__significand;
    __Vfunc_round_pack32__9253__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9253__shifted;
    __Vfunc_round_pack32__9253__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9253__rounded;
    __Vfunc_round_pack32__9253__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9253__adjusted;
    __Vfunc_round_pack32__9253__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9253__biased;
    __Vfunc_round_pack32__9253__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9259__Vfuncout;
    __Vfunc_round_pack32__9259__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9259__negative;
    __Vfunc_round_pack32__9259__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9259__exponent;
    __Vfunc_round_pack32__9259__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9259__significand;
    __Vfunc_round_pack32__9259__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9259__shifted;
    __Vfunc_round_pack32__9259__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9259__rounded;
    __Vfunc_round_pack32__9259__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9259__adjusted;
    __Vfunc_round_pack32__9259__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9259__biased;
    __Vfunc_round_pack32__9259__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9265__Vfuncout;
    __Vfunc_round_pack32__9265__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9265__negative;
    __Vfunc_round_pack32__9265__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9265__exponent;
    __Vfunc_round_pack32__9265__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9265__significand;
    __Vfunc_round_pack32__9265__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9265__shifted;
    __Vfunc_round_pack32__9265__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9265__rounded;
    __Vfunc_round_pack32__9265__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9265__adjusted;
    __Vfunc_round_pack32__9265__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9265__biased;
    __Vfunc_round_pack32__9265__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9271__Vfuncout;
    __Vfunc_round_pack32__9271__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9271__negative;
    __Vfunc_round_pack32__9271__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9271__exponent;
    __Vfunc_round_pack32__9271__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9271__significand;
    __Vfunc_round_pack32__9271__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9271__shifted;
    __Vfunc_round_pack32__9271__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9271__rounded;
    __Vfunc_round_pack32__9271__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9271__adjusted;
    __Vfunc_round_pack32__9271__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9271__biased;
    __Vfunc_round_pack32__9271__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9277__Vfuncout;
    __Vfunc_round_pack32__9277__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9277__negative;
    __Vfunc_round_pack32__9277__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9277__exponent;
    __Vfunc_round_pack32__9277__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9277__significand;
    __Vfunc_round_pack32__9277__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9277__shifted;
    __Vfunc_round_pack32__9277__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9277__rounded;
    __Vfunc_round_pack32__9277__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9277__adjusted;
    __Vfunc_round_pack32__9277__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9277__biased;
    __Vfunc_round_pack32__9277__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9283__Vfuncout;
    __Vfunc_round_pack32__9283__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9283__negative;
    __Vfunc_round_pack32__9283__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9283__exponent;
    __Vfunc_round_pack32__9283__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9283__significand;
    __Vfunc_round_pack32__9283__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9283__shifted;
    __Vfunc_round_pack32__9283__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9283__rounded;
    __Vfunc_round_pack32__9283__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9283__adjusted;
    __Vfunc_round_pack32__9283__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9283__biased;
    __Vfunc_round_pack32__9283__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9289__Vfuncout;
    __Vfunc_round_pack32__9289__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9289__negative;
    __Vfunc_round_pack32__9289__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9289__exponent;
    __Vfunc_round_pack32__9289__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9289__significand;
    __Vfunc_round_pack32__9289__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9289__shifted;
    __Vfunc_round_pack32__9289__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9289__rounded;
    __Vfunc_round_pack32__9289__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9289__adjusted;
    __Vfunc_round_pack32__9289__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9289__biased;
    __Vfunc_round_pack32__9289__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9295__Vfuncout;
    __Vfunc_round_pack32__9295__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9295__negative;
    __Vfunc_round_pack32__9295__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9295__exponent;
    __Vfunc_round_pack32__9295__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9295__significand;
    __Vfunc_round_pack32__9295__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9295__shifted;
    __Vfunc_round_pack32__9295__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9295__rounded;
    __Vfunc_round_pack32__9295__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9295__adjusted;
    __Vfunc_round_pack32__9295__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9295__biased;
    __Vfunc_round_pack32__9295__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9301__Vfuncout;
    __Vfunc_round_pack32__9301__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9301__negative;
    __Vfunc_round_pack32__9301__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9301__exponent;
    __Vfunc_round_pack32__9301__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9301__significand;
    __Vfunc_round_pack32__9301__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9301__shifted;
    __Vfunc_round_pack32__9301__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9301__rounded;
    __Vfunc_round_pack32__9301__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9301__adjusted;
    __Vfunc_round_pack32__9301__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9301__biased;
    __Vfunc_round_pack32__9301__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9307__Vfuncout;
    __Vfunc_round_pack32__9307__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9307__negative;
    __Vfunc_round_pack32__9307__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9307__exponent;
    __Vfunc_round_pack32__9307__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9307__significand;
    __Vfunc_round_pack32__9307__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9307__shifted;
    __Vfunc_round_pack32__9307__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9307__rounded;
    __Vfunc_round_pack32__9307__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9307__adjusted;
    __Vfunc_round_pack32__9307__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9307__biased;
    __Vfunc_round_pack32__9307__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9313__Vfuncout;
    __Vfunc_round_pack32__9313__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9313__negative;
    __Vfunc_round_pack32__9313__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9313__exponent;
    __Vfunc_round_pack32__9313__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9313__significand;
    __Vfunc_round_pack32__9313__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9313__shifted;
    __Vfunc_round_pack32__9313__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9313__rounded;
    __Vfunc_round_pack32__9313__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9313__adjusted;
    __Vfunc_round_pack32__9313__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9313__biased;
    __Vfunc_round_pack32__9313__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9319__Vfuncout;
    __Vfunc_round_pack32__9319__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9319__negative;
    __Vfunc_round_pack32__9319__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9319__exponent;
    __Vfunc_round_pack32__9319__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9319__significand;
    __Vfunc_round_pack32__9319__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9319__shifted;
    __Vfunc_round_pack32__9319__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9319__rounded;
    __Vfunc_round_pack32__9319__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9319__adjusted;
    __Vfunc_round_pack32__9319__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9319__biased;
    __Vfunc_round_pack32__9319__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9325__Vfuncout;
    __Vfunc_round_pack32__9325__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9325__negative;
    __Vfunc_round_pack32__9325__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9325__exponent;
    __Vfunc_round_pack32__9325__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9325__significand;
    __Vfunc_round_pack32__9325__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9325__shifted;
    __Vfunc_round_pack32__9325__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9325__rounded;
    __Vfunc_round_pack32__9325__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9325__adjusted;
    __Vfunc_round_pack32__9325__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9325__biased;
    __Vfunc_round_pack32__9325__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9331__Vfuncout;
    __Vfunc_round_pack32__9331__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9331__negative;
    __Vfunc_round_pack32__9331__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9331__exponent;
    __Vfunc_round_pack32__9331__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9331__significand;
    __Vfunc_round_pack32__9331__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9331__shifted;
    __Vfunc_round_pack32__9331__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9331__rounded;
    __Vfunc_round_pack32__9331__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9331__adjusted;
    __Vfunc_round_pack32__9331__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9331__biased;
    __Vfunc_round_pack32__9331__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9337__Vfuncout;
    __Vfunc_round_pack32__9337__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9337__negative;
    __Vfunc_round_pack32__9337__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9337__exponent;
    __Vfunc_round_pack32__9337__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9337__significand;
    __Vfunc_round_pack32__9337__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9337__shifted;
    __Vfunc_round_pack32__9337__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9337__rounded;
    __Vfunc_round_pack32__9337__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9337__adjusted;
    __Vfunc_round_pack32__9337__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9337__biased;
    __Vfunc_round_pack32__9337__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9343__Vfuncout;
    __Vfunc_round_pack32__9343__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9343__negative;
    __Vfunc_round_pack32__9343__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9343__exponent;
    __Vfunc_round_pack32__9343__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9343__significand;
    __Vfunc_round_pack32__9343__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9343__shifted;
    __Vfunc_round_pack32__9343__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9343__rounded;
    __Vfunc_round_pack32__9343__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9343__adjusted;
    __Vfunc_round_pack32__9343__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9343__biased;
    __Vfunc_round_pack32__9343__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9349__Vfuncout;
    __Vfunc_round_pack32__9349__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9349__negative;
    __Vfunc_round_pack32__9349__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9349__exponent;
    __Vfunc_round_pack32__9349__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9349__significand;
    __Vfunc_round_pack32__9349__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9349__shifted;
    __Vfunc_round_pack32__9349__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9349__rounded;
    __Vfunc_round_pack32__9349__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9349__adjusted;
    __Vfunc_round_pack32__9349__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9349__biased;
    __Vfunc_round_pack32__9349__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9355__Vfuncout;
    __Vfunc_round_pack32__9355__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9355__negative;
    __Vfunc_round_pack32__9355__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9355__exponent;
    __Vfunc_round_pack32__9355__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9355__significand;
    __Vfunc_round_pack32__9355__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9355__shifted;
    __Vfunc_round_pack32__9355__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9355__rounded;
    __Vfunc_round_pack32__9355__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9355__adjusted;
    __Vfunc_round_pack32__9355__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9355__biased;
    __Vfunc_round_pack32__9355__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9361__Vfuncout;
    __Vfunc_round_pack32__9361__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9361__negative;
    __Vfunc_round_pack32__9361__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9361__exponent;
    __Vfunc_round_pack32__9361__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9361__significand;
    __Vfunc_round_pack32__9361__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9361__shifted;
    __Vfunc_round_pack32__9361__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9361__rounded;
    __Vfunc_round_pack32__9361__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9361__adjusted;
    __Vfunc_round_pack32__9361__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9361__biased;
    __Vfunc_round_pack32__9361__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9367__Vfuncout;
    __Vfunc_round_pack32__9367__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9367__negative;
    __Vfunc_round_pack32__9367__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9367__exponent;
    __Vfunc_round_pack32__9367__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9367__significand;
    __Vfunc_round_pack32__9367__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9367__shifted;
    __Vfunc_round_pack32__9367__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9367__rounded;
    __Vfunc_round_pack32__9367__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9367__adjusted;
    __Vfunc_round_pack32__9367__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9367__biased;
    __Vfunc_round_pack32__9367__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9373__Vfuncout;
    __Vfunc_round_pack32__9373__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9373__negative;
    __Vfunc_round_pack32__9373__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9373__exponent;
    __Vfunc_round_pack32__9373__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9373__significand;
    __Vfunc_round_pack32__9373__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9373__shifted;
    __Vfunc_round_pack32__9373__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9373__rounded;
    __Vfunc_round_pack32__9373__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9373__adjusted;
    __Vfunc_round_pack32__9373__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9373__biased;
    __Vfunc_round_pack32__9373__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9379__Vfuncout;
    __Vfunc_round_pack32__9379__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9379__negative;
    __Vfunc_round_pack32__9379__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9379__exponent;
    __Vfunc_round_pack32__9379__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9379__significand;
    __Vfunc_round_pack32__9379__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9379__shifted;
    __Vfunc_round_pack32__9379__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9379__rounded;
    __Vfunc_round_pack32__9379__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9379__adjusted;
    __Vfunc_round_pack32__9379__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9379__biased;
    __Vfunc_round_pack32__9379__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9385__Vfuncout;
    __Vfunc_round_pack32__9385__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9385__negative;
    __Vfunc_round_pack32__9385__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9385__exponent;
    __Vfunc_round_pack32__9385__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9385__significand;
    __Vfunc_round_pack32__9385__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9385__shifted;
    __Vfunc_round_pack32__9385__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9385__rounded;
    __Vfunc_round_pack32__9385__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9385__adjusted;
    __Vfunc_round_pack32__9385__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9385__biased;
    __Vfunc_round_pack32__9385__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9391__Vfuncout;
    __Vfunc_round_pack32__9391__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9391__negative;
    __Vfunc_round_pack32__9391__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9391__exponent;
    __Vfunc_round_pack32__9391__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9391__significand;
    __Vfunc_round_pack32__9391__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9391__shifted;
    __Vfunc_round_pack32__9391__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9391__rounded;
    __Vfunc_round_pack32__9391__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9391__adjusted;
    __Vfunc_round_pack32__9391__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9391__biased;
    __Vfunc_round_pack32__9391__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9397__Vfuncout;
    __Vfunc_round_pack32__9397__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9397__negative;
    __Vfunc_round_pack32__9397__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9397__exponent;
    __Vfunc_round_pack32__9397__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9397__significand;
    __Vfunc_round_pack32__9397__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9397__shifted;
    __Vfunc_round_pack32__9397__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9397__rounded;
    __Vfunc_round_pack32__9397__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9397__adjusted;
    __Vfunc_round_pack32__9397__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9397__biased;
    __Vfunc_round_pack32__9397__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9403__Vfuncout;
    __Vfunc_round_pack32__9403__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9403__negative;
    __Vfunc_round_pack32__9403__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9403__exponent;
    __Vfunc_round_pack32__9403__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9403__significand;
    __Vfunc_round_pack32__9403__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9403__shifted;
    __Vfunc_round_pack32__9403__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9403__rounded;
    __Vfunc_round_pack32__9403__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9403__adjusted;
    __Vfunc_round_pack32__9403__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9403__biased;
    __Vfunc_round_pack32__9403__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9409__Vfuncout;
    __Vfunc_round_pack32__9409__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9409__negative;
    __Vfunc_round_pack32__9409__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9409__exponent;
    __Vfunc_round_pack32__9409__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9409__significand;
    __Vfunc_round_pack32__9409__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9409__shifted;
    __Vfunc_round_pack32__9409__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9409__rounded;
    __Vfunc_round_pack32__9409__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9409__adjusted;
    __Vfunc_round_pack32__9409__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9409__biased;
    __Vfunc_round_pack32__9409__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9415__Vfuncout;
    __Vfunc_round_pack32__9415__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9415__negative;
    __Vfunc_round_pack32__9415__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9415__exponent;
    __Vfunc_round_pack32__9415__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9415__significand;
    __Vfunc_round_pack32__9415__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9415__shifted;
    __Vfunc_round_pack32__9415__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9415__rounded;
    __Vfunc_round_pack32__9415__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9415__adjusted;
    __Vfunc_round_pack32__9415__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9415__biased;
    __Vfunc_round_pack32__9415__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9421__Vfuncout;
    __Vfunc_round_pack32__9421__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9421__negative;
    __Vfunc_round_pack32__9421__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9421__exponent;
    __Vfunc_round_pack32__9421__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9421__significand;
    __Vfunc_round_pack32__9421__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9421__shifted;
    __Vfunc_round_pack32__9421__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9421__rounded;
    __Vfunc_round_pack32__9421__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9421__adjusted;
    __Vfunc_round_pack32__9421__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9421__biased;
    __Vfunc_round_pack32__9421__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9427__Vfuncout;
    __Vfunc_round_pack32__9427__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9427__negative;
    __Vfunc_round_pack32__9427__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9427__exponent;
    __Vfunc_round_pack32__9427__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9427__significand;
    __Vfunc_round_pack32__9427__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9427__shifted;
    __Vfunc_round_pack32__9427__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9427__rounded;
    __Vfunc_round_pack32__9427__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9427__adjusted;
    __Vfunc_round_pack32__9427__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9427__biased;
    __Vfunc_round_pack32__9427__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9433__Vfuncout;
    __Vfunc_round_pack32__9433__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9433__negative;
    __Vfunc_round_pack32__9433__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9433__exponent;
    __Vfunc_round_pack32__9433__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9433__significand;
    __Vfunc_round_pack32__9433__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9433__shifted;
    __Vfunc_round_pack32__9433__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9433__rounded;
    __Vfunc_round_pack32__9433__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9433__adjusted;
    __Vfunc_round_pack32__9433__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9433__biased;
    __Vfunc_round_pack32__9433__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9439__Vfuncout;
    __Vfunc_round_pack32__9439__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9439__negative;
    __Vfunc_round_pack32__9439__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9439__exponent;
    __Vfunc_round_pack32__9439__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9439__significand;
    __Vfunc_round_pack32__9439__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9439__shifted;
    __Vfunc_round_pack32__9439__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9439__rounded;
    __Vfunc_round_pack32__9439__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9439__adjusted;
    __Vfunc_round_pack32__9439__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9439__biased;
    __Vfunc_round_pack32__9439__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9445__Vfuncout;
    __Vfunc_round_pack32__9445__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9445__negative;
    __Vfunc_round_pack32__9445__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9445__exponent;
    __Vfunc_round_pack32__9445__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9445__significand;
    __Vfunc_round_pack32__9445__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9445__shifted;
    __Vfunc_round_pack32__9445__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9445__rounded;
    __Vfunc_round_pack32__9445__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9445__adjusted;
    __Vfunc_round_pack32__9445__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9445__biased;
    __Vfunc_round_pack32__9445__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9451__Vfuncout;
    __Vfunc_round_pack32__9451__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9451__negative;
    __Vfunc_round_pack32__9451__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9451__exponent;
    __Vfunc_round_pack32__9451__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9451__significand;
    __Vfunc_round_pack32__9451__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9451__shifted;
    __Vfunc_round_pack32__9451__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9451__rounded;
    __Vfunc_round_pack32__9451__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9451__adjusted;
    __Vfunc_round_pack32__9451__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9451__biased;
    __Vfunc_round_pack32__9451__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9457__Vfuncout;
    __Vfunc_round_pack32__9457__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9457__negative;
    __Vfunc_round_pack32__9457__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9457__exponent;
    __Vfunc_round_pack32__9457__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9457__significand;
    __Vfunc_round_pack32__9457__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9457__shifted;
    __Vfunc_round_pack32__9457__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9457__rounded;
    __Vfunc_round_pack32__9457__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9457__adjusted;
    __Vfunc_round_pack32__9457__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9457__biased;
    __Vfunc_round_pack32__9457__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9463__Vfuncout;
    __Vfunc_round_pack32__9463__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9463__negative;
    __Vfunc_round_pack32__9463__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9463__exponent;
    __Vfunc_round_pack32__9463__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9463__significand;
    __Vfunc_round_pack32__9463__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9463__shifted;
    __Vfunc_round_pack32__9463__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9463__rounded;
    __Vfunc_round_pack32__9463__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9463__adjusted;
    __Vfunc_round_pack32__9463__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9463__biased;
    __Vfunc_round_pack32__9463__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9469__Vfuncout;
    __Vfunc_round_pack32__9469__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9469__negative;
    __Vfunc_round_pack32__9469__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9469__exponent;
    __Vfunc_round_pack32__9469__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9469__significand;
    __Vfunc_round_pack32__9469__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9469__shifted;
    __Vfunc_round_pack32__9469__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9469__rounded;
    __Vfunc_round_pack32__9469__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9469__adjusted;
    __Vfunc_round_pack32__9469__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9469__biased;
    __Vfunc_round_pack32__9469__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9475__Vfuncout;
    __Vfunc_round_pack32__9475__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9475__negative;
    __Vfunc_round_pack32__9475__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9475__exponent;
    __Vfunc_round_pack32__9475__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9475__significand;
    __Vfunc_round_pack32__9475__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9475__shifted;
    __Vfunc_round_pack32__9475__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9475__rounded;
    __Vfunc_round_pack32__9475__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9475__adjusted;
    __Vfunc_round_pack32__9475__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9475__biased;
    __Vfunc_round_pack32__9475__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9481__Vfuncout;
    __Vfunc_round_pack32__9481__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9481__negative;
    __Vfunc_round_pack32__9481__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9481__exponent;
    __Vfunc_round_pack32__9481__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9481__significand;
    __Vfunc_round_pack32__9481__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9481__shifted;
    __Vfunc_round_pack32__9481__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9481__rounded;
    __Vfunc_round_pack32__9481__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9481__adjusted;
    __Vfunc_round_pack32__9481__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9481__biased;
    __Vfunc_round_pack32__9481__biased = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9487__negative;
    __Vfunc_round_pack32__9487__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9487__exponent;
    __Vfunc_round_pack32__9487__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9487__significand;
    __Vfunc_round_pack32__9487__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9487__shifted;
    __Vfunc_round_pack32__9487__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9487__rounded;
    __Vfunc_round_pack32__9487__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9487__adjusted;
    __Vfunc_round_pack32__9487__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9487__biased;
    __Vfunc_round_pack32__9487__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9493__Vfuncout;
    __Vfunc_round_pack32__9493__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9493__negative;
    __Vfunc_round_pack32__9493__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9493__exponent;
    __Vfunc_round_pack32__9493__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9493__significand;
    __Vfunc_round_pack32__9493__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9493__shifted;
    __Vfunc_round_pack32__9493__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9493__rounded;
    __Vfunc_round_pack32__9493__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9493__adjusted;
    __Vfunc_round_pack32__9493__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9493__biased;
    __Vfunc_round_pack32__9493__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9499__Vfuncout;
    __Vfunc_round_pack32__9499__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9499__negative;
    __Vfunc_round_pack32__9499__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9499__exponent;
    __Vfunc_round_pack32__9499__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9499__significand;
    __Vfunc_round_pack32__9499__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9499__shifted;
    __Vfunc_round_pack32__9499__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9499__rounded;
    __Vfunc_round_pack32__9499__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9499__adjusted;
    __Vfunc_round_pack32__9499__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9499__biased;
    __Vfunc_round_pack32__9499__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9505__Vfuncout;
    __Vfunc_round_pack32__9505__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9505__negative;
    __Vfunc_round_pack32__9505__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9505__exponent;
    __Vfunc_round_pack32__9505__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9505__significand;
    __Vfunc_round_pack32__9505__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9505__shifted;
    __Vfunc_round_pack32__9505__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9505__rounded;
    __Vfunc_round_pack32__9505__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9505__adjusted;
    __Vfunc_round_pack32__9505__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9505__biased;
    __Vfunc_round_pack32__9505__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9511__Vfuncout;
    __Vfunc_round_pack32__9511__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9511__negative;
    __Vfunc_round_pack32__9511__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9511__exponent;
    __Vfunc_round_pack32__9511__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9511__significand;
    __Vfunc_round_pack32__9511__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9511__shifted;
    __Vfunc_round_pack32__9511__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9511__rounded;
    __Vfunc_round_pack32__9511__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9511__adjusted;
    __Vfunc_round_pack32__9511__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9511__biased;
    __Vfunc_round_pack32__9511__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9517__Vfuncout;
    __Vfunc_round_pack32__9517__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9517__negative;
    __Vfunc_round_pack32__9517__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9517__exponent;
    __Vfunc_round_pack32__9517__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9517__significand;
    __Vfunc_round_pack32__9517__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9517__shifted;
    __Vfunc_round_pack32__9517__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9517__rounded;
    __Vfunc_round_pack32__9517__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9517__adjusted;
    __Vfunc_round_pack32__9517__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9517__biased;
    __Vfunc_round_pack32__9517__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9523__Vfuncout;
    __Vfunc_round_pack32__9523__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9523__negative;
    __Vfunc_round_pack32__9523__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9523__exponent;
    __Vfunc_round_pack32__9523__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9523__significand;
    __Vfunc_round_pack32__9523__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9523__shifted;
    __Vfunc_round_pack32__9523__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9523__rounded;
    __Vfunc_round_pack32__9523__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9523__adjusted;
    __Vfunc_round_pack32__9523__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9523__biased;
    __Vfunc_round_pack32__9523__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9529__Vfuncout;
    __Vfunc_round_pack32__9529__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9529__negative;
    __Vfunc_round_pack32__9529__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9529__exponent;
    __Vfunc_round_pack32__9529__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9529__significand;
    __Vfunc_round_pack32__9529__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9529__shifted;
    __Vfunc_round_pack32__9529__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9529__rounded;
    __Vfunc_round_pack32__9529__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9529__adjusted;
    __Vfunc_round_pack32__9529__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9529__biased;
    __Vfunc_round_pack32__9529__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9535__Vfuncout;
    __Vfunc_round_pack32__9535__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9535__negative;
    __Vfunc_round_pack32__9535__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9535__exponent;
    __Vfunc_round_pack32__9535__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9535__significand;
    __Vfunc_round_pack32__9535__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9535__shifted;
    __Vfunc_round_pack32__9535__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9535__rounded;
    __Vfunc_round_pack32__9535__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9535__adjusted;
    __Vfunc_round_pack32__9535__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9535__biased;
    __Vfunc_round_pack32__9535__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9541__Vfuncout;
    __Vfunc_round_pack32__9541__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9541__negative;
    __Vfunc_round_pack32__9541__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9541__exponent;
    __Vfunc_round_pack32__9541__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9541__significand;
    __Vfunc_round_pack32__9541__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9541__shifted;
    __Vfunc_round_pack32__9541__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9541__rounded;
    __Vfunc_round_pack32__9541__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9541__adjusted;
    __Vfunc_round_pack32__9541__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9541__biased;
    __Vfunc_round_pack32__9541__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9547__Vfuncout;
    __Vfunc_round_pack32__9547__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9547__negative;
    __Vfunc_round_pack32__9547__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9547__exponent;
    __Vfunc_round_pack32__9547__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9547__significand;
    __Vfunc_round_pack32__9547__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9547__shifted;
    __Vfunc_round_pack32__9547__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9547__rounded;
    __Vfunc_round_pack32__9547__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9547__adjusted;
    __Vfunc_round_pack32__9547__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9547__biased;
    __Vfunc_round_pack32__9547__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9553__Vfuncout;
    __Vfunc_round_pack32__9553__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9553__negative;
    __Vfunc_round_pack32__9553__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9553__exponent;
    __Vfunc_round_pack32__9553__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9553__significand;
    __Vfunc_round_pack32__9553__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9553__shifted;
    __Vfunc_round_pack32__9553__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9553__rounded;
    __Vfunc_round_pack32__9553__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9553__adjusted;
    __Vfunc_round_pack32__9553__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9553__biased;
    __Vfunc_round_pack32__9553__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9559__Vfuncout;
    __Vfunc_round_pack32__9559__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9559__negative;
    __Vfunc_round_pack32__9559__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9559__exponent;
    __Vfunc_round_pack32__9559__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9559__significand;
    __Vfunc_round_pack32__9559__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9559__shifted;
    __Vfunc_round_pack32__9559__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9559__rounded;
    __Vfunc_round_pack32__9559__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9559__adjusted;
    __Vfunc_round_pack32__9559__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9559__biased;
    __Vfunc_round_pack32__9559__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9565__Vfuncout;
    __Vfunc_round_pack32__9565__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9565__negative;
    __Vfunc_round_pack32__9565__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9565__exponent;
    __Vfunc_round_pack32__9565__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9565__significand;
    __Vfunc_round_pack32__9565__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9565__shifted;
    __Vfunc_round_pack32__9565__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9565__rounded;
    __Vfunc_round_pack32__9565__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9565__adjusted;
    __Vfunc_round_pack32__9565__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9565__biased;
    __Vfunc_round_pack32__9565__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9571__Vfuncout;
    __Vfunc_round_pack32__9571__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9571__negative;
    __Vfunc_round_pack32__9571__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9571__exponent;
    __Vfunc_round_pack32__9571__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9571__significand;
    __Vfunc_round_pack32__9571__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9571__shifted;
    __Vfunc_round_pack32__9571__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9571__rounded;
    __Vfunc_round_pack32__9571__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9571__adjusted;
    __Vfunc_round_pack32__9571__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9571__biased;
    __Vfunc_round_pack32__9571__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9577__Vfuncout;
    __Vfunc_round_pack32__9577__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9577__negative;
    __Vfunc_round_pack32__9577__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9577__exponent;
    __Vfunc_round_pack32__9577__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9577__significand;
    __Vfunc_round_pack32__9577__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9577__shifted;
    __Vfunc_round_pack32__9577__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9577__rounded;
    __Vfunc_round_pack32__9577__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9577__adjusted;
    __Vfunc_round_pack32__9577__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9577__biased;
    __Vfunc_round_pack32__9577__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9583__Vfuncout;
    __Vfunc_round_pack32__9583__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9583__negative;
    __Vfunc_round_pack32__9583__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9583__exponent;
    __Vfunc_round_pack32__9583__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9583__significand;
    __Vfunc_round_pack32__9583__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9583__shifted;
    __Vfunc_round_pack32__9583__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9583__rounded;
    __Vfunc_round_pack32__9583__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9583__adjusted;
    __Vfunc_round_pack32__9583__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9583__biased;
    __Vfunc_round_pack32__9583__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9589__Vfuncout;
    __Vfunc_round_pack32__9589__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9589__negative;
    __Vfunc_round_pack32__9589__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9589__exponent;
    __Vfunc_round_pack32__9589__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9589__significand;
    __Vfunc_round_pack32__9589__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9589__shifted;
    __Vfunc_round_pack32__9589__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9589__rounded;
    __Vfunc_round_pack32__9589__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9589__adjusted;
    __Vfunc_round_pack32__9589__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9589__biased;
    __Vfunc_round_pack32__9589__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9595__Vfuncout;
    __Vfunc_round_pack32__9595__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9595__negative;
    __Vfunc_round_pack32__9595__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9595__exponent;
    __Vfunc_round_pack32__9595__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9595__significand;
    __Vfunc_round_pack32__9595__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9595__shifted;
    __Vfunc_round_pack32__9595__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9595__rounded;
    __Vfunc_round_pack32__9595__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9595__adjusted;
    __Vfunc_round_pack32__9595__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9595__biased;
    __Vfunc_round_pack32__9595__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9601__Vfuncout;
    __Vfunc_round_pack32__9601__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9601__negative;
    __Vfunc_round_pack32__9601__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9601__exponent;
    __Vfunc_round_pack32__9601__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9601__significand;
    __Vfunc_round_pack32__9601__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9601__shifted;
    __Vfunc_round_pack32__9601__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9601__rounded;
    __Vfunc_round_pack32__9601__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9601__adjusted;
    __Vfunc_round_pack32__9601__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9601__biased;
    __Vfunc_round_pack32__9601__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9607__Vfuncout;
    __Vfunc_round_pack32__9607__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9607__negative;
    __Vfunc_round_pack32__9607__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9607__exponent;
    __Vfunc_round_pack32__9607__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9607__significand;
    __Vfunc_round_pack32__9607__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9607__shifted;
    __Vfunc_round_pack32__9607__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9607__rounded;
    __Vfunc_round_pack32__9607__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9607__adjusted;
    __Vfunc_round_pack32__9607__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9607__biased;
    __Vfunc_round_pack32__9607__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9613__Vfuncout;
    __Vfunc_round_pack32__9613__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9613__negative;
    __Vfunc_round_pack32__9613__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9613__exponent;
    __Vfunc_round_pack32__9613__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9613__significand;
    __Vfunc_round_pack32__9613__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9613__shifted;
    __Vfunc_round_pack32__9613__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9613__rounded;
    __Vfunc_round_pack32__9613__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9613__adjusted;
    __Vfunc_round_pack32__9613__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9613__biased;
    __Vfunc_round_pack32__9613__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9619__Vfuncout;
    __Vfunc_round_pack32__9619__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9619__negative;
    __Vfunc_round_pack32__9619__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9619__exponent;
    __Vfunc_round_pack32__9619__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9619__significand;
    __Vfunc_round_pack32__9619__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9619__shifted;
    __Vfunc_round_pack32__9619__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9619__rounded;
    __Vfunc_round_pack32__9619__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9619__adjusted;
    __Vfunc_round_pack32__9619__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9619__biased;
    __Vfunc_round_pack32__9619__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9625__Vfuncout;
    __Vfunc_round_pack32__9625__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9625__negative;
    __Vfunc_round_pack32__9625__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9625__exponent;
    __Vfunc_round_pack32__9625__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9625__significand;
    __Vfunc_round_pack32__9625__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9625__shifted;
    __Vfunc_round_pack32__9625__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9625__rounded;
    __Vfunc_round_pack32__9625__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9625__adjusted;
    __Vfunc_round_pack32__9625__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9625__biased;
    __Vfunc_round_pack32__9625__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9631__Vfuncout;
    __Vfunc_round_pack32__9631__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9631__negative;
    __Vfunc_round_pack32__9631__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9631__exponent;
    __Vfunc_round_pack32__9631__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9631__significand;
    __Vfunc_round_pack32__9631__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9631__shifted;
    __Vfunc_round_pack32__9631__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9631__rounded;
    __Vfunc_round_pack32__9631__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9631__adjusted;
    __Vfunc_round_pack32__9631__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9631__biased;
    __Vfunc_round_pack32__9631__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9637__Vfuncout;
    __Vfunc_round_pack32__9637__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9637__negative;
    __Vfunc_round_pack32__9637__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9637__exponent;
    __Vfunc_round_pack32__9637__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9637__significand;
    __Vfunc_round_pack32__9637__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9637__shifted;
    __Vfunc_round_pack32__9637__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9637__rounded;
    __Vfunc_round_pack32__9637__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9637__adjusted;
    __Vfunc_round_pack32__9637__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9637__biased;
    __Vfunc_round_pack32__9637__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9643__Vfuncout;
    __Vfunc_round_pack32__9643__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9643__negative;
    __Vfunc_round_pack32__9643__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9643__exponent;
    __Vfunc_round_pack32__9643__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9643__significand;
    __Vfunc_round_pack32__9643__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9643__shifted;
    __Vfunc_round_pack32__9643__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9643__rounded;
    __Vfunc_round_pack32__9643__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9643__adjusted;
    __Vfunc_round_pack32__9643__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9643__biased;
    __Vfunc_round_pack32__9643__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9649__Vfuncout;
    __Vfunc_round_pack32__9649__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9649__negative;
    __Vfunc_round_pack32__9649__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9649__exponent;
    __Vfunc_round_pack32__9649__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9649__significand;
    __Vfunc_round_pack32__9649__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9649__shifted;
    __Vfunc_round_pack32__9649__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9649__rounded;
    __Vfunc_round_pack32__9649__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9649__adjusted;
    __Vfunc_round_pack32__9649__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9649__biased;
    __Vfunc_round_pack32__9649__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9655__Vfuncout;
    __Vfunc_round_pack32__9655__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9655__negative;
    __Vfunc_round_pack32__9655__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9655__exponent;
    __Vfunc_round_pack32__9655__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9655__significand;
    __Vfunc_round_pack32__9655__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9655__shifted;
    __Vfunc_round_pack32__9655__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9655__rounded;
    __Vfunc_round_pack32__9655__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9655__adjusted;
    __Vfunc_round_pack32__9655__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9655__biased;
    __Vfunc_round_pack32__9655__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9661__Vfuncout;
    __Vfunc_round_pack32__9661__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9661__negative;
    __Vfunc_round_pack32__9661__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9661__exponent;
    __Vfunc_round_pack32__9661__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9661__significand;
    __Vfunc_round_pack32__9661__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9661__shifted;
    __Vfunc_round_pack32__9661__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9661__rounded;
    __Vfunc_round_pack32__9661__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9661__adjusted;
    __Vfunc_round_pack32__9661__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9661__biased;
    __Vfunc_round_pack32__9661__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10429__Vfuncout;
    __Vfunc_round_pack32__10429__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10429__negative;
    __Vfunc_round_pack32__10429__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10429__exponent;
    __Vfunc_round_pack32__10429__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10429__significand;
    __Vfunc_round_pack32__10429__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10429__shifted;
    __Vfunc_round_pack32__10429__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10429__rounded;
    __Vfunc_round_pack32__10429__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10429__adjusted;
    __Vfunc_round_pack32__10429__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10429__biased;
    __Vfunc_round_pack32__10429__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10441__Vfuncout;
    __Vfunc_round_pack32__10441__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10441__negative;
    __Vfunc_round_pack32__10441__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10441__exponent;
    __Vfunc_round_pack32__10441__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10441__significand;
    __Vfunc_round_pack32__10441__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10441__shifted;
    __Vfunc_round_pack32__10441__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10441__rounded;
    __Vfunc_round_pack32__10441__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10441__adjusted;
    __Vfunc_round_pack32__10441__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10441__biased;
    __Vfunc_round_pack32__10441__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10453__Vfuncout;
    __Vfunc_round_pack32__10453__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10453__negative;
    __Vfunc_round_pack32__10453__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10453__exponent;
    __Vfunc_round_pack32__10453__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10453__significand;
    __Vfunc_round_pack32__10453__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10453__shifted;
    __Vfunc_round_pack32__10453__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10453__rounded;
    __Vfunc_round_pack32__10453__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10453__adjusted;
    __Vfunc_round_pack32__10453__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10453__biased;
    __Vfunc_round_pack32__10453__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10465__Vfuncout;
    __Vfunc_round_pack32__10465__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10465__negative;
    __Vfunc_round_pack32__10465__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10465__exponent;
    __Vfunc_round_pack32__10465__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10465__significand;
    __Vfunc_round_pack32__10465__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10465__shifted;
    __Vfunc_round_pack32__10465__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10465__rounded;
    __Vfunc_round_pack32__10465__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10465__adjusted;
    __Vfunc_round_pack32__10465__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10465__biased;
    __Vfunc_round_pack32__10465__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10477__Vfuncout;
    __Vfunc_round_pack32__10477__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10477__negative;
    __Vfunc_round_pack32__10477__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10477__exponent;
    __Vfunc_round_pack32__10477__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10477__significand;
    __Vfunc_round_pack32__10477__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10477__shifted;
    __Vfunc_round_pack32__10477__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10477__rounded;
    __Vfunc_round_pack32__10477__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10477__adjusted;
    __Vfunc_round_pack32__10477__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10477__biased;
    __Vfunc_round_pack32__10477__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10489__Vfuncout;
    __Vfunc_round_pack32__10489__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10489__negative;
    __Vfunc_round_pack32__10489__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10489__exponent;
    __Vfunc_round_pack32__10489__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10489__significand;
    __Vfunc_round_pack32__10489__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10489__shifted;
    __Vfunc_round_pack32__10489__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10489__rounded;
    __Vfunc_round_pack32__10489__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10489__adjusted;
    __Vfunc_round_pack32__10489__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10489__biased;
    __Vfunc_round_pack32__10489__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10501__Vfuncout;
    __Vfunc_round_pack32__10501__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10501__negative;
    __Vfunc_round_pack32__10501__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10501__exponent;
    __Vfunc_round_pack32__10501__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10501__significand;
    __Vfunc_round_pack32__10501__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10501__shifted;
    __Vfunc_round_pack32__10501__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10501__rounded;
    __Vfunc_round_pack32__10501__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10501__adjusted;
    __Vfunc_round_pack32__10501__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10501__biased;
    __Vfunc_round_pack32__10501__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10513__Vfuncout;
    __Vfunc_round_pack32__10513__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10513__negative;
    __Vfunc_round_pack32__10513__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10513__exponent;
    __Vfunc_round_pack32__10513__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10513__significand;
    __Vfunc_round_pack32__10513__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10513__shifted;
    __Vfunc_round_pack32__10513__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10513__rounded;
    __Vfunc_round_pack32__10513__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10513__adjusted;
    __Vfunc_round_pack32__10513__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10513__biased;
    __Vfunc_round_pack32__10513__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10525__Vfuncout;
    __Vfunc_round_pack32__10525__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10525__negative;
    __Vfunc_round_pack32__10525__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10525__exponent;
    __Vfunc_round_pack32__10525__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10525__significand;
    __Vfunc_round_pack32__10525__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10525__shifted;
    __Vfunc_round_pack32__10525__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10525__rounded;
    __Vfunc_round_pack32__10525__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10525__adjusted;
    __Vfunc_round_pack32__10525__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10525__biased;
    __Vfunc_round_pack32__10525__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10537__Vfuncout;
    __Vfunc_round_pack32__10537__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10537__negative;
    __Vfunc_round_pack32__10537__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10537__exponent;
    __Vfunc_round_pack32__10537__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10537__significand;
    __Vfunc_round_pack32__10537__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10537__shifted;
    __Vfunc_round_pack32__10537__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10537__rounded;
    __Vfunc_round_pack32__10537__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10537__adjusted;
    __Vfunc_round_pack32__10537__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10537__biased;
    __Vfunc_round_pack32__10537__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10549__Vfuncout;
    __Vfunc_round_pack32__10549__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10549__negative;
    __Vfunc_round_pack32__10549__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10549__exponent;
    __Vfunc_round_pack32__10549__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10549__significand;
    __Vfunc_round_pack32__10549__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10549__shifted;
    __Vfunc_round_pack32__10549__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10549__rounded;
    __Vfunc_round_pack32__10549__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10549__adjusted;
    __Vfunc_round_pack32__10549__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10549__biased;
    __Vfunc_round_pack32__10549__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10561__Vfuncout;
    __Vfunc_round_pack32__10561__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10561__negative;
    __Vfunc_round_pack32__10561__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10561__exponent;
    __Vfunc_round_pack32__10561__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10561__significand;
    __Vfunc_round_pack32__10561__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10561__shifted;
    __Vfunc_round_pack32__10561__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10561__rounded;
    __Vfunc_round_pack32__10561__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10561__adjusted;
    __Vfunc_round_pack32__10561__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10561__biased;
    __Vfunc_round_pack32__10561__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10573__Vfuncout;
    __Vfunc_round_pack32__10573__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10573__negative;
    __Vfunc_round_pack32__10573__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10573__exponent;
    __Vfunc_round_pack32__10573__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10573__significand;
    __Vfunc_round_pack32__10573__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10573__shifted;
    __Vfunc_round_pack32__10573__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10573__rounded;
    __Vfunc_round_pack32__10573__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10573__adjusted;
    __Vfunc_round_pack32__10573__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10573__biased;
    __Vfunc_round_pack32__10573__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10585__Vfuncout;
    __Vfunc_round_pack32__10585__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10585__negative;
    __Vfunc_round_pack32__10585__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10585__exponent;
    __Vfunc_round_pack32__10585__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10585__significand;
    __Vfunc_round_pack32__10585__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10585__shifted;
    __Vfunc_round_pack32__10585__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10585__rounded;
    __Vfunc_round_pack32__10585__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10585__adjusted;
    __Vfunc_round_pack32__10585__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10585__biased;
    __Vfunc_round_pack32__10585__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10597__Vfuncout;
    __Vfunc_round_pack32__10597__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10597__negative;
    __Vfunc_round_pack32__10597__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10597__exponent;
    __Vfunc_round_pack32__10597__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10597__significand;
    __Vfunc_round_pack32__10597__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10597__shifted;
    __Vfunc_round_pack32__10597__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10597__rounded;
    __Vfunc_round_pack32__10597__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10597__adjusted;
    __Vfunc_round_pack32__10597__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10597__biased;
    __Vfunc_round_pack32__10597__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10609__Vfuncout;
    __Vfunc_round_pack32__10609__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10609__negative;
    __Vfunc_round_pack32__10609__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10609__exponent;
    __Vfunc_round_pack32__10609__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10609__significand;
    __Vfunc_round_pack32__10609__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10609__shifted;
    __Vfunc_round_pack32__10609__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10609__rounded;
    __Vfunc_round_pack32__10609__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10609__adjusted;
    __Vfunc_round_pack32__10609__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10609__biased;
    __Vfunc_round_pack32__10609__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10621__Vfuncout;
    __Vfunc_round_pack32__10621__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10621__negative;
    __Vfunc_round_pack32__10621__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10621__exponent;
    __Vfunc_round_pack32__10621__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10621__significand;
    __Vfunc_round_pack32__10621__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10621__shifted;
    __Vfunc_round_pack32__10621__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10621__rounded;
    __Vfunc_round_pack32__10621__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10621__adjusted;
    __Vfunc_round_pack32__10621__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10621__biased;
    __Vfunc_round_pack32__10621__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10633__Vfuncout;
    __Vfunc_round_pack32__10633__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10633__negative;
    __Vfunc_round_pack32__10633__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10633__exponent;
    __Vfunc_round_pack32__10633__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10633__significand;
    __Vfunc_round_pack32__10633__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10633__shifted;
    __Vfunc_round_pack32__10633__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10633__rounded;
    __Vfunc_round_pack32__10633__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10633__adjusted;
    __Vfunc_round_pack32__10633__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10633__biased;
    __Vfunc_round_pack32__10633__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10645__Vfuncout;
    __Vfunc_round_pack32__10645__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10645__negative;
    __Vfunc_round_pack32__10645__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10645__exponent;
    __Vfunc_round_pack32__10645__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10645__significand;
    __Vfunc_round_pack32__10645__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10645__shifted;
    __Vfunc_round_pack32__10645__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10645__rounded;
    __Vfunc_round_pack32__10645__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10645__adjusted;
    __Vfunc_round_pack32__10645__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10645__biased;
    __Vfunc_round_pack32__10645__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10657__Vfuncout;
    __Vfunc_round_pack32__10657__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10657__negative;
    __Vfunc_round_pack32__10657__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10657__exponent;
    __Vfunc_round_pack32__10657__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10657__significand;
    __Vfunc_round_pack32__10657__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10657__shifted;
    __Vfunc_round_pack32__10657__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10657__rounded;
    __Vfunc_round_pack32__10657__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10657__adjusted;
    __Vfunc_round_pack32__10657__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10657__biased;
    __Vfunc_round_pack32__10657__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10669__Vfuncout;
    __Vfunc_round_pack32__10669__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10669__negative;
    __Vfunc_round_pack32__10669__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10669__exponent;
    __Vfunc_round_pack32__10669__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10669__significand;
    __Vfunc_round_pack32__10669__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10669__shifted;
    __Vfunc_round_pack32__10669__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10669__rounded;
    __Vfunc_round_pack32__10669__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10669__adjusted;
    __Vfunc_round_pack32__10669__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10669__biased;
    __Vfunc_round_pack32__10669__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10681__Vfuncout;
    __Vfunc_round_pack32__10681__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10681__negative;
    __Vfunc_round_pack32__10681__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10681__exponent;
    __Vfunc_round_pack32__10681__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10681__significand;
    __Vfunc_round_pack32__10681__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10681__shifted;
    __Vfunc_round_pack32__10681__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10681__rounded;
    __Vfunc_round_pack32__10681__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10681__adjusted;
    __Vfunc_round_pack32__10681__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10681__biased;
    __Vfunc_round_pack32__10681__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10693__Vfuncout;
    __Vfunc_round_pack32__10693__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10693__negative;
    __Vfunc_round_pack32__10693__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10693__exponent;
    __Vfunc_round_pack32__10693__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10693__significand;
    __Vfunc_round_pack32__10693__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10693__shifted;
    __Vfunc_round_pack32__10693__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10693__rounded;
    __Vfunc_round_pack32__10693__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10693__adjusted;
    __Vfunc_round_pack32__10693__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10693__biased;
    __Vfunc_round_pack32__10693__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10705__Vfuncout;
    __Vfunc_round_pack32__10705__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10705__negative;
    __Vfunc_round_pack32__10705__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10705__exponent;
    __Vfunc_round_pack32__10705__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10705__significand;
    __Vfunc_round_pack32__10705__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10705__shifted;
    __Vfunc_round_pack32__10705__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10705__rounded;
    __Vfunc_round_pack32__10705__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10705__adjusted;
    __Vfunc_round_pack32__10705__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10705__biased;
    __Vfunc_round_pack32__10705__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10717__Vfuncout;
    __Vfunc_round_pack32__10717__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10717__negative;
    __Vfunc_round_pack32__10717__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10717__exponent;
    __Vfunc_round_pack32__10717__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10717__significand;
    __Vfunc_round_pack32__10717__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10717__shifted;
    __Vfunc_round_pack32__10717__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10717__rounded;
    __Vfunc_round_pack32__10717__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10717__adjusted;
    __Vfunc_round_pack32__10717__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10717__biased;
    __Vfunc_round_pack32__10717__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10729__Vfuncout;
    __Vfunc_round_pack32__10729__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10729__negative;
    __Vfunc_round_pack32__10729__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10729__exponent;
    __Vfunc_round_pack32__10729__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10729__significand;
    __Vfunc_round_pack32__10729__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10729__shifted;
    __Vfunc_round_pack32__10729__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10729__rounded;
    __Vfunc_round_pack32__10729__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10729__adjusted;
    __Vfunc_round_pack32__10729__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10729__biased;
    __Vfunc_round_pack32__10729__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10741__Vfuncout;
    __Vfunc_round_pack32__10741__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10741__negative;
    __Vfunc_round_pack32__10741__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10741__exponent;
    __Vfunc_round_pack32__10741__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10741__significand;
    __Vfunc_round_pack32__10741__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10741__shifted;
    __Vfunc_round_pack32__10741__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10741__rounded;
    __Vfunc_round_pack32__10741__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10741__adjusted;
    __Vfunc_round_pack32__10741__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10741__biased;
    __Vfunc_round_pack32__10741__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10753__Vfuncout;
    __Vfunc_round_pack32__10753__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10753__negative;
    __Vfunc_round_pack32__10753__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10753__exponent;
    __Vfunc_round_pack32__10753__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10753__significand;
    __Vfunc_round_pack32__10753__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10753__shifted;
    __Vfunc_round_pack32__10753__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10753__rounded;
    __Vfunc_round_pack32__10753__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10753__adjusted;
    __Vfunc_round_pack32__10753__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10753__biased;
    __Vfunc_round_pack32__10753__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10765__Vfuncout;
    __Vfunc_round_pack32__10765__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10765__negative;
    __Vfunc_round_pack32__10765__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10765__exponent;
    __Vfunc_round_pack32__10765__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10765__significand;
    __Vfunc_round_pack32__10765__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10765__shifted;
    __Vfunc_round_pack32__10765__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10765__rounded;
    __Vfunc_round_pack32__10765__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10765__adjusted;
    __Vfunc_round_pack32__10765__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10765__biased;
    __Vfunc_round_pack32__10765__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10777__Vfuncout;
    __Vfunc_round_pack32__10777__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10777__negative;
    __Vfunc_round_pack32__10777__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10777__exponent;
    __Vfunc_round_pack32__10777__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10777__significand;
    __Vfunc_round_pack32__10777__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10777__shifted;
    __Vfunc_round_pack32__10777__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10777__rounded;
    __Vfunc_round_pack32__10777__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10777__adjusted;
    __Vfunc_round_pack32__10777__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10777__biased;
    __Vfunc_round_pack32__10777__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10789__Vfuncout;
    __Vfunc_round_pack32__10789__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10789__negative;
    __Vfunc_round_pack32__10789__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10789__exponent;
    __Vfunc_round_pack32__10789__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10789__significand;
    __Vfunc_round_pack32__10789__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10789__shifted;
    __Vfunc_round_pack32__10789__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10789__rounded;
    __Vfunc_round_pack32__10789__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10789__adjusted;
    __Vfunc_round_pack32__10789__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10789__biased;
    __Vfunc_round_pack32__10789__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10801__Vfuncout;
    __Vfunc_round_pack32__10801__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10801__negative;
    __Vfunc_round_pack32__10801__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10801__exponent;
    __Vfunc_round_pack32__10801__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10801__significand;
    __Vfunc_round_pack32__10801__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10801__shifted;
    __Vfunc_round_pack32__10801__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10801__rounded;
    __Vfunc_round_pack32__10801__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10801__adjusted;
    __Vfunc_round_pack32__10801__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10801__biased;
    __Vfunc_round_pack32__10801__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10813__Vfuncout;
    __Vfunc_round_pack32__10813__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10813__negative;
    __Vfunc_round_pack32__10813__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10813__exponent;
    __Vfunc_round_pack32__10813__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10813__significand;
    __Vfunc_round_pack32__10813__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10813__shifted;
    __Vfunc_round_pack32__10813__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10813__rounded;
    __Vfunc_round_pack32__10813__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10813__adjusted;
    __Vfunc_round_pack32__10813__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10813__biased;
    __Vfunc_round_pack32__10813__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10825__Vfuncout;
    __Vfunc_round_pack32__10825__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10825__negative;
    __Vfunc_round_pack32__10825__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10825__exponent;
    __Vfunc_round_pack32__10825__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10825__significand;
    __Vfunc_round_pack32__10825__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10825__shifted;
    __Vfunc_round_pack32__10825__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10825__rounded;
    __Vfunc_round_pack32__10825__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10825__adjusted;
    __Vfunc_round_pack32__10825__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10825__biased;
    __Vfunc_round_pack32__10825__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10837__Vfuncout;
    __Vfunc_round_pack32__10837__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10837__negative;
    __Vfunc_round_pack32__10837__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10837__exponent;
    __Vfunc_round_pack32__10837__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10837__significand;
    __Vfunc_round_pack32__10837__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10837__shifted;
    __Vfunc_round_pack32__10837__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10837__rounded;
    __Vfunc_round_pack32__10837__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10837__adjusted;
    __Vfunc_round_pack32__10837__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10837__biased;
    __Vfunc_round_pack32__10837__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10849__Vfuncout;
    __Vfunc_round_pack32__10849__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10849__negative;
    __Vfunc_round_pack32__10849__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10849__exponent;
    __Vfunc_round_pack32__10849__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10849__significand;
    __Vfunc_round_pack32__10849__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10849__shifted;
    __Vfunc_round_pack32__10849__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10849__rounded;
    __Vfunc_round_pack32__10849__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10849__adjusted;
    __Vfunc_round_pack32__10849__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10849__biased;
    __Vfunc_round_pack32__10849__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10861__Vfuncout;
    __Vfunc_round_pack32__10861__Vfuncout = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10861__rounded;
    __Vfunc_round_pack32__10861__rounded = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10861__biased;
    __Vfunc_round_pack32__10861__biased = 0;
    // Body
    __Vfunc_round_pack32__10861__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (vlSelf->__Vfunc_round_pack32__10861__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((vlSelf->__Vfunc_round_pack32__10861__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & vlSelf->__Vfunc_round_pack32__10861__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10861__rounded)) {
        __Vfunc_round_pack32__10861__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10861__rounded, 1U));
        vlSelf->__Vfunc_round_pack32__10861__adjusted 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__10861__adjusted)));
    }
    __Vfunc_round_pack32__10861__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10861__rounded)) {
        __Vfunc_round_pack32__10861__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(vlSelf->__Vfunc_round_pack32__10861__adjusted)));
    }
    __Vfunc_round_pack32__10861__Vfuncout = (((0U == vlSelf->__Vfunc_round_pack32__10861__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10861__rounded))
                                              ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__10861__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__10861__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(vlSelf->__Vfunc_round_pack32__10861__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10861__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10861__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10861__Vfuncout;
    __Vfunc_round_pack32__10849__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10849__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10849__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10849__adjusted = __Vfunc_round_pack32__10849__exponent;
    __Vfunc_round_pack32__10849__shifted = __Vfunc_round_pack32__10849__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10849__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10850__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10849__exponent)));
        vlSelf->__Vfunc_shift_jam27__10850__value = __Vfunc_round_pack32__10849__significand;
        __Vfunc_round_pack32__10849__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10850__distance))) {
            vlSelf->__Vfunc_shift_jam27__10850__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10850__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10850__distance))) {
            vlSelf->__Vfunc_shift_jam27__10850__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10850__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10850__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10850__value, (IData)(vlSelf->__Vfunc_shift_jam27__10850__distance)));
            vlSelf->__Vfunc_shift_jam27__10850__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10850__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10850__distance)))));
            vlSelf->__Vfunc_shift_jam27__10850__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10850__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10850__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10850__discarded))));
        }
        __Vfunc_round_pack32__10849__shifted = vlSelf->__Vfunc_shift_jam27__10850__Vfuncout;
    }
    __Vfunc_round_pack32__10849__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10849__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10849__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10849__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10849__rounded)) {
        __Vfunc_round_pack32__10849__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10849__rounded, 1U));
        __Vfunc_round_pack32__10849__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10849__adjusted)));
    }
    __Vfunc_round_pack32__10849__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10849__rounded)) {
        __Vfunc_round_pack32__10849__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10849__adjusted)));
    }
    __Vfunc_round_pack32__10849__Vfuncout = (((0U == __Vfunc_round_pack32__10849__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10849__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10849__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10849__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10849__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10849__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10849__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10849__Vfuncout;
    __Vfunc_round_pack32__10837__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10837__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10837__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10837__adjusted = __Vfunc_round_pack32__10837__exponent;
    __Vfunc_round_pack32__10837__shifted = __Vfunc_round_pack32__10837__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10837__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10838__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10837__exponent)));
        vlSelf->__Vfunc_shift_jam27__10838__value = __Vfunc_round_pack32__10837__significand;
        __Vfunc_round_pack32__10837__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10838__distance))) {
            vlSelf->__Vfunc_shift_jam27__10838__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10838__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10838__distance))) {
            vlSelf->__Vfunc_shift_jam27__10838__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10838__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10838__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10838__value, (IData)(vlSelf->__Vfunc_shift_jam27__10838__distance)));
            vlSelf->__Vfunc_shift_jam27__10838__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10838__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10838__distance)))));
            vlSelf->__Vfunc_shift_jam27__10838__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10838__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10838__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10838__discarded))));
        }
        __Vfunc_round_pack32__10837__shifted = vlSelf->__Vfunc_shift_jam27__10838__Vfuncout;
    }
    __Vfunc_round_pack32__10837__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10837__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10837__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10837__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10837__rounded)) {
        __Vfunc_round_pack32__10837__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10837__rounded, 1U));
        __Vfunc_round_pack32__10837__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10837__adjusted)));
    }
    __Vfunc_round_pack32__10837__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10837__rounded)) {
        __Vfunc_round_pack32__10837__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10837__adjusted)));
    }
    __Vfunc_round_pack32__10837__Vfuncout = (((0U == __Vfunc_round_pack32__10837__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10837__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10837__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10837__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10837__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10837__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10837__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10837__Vfuncout;
    __Vfunc_round_pack32__10825__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10825__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10825__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10825__adjusted = __Vfunc_round_pack32__10825__exponent;
    __Vfunc_round_pack32__10825__shifted = __Vfunc_round_pack32__10825__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10825__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10826__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10825__exponent)));
        vlSelf->__Vfunc_shift_jam27__10826__value = __Vfunc_round_pack32__10825__significand;
        __Vfunc_round_pack32__10825__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10826__distance))) {
            vlSelf->__Vfunc_shift_jam27__10826__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10826__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10826__distance))) {
            vlSelf->__Vfunc_shift_jam27__10826__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10826__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10826__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10826__value, (IData)(vlSelf->__Vfunc_shift_jam27__10826__distance)));
            vlSelf->__Vfunc_shift_jam27__10826__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10826__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10826__distance)))));
            vlSelf->__Vfunc_shift_jam27__10826__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10826__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10826__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10826__discarded))));
        }
        __Vfunc_round_pack32__10825__shifted = vlSelf->__Vfunc_shift_jam27__10826__Vfuncout;
    }
    __Vfunc_round_pack32__10825__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10825__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10825__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10825__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10825__rounded)) {
        __Vfunc_round_pack32__10825__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10825__rounded, 1U));
        __Vfunc_round_pack32__10825__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10825__adjusted)));
    }
    __Vfunc_round_pack32__10825__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10825__rounded)) {
        __Vfunc_round_pack32__10825__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10825__adjusted)));
    }
    __Vfunc_round_pack32__10825__Vfuncout = (((0U == __Vfunc_round_pack32__10825__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10825__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10825__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10825__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10825__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10825__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10825__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10825__Vfuncout;
    __Vfunc_round_pack32__10813__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10813__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10813__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10813__adjusted = __Vfunc_round_pack32__10813__exponent;
    __Vfunc_round_pack32__10813__shifted = __Vfunc_round_pack32__10813__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10813__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10814__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10813__exponent)));
        vlSelf->__Vfunc_shift_jam27__10814__value = __Vfunc_round_pack32__10813__significand;
        __Vfunc_round_pack32__10813__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10814__distance))) {
            vlSelf->__Vfunc_shift_jam27__10814__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10814__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10814__distance))) {
            vlSelf->__Vfunc_shift_jam27__10814__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10814__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10814__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10814__value, (IData)(vlSelf->__Vfunc_shift_jam27__10814__distance)));
            vlSelf->__Vfunc_shift_jam27__10814__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10814__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10814__distance)))));
            vlSelf->__Vfunc_shift_jam27__10814__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10814__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10814__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10814__discarded))));
        }
        __Vfunc_round_pack32__10813__shifted = vlSelf->__Vfunc_shift_jam27__10814__Vfuncout;
    }
    __Vfunc_round_pack32__10813__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10813__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10813__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10813__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10813__rounded)) {
        __Vfunc_round_pack32__10813__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10813__rounded, 1U));
        __Vfunc_round_pack32__10813__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10813__adjusted)));
    }
    __Vfunc_round_pack32__10813__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10813__rounded)) {
        __Vfunc_round_pack32__10813__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10813__adjusted)));
    }
    __Vfunc_round_pack32__10813__Vfuncout = (((0U == __Vfunc_round_pack32__10813__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10813__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10813__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10813__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10813__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10813__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10813__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10813__Vfuncout;
    __Vfunc_round_pack32__10801__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10801__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10801__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10801__adjusted = __Vfunc_round_pack32__10801__exponent;
    __Vfunc_round_pack32__10801__shifted = __Vfunc_round_pack32__10801__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10801__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10802__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10801__exponent)));
        vlSelf->__Vfunc_shift_jam27__10802__value = __Vfunc_round_pack32__10801__significand;
        __Vfunc_round_pack32__10801__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10802__distance))) {
            vlSelf->__Vfunc_shift_jam27__10802__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10802__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10802__distance))) {
            vlSelf->__Vfunc_shift_jam27__10802__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10802__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10802__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10802__value, (IData)(vlSelf->__Vfunc_shift_jam27__10802__distance)));
            vlSelf->__Vfunc_shift_jam27__10802__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10802__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10802__distance)))));
            vlSelf->__Vfunc_shift_jam27__10802__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10802__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10802__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10802__discarded))));
        }
        __Vfunc_round_pack32__10801__shifted = vlSelf->__Vfunc_shift_jam27__10802__Vfuncout;
    }
    __Vfunc_round_pack32__10801__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10801__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10801__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10801__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10801__rounded)) {
        __Vfunc_round_pack32__10801__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10801__rounded, 1U));
        __Vfunc_round_pack32__10801__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10801__adjusted)));
    }
    __Vfunc_round_pack32__10801__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10801__rounded)) {
        __Vfunc_round_pack32__10801__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10801__adjusted)));
    }
    __Vfunc_round_pack32__10801__Vfuncout = (((0U == __Vfunc_round_pack32__10801__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10801__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10801__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10801__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10801__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10801__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10801__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10801__Vfuncout;
    __Vfunc_round_pack32__10789__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10789__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10789__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10789__adjusted = __Vfunc_round_pack32__10789__exponent;
    __Vfunc_round_pack32__10789__shifted = __Vfunc_round_pack32__10789__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10789__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10790__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10789__exponent)));
        vlSelf->__Vfunc_shift_jam27__10790__value = __Vfunc_round_pack32__10789__significand;
        __Vfunc_round_pack32__10789__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10790__distance))) {
            vlSelf->__Vfunc_shift_jam27__10790__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10790__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10790__distance))) {
            vlSelf->__Vfunc_shift_jam27__10790__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10790__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10790__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10790__value, (IData)(vlSelf->__Vfunc_shift_jam27__10790__distance)));
            vlSelf->__Vfunc_shift_jam27__10790__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10790__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10790__distance)))));
            vlSelf->__Vfunc_shift_jam27__10790__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10790__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10790__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10790__discarded))));
        }
        __Vfunc_round_pack32__10789__shifted = vlSelf->__Vfunc_shift_jam27__10790__Vfuncout;
    }
    __Vfunc_round_pack32__10789__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10789__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10789__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10789__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10789__rounded)) {
        __Vfunc_round_pack32__10789__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10789__rounded, 1U));
        __Vfunc_round_pack32__10789__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10789__adjusted)));
    }
    __Vfunc_round_pack32__10789__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10789__rounded)) {
        __Vfunc_round_pack32__10789__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10789__adjusted)));
    }
    __Vfunc_round_pack32__10789__Vfuncout = (((0U == __Vfunc_round_pack32__10789__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10789__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10789__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10789__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10789__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10789__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10789__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10789__Vfuncout;
    __Vfunc_round_pack32__10777__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10777__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10777__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10777__adjusted = __Vfunc_round_pack32__10777__exponent;
    __Vfunc_round_pack32__10777__shifted = __Vfunc_round_pack32__10777__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10777__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10778__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10777__exponent)));
        vlSelf->__Vfunc_shift_jam27__10778__value = __Vfunc_round_pack32__10777__significand;
        __Vfunc_round_pack32__10777__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10778__distance))) {
            vlSelf->__Vfunc_shift_jam27__10778__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10778__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10778__distance))) {
            vlSelf->__Vfunc_shift_jam27__10778__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10778__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10778__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10778__value, (IData)(vlSelf->__Vfunc_shift_jam27__10778__distance)));
            vlSelf->__Vfunc_shift_jam27__10778__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10778__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10778__distance)))));
            vlSelf->__Vfunc_shift_jam27__10778__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10778__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10778__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10778__discarded))));
        }
        __Vfunc_round_pack32__10777__shifted = vlSelf->__Vfunc_shift_jam27__10778__Vfuncout;
    }
    __Vfunc_round_pack32__10777__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10777__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10777__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10777__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10777__rounded)) {
        __Vfunc_round_pack32__10777__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10777__rounded, 1U));
        __Vfunc_round_pack32__10777__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10777__adjusted)));
    }
    __Vfunc_round_pack32__10777__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10777__rounded)) {
        __Vfunc_round_pack32__10777__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10777__adjusted)));
    }
    __Vfunc_round_pack32__10777__Vfuncout = (((0U == __Vfunc_round_pack32__10777__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10777__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10777__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10777__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10777__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10777__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10777__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10777__Vfuncout;
    __Vfunc_round_pack32__10765__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10765__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10765__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10765__adjusted = __Vfunc_round_pack32__10765__exponent;
    __Vfunc_round_pack32__10765__shifted = __Vfunc_round_pack32__10765__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10765__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10766__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10765__exponent)));
        vlSelf->__Vfunc_shift_jam27__10766__value = __Vfunc_round_pack32__10765__significand;
        __Vfunc_round_pack32__10765__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10766__distance))) {
            vlSelf->__Vfunc_shift_jam27__10766__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10766__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10766__distance))) {
            vlSelf->__Vfunc_shift_jam27__10766__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10766__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10766__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10766__value, (IData)(vlSelf->__Vfunc_shift_jam27__10766__distance)));
            vlSelf->__Vfunc_shift_jam27__10766__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10766__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10766__distance)))));
            vlSelf->__Vfunc_shift_jam27__10766__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10766__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10766__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10766__discarded))));
        }
        __Vfunc_round_pack32__10765__shifted = vlSelf->__Vfunc_shift_jam27__10766__Vfuncout;
    }
    __Vfunc_round_pack32__10765__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10765__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10765__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10765__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10765__rounded)) {
        __Vfunc_round_pack32__10765__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10765__rounded, 1U));
        __Vfunc_round_pack32__10765__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10765__adjusted)));
    }
    __Vfunc_round_pack32__10765__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10765__rounded)) {
        __Vfunc_round_pack32__10765__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10765__adjusted)));
    }
    __Vfunc_round_pack32__10765__Vfuncout = (((0U == __Vfunc_round_pack32__10765__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10765__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10765__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10765__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10765__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10765__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10765__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10765__Vfuncout;
    __Vfunc_round_pack32__10753__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10753__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10753__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10753__adjusted = __Vfunc_round_pack32__10753__exponent;
    __Vfunc_round_pack32__10753__shifted = __Vfunc_round_pack32__10753__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10753__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10754__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10753__exponent)));
        vlSelf->__Vfunc_shift_jam27__10754__value = __Vfunc_round_pack32__10753__significand;
        __Vfunc_round_pack32__10753__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10754__distance))) {
            vlSelf->__Vfunc_shift_jam27__10754__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10754__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10754__distance))) {
            vlSelf->__Vfunc_shift_jam27__10754__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10754__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10754__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10754__value, (IData)(vlSelf->__Vfunc_shift_jam27__10754__distance)));
            vlSelf->__Vfunc_shift_jam27__10754__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10754__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10754__distance)))));
            vlSelf->__Vfunc_shift_jam27__10754__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10754__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10754__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10754__discarded))));
        }
        __Vfunc_round_pack32__10753__shifted = vlSelf->__Vfunc_shift_jam27__10754__Vfuncout;
    }
    __Vfunc_round_pack32__10753__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10753__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10753__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10753__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10753__rounded)) {
        __Vfunc_round_pack32__10753__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10753__rounded, 1U));
        __Vfunc_round_pack32__10753__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10753__adjusted)));
    }
    __Vfunc_round_pack32__10753__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10753__rounded)) {
        __Vfunc_round_pack32__10753__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10753__adjusted)));
    }
    __Vfunc_round_pack32__10753__Vfuncout = (((0U == __Vfunc_round_pack32__10753__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10753__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10753__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10753__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10753__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10753__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10753__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10753__Vfuncout;
    __Vfunc_round_pack32__10741__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10741__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10741__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10741__adjusted = __Vfunc_round_pack32__10741__exponent;
    __Vfunc_round_pack32__10741__shifted = __Vfunc_round_pack32__10741__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10741__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10742__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10741__exponent)));
        vlSelf->__Vfunc_shift_jam27__10742__value = __Vfunc_round_pack32__10741__significand;
        __Vfunc_round_pack32__10741__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10742__distance))) {
            vlSelf->__Vfunc_shift_jam27__10742__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10742__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10742__distance))) {
            vlSelf->__Vfunc_shift_jam27__10742__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10742__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10742__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10742__value, (IData)(vlSelf->__Vfunc_shift_jam27__10742__distance)));
            vlSelf->__Vfunc_shift_jam27__10742__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10742__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10742__distance)))));
            vlSelf->__Vfunc_shift_jam27__10742__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10742__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10742__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10742__discarded))));
        }
        __Vfunc_round_pack32__10741__shifted = vlSelf->__Vfunc_shift_jam27__10742__Vfuncout;
    }
    __Vfunc_round_pack32__10741__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10741__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10741__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10741__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10741__rounded)) {
        __Vfunc_round_pack32__10741__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10741__rounded, 1U));
        __Vfunc_round_pack32__10741__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10741__adjusted)));
    }
    __Vfunc_round_pack32__10741__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10741__rounded)) {
        __Vfunc_round_pack32__10741__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10741__adjusted)));
    }
    __Vfunc_round_pack32__10741__Vfuncout = (((0U == __Vfunc_round_pack32__10741__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10741__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10741__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10741__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10741__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10741__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10741__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10741__Vfuncout;
    __Vfunc_round_pack32__10729__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10729__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10729__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10729__adjusted = __Vfunc_round_pack32__10729__exponent;
    __Vfunc_round_pack32__10729__shifted = __Vfunc_round_pack32__10729__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10729__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10730__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10729__exponent)));
        vlSelf->__Vfunc_shift_jam27__10730__value = __Vfunc_round_pack32__10729__significand;
        __Vfunc_round_pack32__10729__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10730__distance))) {
            vlSelf->__Vfunc_shift_jam27__10730__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10730__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10730__distance))) {
            vlSelf->__Vfunc_shift_jam27__10730__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10730__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10730__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10730__value, (IData)(vlSelf->__Vfunc_shift_jam27__10730__distance)));
            vlSelf->__Vfunc_shift_jam27__10730__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10730__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10730__distance)))));
            vlSelf->__Vfunc_shift_jam27__10730__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10730__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10730__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10730__discarded))));
        }
        __Vfunc_round_pack32__10729__shifted = vlSelf->__Vfunc_shift_jam27__10730__Vfuncout;
    }
    __Vfunc_round_pack32__10729__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10729__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10729__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10729__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10729__rounded)) {
        __Vfunc_round_pack32__10729__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10729__rounded, 1U));
        __Vfunc_round_pack32__10729__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10729__adjusted)));
    }
    __Vfunc_round_pack32__10729__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10729__rounded)) {
        __Vfunc_round_pack32__10729__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10729__adjusted)));
    }
    __Vfunc_round_pack32__10729__Vfuncout = (((0U == __Vfunc_round_pack32__10729__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10729__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10729__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10729__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10729__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10729__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10729__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10729__Vfuncout;
    __Vfunc_round_pack32__10717__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10717__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10717__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10717__adjusted = __Vfunc_round_pack32__10717__exponent;
    __Vfunc_round_pack32__10717__shifted = __Vfunc_round_pack32__10717__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10717__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10718__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10717__exponent)));
        vlSelf->__Vfunc_shift_jam27__10718__value = __Vfunc_round_pack32__10717__significand;
        __Vfunc_round_pack32__10717__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10718__distance))) {
            vlSelf->__Vfunc_shift_jam27__10718__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10718__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10718__distance))) {
            vlSelf->__Vfunc_shift_jam27__10718__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10718__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10718__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10718__value, (IData)(vlSelf->__Vfunc_shift_jam27__10718__distance)));
            vlSelf->__Vfunc_shift_jam27__10718__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10718__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10718__distance)))));
            vlSelf->__Vfunc_shift_jam27__10718__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10718__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10718__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10718__discarded))));
        }
        __Vfunc_round_pack32__10717__shifted = vlSelf->__Vfunc_shift_jam27__10718__Vfuncout;
    }
    __Vfunc_round_pack32__10717__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10717__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10717__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10717__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10717__rounded)) {
        __Vfunc_round_pack32__10717__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10717__rounded, 1U));
        __Vfunc_round_pack32__10717__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10717__adjusted)));
    }
    __Vfunc_round_pack32__10717__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10717__rounded)) {
        __Vfunc_round_pack32__10717__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10717__adjusted)));
    }
    __Vfunc_round_pack32__10717__Vfuncout = (((0U == __Vfunc_round_pack32__10717__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10717__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10717__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10717__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10717__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10717__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10717__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10717__Vfuncout;
    __Vfunc_round_pack32__10705__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10705__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10705__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10705__adjusted = __Vfunc_round_pack32__10705__exponent;
    __Vfunc_round_pack32__10705__shifted = __Vfunc_round_pack32__10705__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10705__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10706__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10705__exponent)));
        vlSelf->__Vfunc_shift_jam27__10706__value = __Vfunc_round_pack32__10705__significand;
        __Vfunc_round_pack32__10705__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10706__distance))) {
            vlSelf->__Vfunc_shift_jam27__10706__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10706__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10706__distance))) {
            vlSelf->__Vfunc_shift_jam27__10706__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10706__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10706__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10706__value, (IData)(vlSelf->__Vfunc_shift_jam27__10706__distance)));
            vlSelf->__Vfunc_shift_jam27__10706__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10706__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10706__distance)))));
            vlSelf->__Vfunc_shift_jam27__10706__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10706__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10706__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10706__discarded))));
        }
        __Vfunc_round_pack32__10705__shifted = vlSelf->__Vfunc_shift_jam27__10706__Vfuncout;
    }
    __Vfunc_round_pack32__10705__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10705__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10705__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10705__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10705__rounded)) {
        __Vfunc_round_pack32__10705__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10705__rounded, 1U));
        __Vfunc_round_pack32__10705__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10705__adjusted)));
    }
    __Vfunc_round_pack32__10705__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10705__rounded)) {
        __Vfunc_round_pack32__10705__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10705__adjusted)));
    }
    __Vfunc_round_pack32__10705__Vfuncout = (((0U == __Vfunc_round_pack32__10705__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10705__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10705__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10705__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10705__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10705__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10705__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10705__Vfuncout;
    __Vfunc_round_pack32__10693__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10693__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10693__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10693__adjusted = __Vfunc_round_pack32__10693__exponent;
    __Vfunc_round_pack32__10693__shifted = __Vfunc_round_pack32__10693__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10693__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10694__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10693__exponent)));
        vlSelf->__Vfunc_shift_jam27__10694__value = __Vfunc_round_pack32__10693__significand;
        __Vfunc_round_pack32__10693__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10694__distance))) {
            vlSelf->__Vfunc_shift_jam27__10694__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10694__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10694__distance))) {
            vlSelf->__Vfunc_shift_jam27__10694__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10694__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10694__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10694__value, (IData)(vlSelf->__Vfunc_shift_jam27__10694__distance)));
            vlSelf->__Vfunc_shift_jam27__10694__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10694__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10694__distance)))));
            vlSelf->__Vfunc_shift_jam27__10694__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10694__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10694__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10694__discarded))));
        }
        __Vfunc_round_pack32__10693__shifted = vlSelf->__Vfunc_shift_jam27__10694__Vfuncout;
    }
    __Vfunc_round_pack32__10693__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10693__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10693__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10693__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10693__rounded)) {
        __Vfunc_round_pack32__10693__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10693__rounded, 1U));
        __Vfunc_round_pack32__10693__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10693__adjusted)));
    }
    __Vfunc_round_pack32__10693__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10693__rounded)) {
        __Vfunc_round_pack32__10693__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10693__adjusted)));
    }
    __Vfunc_round_pack32__10693__Vfuncout = (((0U == __Vfunc_round_pack32__10693__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10693__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10693__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10693__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10693__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10693__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10693__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10693__Vfuncout;
    __Vfunc_round_pack32__10681__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10681__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10681__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10681__adjusted = __Vfunc_round_pack32__10681__exponent;
    __Vfunc_round_pack32__10681__shifted = __Vfunc_round_pack32__10681__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10681__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10682__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10681__exponent)));
        vlSelf->__Vfunc_shift_jam27__10682__value = __Vfunc_round_pack32__10681__significand;
        __Vfunc_round_pack32__10681__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10682__distance))) {
            vlSelf->__Vfunc_shift_jam27__10682__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10682__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10682__distance))) {
            vlSelf->__Vfunc_shift_jam27__10682__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10682__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10682__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10682__value, (IData)(vlSelf->__Vfunc_shift_jam27__10682__distance)));
            vlSelf->__Vfunc_shift_jam27__10682__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10682__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10682__distance)))));
            vlSelf->__Vfunc_shift_jam27__10682__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10682__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10682__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10682__discarded))));
        }
        __Vfunc_round_pack32__10681__shifted = vlSelf->__Vfunc_shift_jam27__10682__Vfuncout;
    }
    __Vfunc_round_pack32__10681__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10681__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10681__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10681__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10681__rounded)) {
        __Vfunc_round_pack32__10681__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10681__rounded, 1U));
        __Vfunc_round_pack32__10681__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10681__adjusted)));
    }
    __Vfunc_round_pack32__10681__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10681__rounded)) {
        __Vfunc_round_pack32__10681__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10681__adjusted)));
    }
    __Vfunc_round_pack32__10681__Vfuncout = (((0U == __Vfunc_round_pack32__10681__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10681__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10681__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10681__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10681__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10681__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10681__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10681__Vfuncout;
    __Vfunc_round_pack32__10669__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10669__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10669__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10669__adjusted = __Vfunc_round_pack32__10669__exponent;
    __Vfunc_round_pack32__10669__shifted = __Vfunc_round_pack32__10669__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10669__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10670__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10669__exponent)));
        vlSelf->__Vfunc_shift_jam27__10670__value = __Vfunc_round_pack32__10669__significand;
        __Vfunc_round_pack32__10669__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10670__distance))) {
            vlSelf->__Vfunc_shift_jam27__10670__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10670__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10670__distance))) {
            vlSelf->__Vfunc_shift_jam27__10670__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10670__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10670__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10670__value, (IData)(vlSelf->__Vfunc_shift_jam27__10670__distance)));
            vlSelf->__Vfunc_shift_jam27__10670__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10670__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10670__distance)))));
            vlSelf->__Vfunc_shift_jam27__10670__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10670__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10670__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10670__discarded))));
        }
        __Vfunc_round_pack32__10669__shifted = vlSelf->__Vfunc_shift_jam27__10670__Vfuncout;
    }
    __Vfunc_round_pack32__10669__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10669__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10669__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10669__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10669__rounded)) {
        __Vfunc_round_pack32__10669__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10669__rounded, 1U));
        __Vfunc_round_pack32__10669__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10669__adjusted)));
    }
    __Vfunc_round_pack32__10669__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10669__rounded)) {
        __Vfunc_round_pack32__10669__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10669__adjusted)));
    }
    __Vfunc_round_pack32__10669__Vfuncout = (((0U == __Vfunc_round_pack32__10669__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10669__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10669__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10669__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10669__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10669__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10669__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10669__Vfuncout;
    __Vfunc_round_pack32__10657__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10657__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10657__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10657__adjusted = __Vfunc_round_pack32__10657__exponent;
    __Vfunc_round_pack32__10657__shifted = __Vfunc_round_pack32__10657__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10657__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10658__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10657__exponent)));
        vlSelf->__Vfunc_shift_jam27__10658__value = __Vfunc_round_pack32__10657__significand;
        __Vfunc_round_pack32__10657__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10658__distance))) {
            vlSelf->__Vfunc_shift_jam27__10658__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10658__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10658__distance))) {
            vlSelf->__Vfunc_shift_jam27__10658__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10658__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10658__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10658__value, (IData)(vlSelf->__Vfunc_shift_jam27__10658__distance)));
            vlSelf->__Vfunc_shift_jam27__10658__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10658__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10658__distance)))));
            vlSelf->__Vfunc_shift_jam27__10658__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10658__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10658__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10658__discarded))));
        }
        __Vfunc_round_pack32__10657__shifted = vlSelf->__Vfunc_shift_jam27__10658__Vfuncout;
    }
    __Vfunc_round_pack32__10657__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10657__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10657__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10657__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10657__rounded)) {
        __Vfunc_round_pack32__10657__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10657__rounded, 1U));
        __Vfunc_round_pack32__10657__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10657__adjusted)));
    }
    __Vfunc_round_pack32__10657__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10657__rounded)) {
        __Vfunc_round_pack32__10657__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10657__adjusted)));
    }
    __Vfunc_round_pack32__10657__Vfuncout = (((0U == __Vfunc_round_pack32__10657__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10657__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10657__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10657__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10657__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10657__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10657__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10657__Vfuncout;
    __Vfunc_round_pack32__10645__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10645__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10645__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10645__adjusted = __Vfunc_round_pack32__10645__exponent;
    __Vfunc_round_pack32__10645__shifted = __Vfunc_round_pack32__10645__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10645__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10646__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10645__exponent)));
        vlSelf->__Vfunc_shift_jam27__10646__value = __Vfunc_round_pack32__10645__significand;
        __Vfunc_round_pack32__10645__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10646__distance))) {
            vlSelf->__Vfunc_shift_jam27__10646__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10646__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10646__distance))) {
            vlSelf->__Vfunc_shift_jam27__10646__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10646__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10646__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10646__value, (IData)(vlSelf->__Vfunc_shift_jam27__10646__distance)));
            vlSelf->__Vfunc_shift_jam27__10646__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10646__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10646__distance)))));
            vlSelf->__Vfunc_shift_jam27__10646__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10646__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10646__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10646__discarded))));
        }
        __Vfunc_round_pack32__10645__shifted = vlSelf->__Vfunc_shift_jam27__10646__Vfuncout;
    }
    __Vfunc_round_pack32__10645__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10645__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10645__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10645__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10645__rounded)) {
        __Vfunc_round_pack32__10645__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10645__rounded, 1U));
        __Vfunc_round_pack32__10645__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10645__adjusted)));
    }
    __Vfunc_round_pack32__10645__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10645__rounded)) {
        __Vfunc_round_pack32__10645__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10645__adjusted)));
    }
    __Vfunc_round_pack32__10645__Vfuncout = (((0U == __Vfunc_round_pack32__10645__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10645__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10645__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10645__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10645__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10645__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10645__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10645__Vfuncout;
    __Vfunc_round_pack32__10633__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10633__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10633__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10633__adjusted = __Vfunc_round_pack32__10633__exponent;
    __Vfunc_round_pack32__10633__shifted = __Vfunc_round_pack32__10633__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10633__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10634__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10633__exponent)));
        vlSelf->__Vfunc_shift_jam27__10634__value = __Vfunc_round_pack32__10633__significand;
        __Vfunc_round_pack32__10633__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10634__distance))) {
            vlSelf->__Vfunc_shift_jam27__10634__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10634__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10634__distance))) {
            vlSelf->__Vfunc_shift_jam27__10634__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10634__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10634__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10634__value, (IData)(vlSelf->__Vfunc_shift_jam27__10634__distance)));
            vlSelf->__Vfunc_shift_jam27__10634__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10634__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10634__distance)))));
            vlSelf->__Vfunc_shift_jam27__10634__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10634__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10634__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10634__discarded))));
        }
        __Vfunc_round_pack32__10633__shifted = vlSelf->__Vfunc_shift_jam27__10634__Vfuncout;
    }
    __Vfunc_round_pack32__10633__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10633__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10633__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10633__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10633__rounded)) {
        __Vfunc_round_pack32__10633__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10633__rounded, 1U));
        __Vfunc_round_pack32__10633__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10633__adjusted)));
    }
    __Vfunc_round_pack32__10633__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10633__rounded)) {
        __Vfunc_round_pack32__10633__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10633__adjusted)));
    }
    __Vfunc_round_pack32__10633__Vfuncout = (((0U == __Vfunc_round_pack32__10633__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10633__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10633__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10633__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10633__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10633__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10633__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10633__Vfuncout;
    __Vfunc_round_pack32__10621__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10621__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10621__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10621__adjusted = __Vfunc_round_pack32__10621__exponent;
    __Vfunc_round_pack32__10621__shifted = __Vfunc_round_pack32__10621__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10621__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10622__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10621__exponent)));
        vlSelf->__Vfunc_shift_jam27__10622__value = __Vfunc_round_pack32__10621__significand;
        __Vfunc_round_pack32__10621__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10622__distance))) {
            vlSelf->__Vfunc_shift_jam27__10622__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10622__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10622__distance))) {
            vlSelf->__Vfunc_shift_jam27__10622__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10622__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10622__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10622__value, (IData)(vlSelf->__Vfunc_shift_jam27__10622__distance)));
            vlSelf->__Vfunc_shift_jam27__10622__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10622__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10622__distance)))));
            vlSelf->__Vfunc_shift_jam27__10622__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10622__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10622__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10622__discarded))));
        }
        __Vfunc_round_pack32__10621__shifted = vlSelf->__Vfunc_shift_jam27__10622__Vfuncout;
    }
    __Vfunc_round_pack32__10621__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10621__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10621__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10621__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10621__rounded)) {
        __Vfunc_round_pack32__10621__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10621__rounded, 1U));
        __Vfunc_round_pack32__10621__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10621__adjusted)));
    }
    __Vfunc_round_pack32__10621__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10621__rounded)) {
        __Vfunc_round_pack32__10621__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10621__adjusted)));
    }
    __Vfunc_round_pack32__10621__Vfuncout = (((0U == __Vfunc_round_pack32__10621__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10621__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10621__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10621__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10621__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10621__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10621__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10621__Vfuncout;
    __Vfunc_round_pack32__10609__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10609__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10609__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10609__adjusted = __Vfunc_round_pack32__10609__exponent;
    __Vfunc_round_pack32__10609__shifted = __Vfunc_round_pack32__10609__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10609__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10610__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10609__exponent)));
        vlSelf->__Vfunc_shift_jam27__10610__value = __Vfunc_round_pack32__10609__significand;
        __Vfunc_round_pack32__10609__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10610__distance))) {
            vlSelf->__Vfunc_shift_jam27__10610__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10610__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10610__distance))) {
            vlSelf->__Vfunc_shift_jam27__10610__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10610__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10610__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10610__value, (IData)(vlSelf->__Vfunc_shift_jam27__10610__distance)));
            vlSelf->__Vfunc_shift_jam27__10610__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10610__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10610__distance)))));
            vlSelf->__Vfunc_shift_jam27__10610__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10610__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10610__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10610__discarded))));
        }
        __Vfunc_round_pack32__10609__shifted = vlSelf->__Vfunc_shift_jam27__10610__Vfuncout;
    }
    __Vfunc_round_pack32__10609__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10609__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10609__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10609__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10609__rounded)) {
        __Vfunc_round_pack32__10609__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10609__rounded, 1U));
        __Vfunc_round_pack32__10609__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10609__adjusted)));
    }
    __Vfunc_round_pack32__10609__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10609__rounded)) {
        __Vfunc_round_pack32__10609__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10609__adjusted)));
    }
    __Vfunc_round_pack32__10609__Vfuncout = (((0U == __Vfunc_round_pack32__10609__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10609__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10609__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10609__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10609__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10609__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10609__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10609__Vfuncout;
    __Vfunc_round_pack32__10597__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10597__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10597__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10597__adjusted = __Vfunc_round_pack32__10597__exponent;
    __Vfunc_round_pack32__10597__shifted = __Vfunc_round_pack32__10597__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10597__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10598__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10597__exponent)));
        vlSelf->__Vfunc_shift_jam27__10598__value = __Vfunc_round_pack32__10597__significand;
        __Vfunc_round_pack32__10597__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10598__distance))) {
            vlSelf->__Vfunc_shift_jam27__10598__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10598__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10598__distance))) {
            vlSelf->__Vfunc_shift_jam27__10598__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10598__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10598__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10598__value, (IData)(vlSelf->__Vfunc_shift_jam27__10598__distance)));
            vlSelf->__Vfunc_shift_jam27__10598__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10598__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10598__distance)))));
            vlSelf->__Vfunc_shift_jam27__10598__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10598__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10598__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10598__discarded))));
        }
        __Vfunc_round_pack32__10597__shifted = vlSelf->__Vfunc_shift_jam27__10598__Vfuncout;
    }
    __Vfunc_round_pack32__10597__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10597__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10597__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10597__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10597__rounded)) {
        __Vfunc_round_pack32__10597__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10597__rounded, 1U));
        __Vfunc_round_pack32__10597__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10597__adjusted)));
    }
    __Vfunc_round_pack32__10597__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10597__rounded)) {
        __Vfunc_round_pack32__10597__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10597__adjusted)));
    }
    __Vfunc_round_pack32__10597__Vfuncout = (((0U == __Vfunc_round_pack32__10597__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10597__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10597__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10597__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10597__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10597__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10597__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10597__Vfuncout;
    __Vfunc_round_pack32__10585__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10585__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10585__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10585__adjusted = __Vfunc_round_pack32__10585__exponent;
    __Vfunc_round_pack32__10585__shifted = __Vfunc_round_pack32__10585__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10585__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10586__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10585__exponent)));
        vlSelf->__Vfunc_shift_jam27__10586__value = __Vfunc_round_pack32__10585__significand;
        __Vfunc_round_pack32__10585__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10586__distance))) {
            vlSelf->__Vfunc_shift_jam27__10586__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10586__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10586__distance))) {
            vlSelf->__Vfunc_shift_jam27__10586__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10586__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10586__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10586__value, (IData)(vlSelf->__Vfunc_shift_jam27__10586__distance)));
            vlSelf->__Vfunc_shift_jam27__10586__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10586__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10586__distance)))));
            vlSelf->__Vfunc_shift_jam27__10586__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10586__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10586__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10586__discarded))));
        }
        __Vfunc_round_pack32__10585__shifted = vlSelf->__Vfunc_shift_jam27__10586__Vfuncout;
    }
    __Vfunc_round_pack32__10585__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10585__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10585__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10585__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10585__rounded)) {
        __Vfunc_round_pack32__10585__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10585__rounded, 1U));
        __Vfunc_round_pack32__10585__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10585__adjusted)));
    }
    __Vfunc_round_pack32__10585__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10585__rounded)) {
        __Vfunc_round_pack32__10585__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10585__adjusted)));
    }
    __Vfunc_round_pack32__10585__Vfuncout = (((0U == __Vfunc_round_pack32__10585__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10585__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10585__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10585__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10585__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10585__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10585__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10585__Vfuncout;
    __Vfunc_round_pack32__10573__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10573__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10573__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10573__adjusted = __Vfunc_round_pack32__10573__exponent;
    __Vfunc_round_pack32__10573__shifted = __Vfunc_round_pack32__10573__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10573__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10574__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10573__exponent)));
        vlSelf->__Vfunc_shift_jam27__10574__value = __Vfunc_round_pack32__10573__significand;
        __Vfunc_round_pack32__10573__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10574__distance))) {
            vlSelf->__Vfunc_shift_jam27__10574__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10574__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10574__distance))) {
            vlSelf->__Vfunc_shift_jam27__10574__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10574__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10574__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10574__value, (IData)(vlSelf->__Vfunc_shift_jam27__10574__distance)));
            vlSelf->__Vfunc_shift_jam27__10574__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10574__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10574__distance)))));
            vlSelf->__Vfunc_shift_jam27__10574__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10574__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10574__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10574__discarded))));
        }
        __Vfunc_round_pack32__10573__shifted = vlSelf->__Vfunc_shift_jam27__10574__Vfuncout;
    }
    __Vfunc_round_pack32__10573__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10573__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10573__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10573__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10573__rounded)) {
        __Vfunc_round_pack32__10573__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10573__rounded, 1U));
        __Vfunc_round_pack32__10573__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10573__adjusted)));
    }
    __Vfunc_round_pack32__10573__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10573__rounded)) {
        __Vfunc_round_pack32__10573__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10573__adjusted)));
    }
    __Vfunc_round_pack32__10573__Vfuncout = (((0U == __Vfunc_round_pack32__10573__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10573__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10573__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10573__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10573__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10573__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10573__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10573__Vfuncout;
    __Vfunc_round_pack32__10561__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10561__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10561__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10561__adjusted = __Vfunc_round_pack32__10561__exponent;
    __Vfunc_round_pack32__10561__shifted = __Vfunc_round_pack32__10561__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10561__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10562__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10561__exponent)));
        vlSelf->__Vfunc_shift_jam27__10562__value = __Vfunc_round_pack32__10561__significand;
        __Vfunc_round_pack32__10561__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10562__distance))) {
            vlSelf->__Vfunc_shift_jam27__10562__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10562__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10562__distance))) {
            vlSelf->__Vfunc_shift_jam27__10562__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10562__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10562__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10562__value, (IData)(vlSelf->__Vfunc_shift_jam27__10562__distance)));
            vlSelf->__Vfunc_shift_jam27__10562__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10562__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10562__distance)))));
            vlSelf->__Vfunc_shift_jam27__10562__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10562__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10562__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10562__discarded))));
        }
        __Vfunc_round_pack32__10561__shifted = vlSelf->__Vfunc_shift_jam27__10562__Vfuncout;
    }
    __Vfunc_round_pack32__10561__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10561__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10561__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10561__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10561__rounded)) {
        __Vfunc_round_pack32__10561__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10561__rounded, 1U));
        __Vfunc_round_pack32__10561__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10561__adjusted)));
    }
    __Vfunc_round_pack32__10561__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10561__rounded)) {
        __Vfunc_round_pack32__10561__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10561__adjusted)));
    }
    __Vfunc_round_pack32__10561__Vfuncout = (((0U == __Vfunc_round_pack32__10561__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10561__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10561__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10561__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10561__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10561__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10561__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10561__Vfuncout;
    __Vfunc_round_pack32__10549__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10549__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10549__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10549__adjusted = __Vfunc_round_pack32__10549__exponent;
    __Vfunc_round_pack32__10549__shifted = __Vfunc_round_pack32__10549__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10549__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10550__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10549__exponent)));
        vlSelf->__Vfunc_shift_jam27__10550__value = __Vfunc_round_pack32__10549__significand;
        __Vfunc_round_pack32__10549__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10550__distance))) {
            vlSelf->__Vfunc_shift_jam27__10550__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10550__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10550__distance))) {
            vlSelf->__Vfunc_shift_jam27__10550__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10550__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10550__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10550__value, (IData)(vlSelf->__Vfunc_shift_jam27__10550__distance)));
            vlSelf->__Vfunc_shift_jam27__10550__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10550__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10550__distance)))));
            vlSelf->__Vfunc_shift_jam27__10550__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10550__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10550__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10550__discarded))));
        }
        __Vfunc_round_pack32__10549__shifted = vlSelf->__Vfunc_shift_jam27__10550__Vfuncout;
    }
    __Vfunc_round_pack32__10549__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10549__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10549__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10549__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10549__rounded)) {
        __Vfunc_round_pack32__10549__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10549__rounded, 1U));
        __Vfunc_round_pack32__10549__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10549__adjusted)));
    }
    __Vfunc_round_pack32__10549__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10549__rounded)) {
        __Vfunc_round_pack32__10549__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10549__adjusted)));
    }
    __Vfunc_round_pack32__10549__Vfuncout = (((0U == __Vfunc_round_pack32__10549__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10549__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10549__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10549__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10549__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10549__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10549__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10549__Vfuncout;
    __Vfunc_round_pack32__10537__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10537__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10537__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10537__adjusted = __Vfunc_round_pack32__10537__exponent;
    __Vfunc_round_pack32__10537__shifted = __Vfunc_round_pack32__10537__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10537__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10538__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10537__exponent)));
        vlSelf->__Vfunc_shift_jam27__10538__value = __Vfunc_round_pack32__10537__significand;
        __Vfunc_round_pack32__10537__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10538__distance))) {
            vlSelf->__Vfunc_shift_jam27__10538__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10538__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10538__distance))) {
            vlSelf->__Vfunc_shift_jam27__10538__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10538__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10538__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10538__value, (IData)(vlSelf->__Vfunc_shift_jam27__10538__distance)));
            vlSelf->__Vfunc_shift_jam27__10538__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10538__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10538__distance)))));
            vlSelf->__Vfunc_shift_jam27__10538__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10538__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10538__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10538__discarded))));
        }
        __Vfunc_round_pack32__10537__shifted = vlSelf->__Vfunc_shift_jam27__10538__Vfuncout;
    }
    __Vfunc_round_pack32__10537__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10537__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10537__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10537__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10537__rounded)) {
        __Vfunc_round_pack32__10537__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10537__rounded, 1U));
        __Vfunc_round_pack32__10537__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10537__adjusted)));
    }
    __Vfunc_round_pack32__10537__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10537__rounded)) {
        __Vfunc_round_pack32__10537__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10537__adjusted)));
    }
    __Vfunc_round_pack32__10537__Vfuncout = (((0U == __Vfunc_round_pack32__10537__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10537__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10537__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10537__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10537__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10537__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10537__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10537__Vfuncout;
    __Vfunc_round_pack32__10525__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10525__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10525__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10525__adjusted = __Vfunc_round_pack32__10525__exponent;
    __Vfunc_round_pack32__10525__shifted = __Vfunc_round_pack32__10525__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10525__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10526__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10525__exponent)));
        vlSelf->__Vfunc_shift_jam27__10526__value = __Vfunc_round_pack32__10525__significand;
        __Vfunc_round_pack32__10525__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10526__distance))) {
            vlSelf->__Vfunc_shift_jam27__10526__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10526__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10526__distance))) {
            vlSelf->__Vfunc_shift_jam27__10526__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10526__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10526__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10526__value, (IData)(vlSelf->__Vfunc_shift_jam27__10526__distance)));
            vlSelf->__Vfunc_shift_jam27__10526__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10526__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10526__distance)))));
            vlSelf->__Vfunc_shift_jam27__10526__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10526__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10526__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10526__discarded))));
        }
        __Vfunc_round_pack32__10525__shifted = vlSelf->__Vfunc_shift_jam27__10526__Vfuncout;
    }
    __Vfunc_round_pack32__10525__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10525__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10525__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10525__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10525__rounded)) {
        __Vfunc_round_pack32__10525__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10525__rounded, 1U));
        __Vfunc_round_pack32__10525__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10525__adjusted)));
    }
    __Vfunc_round_pack32__10525__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10525__rounded)) {
        __Vfunc_round_pack32__10525__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10525__adjusted)));
    }
    __Vfunc_round_pack32__10525__Vfuncout = (((0U == __Vfunc_round_pack32__10525__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10525__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10525__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10525__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10525__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10525__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10525__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10525__Vfuncout;
    __Vfunc_round_pack32__10513__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10513__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10513__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10513__adjusted = __Vfunc_round_pack32__10513__exponent;
    __Vfunc_round_pack32__10513__shifted = __Vfunc_round_pack32__10513__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10513__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10514__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10513__exponent)));
        vlSelf->__Vfunc_shift_jam27__10514__value = __Vfunc_round_pack32__10513__significand;
        __Vfunc_round_pack32__10513__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10514__distance))) {
            vlSelf->__Vfunc_shift_jam27__10514__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10514__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10514__distance))) {
            vlSelf->__Vfunc_shift_jam27__10514__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10514__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10514__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10514__value, (IData)(vlSelf->__Vfunc_shift_jam27__10514__distance)));
            vlSelf->__Vfunc_shift_jam27__10514__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10514__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10514__distance)))));
            vlSelf->__Vfunc_shift_jam27__10514__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10514__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10514__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10514__discarded))));
        }
        __Vfunc_round_pack32__10513__shifted = vlSelf->__Vfunc_shift_jam27__10514__Vfuncout;
    }
    __Vfunc_round_pack32__10513__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10513__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10513__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10513__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10513__rounded)) {
        __Vfunc_round_pack32__10513__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10513__rounded, 1U));
        __Vfunc_round_pack32__10513__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10513__adjusted)));
    }
    __Vfunc_round_pack32__10513__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10513__rounded)) {
        __Vfunc_round_pack32__10513__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10513__adjusted)));
    }
    __Vfunc_round_pack32__10513__Vfuncout = (((0U == __Vfunc_round_pack32__10513__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10513__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10513__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10513__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10513__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10513__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10513__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10513__Vfuncout;
    __Vfunc_round_pack32__10501__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10501__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10501__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10501__adjusted = __Vfunc_round_pack32__10501__exponent;
    __Vfunc_round_pack32__10501__shifted = __Vfunc_round_pack32__10501__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10501__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10502__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10501__exponent)));
        vlSelf->__Vfunc_shift_jam27__10502__value = __Vfunc_round_pack32__10501__significand;
        __Vfunc_round_pack32__10501__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10502__distance))) {
            vlSelf->__Vfunc_shift_jam27__10502__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10502__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10502__distance))) {
            vlSelf->__Vfunc_shift_jam27__10502__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10502__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10502__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10502__value, (IData)(vlSelf->__Vfunc_shift_jam27__10502__distance)));
            vlSelf->__Vfunc_shift_jam27__10502__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10502__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10502__distance)))));
            vlSelf->__Vfunc_shift_jam27__10502__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10502__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10502__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10502__discarded))));
        }
        __Vfunc_round_pack32__10501__shifted = vlSelf->__Vfunc_shift_jam27__10502__Vfuncout;
    }
    __Vfunc_round_pack32__10501__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10501__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10501__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10501__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10501__rounded)) {
        __Vfunc_round_pack32__10501__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10501__rounded, 1U));
        __Vfunc_round_pack32__10501__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10501__adjusted)));
    }
    __Vfunc_round_pack32__10501__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10501__rounded)) {
        __Vfunc_round_pack32__10501__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10501__adjusted)));
    }
    __Vfunc_round_pack32__10501__Vfuncout = (((0U == __Vfunc_round_pack32__10501__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10501__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10501__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10501__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10501__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10501__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10501__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10501__Vfuncout;
    __Vfunc_round_pack32__10489__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10489__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10489__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10489__adjusted = __Vfunc_round_pack32__10489__exponent;
    __Vfunc_round_pack32__10489__shifted = __Vfunc_round_pack32__10489__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10489__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10490__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10489__exponent)));
        vlSelf->__Vfunc_shift_jam27__10490__value = __Vfunc_round_pack32__10489__significand;
        __Vfunc_round_pack32__10489__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10490__distance))) {
            vlSelf->__Vfunc_shift_jam27__10490__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10490__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10490__distance))) {
            vlSelf->__Vfunc_shift_jam27__10490__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10490__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10490__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10490__value, (IData)(vlSelf->__Vfunc_shift_jam27__10490__distance)));
            vlSelf->__Vfunc_shift_jam27__10490__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10490__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10490__distance)))));
            vlSelf->__Vfunc_shift_jam27__10490__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10490__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10490__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10490__discarded))));
        }
        __Vfunc_round_pack32__10489__shifted = vlSelf->__Vfunc_shift_jam27__10490__Vfuncout;
    }
    __Vfunc_round_pack32__10489__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10489__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10489__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10489__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10489__rounded)) {
        __Vfunc_round_pack32__10489__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10489__rounded, 1U));
        __Vfunc_round_pack32__10489__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10489__adjusted)));
    }
    __Vfunc_round_pack32__10489__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10489__rounded)) {
        __Vfunc_round_pack32__10489__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10489__adjusted)));
    }
    __Vfunc_round_pack32__10489__Vfuncout = (((0U == __Vfunc_round_pack32__10489__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10489__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10489__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10489__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10489__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10489__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10489__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10489__Vfuncout;
    __Vfunc_round_pack32__10477__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10477__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10477__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10477__adjusted = __Vfunc_round_pack32__10477__exponent;
    __Vfunc_round_pack32__10477__shifted = __Vfunc_round_pack32__10477__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10477__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10478__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10477__exponent)));
        vlSelf->__Vfunc_shift_jam27__10478__value = __Vfunc_round_pack32__10477__significand;
        __Vfunc_round_pack32__10477__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10478__distance))) {
            vlSelf->__Vfunc_shift_jam27__10478__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10478__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10478__distance))) {
            vlSelf->__Vfunc_shift_jam27__10478__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10478__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10478__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10478__value, (IData)(vlSelf->__Vfunc_shift_jam27__10478__distance)));
            vlSelf->__Vfunc_shift_jam27__10478__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10478__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10478__distance)))));
            vlSelf->__Vfunc_shift_jam27__10478__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10478__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10478__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10478__discarded))));
        }
        __Vfunc_round_pack32__10477__shifted = vlSelf->__Vfunc_shift_jam27__10478__Vfuncout;
    }
    __Vfunc_round_pack32__10477__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10477__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10477__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10477__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10477__rounded)) {
        __Vfunc_round_pack32__10477__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10477__rounded, 1U));
        __Vfunc_round_pack32__10477__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10477__adjusted)));
    }
    __Vfunc_round_pack32__10477__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10477__rounded)) {
        __Vfunc_round_pack32__10477__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10477__adjusted)));
    }
    __Vfunc_round_pack32__10477__Vfuncout = (((0U == __Vfunc_round_pack32__10477__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10477__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10477__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10477__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10477__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10477__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10477__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10477__Vfuncout;
    __Vfunc_round_pack32__10465__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10465__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10465__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10465__adjusted = __Vfunc_round_pack32__10465__exponent;
    __Vfunc_round_pack32__10465__shifted = __Vfunc_round_pack32__10465__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10465__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10466__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10465__exponent)));
        vlSelf->__Vfunc_shift_jam27__10466__value = __Vfunc_round_pack32__10465__significand;
        __Vfunc_round_pack32__10465__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10466__distance))) {
            vlSelf->__Vfunc_shift_jam27__10466__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10466__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10466__distance))) {
            vlSelf->__Vfunc_shift_jam27__10466__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10466__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10466__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10466__value, (IData)(vlSelf->__Vfunc_shift_jam27__10466__distance)));
            vlSelf->__Vfunc_shift_jam27__10466__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10466__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10466__distance)))));
            vlSelf->__Vfunc_shift_jam27__10466__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10466__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10466__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10466__discarded))));
        }
        __Vfunc_round_pack32__10465__shifted = vlSelf->__Vfunc_shift_jam27__10466__Vfuncout;
    }
    __Vfunc_round_pack32__10465__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10465__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10465__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10465__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10465__rounded)) {
        __Vfunc_round_pack32__10465__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10465__rounded, 1U));
        __Vfunc_round_pack32__10465__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10465__adjusted)));
    }
    __Vfunc_round_pack32__10465__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10465__rounded)) {
        __Vfunc_round_pack32__10465__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10465__adjusted)));
    }
    __Vfunc_round_pack32__10465__Vfuncout = (((0U == __Vfunc_round_pack32__10465__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10465__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10465__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10465__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10465__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10465__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10465__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10465__Vfuncout;
    __Vfunc_round_pack32__10453__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10453__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10453__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10453__adjusted = __Vfunc_round_pack32__10453__exponent;
    __Vfunc_round_pack32__10453__shifted = __Vfunc_round_pack32__10453__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10453__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10454__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10453__exponent)));
        vlSelf->__Vfunc_shift_jam27__10454__value = __Vfunc_round_pack32__10453__significand;
        __Vfunc_round_pack32__10453__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10454__distance))) {
            vlSelf->__Vfunc_shift_jam27__10454__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10454__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10454__distance))) {
            vlSelf->__Vfunc_shift_jam27__10454__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10454__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10454__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10454__value, (IData)(vlSelf->__Vfunc_shift_jam27__10454__distance)));
            vlSelf->__Vfunc_shift_jam27__10454__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10454__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10454__distance)))));
            vlSelf->__Vfunc_shift_jam27__10454__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10454__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10454__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10454__discarded))));
        }
        __Vfunc_round_pack32__10453__shifted = vlSelf->__Vfunc_shift_jam27__10454__Vfuncout;
    }
    __Vfunc_round_pack32__10453__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10453__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10453__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10453__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10453__rounded)) {
        __Vfunc_round_pack32__10453__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10453__rounded, 1U));
        __Vfunc_round_pack32__10453__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10453__adjusted)));
    }
    __Vfunc_round_pack32__10453__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10453__rounded)) {
        __Vfunc_round_pack32__10453__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10453__adjusted)));
    }
    __Vfunc_round_pack32__10453__Vfuncout = (((0U == __Vfunc_round_pack32__10453__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10453__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10453__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10453__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10453__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10453__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10453__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10453__Vfuncout;
    __Vfunc_round_pack32__10441__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10441__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10441__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10441__adjusted = __Vfunc_round_pack32__10441__exponent;
    __Vfunc_round_pack32__10441__shifted = __Vfunc_round_pack32__10441__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10441__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10442__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10441__exponent)));
        vlSelf->__Vfunc_shift_jam27__10442__value = __Vfunc_round_pack32__10441__significand;
        __Vfunc_round_pack32__10441__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10442__distance))) {
            vlSelf->__Vfunc_shift_jam27__10442__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10442__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10442__distance))) {
            vlSelf->__Vfunc_shift_jam27__10442__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10442__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10442__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10442__value, (IData)(vlSelf->__Vfunc_shift_jam27__10442__distance)));
            vlSelf->__Vfunc_shift_jam27__10442__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10442__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10442__distance)))));
            vlSelf->__Vfunc_shift_jam27__10442__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10442__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10442__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10442__discarded))));
        }
        __Vfunc_round_pack32__10441__shifted = vlSelf->__Vfunc_shift_jam27__10442__Vfuncout;
    }
    __Vfunc_round_pack32__10441__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10441__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10441__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10441__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10441__rounded)) {
        __Vfunc_round_pack32__10441__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10441__rounded, 1U));
        __Vfunc_round_pack32__10441__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10441__adjusted)));
    }
    __Vfunc_round_pack32__10441__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10441__rounded)) {
        __Vfunc_round_pack32__10441__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10441__adjusted)));
    }
    __Vfunc_round_pack32__10441__Vfuncout = (((0U == __Vfunc_round_pack32__10441__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10441__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10441__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10441__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10441__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10441__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10441__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10441__Vfuncout;
    __Vfunc_round_pack32__10429__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__significand3;
    __Vfunc_round_pack32__10429__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__exponent3;
    __Vfunc_round_pack32__10429__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10429__adjusted = __Vfunc_round_pack32__10429__exponent;
    __Vfunc_round_pack32__10429__shifted = __Vfunc_round_pack32__10429__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10429__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10430__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10429__exponent)));
        vlSelf->__Vfunc_shift_jam27__10430__value = __Vfunc_round_pack32__10429__significand;
        __Vfunc_round_pack32__10429__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10430__distance))) {
            vlSelf->__Vfunc_shift_jam27__10430__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10430__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10430__distance))) {
            vlSelf->__Vfunc_shift_jam27__10430__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10430__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10430__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10430__value, (IData)(vlSelf->__Vfunc_shift_jam27__10430__distance)));
            vlSelf->__Vfunc_shift_jam27__10430__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10430__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10430__distance)))));
            vlSelf->__Vfunc_shift_jam27__10430__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10430__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10430__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10430__discarded))));
        }
        __Vfunc_round_pack32__10429__shifted = vlSelf->__Vfunc_shift_jam27__10430__Vfuncout;
    }
    __Vfunc_round_pack32__10429__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10429__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10429__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10429__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10429__rounded)) {
        __Vfunc_round_pack32__10429__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10429__rounded, 1U));
        __Vfunc_round_pack32__10429__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10429__adjusted)));
    }
    __Vfunc_round_pack32__10429__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10429__rounded)) {
        __Vfunc_round_pack32__10429__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10429__adjusted)));
    }
    __Vfunc_round_pack32__10429__Vfuncout = (((0U == __Vfunc_round_pack32__10429__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10429__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10429__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10429__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10429__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10429__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10429__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__x_scale__DOT__packed4 
        = __Vfunc_round_pack32__10429__Vfuncout;
    __Vfunc_round_pack32__9661__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9661__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9661__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9661__adjusted = __Vfunc_round_pack32__9661__exponent;
    __Vfunc_round_pack32__9661__shifted = __Vfunc_round_pack32__9661__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9661__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9662__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9661__exponent)));
        vlSelf->__Vfunc_shift_jam27__9662__value = __Vfunc_round_pack32__9661__significand;
        __Vfunc_round_pack32__9661__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9662__distance))) {
            vlSelf->__Vfunc_shift_jam27__9662__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9662__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9662__distance))) {
            vlSelf->__Vfunc_shift_jam27__9662__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9662__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9662__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9662__value, (IData)(vlSelf->__Vfunc_shift_jam27__9662__distance)));
            vlSelf->__Vfunc_shift_jam27__9662__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9662__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9662__distance)))));
            vlSelf->__Vfunc_shift_jam27__9662__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9662__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9662__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9662__discarded))));
        }
        __Vfunc_round_pack32__9661__shifted = vlSelf->__Vfunc_shift_jam27__9662__Vfuncout;
    }
    __Vfunc_round_pack32__9661__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9661__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9661__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9661__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9661__rounded)) {
        __Vfunc_round_pack32__9661__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9661__rounded, 1U));
        __Vfunc_round_pack32__9661__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9661__adjusted)));
    }
    __Vfunc_round_pack32__9661__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9661__rounded)) {
        __Vfunc_round_pack32__9661__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9661__adjusted)));
    }
    __Vfunc_round_pack32__9661__Vfuncout = (((0U == __Vfunc_round_pack32__9661__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9661__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9661__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9661__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9661__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9661__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9661__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__127__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9661__Vfuncout;
    __Vfunc_round_pack32__9655__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9655__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9655__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9655__adjusted = __Vfunc_round_pack32__9655__exponent;
    __Vfunc_round_pack32__9655__shifted = __Vfunc_round_pack32__9655__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9655__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9656__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9655__exponent)));
        vlSelf->__Vfunc_shift_jam27__9656__value = __Vfunc_round_pack32__9655__significand;
        __Vfunc_round_pack32__9655__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9656__distance))) {
            vlSelf->__Vfunc_shift_jam27__9656__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9656__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9656__distance))) {
            vlSelf->__Vfunc_shift_jam27__9656__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9656__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9656__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9656__value, (IData)(vlSelf->__Vfunc_shift_jam27__9656__distance)));
            vlSelf->__Vfunc_shift_jam27__9656__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9656__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9656__distance)))));
            vlSelf->__Vfunc_shift_jam27__9656__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9656__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9656__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9656__discarded))));
        }
        __Vfunc_round_pack32__9655__shifted = vlSelf->__Vfunc_shift_jam27__9656__Vfuncout;
    }
    __Vfunc_round_pack32__9655__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9655__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9655__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9655__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9655__rounded)) {
        __Vfunc_round_pack32__9655__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9655__rounded, 1U));
        __Vfunc_round_pack32__9655__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9655__adjusted)));
    }
    __Vfunc_round_pack32__9655__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9655__rounded)) {
        __Vfunc_round_pack32__9655__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9655__adjusted)));
    }
    __Vfunc_round_pack32__9655__Vfuncout = (((0U == __Vfunc_round_pack32__9655__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9655__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9655__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9655__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9655__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9655__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9655__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__126__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9655__Vfuncout;
    __Vfunc_round_pack32__9649__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9649__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9649__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9649__adjusted = __Vfunc_round_pack32__9649__exponent;
    __Vfunc_round_pack32__9649__shifted = __Vfunc_round_pack32__9649__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9649__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9650__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9649__exponent)));
        vlSelf->__Vfunc_shift_jam27__9650__value = __Vfunc_round_pack32__9649__significand;
        __Vfunc_round_pack32__9649__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9650__distance))) {
            vlSelf->__Vfunc_shift_jam27__9650__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9650__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9650__distance))) {
            vlSelf->__Vfunc_shift_jam27__9650__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9650__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9650__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9650__value, (IData)(vlSelf->__Vfunc_shift_jam27__9650__distance)));
            vlSelf->__Vfunc_shift_jam27__9650__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9650__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9650__distance)))));
            vlSelf->__Vfunc_shift_jam27__9650__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9650__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9650__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9650__discarded))));
        }
        __Vfunc_round_pack32__9649__shifted = vlSelf->__Vfunc_shift_jam27__9650__Vfuncout;
    }
    __Vfunc_round_pack32__9649__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9649__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9649__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9649__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9649__rounded)) {
        __Vfunc_round_pack32__9649__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9649__rounded, 1U));
        __Vfunc_round_pack32__9649__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9649__adjusted)));
    }
    __Vfunc_round_pack32__9649__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9649__rounded)) {
        __Vfunc_round_pack32__9649__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9649__adjusted)));
    }
    __Vfunc_round_pack32__9649__Vfuncout = (((0U == __Vfunc_round_pack32__9649__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9649__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9649__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9649__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9649__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9649__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9649__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__125__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9649__Vfuncout;
    __Vfunc_round_pack32__9643__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9643__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9643__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9643__adjusted = __Vfunc_round_pack32__9643__exponent;
    __Vfunc_round_pack32__9643__shifted = __Vfunc_round_pack32__9643__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9643__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9644__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9643__exponent)));
        vlSelf->__Vfunc_shift_jam27__9644__value = __Vfunc_round_pack32__9643__significand;
        __Vfunc_round_pack32__9643__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9644__distance))) {
            vlSelf->__Vfunc_shift_jam27__9644__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9644__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9644__distance))) {
            vlSelf->__Vfunc_shift_jam27__9644__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9644__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9644__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9644__value, (IData)(vlSelf->__Vfunc_shift_jam27__9644__distance)));
            vlSelf->__Vfunc_shift_jam27__9644__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9644__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9644__distance)))));
            vlSelf->__Vfunc_shift_jam27__9644__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9644__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9644__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9644__discarded))));
        }
        __Vfunc_round_pack32__9643__shifted = vlSelf->__Vfunc_shift_jam27__9644__Vfuncout;
    }
    __Vfunc_round_pack32__9643__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9643__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9643__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9643__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9643__rounded)) {
        __Vfunc_round_pack32__9643__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9643__rounded, 1U));
        __Vfunc_round_pack32__9643__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9643__adjusted)));
    }
    __Vfunc_round_pack32__9643__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9643__rounded)) {
        __Vfunc_round_pack32__9643__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9643__adjusted)));
    }
    __Vfunc_round_pack32__9643__Vfuncout = (((0U == __Vfunc_round_pack32__9643__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9643__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9643__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9643__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9643__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9643__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9643__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__124__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9643__Vfuncout;
    __Vfunc_round_pack32__9637__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9637__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9637__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9637__adjusted = __Vfunc_round_pack32__9637__exponent;
    __Vfunc_round_pack32__9637__shifted = __Vfunc_round_pack32__9637__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9637__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9638__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9637__exponent)));
        vlSelf->__Vfunc_shift_jam27__9638__value = __Vfunc_round_pack32__9637__significand;
        __Vfunc_round_pack32__9637__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9638__distance))) {
            vlSelf->__Vfunc_shift_jam27__9638__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9638__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9638__distance))) {
            vlSelf->__Vfunc_shift_jam27__9638__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9638__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9638__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9638__value, (IData)(vlSelf->__Vfunc_shift_jam27__9638__distance)));
            vlSelf->__Vfunc_shift_jam27__9638__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9638__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9638__distance)))));
            vlSelf->__Vfunc_shift_jam27__9638__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9638__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9638__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9638__discarded))));
        }
        __Vfunc_round_pack32__9637__shifted = vlSelf->__Vfunc_shift_jam27__9638__Vfuncout;
    }
    __Vfunc_round_pack32__9637__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9637__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9637__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9637__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9637__rounded)) {
        __Vfunc_round_pack32__9637__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9637__rounded, 1U));
        __Vfunc_round_pack32__9637__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9637__adjusted)));
    }
    __Vfunc_round_pack32__9637__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9637__rounded)) {
        __Vfunc_round_pack32__9637__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9637__adjusted)));
    }
    __Vfunc_round_pack32__9637__Vfuncout = (((0U == __Vfunc_round_pack32__9637__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9637__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9637__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9637__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9637__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9637__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9637__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__123__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9637__Vfuncout;
    __Vfunc_round_pack32__9631__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9631__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9631__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9631__adjusted = __Vfunc_round_pack32__9631__exponent;
    __Vfunc_round_pack32__9631__shifted = __Vfunc_round_pack32__9631__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9631__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9632__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9631__exponent)));
        vlSelf->__Vfunc_shift_jam27__9632__value = __Vfunc_round_pack32__9631__significand;
        __Vfunc_round_pack32__9631__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9632__distance))) {
            vlSelf->__Vfunc_shift_jam27__9632__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9632__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9632__distance))) {
            vlSelf->__Vfunc_shift_jam27__9632__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9632__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9632__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9632__value, (IData)(vlSelf->__Vfunc_shift_jam27__9632__distance)));
            vlSelf->__Vfunc_shift_jam27__9632__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9632__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9632__distance)))));
            vlSelf->__Vfunc_shift_jam27__9632__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9632__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9632__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9632__discarded))));
        }
        __Vfunc_round_pack32__9631__shifted = vlSelf->__Vfunc_shift_jam27__9632__Vfuncout;
    }
    __Vfunc_round_pack32__9631__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9631__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9631__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9631__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9631__rounded)) {
        __Vfunc_round_pack32__9631__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9631__rounded, 1U));
        __Vfunc_round_pack32__9631__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9631__adjusted)));
    }
    __Vfunc_round_pack32__9631__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9631__rounded)) {
        __Vfunc_round_pack32__9631__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9631__adjusted)));
    }
    __Vfunc_round_pack32__9631__Vfuncout = (((0U == __Vfunc_round_pack32__9631__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9631__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9631__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9631__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9631__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9631__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9631__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__122__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9631__Vfuncout;
    __Vfunc_round_pack32__9625__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9625__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9625__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9625__adjusted = __Vfunc_round_pack32__9625__exponent;
    __Vfunc_round_pack32__9625__shifted = __Vfunc_round_pack32__9625__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9625__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9626__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9625__exponent)));
        vlSelf->__Vfunc_shift_jam27__9626__value = __Vfunc_round_pack32__9625__significand;
        __Vfunc_round_pack32__9625__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9626__distance))) {
            vlSelf->__Vfunc_shift_jam27__9626__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9626__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9626__distance))) {
            vlSelf->__Vfunc_shift_jam27__9626__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9626__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9626__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9626__value, (IData)(vlSelf->__Vfunc_shift_jam27__9626__distance)));
            vlSelf->__Vfunc_shift_jam27__9626__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9626__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9626__distance)))));
            vlSelf->__Vfunc_shift_jam27__9626__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9626__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9626__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9626__discarded))));
        }
        __Vfunc_round_pack32__9625__shifted = vlSelf->__Vfunc_shift_jam27__9626__Vfuncout;
    }
    __Vfunc_round_pack32__9625__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9625__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9625__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9625__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9625__rounded)) {
        __Vfunc_round_pack32__9625__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9625__rounded, 1U));
        __Vfunc_round_pack32__9625__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9625__adjusted)));
    }
    __Vfunc_round_pack32__9625__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9625__rounded)) {
        __Vfunc_round_pack32__9625__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9625__adjusted)));
    }
    __Vfunc_round_pack32__9625__Vfuncout = (((0U == __Vfunc_round_pack32__9625__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9625__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9625__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9625__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9625__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9625__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9625__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__121__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9625__Vfuncout;
    __Vfunc_round_pack32__9619__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9619__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9619__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9619__adjusted = __Vfunc_round_pack32__9619__exponent;
    __Vfunc_round_pack32__9619__shifted = __Vfunc_round_pack32__9619__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9619__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9620__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9619__exponent)));
        vlSelf->__Vfunc_shift_jam27__9620__value = __Vfunc_round_pack32__9619__significand;
        __Vfunc_round_pack32__9619__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9620__distance))) {
            vlSelf->__Vfunc_shift_jam27__9620__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9620__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9620__distance))) {
            vlSelf->__Vfunc_shift_jam27__9620__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9620__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9620__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9620__value, (IData)(vlSelf->__Vfunc_shift_jam27__9620__distance)));
            vlSelf->__Vfunc_shift_jam27__9620__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9620__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9620__distance)))));
            vlSelf->__Vfunc_shift_jam27__9620__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9620__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9620__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9620__discarded))));
        }
        __Vfunc_round_pack32__9619__shifted = vlSelf->__Vfunc_shift_jam27__9620__Vfuncout;
    }
    __Vfunc_round_pack32__9619__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9619__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9619__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9619__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9619__rounded)) {
        __Vfunc_round_pack32__9619__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9619__rounded, 1U));
        __Vfunc_round_pack32__9619__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9619__adjusted)));
    }
    __Vfunc_round_pack32__9619__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9619__rounded)) {
        __Vfunc_round_pack32__9619__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9619__adjusted)));
    }
    __Vfunc_round_pack32__9619__Vfuncout = (((0U == __Vfunc_round_pack32__9619__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9619__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9619__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9619__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9619__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9619__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9619__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__120__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9619__Vfuncout;
    __Vfunc_round_pack32__9613__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9613__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9613__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9613__adjusted = __Vfunc_round_pack32__9613__exponent;
    __Vfunc_round_pack32__9613__shifted = __Vfunc_round_pack32__9613__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9613__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9614__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9613__exponent)));
        vlSelf->__Vfunc_shift_jam27__9614__value = __Vfunc_round_pack32__9613__significand;
        __Vfunc_round_pack32__9613__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9614__distance))) {
            vlSelf->__Vfunc_shift_jam27__9614__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9614__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9614__distance))) {
            vlSelf->__Vfunc_shift_jam27__9614__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9614__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9614__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9614__value, (IData)(vlSelf->__Vfunc_shift_jam27__9614__distance)));
            vlSelf->__Vfunc_shift_jam27__9614__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9614__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9614__distance)))));
            vlSelf->__Vfunc_shift_jam27__9614__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9614__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9614__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9614__discarded))));
        }
        __Vfunc_round_pack32__9613__shifted = vlSelf->__Vfunc_shift_jam27__9614__Vfuncout;
    }
    __Vfunc_round_pack32__9613__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9613__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9613__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9613__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9613__rounded)) {
        __Vfunc_round_pack32__9613__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9613__rounded, 1U));
        __Vfunc_round_pack32__9613__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9613__adjusted)));
    }
    __Vfunc_round_pack32__9613__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9613__rounded)) {
        __Vfunc_round_pack32__9613__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9613__adjusted)));
    }
    __Vfunc_round_pack32__9613__Vfuncout = (((0U == __Vfunc_round_pack32__9613__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9613__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9613__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9613__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9613__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9613__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9613__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__119__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9613__Vfuncout;
    __Vfunc_round_pack32__9607__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9607__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9607__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9607__adjusted = __Vfunc_round_pack32__9607__exponent;
    __Vfunc_round_pack32__9607__shifted = __Vfunc_round_pack32__9607__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9607__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9608__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9607__exponent)));
        vlSelf->__Vfunc_shift_jam27__9608__value = __Vfunc_round_pack32__9607__significand;
        __Vfunc_round_pack32__9607__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9608__distance))) {
            vlSelf->__Vfunc_shift_jam27__9608__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9608__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9608__distance))) {
            vlSelf->__Vfunc_shift_jam27__9608__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9608__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9608__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9608__value, (IData)(vlSelf->__Vfunc_shift_jam27__9608__distance)));
            vlSelf->__Vfunc_shift_jam27__9608__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9608__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9608__distance)))));
            vlSelf->__Vfunc_shift_jam27__9608__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9608__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9608__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9608__discarded))));
        }
        __Vfunc_round_pack32__9607__shifted = vlSelf->__Vfunc_shift_jam27__9608__Vfuncout;
    }
    __Vfunc_round_pack32__9607__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9607__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9607__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9607__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9607__rounded)) {
        __Vfunc_round_pack32__9607__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9607__rounded, 1U));
        __Vfunc_round_pack32__9607__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9607__adjusted)));
    }
    __Vfunc_round_pack32__9607__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9607__rounded)) {
        __Vfunc_round_pack32__9607__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9607__adjusted)));
    }
    __Vfunc_round_pack32__9607__Vfuncout = (((0U == __Vfunc_round_pack32__9607__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9607__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9607__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9607__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9607__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9607__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9607__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__118__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9607__Vfuncout;
    __Vfunc_round_pack32__9601__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9601__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9601__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9601__adjusted = __Vfunc_round_pack32__9601__exponent;
    __Vfunc_round_pack32__9601__shifted = __Vfunc_round_pack32__9601__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9601__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9602__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9601__exponent)));
        vlSelf->__Vfunc_shift_jam27__9602__value = __Vfunc_round_pack32__9601__significand;
        __Vfunc_round_pack32__9601__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9602__distance))) {
            vlSelf->__Vfunc_shift_jam27__9602__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9602__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9602__distance))) {
            vlSelf->__Vfunc_shift_jam27__9602__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9602__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9602__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9602__value, (IData)(vlSelf->__Vfunc_shift_jam27__9602__distance)));
            vlSelf->__Vfunc_shift_jam27__9602__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9602__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9602__distance)))));
            vlSelf->__Vfunc_shift_jam27__9602__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9602__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9602__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9602__discarded))));
        }
        __Vfunc_round_pack32__9601__shifted = vlSelf->__Vfunc_shift_jam27__9602__Vfuncout;
    }
    __Vfunc_round_pack32__9601__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9601__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9601__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9601__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9601__rounded)) {
        __Vfunc_round_pack32__9601__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9601__rounded, 1U));
        __Vfunc_round_pack32__9601__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9601__adjusted)));
    }
    __Vfunc_round_pack32__9601__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9601__rounded)) {
        __Vfunc_round_pack32__9601__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9601__adjusted)));
    }
    __Vfunc_round_pack32__9601__Vfuncout = (((0U == __Vfunc_round_pack32__9601__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9601__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9601__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9601__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9601__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9601__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9601__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__117__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9601__Vfuncout;
    __Vfunc_round_pack32__9595__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9595__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9595__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9595__adjusted = __Vfunc_round_pack32__9595__exponent;
    __Vfunc_round_pack32__9595__shifted = __Vfunc_round_pack32__9595__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9595__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9596__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9595__exponent)));
        vlSelf->__Vfunc_shift_jam27__9596__value = __Vfunc_round_pack32__9595__significand;
        __Vfunc_round_pack32__9595__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9596__distance))) {
            vlSelf->__Vfunc_shift_jam27__9596__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9596__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9596__distance))) {
            vlSelf->__Vfunc_shift_jam27__9596__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9596__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9596__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9596__value, (IData)(vlSelf->__Vfunc_shift_jam27__9596__distance)));
            vlSelf->__Vfunc_shift_jam27__9596__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9596__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9596__distance)))));
            vlSelf->__Vfunc_shift_jam27__9596__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9596__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9596__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9596__discarded))));
        }
        __Vfunc_round_pack32__9595__shifted = vlSelf->__Vfunc_shift_jam27__9596__Vfuncout;
    }
    __Vfunc_round_pack32__9595__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9595__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9595__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9595__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9595__rounded)) {
        __Vfunc_round_pack32__9595__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9595__rounded, 1U));
        __Vfunc_round_pack32__9595__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9595__adjusted)));
    }
    __Vfunc_round_pack32__9595__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9595__rounded)) {
        __Vfunc_round_pack32__9595__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9595__adjusted)));
    }
    __Vfunc_round_pack32__9595__Vfuncout = (((0U == __Vfunc_round_pack32__9595__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9595__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9595__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9595__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9595__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9595__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9595__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__116__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9595__Vfuncout;
    __Vfunc_round_pack32__9589__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9589__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9589__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9589__adjusted = __Vfunc_round_pack32__9589__exponent;
    __Vfunc_round_pack32__9589__shifted = __Vfunc_round_pack32__9589__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9589__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9590__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9589__exponent)));
        vlSelf->__Vfunc_shift_jam27__9590__value = __Vfunc_round_pack32__9589__significand;
        __Vfunc_round_pack32__9589__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9590__distance))) {
            vlSelf->__Vfunc_shift_jam27__9590__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9590__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9590__distance))) {
            vlSelf->__Vfunc_shift_jam27__9590__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9590__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9590__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9590__value, (IData)(vlSelf->__Vfunc_shift_jam27__9590__distance)));
            vlSelf->__Vfunc_shift_jam27__9590__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9590__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9590__distance)))));
            vlSelf->__Vfunc_shift_jam27__9590__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9590__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9590__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9590__discarded))));
        }
        __Vfunc_round_pack32__9589__shifted = vlSelf->__Vfunc_shift_jam27__9590__Vfuncout;
    }
    __Vfunc_round_pack32__9589__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9589__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9589__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9589__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9589__rounded)) {
        __Vfunc_round_pack32__9589__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9589__rounded, 1U));
        __Vfunc_round_pack32__9589__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9589__adjusted)));
    }
    __Vfunc_round_pack32__9589__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9589__rounded)) {
        __Vfunc_round_pack32__9589__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9589__adjusted)));
    }
    __Vfunc_round_pack32__9589__Vfuncout = (((0U == __Vfunc_round_pack32__9589__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9589__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9589__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9589__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9589__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9589__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9589__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__115__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9589__Vfuncout;
    __Vfunc_round_pack32__9583__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9583__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9583__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9583__adjusted = __Vfunc_round_pack32__9583__exponent;
    __Vfunc_round_pack32__9583__shifted = __Vfunc_round_pack32__9583__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9583__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9584__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9583__exponent)));
        vlSelf->__Vfunc_shift_jam27__9584__value = __Vfunc_round_pack32__9583__significand;
        __Vfunc_round_pack32__9583__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9584__distance))) {
            vlSelf->__Vfunc_shift_jam27__9584__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9584__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9584__distance))) {
            vlSelf->__Vfunc_shift_jam27__9584__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9584__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9584__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9584__value, (IData)(vlSelf->__Vfunc_shift_jam27__9584__distance)));
            vlSelf->__Vfunc_shift_jam27__9584__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9584__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9584__distance)))));
            vlSelf->__Vfunc_shift_jam27__9584__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9584__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9584__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9584__discarded))));
        }
        __Vfunc_round_pack32__9583__shifted = vlSelf->__Vfunc_shift_jam27__9584__Vfuncout;
    }
    __Vfunc_round_pack32__9583__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9583__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9583__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9583__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9583__rounded)) {
        __Vfunc_round_pack32__9583__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9583__rounded, 1U));
        __Vfunc_round_pack32__9583__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9583__adjusted)));
    }
    __Vfunc_round_pack32__9583__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9583__rounded)) {
        __Vfunc_round_pack32__9583__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9583__adjusted)));
    }
    __Vfunc_round_pack32__9583__Vfuncout = (((0U == __Vfunc_round_pack32__9583__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9583__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9583__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9583__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9583__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9583__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9583__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__114__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9583__Vfuncout;
    __Vfunc_round_pack32__9577__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9577__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9577__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9577__adjusted = __Vfunc_round_pack32__9577__exponent;
    __Vfunc_round_pack32__9577__shifted = __Vfunc_round_pack32__9577__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9577__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9578__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9577__exponent)));
        vlSelf->__Vfunc_shift_jam27__9578__value = __Vfunc_round_pack32__9577__significand;
        __Vfunc_round_pack32__9577__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9578__distance))) {
            vlSelf->__Vfunc_shift_jam27__9578__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9578__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9578__distance))) {
            vlSelf->__Vfunc_shift_jam27__9578__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9578__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9578__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9578__value, (IData)(vlSelf->__Vfunc_shift_jam27__9578__distance)));
            vlSelf->__Vfunc_shift_jam27__9578__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9578__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9578__distance)))));
            vlSelf->__Vfunc_shift_jam27__9578__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9578__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9578__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9578__discarded))));
        }
        __Vfunc_round_pack32__9577__shifted = vlSelf->__Vfunc_shift_jam27__9578__Vfuncout;
    }
    __Vfunc_round_pack32__9577__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9577__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9577__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9577__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9577__rounded)) {
        __Vfunc_round_pack32__9577__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9577__rounded, 1U));
        __Vfunc_round_pack32__9577__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9577__adjusted)));
    }
    __Vfunc_round_pack32__9577__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9577__rounded)) {
        __Vfunc_round_pack32__9577__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9577__adjusted)));
    }
    __Vfunc_round_pack32__9577__Vfuncout = (((0U == __Vfunc_round_pack32__9577__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9577__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9577__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9577__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9577__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9577__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9577__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__113__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9577__Vfuncout;
    __Vfunc_round_pack32__9571__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9571__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9571__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9571__adjusted = __Vfunc_round_pack32__9571__exponent;
    __Vfunc_round_pack32__9571__shifted = __Vfunc_round_pack32__9571__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9571__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9572__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9571__exponent)));
        vlSelf->__Vfunc_shift_jam27__9572__value = __Vfunc_round_pack32__9571__significand;
        __Vfunc_round_pack32__9571__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9572__distance))) {
            vlSelf->__Vfunc_shift_jam27__9572__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9572__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9572__distance))) {
            vlSelf->__Vfunc_shift_jam27__9572__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9572__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9572__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9572__value, (IData)(vlSelf->__Vfunc_shift_jam27__9572__distance)));
            vlSelf->__Vfunc_shift_jam27__9572__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9572__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9572__distance)))));
            vlSelf->__Vfunc_shift_jam27__9572__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9572__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9572__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9572__discarded))));
        }
        __Vfunc_round_pack32__9571__shifted = vlSelf->__Vfunc_shift_jam27__9572__Vfuncout;
    }
    __Vfunc_round_pack32__9571__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9571__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9571__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9571__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9571__rounded)) {
        __Vfunc_round_pack32__9571__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9571__rounded, 1U));
        __Vfunc_round_pack32__9571__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9571__adjusted)));
    }
    __Vfunc_round_pack32__9571__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9571__rounded)) {
        __Vfunc_round_pack32__9571__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9571__adjusted)));
    }
    __Vfunc_round_pack32__9571__Vfuncout = (((0U == __Vfunc_round_pack32__9571__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9571__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9571__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9571__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9571__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9571__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9571__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__112__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9571__Vfuncout;
    __Vfunc_round_pack32__9565__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9565__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9565__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9565__adjusted = __Vfunc_round_pack32__9565__exponent;
    __Vfunc_round_pack32__9565__shifted = __Vfunc_round_pack32__9565__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9565__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9566__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9565__exponent)));
        vlSelf->__Vfunc_shift_jam27__9566__value = __Vfunc_round_pack32__9565__significand;
        __Vfunc_round_pack32__9565__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9566__distance))) {
            vlSelf->__Vfunc_shift_jam27__9566__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9566__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9566__distance))) {
            vlSelf->__Vfunc_shift_jam27__9566__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9566__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9566__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9566__value, (IData)(vlSelf->__Vfunc_shift_jam27__9566__distance)));
            vlSelf->__Vfunc_shift_jam27__9566__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9566__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9566__distance)))));
            vlSelf->__Vfunc_shift_jam27__9566__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9566__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9566__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9566__discarded))));
        }
        __Vfunc_round_pack32__9565__shifted = vlSelf->__Vfunc_shift_jam27__9566__Vfuncout;
    }
    __Vfunc_round_pack32__9565__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9565__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9565__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9565__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9565__rounded)) {
        __Vfunc_round_pack32__9565__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9565__rounded, 1U));
        __Vfunc_round_pack32__9565__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9565__adjusted)));
    }
    __Vfunc_round_pack32__9565__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9565__rounded)) {
        __Vfunc_round_pack32__9565__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9565__adjusted)));
    }
    __Vfunc_round_pack32__9565__Vfuncout = (((0U == __Vfunc_round_pack32__9565__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9565__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9565__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9565__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9565__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9565__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9565__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__111__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9565__Vfuncout;
    __Vfunc_round_pack32__9559__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9559__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9559__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9559__adjusted = __Vfunc_round_pack32__9559__exponent;
    __Vfunc_round_pack32__9559__shifted = __Vfunc_round_pack32__9559__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9559__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9560__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9559__exponent)));
        vlSelf->__Vfunc_shift_jam27__9560__value = __Vfunc_round_pack32__9559__significand;
        __Vfunc_round_pack32__9559__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9560__distance))) {
            vlSelf->__Vfunc_shift_jam27__9560__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9560__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9560__distance))) {
            vlSelf->__Vfunc_shift_jam27__9560__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9560__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9560__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9560__value, (IData)(vlSelf->__Vfunc_shift_jam27__9560__distance)));
            vlSelf->__Vfunc_shift_jam27__9560__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9560__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9560__distance)))));
            vlSelf->__Vfunc_shift_jam27__9560__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9560__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9560__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9560__discarded))));
        }
        __Vfunc_round_pack32__9559__shifted = vlSelf->__Vfunc_shift_jam27__9560__Vfuncout;
    }
    __Vfunc_round_pack32__9559__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9559__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9559__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9559__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9559__rounded)) {
        __Vfunc_round_pack32__9559__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9559__rounded, 1U));
        __Vfunc_round_pack32__9559__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9559__adjusted)));
    }
    __Vfunc_round_pack32__9559__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9559__rounded)) {
        __Vfunc_round_pack32__9559__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9559__adjusted)));
    }
    __Vfunc_round_pack32__9559__Vfuncout = (((0U == __Vfunc_round_pack32__9559__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9559__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9559__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9559__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9559__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9559__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9559__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__110__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9559__Vfuncout;
    __Vfunc_round_pack32__9553__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9553__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9553__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9553__adjusted = __Vfunc_round_pack32__9553__exponent;
    __Vfunc_round_pack32__9553__shifted = __Vfunc_round_pack32__9553__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9553__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9554__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9553__exponent)));
        vlSelf->__Vfunc_shift_jam27__9554__value = __Vfunc_round_pack32__9553__significand;
        __Vfunc_round_pack32__9553__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9554__distance))) {
            vlSelf->__Vfunc_shift_jam27__9554__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9554__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9554__distance))) {
            vlSelf->__Vfunc_shift_jam27__9554__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9554__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9554__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9554__value, (IData)(vlSelf->__Vfunc_shift_jam27__9554__distance)));
            vlSelf->__Vfunc_shift_jam27__9554__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9554__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9554__distance)))));
            vlSelf->__Vfunc_shift_jam27__9554__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9554__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9554__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9554__discarded))));
        }
        __Vfunc_round_pack32__9553__shifted = vlSelf->__Vfunc_shift_jam27__9554__Vfuncout;
    }
    __Vfunc_round_pack32__9553__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9553__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9553__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9553__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9553__rounded)) {
        __Vfunc_round_pack32__9553__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9553__rounded, 1U));
        __Vfunc_round_pack32__9553__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9553__adjusted)));
    }
    __Vfunc_round_pack32__9553__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9553__rounded)) {
        __Vfunc_round_pack32__9553__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9553__adjusted)));
    }
    __Vfunc_round_pack32__9553__Vfuncout = (((0U == __Vfunc_round_pack32__9553__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9553__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9553__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9553__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9553__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9553__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9553__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__109__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9553__Vfuncout;
    __Vfunc_round_pack32__9547__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9547__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9547__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9547__adjusted = __Vfunc_round_pack32__9547__exponent;
    __Vfunc_round_pack32__9547__shifted = __Vfunc_round_pack32__9547__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9547__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9548__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9547__exponent)));
        vlSelf->__Vfunc_shift_jam27__9548__value = __Vfunc_round_pack32__9547__significand;
        __Vfunc_round_pack32__9547__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9548__distance))) {
            vlSelf->__Vfunc_shift_jam27__9548__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9548__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9548__distance))) {
            vlSelf->__Vfunc_shift_jam27__9548__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9548__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9548__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9548__value, (IData)(vlSelf->__Vfunc_shift_jam27__9548__distance)));
            vlSelf->__Vfunc_shift_jam27__9548__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9548__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9548__distance)))));
            vlSelf->__Vfunc_shift_jam27__9548__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9548__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9548__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9548__discarded))));
        }
        __Vfunc_round_pack32__9547__shifted = vlSelf->__Vfunc_shift_jam27__9548__Vfuncout;
    }
    __Vfunc_round_pack32__9547__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9547__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9547__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9547__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9547__rounded)) {
        __Vfunc_round_pack32__9547__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9547__rounded, 1U));
        __Vfunc_round_pack32__9547__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9547__adjusted)));
    }
    __Vfunc_round_pack32__9547__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9547__rounded)) {
        __Vfunc_round_pack32__9547__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9547__adjusted)));
    }
    __Vfunc_round_pack32__9547__Vfuncout = (((0U == __Vfunc_round_pack32__9547__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9547__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9547__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9547__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9547__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9547__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9547__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__108__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9547__Vfuncout;
    __Vfunc_round_pack32__9541__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9541__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9541__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9541__adjusted = __Vfunc_round_pack32__9541__exponent;
    __Vfunc_round_pack32__9541__shifted = __Vfunc_round_pack32__9541__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9541__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9542__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9541__exponent)));
        vlSelf->__Vfunc_shift_jam27__9542__value = __Vfunc_round_pack32__9541__significand;
        __Vfunc_round_pack32__9541__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9542__distance))) {
            vlSelf->__Vfunc_shift_jam27__9542__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9542__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9542__distance))) {
            vlSelf->__Vfunc_shift_jam27__9542__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9542__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9542__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9542__value, (IData)(vlSelf->__Vfunc_shift_jam27__9542__distance)));
            vlSelf->__Vfunc_shift_jam27__9542__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9542__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9542__distance)))));
            vlSelf->__Vfunc_shift_jam27__9542__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9542__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9542__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9542__discarded))));
        }
        __Vfunc_round_pack32__9541__shifted = vlSelf->__Vfunc_shift_jam27__9542__Vfuncout;
    }
    __Vfunc_round_pack32__9541__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9541__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9541__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9541__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9541__rounded)) {
        __Vfunc_round_pack32__9541__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9541__rounded, 1U));
        __Vfunc_round_pack32__9541__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9541__adjusted)));
    }
    __Vfunc_round_pack32__9541__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9541__rounded)) {
        __Vfunc_round_pack32__9541__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9541__adjusted)));
    }
    __Vfunc_round_pack32__9541__Vfuncout = (((0U == __Vfunc_round_pack32__9541__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9541__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9541__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9541__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9541__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9541__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9541__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__107__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9541__Vfuncout;
    __Vfunc_round_pack32__9535__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9535__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9535__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9535__adjusted = __Vfunc_round_pack32__9535__exponent;
    __Vfunc_round_pack32__9535__shifted = __Vfunc_round_pack32__9535__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9535__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9536__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9535__exponent)));
        vlSelf->__Vfunc_shift_jam27__9536__value = __Vfunc_round_pack32__9535__significand;
        __Vfunc_round_pack32__9535__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9536__distance))) {
            vlSelf->__Vfunc_shift_jam27__9536__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9536__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9536__distance))) {
            vlSelf->__Vfunc_shift_jam27__9536__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9536__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9536__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9536__value, (IData)(vlSelf->__Vfunc_shift_jam27__9536__distance)));
            vlSelf->__Vfunc_shift_jam27__9536__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9536__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9536__distance)))));
            vlSelf->__Vfunc_shift_jam27__9536__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9536__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9536__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9536__discarded))));
        }
        __Vfunc_round_pack32__9535__shifted = vlSelf->__Vfunc_shift_jam27__9536__Vfuncout;
    }
    __Vfunc_round_pack32__9535__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9535__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9535__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9535__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9535__rounded)) {
        __Vfunc_round_pack32__9535__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9535__rounded, 1U));
        __Vfunc_round_pack32__9535__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9535__adjusted)));
    }
    __Vfunc_round_pack32__9535__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9535__rounded)) {
        __Vfunc_round_pack32__9535__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9535__adjusted)));
    }
    __Vfunc_round_pack32__9535__Vfuncout = (((0U == __Vfunc_round_pack32__9535__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9535__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9535__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9535__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9535__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9535__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9535__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__106__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9535__Vfuncout;
    __Vfunc_round_pack32__9529__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9529__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9529__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9529__adjusted = __Vfunc_round_pack32__9529__exponent;
    __Vfunc_round_pack32__9529__shifted = __Vfunc_round_pack32__9529__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9529__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9530__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9529__exponent)));
        vlSelf->__Vfunc_shift_jam27__9530__value = __Vfunc_round_pack32__9529__significand;
        __Vfunc_round_pack32__9529__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9530__distance))) {
            vlSelf->__Vfunc_shift_jam27__9530__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9530__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9530__distance))) {
            vlSelf->__Vfunc_shift_jam27__9530__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9530__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9530__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9530__value, (IData)(vlSelf->__Vfunc_shift_jam27__9530__distance)));
            vlSelf->__Vfunc_shift_jam27__9530__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9530__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9530__distance)))));
            vlSelf->__Vfunc_shift_jam27__9530__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9530__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9530__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9530__discarded))));
        }
        __Vfunc_round_pack32__9529__shifted = vlSelf->__Vfunc_shift_jam27__9530__Vfuncout;
    }
    __Vfunc_round_pack32__9529__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9529__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9529__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9529__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9529__rounded)) {
        __Vfunc_round_pack32__9529__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9529__rounded, 1U));
        __Vfunc_round_pack32__9529__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9529__adjusted)));
    }
    __Vfunc_round_pack32__9529__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9529__rounded)) {
        __Vfunc_round_pack32__9529__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9529__adjusted)));
    }
    __Vfunc_round_pack32__9529__Vfuncout = (((0U == __Vfunc_round_pack32__9529__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9529__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9529__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9529__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9529__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9529__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9529__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__105__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9529__Vfuncout;
    __Vfunc_round_pack32__9523__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9523__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9523__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9523__adjusted = __Vfunc_round_pack32__9523__exponent;
    __Vfunc_round_pack32__9523__shifted = __Vfunc_round_pack32__9523__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9523__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9524__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9523__exponent)));
        vlSelf->__Vfunc_shift_jam27__9524__value = __Vfunc_round_pack32__9523__significand;
        __Vfunc_round_pack32__9523__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9524__distance))) {
            vlSelf->__Vfunc_shift_jam27__9524__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9524__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9524__distance))) {
            vlSelf->__Vfunc_shift_jam27__9524__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9524__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9524__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9524__value, (IData)(vlSelf->__Vfunc_shift_jam27__9524__distance)));
            vlSelf->__Vfunc_shift_jam27__9524__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9524__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9524__distance)))));
            vlSelf->__Vfunc_shift_jam27__9524__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9524__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9524__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9524__discarded))));
        }
        __Vfunc_round_pack32__9523__shifted = vlSelf->__Vfunc_shift_jam27__9524__Vfuncout;
    }
    __Vfunc_round_pack32__9523__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9523__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9523__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9523__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9523__rounded)) {
        __Vfunc_round_pack32__9523__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9523__rounded, 1U));
        __Vfunc_round_pack32__9523__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9523__adjusted)));
    }
    __Vfunc_round_pack32__9523__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9523__rounded)) {
        __Vfunc_round_pack32__9523__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9523__adjusted)));
    }
    __Vfunc_round_pack32__9523__Vfuncout = (((0U == __Vfunc_round_pack32__9523__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9523__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9523__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9523__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9523__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9523__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9523__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__104__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9523__Vfuncout;
    __Vfunc_round_pack32__9517__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9517__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9517__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9517__adjusted = __Vfunc_round_pack32__9517__exponent;
    __Vfunc_round_pack32__9517__shifted = __Vfunc_round_pack32__9517__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9517__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9518__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9517__exponent)));
        vlSelf->__Vfunc_shift_jam27__9518__value = __Vfunc_round_pack32__9517__significand;
        __Vfunc_round_pack32__9517__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9518__distance))) {
            vlSelf->__Vfunc_shift_jam27__9518__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9518__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9518__distance))) {
            vlSelf->__Vfunc_shift_jam27__9518__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9518__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9518__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9518__value, (IData)(vlSelf->__Vfunc_shift_jam27__9518__distance)));
            vlSelf->__Vfunc_shift_jam27__9518__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9518__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9518__distance)))));
            vlSelf->__Vfunc_shift_jam27__9518__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9518__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9518__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9518__discarded))));
        }
        __Vfunc_round_pack32__9517__shifted = vlSelf->__Vfunc_shift_jam27__9518__Vfuncout;
    }
    __Vfunc_round_pack32__9517__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9517__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9517__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9517__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9517__rounded)) {
        __Vfunc_round_pack32__9517__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9517__rounded, 1U));
        __Vfunc_round_pack32__9517__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9517__adjusted)));
    }
    __Vfunc_round_pack32__9517__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9517__rounded)) {
        __Vfunc_round_pack32__9517__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9517__adjusted)));
    }
    __Vfunc_round_pack32__9517__Vfuncout = (((0U == __Vfunc_round_pack32__9517__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9517__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9517__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9517__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9517__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9517__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9517__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__103__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9517__Vfuncout;
    __Vfunc_round_pack32__9511__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9511__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9511__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9511__adjusted = __Vfunc_round_pack32__9511__exponent;
    __Vfunc_round_pack32__9511__shifted = __Vfunc_round_pack32__9511__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9511__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9512__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9511__exponent)));
        vlSelf->__Vfunc_shift_jam27__9512__value = __Vfunc_round_pack32__9511__significand;
        __Vfunc_round_pack32__9511__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9512__distance))) {
            vlSelf->__Vfunc_shift_jam27__9512__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9512__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9512__distance))) {
            vlSelf->__Vfunc_shift_jam27__9512__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9512__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9512__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9512__value, (IData)(vlSelf->__Vfunc_shift_jam27__9512__distance)));
            vlSelf->__Vfunc_shift_jam27__9512__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9512__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9512__distance)))));
            vlSelf->__Vfunc_shift_jam27__9512__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9512__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9512__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9512__discarded))));
        }
        __Vfunc_round_pack32__9511__shifted = vlSelf->__Vfunc_shift_jam27__9512__Vfuncout;
    }
    __Vfunc_round_pack32__9511__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9511__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9511__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9511__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9511__rounded)) {
        __Vfunc_round_pack32__9511__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9511__rounded, 1U));
        __Vfunc_round_pack32__9511__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9511__adjusted)));
    }
    __Vfunc_round_pack32__9511__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9511__rounded)) {
        __Vfunc_round_pack32__9511__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9511__adjusted)));
    }
    __Vfunc_round_pack32__9511__Vfuncout = (((0U == __Vfunc_round_pack32__9511__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9511__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9511__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9511__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9511__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9511__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9511__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__102__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9511__Vfuncout;
    __Vfunc_round_pack32__9505__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9505__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9505__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9505__adjusted = __Vfunc_round_pack32__9505__exponent;
    __Vfunc_round_pack32__9505__shifted = __Vfunc_round_pack32__9505__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9505__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9506__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9505__exponent)));
        vlSelf->__Vfunc_shift_jam27__9506__value = __Vfunc_round_pack32__9505__significand;
        __Vfunc_round_pack32__9505__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9506__distance))) {
            vlSelf->__Vfunc_shift_jam27__9506__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9506__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9506__distance))) {
            vlSelf->__Vfunc_shift_jam27__9506__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9506__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9506__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9506__value, (IData)(vlSelf->__Vfunc_shift_jam27__9506__distance)));
            vlSelf->__Vfunc_shift_jam27__9506__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9506__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9506__distance)))));
            vlSelf->__Vfunc_shift_jam27__9506__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9506__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9506__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9506__discarded))));
        }
        __Vfunc_round_pack32__9505__shifted = vlSelf->__Vfunc_shift_jam27__9506__Vfuncout;
    }
    __Vfunc_round_pack32__9505__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9505__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9505__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9505__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9505__rounded)) {
        __Vfunc_round_pack32__9505__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9505__rounded, 1U));
        __Vfunc_round_pack32__9505__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9505__adjusted)));
    }
    __Vfunc_round_pack32__9505__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9505__rounded)) {
        __Vfunc_round_pack32__9505__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9505__adjusted)));
    }
    __Vfunc_round_pack32__9505__Vfuncout = (((0U == __Vfunc_round_pack32__9505__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9505__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9505__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9505__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9505__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9505__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9505__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__101__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9505__Vfuncout;
    __Vfunc_round_pack32__9499__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9499__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9499__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9499__adjusted = __Vfunc_round_pack32__9499__exponent;
    __Vfunc_round_pack32__9499__shifted = __Vfunc_round_pack32__9499__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9499__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9500__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9499__exponent)));
        vlSelf->__Vfunc_shift_jam27__9500__value = __Vfunc_round_pack32__9499__significand;
        __Vfunc_round_pack32__9499__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9500__distance))) {
            vlSelf->__Vfunc_shift_jam27__9500__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9500__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9500__distance))) {
            vlSelf->__Vfunc_shift_jam27__9500__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9500__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9500__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9500__value, (IData)(vlSelf->__Vfunc_shift_jam27__9500__distance)));
            vlSelf->__Vfunc_shift_jam27__9500__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9500__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9500__distance)))));
            vlSelf->__Vfunc_shift_jam27__9500__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9500__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9500__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9500__discarded))));
        }
        __Vfunc_round_pack32__9499__shifted = vlSelf->__Vfunc_shift_jam27__9500__Vfuncout;
    }
    __Vfunc_round_pack32__9499__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9499__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9499__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9499__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9499__rounded)) {
        __Vfunc_round_pack32__9499__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9499__rounded, 1U));
        __Vfunc_round_pack32__9499__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9499__adjusted)));
    }
    __Vfunc_round_pack32__9499__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9499__rounded)) {
        __Vfunc_round_pack32__9499__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9499__adjusted)));
    }
    __Vfunc_round_pack32__9499__Vfuncout = (((0U == __Vfunc_round_pack32__9499__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9499__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9499__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9499__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9499__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9499__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9499__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__100__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9499__Vfuncout;
    __Vfunc_round_pack32__9493__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9493__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9493__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9493__adjusted = __Vfunc_round_pack32__9493__exponent;
    __Vfunc_round_pack32__9493__shifted = __Vfunc_round_pack32__9493__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9493__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9494__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9493__exponent)));
        vlSelf->__Vfunc_shift_jam27__9494__value = __Vfunc_round_pack32__9493__significand;
        __Vfunc_round_pack32__9493__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9494__distance))) {
            vlSelf->__Vfunc_shift_jam27__9494__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9494__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9494__distance))) {
            vlSelf->__Vfunc_shift_jam27__9494__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9494__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9494__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9494__value, (IData)(vlSelf->__Vfunc_shift_jam27__9494__distance)));
            vlSelf->__Vfunc_shift_jam27__9494__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9494__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9494__distance)))));
            vlSelf->__Vfunc_shift_jam27__9494__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9494__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9494__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9494__discarded))));
        }
        __Vfunc_round_pack32__9493__shifted = vlSelf->__Vfunc_shift_jam27__9494__Vfuncout;
    }
    __Vfunc_round_pack32__9493__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9493__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9493__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9493__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9493__rounded)) {
        __Vfunc_round_pack32__9493__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9493__rounded, 1U));
        __Vfunc_round_pack32__9493__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9493__adjusted)));
    }
    __Vfunc_round_pack32__9493__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9493__rounded)) {
        __Vfunc_round_pack32__9493__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9493__adjusted)));
    }
    __Vfunc_round_pack32__9493__Vfuncout = (((0U == __Vfunc_round_pack32__9493__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9493__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9493__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9493__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9493__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9493__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9493__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__99__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9493__Vfuncout;
    __Vfunc_round_pack32__9487__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9487__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9487__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9487__adjusted = __Vfunc_round_pack32__9487__exponent;
    __Vfunc_round_pack32__9487__shifted = __Vfunc_round_pack32__9487__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9487__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9488__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9487__exponent)));
        vlSelf->__Vfunc_shift_jam27__9488__value = __Vfunc_round_pack32__9487__significand;
        __Vfunc_round_pack32__9487__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9488__distance))) {
            vlSelf->__Vfunc_shift_jam27__9488__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9488__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9488__distance))) {
            vlSelf->__Vfunc_shift_jam27__9488__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9488__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9488__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9488__value, (IData)(vlSelf->__Vfunc_shift_jam27__9488__distance)));
            vlSelf->__Vfunc_shift_jam27__9488__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9488__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9488__distance)))));
            vlSelf->__Vfunc_shift_jam27__9488__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9488__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9488__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9488__discarded))));
        }
        __Vfunc_round_pack32__9487__shifted = vlSelf->__Vfunc_shift_jam27__9488__Vfuncout;
    }
    __Vfunc_round_pack32__9487__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9487__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9487__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9487__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9487__rounded)) {
        __Vfunc_round_pack32__9487__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9487__rounded, 1U));
        __Vfunc_round_pack32__9487__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9487__adjusted)));
    }
    __Vfunc_round_pack32__9487__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9487__rounded)) {
        __Vfunc_round_pack32__9487__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9487__adjusted)));
    }
    vlSelf->__Vfunc_round_pack32__9487__Vfuncout = 
        (((0U == __Vfunc_round_pack32__9487__significand) 
          | (0U == __Vfunc_round_pack32__9487__rounded))
          ? ((QData)((IData)(__Vfunc_round_pack32__9487__negative)) 
             << 0x1fU) : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9487__adjusted))
                           ? 0x100000000ULL : (((QData)((IData)(__Vfunc_round_pack32__9487__negative)) 
                                                << 0x1fU) 
                                               | (QData)((IData)(
                                                                 (((IData)(__Vfunc_round_pack32__9487__biased) 
                                                                   << 0x17U) 
                                                                  | (0x7fffffU 
                                                                     & __Vfunc_round_pack32__9487__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__98__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = vlSelf->__Vfunc_round_pack32__9487__Vfuncout;
    __Vfunc_round_pack32__9481__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9481__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9481__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9481__adjusted = __Vfunc_round_pack32__9481__exponent;
    __Vfunc_round_pack32__9481__shifted = __Vfunc_round_pack32__9481__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9481__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9482__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9481__exponent)));
        vlSelf->__Vfunc_shift_jam27__9482__value = __Vfunc_round_pack32__9481__significand;
        __Vfunc_round_pack32__9481__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9482__distance))) {
            vlSelf->__Vfunc_shift_jam27__9482__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9482__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9482__distance))) {
            vlSelf->__Vfunc_shift_jam27__9482__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9482__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9482__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9482__value, (IData)(vlSelf->__Vfunc_shift_jam27__9482__distance)));
            vlSelf->__Vfunc_shift_jam27__9482__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9482__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9482__distance)))));
            vlSelf->__Vfunc_shift_jam27__9482__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9482__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9482__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9482__discarded))));
        }
        __Vfunc_round_pack32__9481__shifted = vlSelf->__Vfunc_shift_jam27__9482__Vfuncout;
    }
    __Vfunc_round_pack32__9481__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9481__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9481__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9481__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9481__rounded)) {
        __Vfunc_round_pack32__9481__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9481__rounded, 1U));
        __Vfunc_round_pack32__9481__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9481__adjusted)));
    }
    __Vfunc_round_pack32__9481__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9481__rounded)) {
        __Vfunc_round_pack32__9481__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9481__adjusted)));
    }
    __Vfunc_round_pack32__9481__Vfuncout = (((0U == __Vfunc_round_pack32__9481__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9481__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9481__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9481__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9481__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9481__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9481__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__97__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9481__Vfuncout;
    __Vfunc_round_pack32__9475__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9475__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9475__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9475__adjusted = __Vfunc_round_pack32__9475__exponent;
    __Vfunc_round_pack32__9475__shifted = __Vfunc_round_pack32__9475__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9475__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9476__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9475__exponent)));
        vlSelf->__Vfunc_shift_jam27__9476__value = __Vfunc_round_pack32__9475__significand;
        __Vfunc_round_pack32__9475__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9476__distance))) {
            vlSelf->__Vfunc_shift_jam27__9476__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9476__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9476__distance))) {
            vlSelf->__Vfunc_shift_jam27__9476__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9476__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9476__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9476__value, (IData)(vlSelf->__Vfunc_shift_jam27__9476__distance)));
            vlSelf->__Vfunc_shift_jam27__9476__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9476__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9476__distance)))));
            vlSelf->__Vfunc_shift_jam27__9476__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9476__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9476__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9476__discarded))));
        }
        __Vfunc_round_pack32__9475__shifted = vlSelf->__Vfunc_shift_jam27__9476__Vfuncout;
    }
    __Vfunc_round_pack32__9475__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9475__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9475__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9475__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9475__rounded)) {
        __Vfunc_round_pack32__9475__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9475__rounded, 1U));
        __Vfunc_round_pack32__9475__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9475__adjusted)));
    }
    __Vfunc_round_pack32__9475__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9475__rounded)) {
        __Vfunc_round_pack32__9475__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9475__adjusted)));
    }
    __Vfunc_round_pack32__9475__Vfuncout = (((0U == __Vfunc_round_pack32__9475__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9475__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9475__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9475__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9475__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9475__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9475__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__96__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9475__Vfuncout;
    __Vfunc_round_pack32__9469__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9469__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9469__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9469__adjusted = __Vfunc_round_pack32__9469__exponent;
    __Vfunc_round_pack32__9469__shifted = __Vfunc_round_pack32__9469__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9469__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9470__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9469__exponent)));
        vlSelf->__Vfunc_shift_jam27__9470__value = __Vfunc_round_pack32__9469__significand;
        __Vfunc_round_pack32__9469__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9470__distance))) {
            vlSelf->__Vfunc_shift_jam27__9470__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9470__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9470__distance))) {
            vlSelf->__Vfunc_shift_jam27__9470__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9470__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9470__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9470__value, (IData)(vlSelf->__Vfunc_shift_jam27__9470__distance)));
            vlSelf->__Vfunc_shift_jam27__9470__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9470__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9470__distance)))));
            vlSelf->__Vfunc_shift_jam27__9470__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9470__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9470__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9470__discarded))));
        }
        __Vfunc_round_pack32__9469__shifted = vlSelf->__Vfunc_shift_jam27__9470__Vfuncout;
    }
    __Vfunc_round_pack32__9469__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9469__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9469__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9469__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9469__rounded)) {
        __Vfunc_round_pack32__9469__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9469__rounded, 1U));
        __Vfunc_round_pack32__9469__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9469__adjusted)));
    }
    __Vfunc_round_pack32__9469__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9469__rounded)) {
        __Vfunc_round_pack32__9469__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9469__adjusted)));
    }
    __Vfunc_round_pack32__9469__Vfuncout = (((0U == __Vfunc_round_pack32__9469__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9469__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9469__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9469__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9469__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9469__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9469__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__95__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9469__Vfuncout;
    __Vfunc_round_pack32__9463__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9463__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9463__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9463__adjusted = __Vfunc_round_pack32__9463__exponent;
    __Vfunc_round_pack32__9463__shifted = __Vfunc_round_pack32__9463__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9463__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9464__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9463__exponent)));
        vlSelf->__Vfunc_shift_jam27__9464__value = __Vfunc_round_pack32__9463__significand;
        __Vfunc_round_pack32__9463__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9464__distance))) {
            vlSelf->__Vfunc_shift_jam27__9464__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9464__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9464__distance))) {
            vlSelf->__Vfunc_shift_jam27__9464__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9464__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9464__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9464__value, (IData)(vlSelf->__Vfunc_shift_jam27__9464__distance)));
            vlSelf->__Vfunc_shift_jam27__9464__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9464__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9464__distance)))));
            vlSelf->__Vfunc_shift_jam27__9464__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9464__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9464__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9464__discarded))));
        }
        __Vfunc_round_pack32__9463__shifted = vlSelf->__Vfunc_shift_jam27__9464__Vfuncout;
    }
    __Vfunc_round_pack32__9463__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9463__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9463__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9463__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9463__rounded)) {
        __Vfunc_round_pack32__9463__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9463__rounded, 1U));
        __Vfunc_round_pack32__9463__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9463__adjusted)));
    }
    __Vfunc_round_pack32__9463__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9463__rounded)) {
        __Vfunc_round_pack32__9463__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9463__adjusted)));
    }
    __Vfunc_round_pack32__9463__Vfuncout = (((0U == __Vfunc_round_pack32__9463__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9463__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9463__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9463__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9463__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9463__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9463__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__94__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9463__Vfuncout;
    __Vfunc_round_pack32__9457__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9457__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9457__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9457__adjusted = __Vfunc_round_pack32__9457__exponent;
    __Vfunc_round_pack32__9457__shifted = __Vfunc_round_pack32__9457__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9457__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9458__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9457__exponent)));
        vlSelf->__Vfunc_shift_jam27__9458__value = __Vfunc_round_pack32__9457__significand;
        __Vfunc_round_pack32__9457__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9458__distance))) {
            vlSelf->__Vfunc_shift_jam27__9458__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9458__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9458__distance))) {
            vlSelf->__Vfunc_shift_jam27__9458__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9458__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9458__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9458__value, (IData)(vlSelf->__Vfunc_shift_jam27__9458__distance)));
            vlSelf->__Vfunc_shift_jam27__9458__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9458__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9458__distance)))));
            vlSelf->__Vfunc_shift_jam27__9458__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9458__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9458__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9458__discarded))));
        }
        __Vfunc_round_pack32__9457__shifted = vlSelf->__Vfunc_shift_jam27__9458__Vfuncout;
    }
    __Vfunc_round_pack32__9457__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9457__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9457__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9457__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9457__rounded)) {
        __Vfunc_round_pack32__9457__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9457__rounded, 1U));
        __Vfunc_round_pack32__9457__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9457__adjusted)));
    }
    __Vfunc_round_pack32__9457__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9457__rounded)) {
        __Vfunc_round_pack32__9457__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9457__adjusted)));
    }
    __Vfunc_round_pack32__9457__Vfuncout = (((0U == __Vfunc_round_pack32__9457__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9457__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9457__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9457__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9457__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9457__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9457__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__93__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9457__Vfuncout;
    __Vfunc_round_pack32__9451__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9451__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9451__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9451__adjusted = __Vfunc_round_pack32__9451__exponent;
    __Vfunc_round_pack32__9451__shifted = __Vfunc_round_pack32__9451__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9451__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9452__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9451__exponent)));
        vlSelf->__Vfunc_shift_jam27__9452__value = __Vfunc_round_pack32__9451__significand;
        __Vfunc_round_pack32__9451__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9452__distance))) {
            vlSelf->__Vfunc_shift_jam27__9452__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9452__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9452__distance))) {
            vlSelf->__Vfunc_shift_jam27__9452__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9452__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9452__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9452__value, (IData)(vlSelf->__Vfunc_shift_jam27__9452__distance)));
            vlSelf->__Vfunc_shift_jam27__9452__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9452__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9452__distance)))));
            vlSelf->__Vfunc_shift_jam27__9452__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9452__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9452__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9452__discarded))));
        }
        __Vfunc_round_pack32__9451__shifted = vlSelf->__Vfunc_shift_jam27__9452__Vfuncout;
    }
    __Vfunc_round_pack32__9451__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9451__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9451__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9451__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9451__rounded)) {
        __Vfunc_round_pack32__9451__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9451__rounded, 1U));
        __Vfunc_round_pack32__9451__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9451__adjusted)));
    }
    __Vfunc_round_pack32__9451__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9451__rounded)) {
        __Vfunc_round_pack32__9451__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9451__adjusted)));
    }
    __Vfunc_round_pack32__9451__Vfuncout = (((0U == __Vfunc_round_pack32__9451__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9451__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9451__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9451__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9451__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9451__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9451__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__92__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9451__Vfuncout;
    __Vfunc_round_pack32__9445__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9445__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9445__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9445__adjusted = __Vfunc_round_pack32__9445__exponent;
    __Vfunc_round_pack32__9445__shifted = __Vfunc_round_pack32__9445__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9445__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9446__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9445__exponent)));
        vlSelf->__Vfunc_shift_jam27__9446__value = __Vfunc_round_pack32__9445__significand;
        __Vfunc_round_pack32__9445__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9446__distance))) {
            vlSelf->__Vfunc_shift_jam27__9446__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9446__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9446__distance))) {
            vlSelf->__Vfunc_shift_jam27__9446__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9446__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9446__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9446__value, (IData)(vlSelf->__Vfunc_shift_jam27__9446__distance)));
            vlSelf->__Vfunc_shift_jam27__9446__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9446__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9446__distance)))));
            vlSelf->__Vfunc_shift_jam27__9446__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9446__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9446__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9446__discarded))));
        }
        __Vfunc_round_pack32__9445__shifted = vlSelf->__Vfunc_shift_jam27__9446__Vfuncout;
    }
    __Vfunc_round_pack32__9445__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9445__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9445__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9445__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9445__rounded)) {
        __Vfunc_round_pack32__9445__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9445__rounded, 1U));
        __Vfunc_round_pack32__9445__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9445__adjusted)));
    }
    __Vfunc_round_pack32__9445__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9445__rounded)) {
        __Vfunc_round_pack32__9445__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9445__adjusted)));
    }
    __Vfunc_round_pack32__9445__Vfuncout = (((0U == __Vfunc_round_pack32__9445__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9445__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9445__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9445__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9445__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9445__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9445__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__91__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9445__Vfuncout;
    __Vfunc_round_pack32__9439__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9439__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9439__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9439__adjusted = __Vfunc_round_pack32__9439__exponent;
    __Vfunc_round_pack32__9439__shifted = __Vfunc_round_pack32__9439__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9439__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9440__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9439__exponent)));
        vlSelf->__Vfunc_shift_jam27__9440__value = __Vfunc_round_pack32__9439__significand;
        __Vfunc_round_pack32__9439__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9440__distance))) {
            vlSelf->__Vfunc_shift_jam27__9440__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9440__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9440__distance))) {
            vlSelf->__Vfunc_shift_jam27__9440__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9440__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9440__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9440__value, (IData)(vlSelf->__Vfunc_shift_jam27__9440__distance)));
            vlSelf->__Vfunc_shift_jam27__9440__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9440__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9440__distance)))));
            vlSelf->__Vfunc_shift_jam27__9440__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9440__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9440__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9440__discarded))));
        }
        __Vfunc_round_pack32__9439__shifted = vlSelf->__Vfunc_shift_jam27__9440__Vfuncout;
    }
    __Vfunc_round_pack32__9439__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9439__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9439__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9439__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9439__rounded)) {
        __Vfunc_round_pack32__9439__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9439__rounded, 1U));
        __Vfunc_round_pack32__9439__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9439__adjusted)));
    }
    __Vfunc_round_pack32__9439__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9439__rounded)) {
        __Vfunc_round_pack32__9439__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9439__adjusted)));
    }
    __Vfunc_round_pack32__9439__Vfuncout = (((0U == __Vfunc_round_pack32__9439__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9439__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9439__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9439__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9439__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9439__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9439__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__90__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9439__Vfuncout;
    __Vfunc_round_pack32__9433__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9433__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9433__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9433__adjusted = __Vfunc_round_pack32__9433__exponent;
    __Vfunc_round_pack32__9433__shifted = __Vfunc_round_pack32__9433__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9433__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9434__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9433__exponent)));
        vlSelf->__Vfunc_shift_jam27__9434__value = __Vfunc_round_pack32__9433__significand;
        __Vfunc_round_pack32__9433__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9434__distance))) {
            vlSelf->__Vfunc_shift_jam27__9434__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9434__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9434__distance))) {
            vlSelf->__Vfunc_shift_jam27__9434__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9434__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9434__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9434__value, (IData)(vlSelf->__Vfunc_shift_jam27__9434__distance)));
            vlSelf->__Vfunc_shift_jam27__9434__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9434__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9434__distance)))));
            vlSelf->__Vfunc_shift_jam27__9434__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9434__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9434__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9434__discarded))));
        }
        __Vfunc_round_pack32__9433__shifted = vlSelf->__Vfunc_shift_jam27__9434__Vfuncout;
    }
    __Vfunc_round_pack32__9433__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9433__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9433__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9433__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9433__rounded)) {
        __Vfunc_round_pack32__9433__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9433__rounded, 1U));
        __Vfunc_round_pack32__9433__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9433__adjusted)));
    }
    __Vfunc_round_pack32__9433__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9433__rounded)) {
        __Vfunc_round_pack32__9433__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9433__adjusted)));
    }
    __Vfunc_round_pack32__9433__Vfuncout = (((0U == __Vfunc_round_pack32__9433__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9433__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9433__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9433__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9433__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9433__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9433__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__89__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9433__Vfuncout;
    __Vfunc_round_pack32__9427__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9427__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9427__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9427__adjusted = __Vfunc_round_pack32__9427__exponent;
    __Vfunc_round_pack32__9427__shifted = __Vfunc_round_pack32__9427__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9427__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9428__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9427__exponent)));
        vlSelf->__Vfunc_shift_jam27__9428__value = __Vfunc_round_pack32__9427__significand;
        __Vfunc_round_pack32__9427__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9428__distance))) {
            vlSelf->__Vfunc_shift_jam27__9428__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9428__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9428__distance))) {
            vlSelf->__Vfunc_shift_jam27__9428__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9428__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9428__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9428__value, (IData)(vlSelf->__Vfunc_shift_jam27__9428__distance)));
            vlSelf->__Vfunc_shift_jam27__9428__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9428__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9428__distance)))));
            vlSelf->__Vfunc_shift_jam27__9428__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9428__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9428__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9428__discarded))));
        }
        __Vfunc_round_pack32__9427__shifted = vlSelf->__Vfunc_shift_jam27__9428__Vfuncout;
    }
    __Vfunc_round_pack32__9427__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9427__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9427__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9427__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9427__rounded)) {
        __Vfunc_round_pack32__9427__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9427__rounded, 1U));
        __Vfunc_round_pack32__9427__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9427__adjusted)));
    }
    __Vfunc_round_pack32__9427__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9427__rounded)) {
        __Vfunc_round_pack32__9427__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9427__adjusted)));
    }
    __Vfunc_round_pack32__9427__Vfuncout = (((0U == __Vfunc_round_pack32__9427__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9427__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9427__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9427__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9427__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9427__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9427__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__88__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9427__Vfuncout;
    __Vfunc_round_pack32__9421__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9421__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9421__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9421__adjusted = __Vfunc_round_pack32__9421__exponent;
    __Vfunc_round_pack32__9421__shifted = __Vfunc_round_pack32__9421__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9421__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9422__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9421__exponent)));
        vlSelf->__Vfunc_shift_jam27__9422__value = __Vfunc_round_pack32__9421__significand;
        __Vfunc_round_pack32__9421__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9422__distance))) {
            vlSelf->__Vfunc_shift_jam27__9422__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9422__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9422__distance))) {
            vlSelf->__Vfunc_shift_jam27__9422__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9422__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9422__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9422__value, (IData)(vlSelf->__Vfunc_shift_jam27__9422__distance)));
            vlSelf->__Vfunc_shift_jam27__9422__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9422__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9422__distance)))));
            vlSelf->__Vfunc_shift_jam27__9422__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9422__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9422__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9422__discarded))));
        }
        __Vfunc_round_pack32__9421__shifted = vlSelf->__Vfunc_shift_jam27__9422__Vfuncout;
    }
    __Vfunc_round_pack32__9421__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9421__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9421__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9421__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9421__rounded)) {
        __Vfunc_round_pack32__9421__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9421__rounded, 1U));
        __Vfunc_round_pack32__9421__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9421__adjusted)));
    }
    __Vfunc_round_pack32__9421__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9421__rounded)) {
        __Vfunc_round_pack32__9421__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9421__adjusted)));
    }
    __Vfunc_round_pack32__9421__Vfuncout = (((0U == __Vfunc_round_pack32__9421__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9421__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9421__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9421__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9421__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9421__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9421__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__87__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9421__Vfuncout;
    __Vfunc_round_pack32__9415__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9415__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9415__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9415__adjusted = __Vfunc_round_pack32__9415__exponent;
    __Vfunc_round_pack32__9415__shifted = __Vfunc_round_pack32__9415__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9415__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9416__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9415__exponent)));
        vlSelf->__Vfunc_shift_jam27__9416__value = __Vfunc_round_pack32__9415__significand;
        __Vfunc_round_pack32__9415__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9416__distance))) {
            vlSelf->__Vfunc_shift_jam27__9416__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9416__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9416__distance))) {
            vlSelf->__Vfunc_shift_jam27__9416__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9416__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9416__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9416__value, (IData)(vlSelf->__Vfunc_shift_jam27__9416__distance)));
            vlSelf->__Vfunc_shift_jam27__9416__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9416__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9416__distance)))));
            vlSelf->__Vfunc_shift_jam27__9416__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9416__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9416__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9416__discarded))));
        }
        __Vfunc_round_pack32__9415__shifted = vlSelf->__Vfunc_shift_jam27__9416__Vfuncout;
    }
    __Vfunc_round_pack32__9415__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9415__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9415__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9415__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9415__rounded)) {
        __Vfunc_round_pack32__9415__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9415__rounded, 1U));
        __Vfunc_round_pack32__9415__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9415__adjusted)));
    }
    __Vfunc_round_pack32__9415__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9415__rounded)) {
        __Vfunc_round_pack32__9415__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9415__adjusted)));
    }
    __Vfunc_round_pack32__9415__Vfuncout = (((0U == __Vfunc_round_pack32__9415__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9415__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9415__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9415__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9415__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9415__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9415__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__86__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9415__Vfuncout;
    __Vfunc_round_pack32__9409__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9409__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9409__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9409__adjusted = __Vfunc_round_pack32__9409__exponent;
    __Vfunc_round_pack32__9409__shifted = __Vfunc_round_pack32__9409__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9409__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9410__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9409__exponent)));
        vlSelf->__Vfunc_shift_jam27__9410__value = __Vfunc_round_pack32__9409__significand;
        __Vfunc_round_pack32__9409__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9410__distance))) {
            vlSelf->__Vfunc_shift_jam27__9410__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9410__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9410__distance))) {
            vlSelf->__Vfunc_shift_jam27__9410__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9410__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9410__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9410__value, (IData)(vlSelf->__Vfunc_shift_jam27__9410__distance)));
            vlSelf->__Vfunc_shift_jam27__9410__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9410__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9410__distance)))));
            vlSelf->__Vfunc_shift_jam27__9410__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9410__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9410__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9410__discarded))));
        }
        __Vfunc_round_pack32__9409__shifted = vlSelf->__Vfunc_shift_jam27__9410__Vfuncout;
    }
    __Vfunc_round_pack32__9409__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9409__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9409__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9409__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9409__rounded)) {
        __Vfunc_round_pack32__9409__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9409__rounded, 1U));
        __Vfunc_round_pack32__9409__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9409__adjusted)));
    }
    __Vfunc_round_pack32__9409__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9409__rounded)) {
        __Vfunc_round_pack32__9409__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9409__adjusted)));
    }
    __Vfunc_round_pack32__9409__Vfuncout = (((0U == __Vfunc_round_pack32__9409__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9409__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9409__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9409__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9409__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9409__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9409__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__85__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9409__Vfuncout;
    __Vfunc_round_pack32__9403__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9403__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9403__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9403__adjusted = __Vfunc_round_pack32__9403__exponent;
    __Vfunc_round_pack32__9403__shifted = __Vfunc_round_pack32__9403__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9403__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9404__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9403__exponent)));
        vlSelf->__Vfunc_shift_jam27__9404__value = __Vfunc_round_pack32__9403__significand;
        __Vfunc_round_pack32__9403__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9404__distance))) {
            vlSelf->__Vfunc_shift_jam27__9404__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9404__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9404__distance))) {
            vlSelf->__Vfunc_shift_jam27__9404__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9404__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9404__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9404__value, (IData)(vlSelf->__Vfunc_shift_jam27__9404__distance)));
            vlSelf->__Vfunc_shift_jam27__9404__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9404__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9404__distance)))));
            vlSelf->__Vfunc_shift_jam27__9404__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9404__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9404__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9404__discarded))));
        }
        __Vfunc_round_pack32__9403__shifted = vlSelf->__Vfunc_shift_jam27__9404__Vfuncout;
    }
    __Vfunc_round_pack32__9403__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9403__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9403__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9403__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9403__rounded)) {
        __Vfunc_round_pack32__9403__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9403__rounded, 1U));
        __Vfunc_round_pack32__9403__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9403__adjusted)));
    }
    __Vfunc_round_pack32__9403__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9403__rounded)) {
        __Vfunc_round_pack32__9403__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9403__adjusted)));
    }
    __Vfunc_round_pack32__9403__Vfuncout = (((0U == __Vfunc_round_pack32__9403__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9403__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9403__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9403__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9403__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9403__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9403__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__84__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9403__Vfuncout;
    __Vfunc_round_pack32__9397__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9397__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9397__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9397__adjusted = __Vfunc_round_pack32__9397__exponent;
    __Vfunc_round_pack32__9397__shifted = __Vfunc_round_pack32__9397__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9397__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9398__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9397__exponent)));
        vlSelf->__Vfunc_shift_jam27__9398__value = __Vfunc_round_pack32__9397__significand;
        __Vfunc_round_pack32__9397__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9398__distance))) {
            vlSelf->__Vfunc_shift_jam27__9398__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9398__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9398__distance))) {
            vlSelf->__Vfunc_shift_jam27__9398__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9398__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9398__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9398__value, (IData)(vlSelf->__Vfunc_shift_jam27__9398__distance)));
            vlSelf->__Vfunc_shift_jam27__9398__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9398__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9398__distance)))));
            vlSelf->__Vfunc_shift_jam27__9398__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9398__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9398__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9398__discarded))));
        }
        __Vfunc_round_pack32__9397__shifted = vlSelf->__Vfunc_shift_jam27__9398__Vfuncout;
    }
    __Vfunc_round_pack32__9397__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9397__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9397__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9397__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9397__rounded)) {
        __Vfunc_round_pack32__9397__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9397__rounded, 1U));
        __Vfunc_round_pack32__9397__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9397__adjusted)));
    }
    __Vfunc_round_pack32__9397__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9397__rounded)) {
        __Vfunc_round_pack32__9397__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9397__adjusted)));
    }
    __Vfunc_round_pack32__9397__Vfuncout = (((0U == __Vfunc_round_pack32__9397__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9397__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9397__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9397__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9397__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9397__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9397__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__83__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9397__Vfuncout;
    __Vfunc_round_pack32__9391__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9391__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9391__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9391__adjusted = __Vfunc_round_pack32__9391__exponent;
    __Vfunc_round_pack32__9391__shifted = __Vfunc_round_pack32__9391__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9391__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9392__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9391__exponent)));
        vlSelf->__Vfunc_shift_jam27__9392__value = __Vfunc_round_pack32__9391__significand;
        __Vfunc_round_pack32__9391__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9392__distance))) {
            vlSelf->__Vfunc_shift_jam27__9392__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9392__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9392__distance))) {
            vlSelf->__Vfunc_shift_jam27__9392__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9392__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9392__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9392__value, (IData)(vlSelf->__Vfunc_shift_jam27__9392__distance)));
            vlSelf->__Vfunc_shift_jam27__9392__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9392__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9392__distance)))));
            vlSelf->__Vfunc_shift_jam27__9392__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9392__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9392__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9392__discarded))));
        }
        __Vfunc_round_pack32__9391__shifted = vlSelf->__Vfunc_shift_jam27__9392__Vfuncout;
    }
    __Vfunc_round_pack32__9391__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9391__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9391__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9391__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9391__rounded)) {
        __Vfunc_round_pack32__9391__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9391__rounded, 1U));
        __Vfunc_round_pack32__9391__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9391__adjusted)));
    }
    __Vfunc_round_pack32__9391__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9391__rounded)) {
        __Vfunc_round_pack32__9391__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9391__adjusted)));
    }
    __Vfunc_round_pack32__9391__Vfuncout = (((0U == __Vfunc_round_pack32__9391__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9391__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9391__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9391__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9391__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9391__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9391__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__82__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9391__Vfuncout;
    __Vfunc_round_pack32__9385__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9385__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9385__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9385__adjusted = __Vfunc_round_pack32__9385__exponent;
    __Vfunc_round_pack32__9385__shifted = __Vfunc_round_pack32__9385__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9385__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9386__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9385__exponent)));
        vlSelf->__Vfunc_shift_jam27__9386__value = __Vfunc_round_pack32__9385__significand;
        __Vfunc_round_pack32__9385__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9386__distance))) {
            vlSelf->__Vfunc_shift_jam27__9386__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9386__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9386__distance))) {
            vlSelf->__Vfunc_shift_jam27__9386__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9386__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9386__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9386__value, (IData)(vlSelf->__Vfunc_shift_jam27__9386__distance)));
            vlSelf->__Vfunc_shift_jam27__9386__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9386__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9386__distance)))));
            vlSelf->__Vfunc_shift_jam27__9386__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9386__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9386__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9386__discarded))));
        }
        __Vfunc_round_pack32__9385__shifted = vlSelf->__Vfunc_shift_jam27__9386__Vfuncout;
    }
    __Vfunc_round_pack32__9385__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9385__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9385__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9385__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9385__rounded)) {
        __Vfunc_round_pack32__9385__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9385__rounded, 1U));
        __Vfunc_round_pack32__9385__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9385__adjusted)));
    }
    __Vfunc_round_pack32__9385__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9385__rounded)) {
        __Vfunc_round_pack32__9385__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9385__adjusted)));
    }
    __Vfunc_round_pack32__9385__Vfuncout = (((0U == __Vfunc_round_pack32__9385__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9385__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9385__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9385__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9385__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9385__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9385__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__81__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9385__Vfuncout;
    __Vfunc_round_pack32__9379__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9379__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9379__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9379__adjusted = __Vfunc_round_pack32__9379__exponent;
    __Vfunc_round_pack32__9379__shifted = __Vfunc_round_pack32__9379__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9379__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9380__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9379__exponent)));
        vlSelf->__Vfunc_shift_jam27__9380__value = __Vfunc_round_pack32__9379__significand;
        __Vfunc_round_pack32__9379__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9380__distance))) {
            vlSelf->__Vfunc_shift_jam27__9380__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9380__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9380__distance))) {
            vlSelf->__Vfunc_shift_jam27__9380__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9380__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9380__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9380__value, (IData)(vlSelf->__Vfunc_shift_jam27__9380__distance)));
            vlSelf->__Vfunc_shift_jam27__9380__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9380__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9380__distance)))));
            vlSelf->__Vfunc_shift_jam27__9380__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9380__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9380__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9380__discarded))));
        }
        __Vfunc_round_pack32__9379__shifted = vlSelf->__Vfunc_shift_jam27__9380__Vfuncout;
    }
    __Vfunc_round_pack32__9379__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9379__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9379__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9379__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9379__rounded)) {
        __Vfunc_round_pack32__9379__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9379__rounded, 1U));
        __Vfunc_round_pack32__9379__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9379__adjusted)));
    }
    __Vfunc_round_pack32__9379__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9379__rounded)) {
        __Vfunc_round_pack32__9379__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9379__adjusted)));
    }
    __Vfunc_round_pack32__9379__Vfuncout = (((0U == __Vfunc_round_pack32__9379__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9379__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9379__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9379__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9379__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9379__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9379__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__80__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9379__Vfuncout;
    __Vfunc_round_pack32__9373__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9373__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9373__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9373__adjusted = __Vfunc_round_pack32__9373__exponent;
    __Vfunc_round_pack32__9373__shifted = __Vfunc_round_pack32__9373__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9373__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9374__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9373__exponent)));
        vlSelf->__Vfunc_shift_jam27__9374__value = __Vfunc_round_pack32__9373__significand;
        __Vfunc_round_pack32__9373__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9374__distance))) {
            vlSelf->__Vfunc_shift_jam27__9374__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9374__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9374__distance))) {
            vlSelf->__Vfunc_shift_jam27__9374__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9374__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9374__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9374__value, (IData)(vlSelf->__Vfunc_shift_jam27__9374__distance)));
            vlSelf->__Vfunc_shift_jam27__9374__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9374__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9374__distance)))));
            vlSelf->__Vfunc_shift_jam27__9374__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9374__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9374__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9374__discarded))));
        }
        __Vfunc_round_pack32__9373__shifted = vlSelf->__Vfunc_shift_jam27__9374__Vfuncout;
    }
    __Vfunc_round_pack32__9373__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9373__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9373__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9373__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9373__rounded)) {
        __Vfunc_round_pack32__9373__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9373__rounded, 1U));
        __Vfunc_round_pack32__9373__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9373__adjusted)));
    }
    __Vfunc_round_pack32__9373__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9373__rounded)) {
        __Vfunc_round_pack32__9373__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9373__adjusted)));
    }
    __Vfunc_round_pack32__9373__Vfuncout = (((0U == __Vfunc_round_pack32__9373__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9373__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9373__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9373__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9373__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9373__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9373__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__79__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9373__Vfuncout;
    __Vfunc_round_pack32__9367__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9367__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9367__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9367__adjusted = __Vfunc_round_pack32__9367__exponent;
    __Vfunc_round_pack32__9367__shifted = __Vfunc_round_pack32__9367__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9367__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9368__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9367__exponent)));
        vlSelf->__Vfunc_shift_jam27__9368__value = __Vfunc_round_pack32__9367__significand;
        __Vfunc_round_pack32__9367__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9368__distance))) {
            vlSelf->__Vfunc_shift_jam27__9368__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9368__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9368__distance))) {
            vlSelf->__Vfunc_shift_jam27__9368__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9368__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9368__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9368__value, (IData)(vlSelf->__Vfunc_shift_jam27__9368__distance)));
            vlSelf->__Vfunc_shift_jam27__9368__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9368__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9368__distance)))));
            vlSelf->__Vfunc_shift_jam27__9368__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9368__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9368__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9368__discarded))));
        }
        __Vfunc_round_pack32__9367__shifted = vlSelf->__Vfunc_shift_jam27__9368__Vfuncout;
    }
    __Vfunc_round_pack32__9367__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9367__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9367__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9367__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9367__rounded)) {
        __Vfunc_round_pack32__9367__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9367__rounded, 1U));
        __Vfunc_round_pack32__9367__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9367__adjusted)));
    }
    __Vfunc_round_pack32__9367__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9367__rounded)) {
        __Vfunc_round_pack32__9367__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9367__adjusted)));
    }
    __Vfunc_round_pack32__9367__Vfuncout = (((0U == __Vfunc_round_pack32__9367__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9367__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9367__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9367__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9367__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9367__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9367__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__78__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9367__Vfuncout;
    __Vfunc_round_pack32__9361__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9361__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9361__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9361__adjusted = __Vfunc_round_pack32__9361__exponent;
    __Vfunc_round_pack32__9361__shifted = __Vfunc_round_pack32__9361__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9361__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9362__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9361__exponent)));
        vlSelf->__Vfunc_shift_jam27__9362__value = __Vfunc_round_pack32__9361__significand;
        __Vfunc_round_pack32__9361__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9362__distance))) {
            vlSelf->__Vfunc_shift_jam27__9362__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9362__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9362__distance))) {
            vlSelf->__Vfunc_shift_jam27__9362__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9362__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9362__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9362__value, (IData)(vlSelf->__Vfunc_shift_jam27__9362__distance)));
            vlSelf->__Vfunc_shift_jam27__9362__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9362__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9362__distance)))));
            vlSelf->__Vfunc_shift_jam27__9362__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9362__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9362__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9362__discarded))));
        }
        __Vfunc_round_pack32__9361__shifted = vlSelf->__Vfunc_shift_jam27__9362__Vfuncout;
    }
    __Vfunc_round_pack32__9361__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9361__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9361__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9361__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9361__rounded)) {
        __Vfunc_round_pack32__9361__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9361__rounded, 1U));
        __Vfunc_round_pack32__9361__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9361__adjusted)));
    }
    __Vfunc_round_pack32__9361__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9361__rounded)) {
        __Vfunc_round_pack32__9361__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9361__adjusted)));
    }
    __Vfunc_round_pack32__9361__Vfuncout = (((0U == __Vfunc_round_pack32__9361__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9361__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9361__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9361__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9361__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9361__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9361__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__77__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9361__Vfuncout;
    __Vfunc_round_pack32__9355__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9355__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9355__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9355__adjusted = __Vfunc_round_pack32__9355__exponent;
    __Vfunc_round_pack32__9355__shifted = __Vfunc_round_pack32__9355__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9355__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9356__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9355__exponent)));
        vlSelf->__Vfunc_shift_jam27__9356__value = __Vfunc_round_pack32__9355__significand;
        __Vfunc_round_pack32__9355__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9356__distance))) {
            vlSelf->__Vfunc_shift_jam27__9356__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9356__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9356__distance))) {
            vlSelf->__Vfunc_shift_jam27__9356__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9356__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9356__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9356__value, (IData)(vlSelf->__Vfunc_shift_jam27__9356__distance)));
            vlSelf->__Vfunc_shift_jam27__9356__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9356__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9356__distance)))));
            vlSelf->__Vfunc_shift_jam27__9356__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9356__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9356__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9356__discarded))));
        }
        __Vfunc_round_pack32__9355__shifted = vlSelf->__Vfunc_shift_jam27__9356__Vfuncout;
    }
    __Vfunc_round_pack32__9355__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9355__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9355__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9355__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9355__rounded)) {
        __Vfunc_round_pack32__9355__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9355__rounded, 1U));
        __Vfunc_round_pack32__9355__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9355__adjusted)));
    }
    __Vfunc_round_pack32__9355__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9355__rounded)) {
        __Vfunc_round_pack32__9355__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9355__adjusted)));
    }
    __Vfunc_round_pack32__9355__Vfuncout = (((0U == __Vfunc_round_pack32__9355__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9355__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9355__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9355__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9355__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9355__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9355__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__76__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9355__Vfuncout;
    __Vfunc_round_pack32__9349__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9349__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9349__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9349__adjusted = __Vfunc_round_pack32__9349__exponent;
    __Vfunc_round_pack32__9349__shifted = __Vfunc_round_pack32__9349__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9349__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9350__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9349__exponent)));
        vlSelf->__Vfunc_shift_jam27__9350__value = __Vfunc_round_pack32__9349__significand;
        __Vfunc_round_pack32__9349__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9350__distance))) {
            vlSelf->__Vfunc_shift_jam27__9350__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9350__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9350__distance))) {
            vlSelf->__Vfunc_shift_jam27__9350__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9350__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9350__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9350__value, (IData)(vlSelf->__Vfunc_shift_jam27__9350__distance)));
            vlSelf->__Vfunc_shift_jam27__9350__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9350__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9350__distance)))));
            vlSelf->__Vfunc_shift_jam27__9350__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9350__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9350__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9350__discarded))));
        }
        __Vfunc_round_pack32__9349__shifted = vlSelf->__Vfunc_shift_jam27__9350__Vfuncout;
    }
    __Vfunc_round_pack32__9349__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9349__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9349__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9349__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9349__rounded)) {
        __Vfunc_round_pack32__9349__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9349__rounded, 1U));
        __Vfunc_round_pack32__9349__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9349__adjusted)));
    }
    __Vfunc_round_pack32__9349__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9349__rounded)) {
        __Vfunc_round_pack32__9349__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9349__adjusted)));
    }
    __Vfunc_round_pack32__9349__Vfuncout = (((0U == __Vfunc_round_pack32__9349__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9349__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9349__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9349__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9349__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9349__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9349__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__75__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9349__Vfuncout;
    __Vfunc_round_pack32__9343__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9343__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9343__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9343__adjusted = __Vfunc_round_pack32__9343__exponent;
    __Vfunc_round_pack32__9343__shifted = __Vfunc_round_pack32__9343__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9343__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9344__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9343__exponent)));
        vlSelf->__Vfunc_shift_jam27__9344__value = __Vfunc_round_pack32__9343__significand;
        __Vfunc_round_pack32__9343__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9344__distance))) {
            vlSelf->__Vfunc_shift_jam27__9344__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9344__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9344__distance))) {
            vlSelf->__Vfunc_shift_jam27__9344__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9344__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9344__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9344__value, (IData)(vlSelf->__Vfunc_shift_jam27__9344__distance)));
            vlSelf->__Vfunc_shift_jam27__9344__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9344__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9344__distance)))));
            vlSelf->__Vfunc_shift_jam27__9344__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9344__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9344__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9344__discarded))));
        }
        __Vfunc_round_pack32__9343__shifted = vlSelf->__Vfunc_shift_jam27__9344__Vfuncout;
    }
    __Vfunc_round_pack32__9343__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9343__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9343__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9343__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9343__rounded)) {
        __Vfunc_round_pack32__9343__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9343__rounded, 1U));
        __Vfunc_round_pack32__9343__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9343__adjusted)));
    }
    __Vfunc_round_pack32__9343__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9343__rounded)) {
        __Vfunc_round_pack32__9343__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9343__adjusted)));
    }
    __Vfunc_round_pack32__9343__Vfuncout = (((0U == __Vfunc_round_pack32__9343__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9343__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9343__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9343__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9343__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9343__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9343__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__74__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9343__Vfuncout;
    __Vfunc_round_pack32__9337__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9337__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9337__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9337__adjusted = __Vfunc_round_pack32__9337__exponent;
    __Vfunc_round_pack32__9337__shifted = __Vfunc_round_pack32__9337__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9337__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9338__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9337__exponent)));
        vlSelf->__Vfunc_shift_jam27__9338__value = __Vfunc_round_pack32__9337__significand;
        __Vfunc_round_pack32__9337__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9338__distance))) {
            vlSelf->__Vfunc_shift_jam27__9338__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9338__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9338__distance))) {
            vlSelf->__Vfunc_shift_jam27__9338__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9338__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9338__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9338__value, (IData)(vlSelf->__Vfunc_shift_jam27__9338__distance)));
            vlSelf->__Vfunc_shift_jam27__9338__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9338__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9338__distance)))));
            vlSelf->__Vfunc_shift_jam27__9338__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9338__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9338__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9338__discarded))));
        }
        __Vfunc_round_pack32__9337__shifted = vlSelf->__Vfunc_shift_jam27__9338__Vfuncout;
    }
    __Vfunc_round_pack32__9337__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9337__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9337__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9337__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9337__rounded)) {
        __Vfunc_round_pack32__9337__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9337__rounded, 1U));
        __Vfunc_round_pack32__9337__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9337__adjusted)));
    }
    __Vfunc_round_pack32__9337__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9337__rounded)) {
        __Vfunc_round_pack32__9337__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9337__adjusted)));
    }
    __Vfunc_round_pack32__9337__Vfuncout = (((0U == __Vfunc_round_pack32__9337__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9337__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9337__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9337__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9337__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9337__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9337__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__73__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9337__Vfuncout;
    __Vfunc_round_pack32__9331__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9331__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9331__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9331__adjusted = __Vfunc_round_pack32__9331__exponent;
    __Vfunc_round_pack32__9331__shifted = __Vfunc_round_pack32__9331__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9331__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9332__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9331__exponent)));
        vlSelf->__Vfunc_shift_jam27__9332__value = __Vfunc_round_pack32__9331__significand;
        __Vfunc_round_pack32__9331__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9332__distance))) {
            vlSelf->__Vfunc_shift_jam27__9332__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9332__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9332__distance))) {
            vlSelf->__Vfunc_shift_jam27__9332__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9332__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9332__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9332__value, (IData)(vlSelf->__Vfunc_shift_jam27__9332__distance)));
            vlSelf->__Vfunc_shift_jam27__9332__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9332__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9332__distance)))));
            vlSelf->__Vfunc_shift_jam27__9332__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9332__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9332__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9332__discarded))));
        }
        __Vfunc_round_pack32__9331__shifted = vlSelf->__Vfunc_shift_jam27__9332__Vfuncout;
    }
    __Vfunc_round_pack32__9331__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9331__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9331__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9331__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9331__rounded)) {
        __Vfunc_round_pack32__9331__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9331__rounded, 1U));
        __Vfunc_round_pack32__9331__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9331__adjusted)));
    }
    __Vfunc_round_pack32__9331__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9331__rounded)) {
        __Vfunc_round_pack32__9331__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9331__adjusted)));
    }
    __Vfunc_round_pack32__9331__Vfuncout = (((0U == __Vfunc_round_pack32__9331__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9331__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9331__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9331__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9331__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9331__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9331__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__72__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9331__Vfuncout;
    __Vfunc_round_pack32__9325__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9325__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9325__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9325__adjusted = __Vfunc_round_pack32__9325__exponent;
    __Vfunc_round_pack32__9325__shifted = __Vfunc_round_pack32__9325__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9325__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9326__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9325__exponent)));
        vlSelf->__Vfunc_shift_jam27__9326__value = __Vfunc_round_pack32__9325__significand;
        __Vfunc_round_pack32__9325__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9326__distance))) {
            vlSelf->__Vfunc_shift_jam27__9326__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9326__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9326__distance))) {
            vlSelf->__Vfunc_shift_jam27__9326__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9326__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9326__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9326__value, (IData)(vlSelf->__Vfunc_shift_jam27__9326__distance)));
            vlSelf->__Vfunc_shift_jam27__9326__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9326__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9326__distance)))));
            vlSelf->__Vfunc_shift_jam27__9326__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9326__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9326__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9326__discarded))));
        }
        __Vfunc_round_pack32__9325__shifted = vlSelf->__Vfunc_shift_jam27__9326__Vfuncout;
    }
    __Vfunc_round_pack32__9325__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9325__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9325__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9325__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9325__rounded)) {
        __Vfunc_round_pack32__9325__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9325__rounded, 1U));
        __Vfunc_round_pack32__9325__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9325__adjusted)));
    }
    __Vfunc_round_pack32__9325__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9325__rounded)) {
        __Vfunc_round_pack32__9325__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9325__adjusted)));
    }
    __Vfunc_round_pack32__9325__Vfuncout = (((0U == __Vfunc_round_pack32__9325__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9325__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9325__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9325__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9325__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9325__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9325__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__71__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9325__Vfuncout;
    __Vfunc_round_pack32__9319__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9319__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9319__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9319__adjusted = __Vfunc_round_pack32__9319__exponent;
    __Vfunc_round_pack32__9319__shifted = __Vfunc_round_pack32__9319__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9319__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9320__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9319__exponent)));
        vlSelf->__Vfunc_shift_jam27__9320__value = __Vfunc_round_pack32__9319__significand;
        __Vfunc_round_pack32__9319__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9320__distance))) {
            vlSelf->__Vfunc_shift_jam27__9320__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9320__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9320__distance))) {
            vlSelf->__Vfunc_shift_jam27__9320__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9320__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9320__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9320__value, (IData)(vlSelf->__Vfunc_shift_jam27__9320__distance)));
            vlSelf->__Vfunc_shift_jam27__9320__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9320__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9320__distance)))));
            vlSelf->__Vfunc_shift_jam27__9320__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9320__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9320__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9320__discarded))));
        }
        __Vfunc_round_pack32__9319__shifted = vlSelf->__Vfunc_shift_jam27__9320__Vfuncout;
    }
    __Vfunc_round_pack32__9319__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9319__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9319__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9319__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9319__rounded)) {
        __Vfunc_round_pack32__9319__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9319__rounded, 1U));
        __Vfunc_round_pack32__9319__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9319__adjusted)));
    }
    __Vfunc_round_pack32__9319__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9319__rounded)) {
        __Vfunc_round_pack32__9319__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9319__adjusted)));
    }
    __Vfunc_round_pack32__9319__Vfuncout = (((0U == __Vfunc_round_pack32__9319__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9319__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9319__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9319__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9319__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9319__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9319__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__70__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9319__Vfuncout;
    __Vfunc_round_pack32__9313__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9313__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9313__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9313__adjusted = __Vfunc_round_pack32__9313__exponent;
    __Vfunc_round_pack32__9313__shifted = __Vfunc_round_pack32__9313__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9313__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9314__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9313__exponent)));
        vlSelf->__Vfunc_shift_jam27__9314__value = __Vfunc_round_pack32__9313__significand;
        __Vfunc_round_pack32__9313__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9314__distance))) {
            vlSelf->__Vfunc_shift_jam27__9314__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9314__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9314__distance))) {
            vlSelf->__Vfunc_shift_jam27__9314__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9314__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9314__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9314__value, (IData)(vlSelf->__Vfunc_shift_jam27__9314__distance)));
            vlSelf->__Vfunc_shift_jam27__9314__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9314__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9314__distance)))));
            vlSelf->__Vfunc_shift_jam27__9314__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9314__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9314__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9314__discarded))));
        }
        __Vfunc_round_pack32__9313__shifted = vlSelf->__Vfunc_shift_jam27__9314__Vfuncout;
    }
    __Vfunc_round_pack32__9313__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9313__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9313__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9313__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9313__rounded)) {
        __Vfunc_round_pack32__9313__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9313__rounded, 1U));
        __Vfunc_round_pack32__9313__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9313__adjusted)));
    }
    __Vfunc_round_pack32__9313__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9313__rounded)) {
        __Vfunc_round_pack32__9313__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9313__adjusted)));
    }
    __Vfunc_round_pack32__9313__Vfuncout = (((0U == __Vfunc_round_pack32__9313__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9313__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9313__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9313__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9313__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9313__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9313__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__69__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9313__Vfuncout;
    __Vfunc_round_pack32__9307__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9307__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9307__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9307__adjusted = __Vfunc_round_pack32__9307__exponent;
    __Vfunc_round_pack32__9307__shifted = __Vfunc_round_pack32__9307__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9307__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9308__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9307__exponent)));
        vlSelf->__Vfunc_shift_jam27__9308__value = __Vfunc_round_pack32__9307__significand;
        __Vfunc_round_pack32__9307__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9308__distance))) {
            vlSelf->__Vfunc_shift_jam27__9308__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9308__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9308__distance))) {
            vlSelf->__Vfunc_shift_jam27__9308__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9308__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9308__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9308__value, (IData)(vlSelf->__Vfunc_shift_jam27__9308__distance)));
            vlSelf->__Vfunc_shift_jam27__9308__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9308__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9308__distance)))));
            vlSelf->__Vfunc_shift_jam27__9308__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9308__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9308__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9308__discarded))));
        }
        __Vfunc_round_pack32__9307__shifted = vlSelf->__Vfunc_shift_jam27__9308__Vfuncout;
    }
    __Vfunc_round_pack32__9307__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9307__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9307__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9307__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9307__rounded)) {
        __Vfunc_round_pack32__9307__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9307__rounded, 1U));
        __Vfunc_round_pack32__9307__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9307__adjusted)));
    }
    __Vfunc_round_pack32__9307__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9307__rounded)) {
        __Vfunc_round_pack32__9307__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9307__adjusted)));
    }
    __Vfunc_round_pack32__9307__Vfuncout = (((0U == __Vfunc_round_pack32__9307__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9307__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9307__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9307__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9307__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9307__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9307__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__68__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9307__Vfuncout;
    __Vfunc_round_pack32__9301__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9301__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9301__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9301__adjusted = __Vfunc_round_pack32__9301__exponent;
    __Vfunc_round_pack32__9301__shifted = __Vfunc_round_pack32__9301__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9301__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9302__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9301__exponent)));
        vlSelf->__Vfunc_shift_jam27__9302__value = __Vfunc_round_pack32__9301__significand;
        __Vfunc_round_pack32__9301__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9302__distance))) {
            vlSelf->__Vfunc_shift_jam27__9302__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9302__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9302__distance))) {
            vlSelf->__Vfunc_shift_jam27__9302__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9302__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9302__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9302__value, (IData)(vlSelf->__Vfunc_shift_jam27__9302__distance)));
            vlSelf->__Vfunc_shift_jam27__9302__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9302__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9302__distance)))));
            vlSelf->__Vfunc_shift_jam27__9302__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9302__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9302__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9302__discarded))));
        }
        __Vfunc_round_pack32__9301__shifted = vlSelf->__Vfunc_shift_jam27__9302__Vfuncout;
    }
    __Vfunc_round_pack32__9301__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9301__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9301__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9301__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9301__rounded)) {
        __Vfunc_round_pack32__9301__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9301__rounded, 1U));
        __Vfunc_round_pack32__9301__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9301__adjusted)));
    }
    __Vfunc_round_pack32__9301__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9301__rounded)) {
        __Vfunc_round_pack32__9301__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9301__adjusted)));
    }
    __Vfunc_round_pack32__9301__Vfuncout = (((0U == __Vfunc_round_pack32__9301__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9301__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9301__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9301__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9301__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9301__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9301__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__67__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9301__Vfuncout;
    __Vfunc_round_pack32__9295__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9295__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9295__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9295__adjusted = __Vfunc_round_pack32__9295__exponent;
    __Vfunc_round_pack32__9295__shifted = __Vfunc_round_pack32__9295__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9295__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9296__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9295__exponent)));
        vlSelf->__Vfunc_shift_jam27__9296__value = __Vfunc_round_pack32__9295__significand;
        __Vfunc_round_pack32__9295__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9296__distance))) {
            vlSelf->__Vfunc_shift_jam27__9296__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9296__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9296__distance))) {
            vlSelf->__Vfunc_shift_jam27__9296__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9296__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9296__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9296__value, (IData)(vlSelf->__Vfunc_shift_jam27__9296__distance)));
            vlSelf->__Vfunc_shift_jam27__9296__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9296__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9296__distance)))));
            vlSelf->__Vfunc_shift_jam27__9296__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9296__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9296__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9296__discarded))));
        }
        __Vfunc_round_pack32__9295__shifted = vlSelf->__Vfunc_shift_jam27__9296__Vfuncout;
    }
    __Vfunc_round_pack32__9295__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9295__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9295__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9295__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9295__rounded)) {
        __Vfunc_round_pack32__9295__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9295__rounded, 1U));
        __Vfunc_round_pack32__9295__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9295__adjusted)));
    }
    __Vfunc_round_pack32__9295__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9295__rounded)) {
        __Vfunc_round_pack32__9295__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9295__adjusted)));
    }
    __Vfunc_round_pack32__9295__Vfuncout = (((0U == __Vfunc_round_pack32__9295__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9295__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9295__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9295__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9295__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9295__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9295__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__66__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9295__Vfuncout;
    __Vfunc_round_pack32__9289__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9289__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9289__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9289__adjusted = __Vfunc_round_pack32__9289__exponent;
    __Vfunc_round_pack32__9289__shifted = __Vfunc_round_pack32__9289__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9289__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9290__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9289__exponent)));
        vlSelf->__Vfunc_shift_jam27__9290__value = __Vfunc_round_pack32__9289__significand;
        __Vfunc_round_pack32__9289__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9290__distance))) {
            vlSelf->__Vfunc_shift_jam27__9290__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9290__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9290__distance))) {
            vlSelf->__Vfunc_shift_jam27__9290__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9290__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9290__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9290__value, (IData)(vlSelf->__Vfunc_shift_jam27__9290__distance)));
            vlSelf->__Vfunc_shift_jam27__9290__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9290__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9290__distance)))));
            vlSelf->__Vfunc_shift_jam27__9290__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9290__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9290__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9290__discarded))));
        }
        __Vfunc_round_pack32__9289__shifted = vlSelf->__Vfunc_shift_jam27__9290__Vfuncout;
    }
    __Vfunc_round_pack32__9289__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9289__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9289__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9289__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9289__rounded)) {
        __Vfunc_round_pack32__9289__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9289__rounded, 1U));
        __Vfunc_round_pack32__9289__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9289__adjusted)));
    }
    __Vfunc_round_pack32__9289__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9289__rounded)) {
        __Vfunc_round_pack32__9289__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9289__adjusted)));
    }
    __Vfunc_round_pack32__9289__Vfuncout = (((0U == __Vfunc_round_pack32__9289__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9289__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9289__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9289__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9289__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9289__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9289__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__65__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9289__Vfuncout;
    __Vfunc_round_pack32__9283__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9283__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9283__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9283__adjusted = __Vfunc_round_pack32__9283__exponent;
    __Vfunc_round_pack32__9283__shifted = __Vfunc_round_pack32__9283__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9283__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9284__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9283__exponent)));
        vlSelf->__Vfunc_shift_jam27__9284__value = __Vfunc_round_pack32__9283__significand;
        __Vfunc_round_pack32__9283__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9284__distance))) {
            vlSelf->__Vfunc_shift_jam27__9284__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9284__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9284__distance))) {
            vlSelf->__Vfunc_shift_jam27__9284__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9284__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9284__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9284__value, (IData)(vlSelf->__Vfunc_shift_jam27__9284__distance)));
            vlSelf->__Vfunc_shift_jam27__9284__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9284__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9284__distance)))));
            vlSelf->__Vfunc_shift_jam27__9284__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9284__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9284__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9284__discarded))));
        }
        __Vfunc_round_pack32__9283__shifted = vlSelf->__Vfunc_shift_jam27__9284__Vfuncout;
    }
    __Vfunc_round_pack32__9283__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9283__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9283__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9283__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9283__rounded)) {
        __Vfunc_round_pack32__9283__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9283__rounded, 1U));
        __Vfunc_round_pack32__9283__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9283__adjusted)));
    }
    __Vfunc_round_pack32__9283__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9283__rounded)) {
        __Vfunc_round_pack32__9283__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9283__adjusted)));
    }
    __Vfunc_round_pack32__9283__Vfuncout = (((0U == __Vfunc_round_pack32__9283__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9283__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9283__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9283__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9283__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9283__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9283__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__64__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9283__Vfuncout;
    __Vfunc_round_pack32__9277__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9277__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9277__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9277__adjusted = __Vfunc_round_pack32__9277__exponent;
    __Vfunc_round_pack32__9277__shifted = __Vfunc_round_pack32__9277__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9277__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9278__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9277__exponent)));
        vlSelf->__Vfunc_shift_jam27__9278__value = __Vfunc_round_pack32__9277__significand;
        __Vfunc_round_pack32__9277__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9278__distance))) {
            vlSelf->__Vfunc_shift_jam27__9278__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9278__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9278__distance))) {
            vlSelf->__Vfunc_shift_jam27__9278__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9278__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9278__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9278__value, (IData)(vlSelf->__Vfunc_shift_jam27__9278__distance)));
            vlSelf->__Vfunc_shift_jam27__9278__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9278__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9278__distance)))));
            vlSelf->__Vfunc_shift_jam27__9278__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9278__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9278__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9278__discarded))));
        }
        __Vfunc_round_pack32__9277__shifted = vlSelf->__Vfunc_shift_jam27__9278__Vfuncout;
    }
    __Vfunc_round_pack32__9277__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9277__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9277__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9277__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9277__rounded)) {
        __Vfunc_round_pack32__9277__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9277__rounded, 1U));
        __Vfunc_round_pack32__9277__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9277__adjusted)));
    }
    __Vfunc_round_pack32__9277__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9277__rounded)) {
        __Vfunc_round_pack32__9277__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9277__adjusted)));
    }
    __Vfunc_round_pack32__9277__Vfuncout = (((0U == __Vfunc_round_pack32__9277__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9277__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9277__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9277__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9277__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9277__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9277__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__63__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9277__Vfuncout;
    __Vfunc_round_pack32__9271__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9271__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9271__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9271__adjusted = __Vfunc_round_pack32__9271__exponent;
    __Vfunc_round_pack32__9271__shifted = __Vfunc_round_pack32__9271__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9271__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9272__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9271__exponent)));
        vlSelf->__Vfunc_shift_jam27__9272__value = __Vfunc_round_pack32__9271__significand;
        __Vfunc_round_pack32__9271__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9272__distance))) {
            vlSelf->__Vfunc_shift_jam27__9272__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9272__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9272__distance))) {
            vlSelf->__Vfunc_shift_jam27__9272__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9272__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9272__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9272__value, (IData)(vlSelf->__Vfunc_shift_jam27__9272__distance)));
            vlSelf->__Vfunc_shift_jam27__9272__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9272__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9272__distance)))));
            vlSelf->__Vfunc_shift_jam27__9272__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9272__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9272__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9272__discarded))));
        }
        __Vfunc_round_pack32__9271__shifted = vlSelf->__Vfunc_shift_jam27__9272__Vfuncout;
    }
    __Vfunc_round_pack32__9271__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9271__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9271__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9271__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9271__rounded)) {
        __Vfunc_round_pack32__9271__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9271__rounded, 1U));
        __Vfunc_round_pack32__9271__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9271__adjusted)));
    }
    __Vfunc_round_pack32__9271__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9271__rounded)) {
        __Vfunc_round_pack32__9271__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9271__adjusted)));
    }
    __Vfunc_round_pack32__9271__Vfuncout = (((0U == __Vfunc_round_pack32__9271__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9271__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9271__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9271__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9271__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9271__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9271__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__62__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9271__Vfuncout;
    __Vfunc_round_pack32__9265__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9265__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9265__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9265__adjusted = __Vfunc_round_pack32__9265__exponent;
    __Vfunc_round_pack32__9265__shifted = __Vfunc_round_pack32__9265__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9265__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9266__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9265__exponent)));
        vlSelf->__Vfunc_shift_jam27__9266__value = __Vfunc_round_pack32__9265__significand;
        __Vfunc_round_pack32__9265__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9266__distance))) {
            vlSelf->__Vfunc_shift_jam27__9266__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9266__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9266__distance))) {
            vlSelf->__Vfunc_shift_jam27__9266__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9266__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9266__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9266__value, (IData)(vlSelf->__Vfunc_shift_jam27__9266__distance)));
            vlSelf->__Vfunc_shift_jam27__9266__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9266__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9266__distance)))));
            vlSelf->__Vfunc_shift_jam27__9266__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9266__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9266__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9266__discarded))));
        }
        __Vfunc_round_pack32__9265__shifted = vlSelf->__Vfunc_shift_jam27__9266__Vfuncout;
    }
    __Vfunc_round_pack32__9265__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9265__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9265__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9265__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9265__rounded)) {
        __Vfunc_round_pack32__9265__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9265__rounded, 1U));
        __Vfunc_round_pack32__9265__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9265__adjusted)));
    }
    __Vfunc_round_pack32__9265__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9265__rounded)) {
        __Vfunc_round_pack32__9265__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9265__adjusted)));
    }
    __Vfunc_round_pack32__9265__Vfuncout = (((0U == __Vfunc_round_pack32__9265__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9265__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9265__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9265__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9265__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9265__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9265__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__61__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9265__Vfuncout;
    __Vfunc_round_pack32__9259__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9259__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9259__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9259__adjusted = __Vfunc_round_pack32__9259__exponent;
    __Vfunc_round_pack32__9259__shifted = __Vfunc_round_pack32__9259__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9259__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9260__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9259__exponent)));
        vlSelf->__Vfunc_shift_jam27__9260__value = __Vfunc_round_pack32__9259__significand;
        __Vfunc_round_pack32__9259__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9260__distance))) {
            vlSelf->__Vfunc_shift_jam27__9260__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9260__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9260__distance))) {
            vlSelf->__Vfunc_shift_jam27__9260__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9260__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9260__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9260__value, (IData)(vlSelf->__Vfunc_shift_jam27__9260__distance)));
            vlSelf->__Vfunc_shift_jam27__9260__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9260__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9260__distance)))));
            vlSelf->__Vfunc_shift_jam27__9260__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9260__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9260__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9260__discarded))));
        }
        __Vfunc_round_pack32__9259__shifted = vlSelf->__Vfunc_shift_jam27__9260__Vfuncout;
    }
    __Vfunc_round_pack32__9259__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9259__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9259__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9259__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9259__rounded)) {
        __Vfunc_round_pack32__9259__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9259__rounded, 1U));
        __Vfunc_round_pack32__9259__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9259__adjusted)));
    }
    __Vfunc_round_pack32__9259__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9259__rounded)) {
        __Vfunc_round_pack32__9259__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9259__adjusted)));
    }
    __Vfunc_round_pack32__9259__Vfuncout = (((0U == __Vfunc_round_pack32__9259__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9259__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9259__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9259__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9259__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9259__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9259__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__60__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9259__Vfuncout;
    __Vfunc_round_pack32__9253__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9253__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9253__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9253__adjusted = __Vfunc_round_pack32__9253__exponent;
    __Vfunc_round_pack32__9253__shifted = __Vfunc_round_pack32__9253__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9253__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9254__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9253__exponent)));
        vlSelf->__Vfunc_shift_jam27__9254__value = __Vfunc_round_pack32__9253__significand;
        __Vfunc_round_pack32__9253__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9254__distance))) {
            vlSelf->__Vfunc_shift_jam27__9254__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9254__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9254__distance))) {
            vlSelf->__Vfunc_shift_jam27__9254__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9254__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9254__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9254__value, (IData)(vlSelf->__Vfunc_shift_jam27__9254__distance)));
            vlSelf->__Vfunc_shift_jam27__9254__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9254__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9254__distance)))));
            vlSelf->__Vfunc_shift_jam27__9254__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9254__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9254__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9254__discarded))));
        }
        __Vfunc_round_pack32__9253__shifted = vlSelf->__Vfunc_shift_jam27__9254__Vfuncout;
    }
    __Vfunc_round_pack32__9253__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9253__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9253__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9253__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9253__rounded)) {
        __Vfunc_round_pack32__9253__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9253__rounded, 1U));
        __Vfunc_round_pack32__9253__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9253__adjusted)));
    }
    __Vfunc_round_pack32__9253__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9253__rounded)) {
        __Vfunc_round_pack32__9253__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9253__adjusted)));
    }
    __Vfunc_round_pack32__9253__Vfuncout = (((0U == __Vfunc_round_pack32__9253__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9253__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9253__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9253__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9253__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9253__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9253__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__59__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9253__Vfuncout;
    __Vfunc_round_pack32__9247__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9247__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9247__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9247__adjusted = __Vfunc_round_pack32__9247__exponent;
    __Vfunc_round_pack32__9247__shifted = __Vfunc_round_pack32__9247__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9247__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9248__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9247__exponent)));
        vlSelf->__Vfunc_shift_jam27__9248__value = __Vfunc_round_pack32__9247__significand;
        __Vfunc_round_pack32__9247__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9248__distance))) {
            vlSelf->__Vfunc_shift_jam27__9248__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9248__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9248__distance))) {
            vlSelf->__Vfunc_shift_jam27__9248__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9248__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9248__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9248__value, (IData)(vlSelf->__Vfunc_shift_jam27__9248__distance)));
            vlSelf->__Vfunc_shift_jam27__9248__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9248__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9248__distance)))));
            vlSelf->__Vfunc_shift_jam27__9248__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9248__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9248__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9248__discarded))));
        }
        __Vfunc_round_pack32__9247__shifted = vlSelf->__Vfunc_shift_jam27__9248__Vfuncout;
    }
    __Vfunc_round_pack32__9247__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9247__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9247__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9247__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9247__rounded)) {
        __Vfunc_round_pack32__9247__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9247__rounded, 1U));
        __Vfunc_round_pack32__9247__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9247__adjusted)));
    }
    __Vfunc_round_pack32__9247__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9247__rounded)) {
        __Vfunc_round_pack32__9247__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9247__adjusted)));
    }
    __Vfunc_round_pack32__9247__Vfuncout = (((0U == __Vfunc_round_pack32__9247__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9247__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9247__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9247__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9247__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9247__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9247__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__58__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9247__Vfuncout;
    __Vfunc_round_pack32__9241__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9241__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9241__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9241__adjusted = __Vfunc_round_pack32__9241__exponent;
    __Vfunc_round_pack32__9241__shifted = __Vfunc_round_pack32__9241__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9241__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9242__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9241__exponent)));
        vlSelf->__Vfunc_shift_jam27__9242__value = __Vfunc_round_pack32__9241__significand;
        __Vfunc_round_pack32__9241__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9242__distance))) {
            vlSelf->__Vfunc_shift_jam27__9242__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9242__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9242__distance))) {
            vlSelf->__Vfunc_shift_jam27__9242__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9242__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9242__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9242__value, (IData)(vlSelf->__Vfunc_shift_jam27__9242__distance)));
            vlSelf->__Vfunc_shift_jam27__9242__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9242__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9242__distance)))));
            vlSelf->__Vfunc_shift_jam27__9242__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9242__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9242__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9242__discarded))));
        }
        __Vfunc_round_pack32__9241__shifted = vlSelf->__Vfunc_shift_jam27__9242__Vfuncout;
    }
    __Vfunc_round_pack32__9241__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9241__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9241__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9241__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9241__rounded)) {
        __Vfunc_round_pack32__9241__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9241__rounded, 1U));
        __Vfunc_round_pack32__9241__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9241__adjusted)));
    }
    __Vfunc_round_pack32__9241__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9241__rounded)) {
        __Vfunc_round_pack32__9241__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9241__adjusted)));
    }
    __Vfunc_round_pack32__9241__Vfuncout = (((0U == __Vfunc_round_pack32__9241__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9241__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9241__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9241__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9241__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9241__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9241__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__57__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9241__Vfuncout;
    __Vfunc_round_pack32__9235__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9235__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9235__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9235__adjusted = __Vfunc_round_pack32__9235__exponent;
    __Vfunc_round_pack32__9235__shifted = __Vfunc_round_pack32__9235__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9235__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9236__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9235__exponent)));
        vlSelf->__Vfunc_shift_jam27__9236__value = __Vfunc_round_pack32__9235__significand;
        __Vfunc_round_pack32__9235__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9236__distance))) {
            vlSelf->__Vfunc_shift_jam27__9236__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9236__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9236__distance))) {
            vlSelf->__Vfunc_shift_jam27__9236__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9236__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9236__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9236__value, (IData)(vlSelf->__Vfunc_shift_jam27__9236__distance)));
            vlSelf->__Vfunc_shift_jam27__9236__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9236__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9236__distance)))));
            vlSelf->__Vfunc_shift_jam27__9236__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9236__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9236__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9236__discarded))));
        }
        __Vfunc_round_pack32__9235__shifted = vlSelf->__Vfunc_shift_jam27__9236__Vfuncout;
    }
    __Vfunc_round_pack32__9235__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9235__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9235__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9235__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9235__rounded)) {
        __Vfunc_round_pack32__9235__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9235__rounded, 1U));
        __Vfunc_round_pack32__9235__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9235__adjusted)));
    }
    __Vfunc_round_pack32__9235__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9235__rounded)) {
        __Vfunc_round_pack32__9235__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9235__adjusted)));
    }
    __Vfunc_round_pack32__9235__Vfuncout = (((0U == __Vfunc_round_pack32__9235__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9235__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9235__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9235__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9235__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9235__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9235__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__56__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9235__Vfuncout;
    __Vfunc_round_pack32__9229__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9229__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9229__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9229__adjusted = __Vfunc_round_pack32__9229__exponent;
    __Vfunc_round_pack32__9229__shifted = __Vfunc_round_pack32__9229__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9229__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9230__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9229__exponent)));
        vlSelf->__Vfunc_shift_jam27__9230__value = __Vfunc_round_pack32__9229__significand;
        __Vfunc_round_pack32__9229__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9230__distance))) {
            vlSelf->__Vfunc_shift_jam27__9230__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9230__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9230__distance))) {
            vlSelf->__Vfunc_shift_jam27__9230__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9230__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9230__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9230__value, (IData)(vlSelf->__Vfunc_shift_jam27__9230__distance)));
            vlSelf->__Vfunc_shift_jam27__9230__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9230__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9230__distance)))));
            vlSelf->__Vfunc_shift_jam27__9230__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9230__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9230__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9230__discarded))));
        }
        __Vfunc_round_pack32__9229__shifted = vlSelf->__Vfunc_shift_jam27__9230__Vfuncout;
    }
    __Vfunc_round_pack32__9229__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9229__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9229__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9229__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9229__rounded)) {
        __Vfunc_round_pack32__9229__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9229__rounded, 1U));
        __Vfunc_round_pack32__9229__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9229__adjusted)));
    }
    __Vfunc_round_pack32__9229__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9229__rounded)) {
        __Vfunc_round_pack32__9229__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9229__adjusted)));
    }
    __Vfunc_round_pack32__9229__Vfuncout = (((0U == __Vfunc_round_pack32__9229__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9229__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9229__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9229__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9229__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9229__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9229__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__55__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9229__Vfuncout;
    __Vfunc_round_pack32__9223__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9223__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9223__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9223__adjusted = __Vfunc_round_pack32__9223__exponent;
    __Vfunc_round_pack32__9223__shifted = __Vfunc_round_pack32__9223__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9223__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9224__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9223__exponent)));
        vlSelf->__Vfunc_shift_jam27__9224__value = __Vfunc_round_pack32__9223__significand;
        __Vfunc_round_pack32__9223__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9224__distance))) {
            vlSelf->__Vfunc_shift_jam27__9224__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9224__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9224__distance))) {
            vlSelf->__Vfunc_shift_jam27__9224__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9224__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9224__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9224__value, (IData)(vlSelf->__Vfunc_shift_jam27__9224__distance)));
            vlSelf->__Vfunc_shift_jam27__9224__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9224__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9224__distance)))));
            vlSelf->__Vfunc_shift_jam27__9224__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9224__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9224__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9224__discarded))));
        }
        __Vfunc_round_pack32__9223__shifted = vlSelf->__Vfunc_shift_jam27__9224__Vfuncout;
    }
    __Vfunc_round_pack32__9223__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9223__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9223__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9223__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9223__rounded)) {
        __Vfunc_round_pack32__9223__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9223__rounded, 1U));
        __Vfunc_round_pack32__9223__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9223__adjusted)));
    }
    __Vfunc_round_pack32__9223__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9223__rounded)) {
        __Vfunc_round_pack32__9223__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9223__adjusted)));
    }
    __Vfunc_round_pack32__9223__Vfuncout = (((0U == __Vfunc_round_pack32__9223__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9223__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9223__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9223__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9223__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9223__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9223__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__54__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9223__Vfuncout;
    __Vfunc_round_pack32__9217__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9217__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9217__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9217__adjusted = __Vfunc_round_pack32__9217__exponent;
    __Vfunc_round_pack32__9217__shifted = __Vfunc_round_pack32__9217__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9217__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9218__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9217__exponent)));
        vlSelf->__Vfunc_shift_jam27__9218__value = __Vfunc_round_pack32__9217__significand;
        __Vfunc_round_pack32__9217__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9218__distance))) {
            vlSelf->__Vfunc_shift_jam27__9218__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9218__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9218__distance))) {
            vlSelf->__Vfunc_shift_jam27__9218__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9218__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9218__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9218__value, (IData)(vlSelf->__Vfunc_shift_jam27__9218__distance)));
            vlSelf->__Vfunc_shift_jam27__9218__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9218__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9218__distance)))));
            vlSelf->__Vfunc_shift_jam27__9218__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9218__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9218__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9218__discarded))));
        }
        __Vfunc_round_pack32__9217__shifted = vlSelf->__Vfunc_shift_jam27__9218__Vfuncout;
    }
    __Vfunc_round_pack32__9217__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9217__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9217__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9217__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9217__rounded)) {
        __Vfunc_round_pack32__9217__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9217__rounded, 1U));
        __Vfunc_round_pack32__9217__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9217__adjusted)));
    }
    __Vfunc_round_pack32__9217__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9217__rounded)) {
        __Vfunc_round_pack32__9217__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9217__adjusted)));
    }
    __Vfunc_round_pack32__9217__Vfuncout = (((0U == __Vfunc_round_pack32__9217__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9217__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9217__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9217__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9217__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9217__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9217__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__53__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9217__Vfuncout;
    __Vfunc_round_pack32__9211__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9211__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9211__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9211__adjusted = __Vfunc_round_pack32__9211__exponent;
    __Vfunc_round_pack32__9211__shifted = __Vfunc_round_pack32__9211__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9211__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9212__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9211__exponent)));
        vlSelf->__Vfunc_shift_jam27__9212__value = __Vfunc_round_pack32__9211__significand;
        __Vfunc_round_pack32__9211__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9212__distance))) {
            vlSelf->__Vfunc_shift_jam27__9212__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9212__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9212__distance))) {
            vlSelf->__Vfunc_shift_jam27__9212__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9212__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9212__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9212__value, (IData)(vlSelf->__Vfunc_shift_jam27__9212__distance)));
            vlSelf->__Vfunc_shift_jam27__9212__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9212__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9212__distance)))));
            vlSelf->__Vfunc_shift_jam27__9212__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9212__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9212__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9212__discarded))));
        }
        __Vfunc_round_pack32__9211__shifted = vlSelf->__Vfunc_shift_jam27__9212__Vfuncout;
    }
    __Vfunc_round_pack32__9211__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9211__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9211__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9211__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9211__rounded)) {
        __Vfunc_round_pack32__9211__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9211__rounded, 1U));
        __Vfunc_round_pack32__9211__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9211__adjusted)));
    }
    __Vfunc_round_pack32__9211__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9211__rounded)) {
        __Vfunc_round_pack32__9211__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9211__adjusted)));
    }
    __Vfunc_round_pack32__9211__Vfuncout = (((0U == __Vfunc_round_pack32__9211__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9211__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9211__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9211__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9211__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9211__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9211__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__52__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9211__Vfuncout;
    __Vfunc_round_pack32__9205__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9205__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9205__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9205__adjusted = __Vfunc_round_pack32__9205__exponent;
    __Vfunc_round_pack32__9205__shifted = __Vfunc_round_pack32__9205__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9205__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9206__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9205__exponent)));
        vlSelf->__Vfunc_shift_jam27__9206__value = __Vfunc_round_pack32__9205__significand;
        __Vfunc_round_pack32__9205__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9206__distance))) {
            vlSelf->__Vfunc_shift_jam27__9206__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9206__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9206__distance))) {
            vlSelf->__Vfunc_shift_jam27__9206__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9206__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9206__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9206__value, (IData)(vlSelf->__Vfunc_shift_jam27__9206__distance)));
            vlSelf->__Vfunc_shift_jam27__9206__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9206__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9206__distance)))));
            vlSelf->__Vfunc_shift_jam27__9206__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9206__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9206__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9206__discarded))));
        }
        __Vfunc_round_pack32__9205__shifted = vlSelf->__Vfunc_shift_jam27__9206__Vfuncout;
    }
    __Vfunc_round_pack32__9205__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9205__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9205__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9205__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9205__rounded)) {
        __Vfunc_round_pack32__9205__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9205__rounded, 1U));
        __Vfunc_round_pack32__9205__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9205__adjusted)));
    }
    __Vfunc_round_pack32__9205__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9205__rounded)) {
        __Vfunc_round_pack32__9205__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9205__adjusted)));
    }
    __Vfunc_round_pack32__9205__Vfuncout = (((0U == __Vfunc_round_pack32__9205__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9205__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9205__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9205__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9205__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9205__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9205__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__51__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9205__Vfuncout;
    __Vfunc_round_pack32__9199__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9199__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9199__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9199__adjusted = __Vfunc_round_pack32__9199__exponent;
    __Vfunc_round_pack32__9199__shifted = __Vfunc_round_pack32__9199__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9199__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9200__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9199__exponent)));
        vlSelf->__Vfunc_shift_jam27__9200__value = __Vfunc_round_pack32__9199__significand;
        __Vfunc_round_pack32__9199__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9200__distance))) {
            vlSelf->__Vfunc_shift_jam27__9200__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9200__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9200__distance))) {
            vlSelf->__Vfunc_shift_jam27__9200__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9200__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9200__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9200__value, (IData)(vlSelf->__Vfunc_shift_jam27__9200__distance)));
            vlSelf->__Vfunc_shift_jam27__9200__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9200__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9200__distance)))));
            vlSelf->__Vfunc_shift_jam27__9200__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9200__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9200__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9200__discarded))));
        }
        __Vfunc_round_pack32__9199__shifted = vlSelf->__Vfunc_shift_jam27__9200__Vfuncout;
    }
    __Vfunc_round_pack32__9199__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9199__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9199__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9199__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9199__rounded)) {
        __Vfunc_round_pack32__9199__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9199__rounded, 1U));
        __Vfunc_round_pack32__9199__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9199__adjusted)));
    }
    __Vfunc_round_pack32__9199__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9199__rounded)) {
        __Vfunc_round_pack32__9199__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9199__adjusted)));
    }
    __Vfunc_round_pack32__9199__Vfuncout = (((0U == __Vfunc_round_pack32__9199__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9199__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9199__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9199__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9199__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9199__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9199__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__50__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9199__Vfuncout;
    __Vfunc_round_pack32__9193__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9193__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9193__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9193__adjusted = __Vfunc_round_pack32__9193__exponent;
    __Vfunc_round_pack32__9193__shifted = __Vfunc_round_pack32__9193__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9193__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9194__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9193__exponent)));
        vlSelf->__Vfunc_shift_jam27__9194__value = __Vfunc_round_pack32__9193__significand;
        __Vfunc_round_pack32__9193__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9194__distance))) {
            vlSelf->__Vfunc_shift_jam27__9194__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9194__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9194__distance))) {
            vlSelf->__Vfunc_shift_jam27__9194__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9194__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9194__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9194__value, (IData)(vlSelf->__Vfunc_shift_jam27__9194__distance)));
            vlSelf->__Vfunc_shift_jam27__9194__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9194__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9194__distance)))));
            vlSelf->__Vfunc_shift_jam27__9194__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9194__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9194__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9194__discarded))));
        }
        __Vfunc_round_pack32__9193__shifted = vlSelf->__Vfunc_shift_jam27__9194__Vfuncout;
    }
    __Vfunc_round_pack32__9193__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9193__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9193__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9193__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9193__rounded)) {
        __Vfunc_round_pack32__9193__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9193__rounded, 1U));
        __Vfunc_round_pack32__9193__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9193__adjusted)));
    }
    __Vfunc_round_pack32__9193__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9193__rounded)) {
        __Vfunc_round_pack32__9193__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9193__adjusted)));
    }
    __Vfunc_round_pack32__9193__Vfuncout = (((0U == __Vfunc_round_pack32__9193__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9193__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9193__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9193__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9193__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9193__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9193__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__49__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9193__Vfuncout;
    __Vfunc_round_pack32__9187__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9187__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9187__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9187__adjusted = __Vfunc_round_pack32__9187__exponent;
    __Vfunc_round_pack32__9187__shifted = __Vfunc_round_pack32__9187__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9187__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9188__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9187__exponent)));
        vlSelf->__Vfunc_shift_jam27__9188__value = __Vfunc_round_pack32__9187__significand;
        __Vfunc_round_pack32__9187__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9188__distance))) {
            vlSelf->__Vfunc_shift_jam27__9188__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9188__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9188__distance))) {
            vlSelf->__Vfunc_shift_jam27__9188__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9188__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9188__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9188__value, (IData)(vlSelf->__Vfunc_shift_jam27__9188__distance)));
            vlSelf->__Vfunc_shift_jam27__9188__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9188__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9188__distance)))));
            vlSelf->__Vfunc_shift_jam27__9188__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9188__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9188__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9188__discarded))));
        }
        __Vfunc_round_pack32__9187__shifted = vlSelf->__Vfunc_shift_jam27__9188__Vfuncout;
    }
    __Vfunc_round_pack32__9187__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9187__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9187__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9187__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9187__rounded)) {
        __Vfunc_round_pack32__9187__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9187__rounded, 1U));
        __Vfunc_round_pack32__9187__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9187__adjusted)));
    }
    __Vfunc_round_pack32__9187__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9187__rounded)) {
        __Vfunc_round_pack32__9187__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9187__adjusted)));
    }
    __Vfunc_round_pack32__9187__Vfuncout = (((0U == __Vfunc_round_pack32__9187__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9187__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9187__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9187__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9187__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9187__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9187__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__48__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9187__Vfuncout;
    __Vfunc_round_pack32__9181__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9181__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9181__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9181__adjusted = __Vfunc_round_pack32__9181__exponent;
    __Vfunc_round_pack32__9181__shifted = __Vfunc_round_pack32__9181__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9181__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9182__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9181__exponent)));
        vlSelf->__Vfunc_shift_jam27__9182__value = __Vfunc_round_pack32__9181__significand;
        __Vfunc_round_pack32__9181__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9182__distance))) {
            vlSelf->__Vfunc_shift_jam27__9182__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9182__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9182__distance))) {
            vlSelf->__Vfunc_shift_jam27__9182__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9182__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9182__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9182__value, (IData)(vlSelf->__Vfunc_shift_jam27__9182__distance)));
            vlSelf->__Vfunc_shift_jam27__9182__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9182__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9182__distance)))));
            vlSelf->__Vfunc_shift_jam27__9182__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9182__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9182__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9182__discarded))));
        }
        __Vfunc_round_pack32__9181__shifted = vlSelf->__Vfunc_shift_jam27__9182__Vfuncout;
    }
    __Vfunc_round_pack32__9181__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9181__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9181__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9181__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9181__rounded)) {
        __Vfunc_round_pack32__9181__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9181__rounded, 1U));
        __Vfunc_round_pack32__9181__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9181__adjusted)));
    }
    __Vfunc_round_pack32__9181__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9181__rounded)) {
        __Vfunc_round_pack32__9181__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9181__adjusted)));
    }
    __Vfunc_round_pack32__9181__Vfuncout = (((0U == __Vfunc_round_pack32__9181__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9181__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9181__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9181__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9181__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9181__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9181__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__47__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9181__Vfuncout;
    __Vfunc_round_pack32__9175__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9175__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9175__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9175__adjusted = __Vfunc_round_pack32__9175__exponent;
    __Vfunc_round_pack32__9175__shifted = __Vfunc_round_pack32__9175__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9175__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9176__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9175__exponent)));
        vlSelf->__Vfunc_shift_jam27__9176__value = __Vfunc_round_pack32__9175__significand;
        __Vfunc_round_pack32__9175__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9176__distance))) {
            vlSelf->__Vfunc_shift_jam27__9176__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9176__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9176__distance))) {
            vlSelf->__Vfunc_shift_jam27__9176__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9176__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9176__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9176__value, (IData)(vlSelf->__Vfunc_shift_jam27__9176__distance)));
            vlSelf->__Vfunc_shift_jam27__9176__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9176__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9176__distance)))));
            vlSelf->__Vfunc_shift_jam27__9176__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9176__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9176__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9176__discarded))));
        }
        __Vfunc_round_pack32__9175__shifted = vlSelf->__Vfunc_shift_jam27__9176__Vfuncout;
    }
    __Vfunc_round_pack32__9175__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9175__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9175__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9175__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9175__rounded)) {
        __Vfunc_round_pack32__9175__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9175__rounded, 1U));
        __Vfunc_round_pack32__9175__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9175__adjusted)));
    }
    __Vfunc_round_pack32__9175__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9175__rounded)) {
        __Vfunc_round_pack32__9175__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9175__adjusted)));
    }
    __Vfunc_round_pack32__9175__Vfuncout = (((0U == __Vfunc_round_pack32__9175__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9175__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9175__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9175__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9175__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9175__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9175__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__46__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9175__Vfuncout;
    vlSelf->__Vfunc_round_pack32__9169__significand 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9169__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    vlSelf->__Vfunc_round_pack32__9169__negative = 
        (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
               >> 2U));
    vlSelf->__Vfunc_round_pack32__9169__adjusted = __Vfunc_round_pack32__9169__exponent;
    __Vfunc_round_pack32__9169__shifted = vlSelf->__Vfunc_round_pack32__9169__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9169__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9170__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9169__exponent)));
        vlSelf->__Vfunc_shift_jam27__9170__value = vlSelf->__Vfunc_round_pack32__9169__significand;
        vlSelf->__Vfunc_round_pack32__9169__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9170__distance))) {
            vlSelf->__Vfunc_shift_jam27__9170__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9170__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9170__distance))) {
            vlSelf->__Vfunc_shift_jam27__9170__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9170__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9170__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9170__value, (IData)(vlSelf->__Vfunc_shift_jam27__9170__distance)));
            vlSelf->__Vfunc_shift_jam27__9170__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9170__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9170__distance)))));
            vlSelf->__Vfunc_shift_jam27__9170__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9170__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9170__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9170__discarded))));
        }
        __Vfunc_round_pack32__9169__shifted = vlSelf->__Vfunc_shift_jam27__9170__Vfuncout;
    }
    vlSelf->__Vfunc_round_pack32__9169__rounded = (0x1ffffffU 
                                                   & ((0xffffffU 
                                                       & (__Vfunc_round_pack32__9169__shifted 
                                                          >> 3U)) 
                                                      + 
                                                      (1U 
                                                       & ((__Vfunc_round_pack32__9169__shifted 
                                                           >> 2U) 
                                                          & (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xbU 
                                                                      & __Vfunc_round_pack32__9169__shifted)))))));
}
