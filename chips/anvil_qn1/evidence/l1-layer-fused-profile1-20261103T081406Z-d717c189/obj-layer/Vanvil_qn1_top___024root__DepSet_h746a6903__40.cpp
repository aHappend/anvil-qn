// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

extern const VlWide<64>/*2047:0*/ Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__31(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__31\n"); );
    // Init
    QData/*32:0*/ __Vfunc_round_pack32__10435__Vfuncout;
    __Vfunc_round_pack32__10435__Vfuncout = 0;
    IData/*31:0*/ __Vilp;
    CData/*0:0*/ __Vfunc_round_pack32__10435__negative;
    __Vfunc_round_pack32__10435__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10435__exponent;
    __Vfunc_round_pack32__10435__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10435__significand;
    __Vfunc_round_pack32__10435__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10435__shifted;
    __Vfunc_round_pack32__10435__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10435__rounded;
    __Vfunc_round_pack32__10435__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10435__adjusted;
    __Vfunc_round_pack32__10435__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10435__biased;
    __Vfunc_round_pack32__10435__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10447__Vfuncout;
    __Vfunc_round_pack32__10447__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10447__negative;
    __Vfunc_round_pack32__10447__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10447__exponent;
    __Vfunc_round_pack32__10447__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10447__significand;
    __Vfunc_round_pack32__10447__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10447__shifted;
    __Vfunc_round_pack32__10447__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10447__rounded;
    __Vfunc_round_pack32__10447__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10447__adjusted;
    __Vfunc_round_pack32__10447__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10447__biased;
    __Vfunc_round_pack32__10447__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10459__Vfuncout;
    __Vfunc_round_pack32__10459__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10459__negative;
    __Vfunc_round_pack32__10459__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10459__exponent;
    __Vfunc_round_pack32__10459__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10459__significand;
    __Vfunc_round_pack32__10459__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10459__shifted;
    __Vfunc_round_pack32__10459__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10459__rounded;
    __Vfunc_round_pack32__10459__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10459__adjusted;
    __Vfunc_round_pack32__10459__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10459__biased;
    __Vfunc_round_pack32__10459__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10471__Vfuncout;
    __Vfunc_round_pack32__10471__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10471__negative;
    __Vfunc_round_pack32__10471__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10471__exponent;
    __Vfunc_round_pack32__10471__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10471__significand;
    __Vfunc_round_pack32__10471__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10471__shifted;
    __Vfunc_round_pack32__10471__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10471__rounded;
    __Vfunc_round_pack32__10471__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10471__adjusted;
    __Vfunc_round_pack32__10471__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10471__biased;
    __Vfunc_round_pack32__10471__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10483__Vfuncout;
    __Vfunc_round_pack32__10483__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10483__negative;
    __Vfunc_round_pack32__10483__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10483__exponent;
    __Vfunc_round_pack32__10483__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10483__significand;
    __Vfunc_round_pack32__10483__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10483__shifted;
    __Vfunc_round_pack32__10483__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10483__rounded;
    __Vfunc_round_pack32__10483__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10483__adjusted;
    __Vfunc_round_pack32__10483__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10483__biased;
    __Vfunc_round_pack32__10483__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10495__Vfuncout;
    __Vfunc_round_pack32__10495__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10495__negative;
    __Vfunc_round_pack32__10495__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10495__exponent;
    __Vfunc_round_pack32__10495__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10495__significand;
    __Vfunc_round_pack32__10495__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10495__shifted;
    __Vfunc_round_pack32__10495__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10495__rounded;
    __Vfunc_round_pack32__10495__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10495__adjusted;
    __Vfunc_round_pack32__10495__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10495__biased;
    __Vfunc_round_pack32__10495__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10507__Vfuncout;
    __Vfunc_round_pack32__10507__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10507__negative;
    __Vfunc_round_pack32__10507__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10507__exponent;
    __Vfunc_round_pack32__10507__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10507__significand;
    __Vfunc_round_pack32__10507__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10507__shifted;
    __Vfunc_round_pack32__10507__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10507__rounded;
    __Vfunc_round_pack32__10507__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10507__adjusted;
    __Vfunc_round_pack32__10507__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10507__biased;
    __Vfunc_round_pack32__10507__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10519__Vfuncout;
    __Vfunc_round_pack32__10519__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10519__negative;
    __Vfunc_round_pack32__10519__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10519__exponent;
    __Vfunc_round_pack32__10519__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10519__significand;
    __Vfunc_round_pack32__10519__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10519__shifted;
    __Vfunc_round_pack32__10519__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10519__rounded;
    __Vfunc_round_pack32__10519__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10519__adjusted;
    __Vfunc_round_pack32__10519__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10519__biased;
    __Vfunc_round_pack32__10519__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10531__Vfuncout;
    __Vfunc_round_pack32__10531__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10531__negative;
    __Vfunc_round_pack32__10531__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10531__exponent;
    __Vfunc_round_pack32__10531__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10531__significand;
    __Vfunc_round_pack32__10531__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10531__shifted;
    __Vfunc_round_pack32__10531__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10531__rounded;
    __Vfunc_round_pack32__10531__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10531__adjusted;
    __Vfunc_round_pack32__10531__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10531__biased;
    __Vfunc_round_pack32__10531__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10543__Vfuncout;
    __Vfunc_round_pack32__10543__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10543__negative;
    __Vfunc_round_pack32__10543__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10543__exponent;
    __Vfunc_round_pack32__10543__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10543__significand;
    __Vfunc_round_pack32__10543__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10543__shifted;
    __Vfunc_round_pack32__10543__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10543__rounded;
    __Vfunc_round_pack32__10543__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10543__adjusted;
    __Vfunc_round_pack32__10543__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10543__biased;
    __Vfunc_round_pack32__10543__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10555__Vfuncout;
    __Vfunc_round_pack32__10555__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10555__negative;
    __Vfunc_round_pack32__10555__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10555__exponent;
    __Vfunc_round_pack32__10555__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10555__significand;
    __Vfunc_round_pack32__10555__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10555__shifted;
    __Vfunc_round_pack32__10555__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10555__rounded;
    __Vfunc_round_pack32__10555__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10555__adjusted;
    __Vfunc_round_pack32__10555__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10555__biased;
    __Vfunc_round_pack32__10555__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10567__Vfuncout;
    __Vfunc_round_pack32__10567__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10567__negative;
    __Vfunc_round_pack32__10567__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10567__exponent;
    __Vfunc_round_pack32__10567__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10567__significand;
    __Vfunc_round_pack32__10567__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10567__shifted;
    __Vfunc_round_pack32__10567__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10567__rounded;
    __Vfunc_round_pack32__10567__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10567__adjusted;
    __Vfunc_round_pack32__10567__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10567__biased;
    __Vfunc_round_pack32__10567__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10579__Vfuncout;
    __Vfunc_round_pack32__10579__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10579__negative;
    __Vfunc_round_pack32__10579__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10579__exponent;
    __Vfunc_round_pack32__10579__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10579__significand;
    __Vfunc_round_pack32__10579__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10579__shifted;
    __Vfunc_round_pack32__10579__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10579__rounded;
    __Vfunc_round_pack32__10579__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10579__adjusted;
    __Vfunc_round_pack32__10579__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10579__biased;
    __Vfunc_round_pack32__10579__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10591__Vfuncout;
    __Vfunc_round_pack32__10591__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10591__negative;
    __Vfunc_round_pack32__10591__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10591__exponent;
    __Vfunc_round_pack32__10591__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10591__significand;
    __Vfunc_round_pack32__10591__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10591__shifted;
    __Vfunc_round_pack32__10591__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10591__rounded;
    __Vfunc_round_pack32__10591__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10591__adjusted;
    __Vfunc_round_pack32__10591__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10591__biased;
    __Vfunc_round_pack32__10591__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10603__Vfuncout;
    __Vfunc_round_pack32__10603__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10603__negative;
    __Vfunc_round_pack32__10603__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10603__exponent;
    __Vfunc_round_pack32__10603__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10603__significand;
    __Vfunc_round_pack32__10603__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10603__shifted;
    __Vfunc_round_pack32__10603__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10603__rounded;
    __Vfunc_round_pack32__10603__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10603__adjusted;
    __Vfunc_round_pack32__10603__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10603__biased;
    __Vfunc_round_pack32__10603__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10615__Vfuncout;
    __Vfunc_round_pack32__10615__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10615__negative;
    __Vfunc_round_pack32__10615__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10615__exponent;
    __Vfunc_round_pack32__10615__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10615__significand;
    __Vfunc_round_pack32__10615__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10615__shifted;
    __Vfunc_round_pack32__10615__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10615__rounded;
    __Vfunc_round_pack32__10615__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10615__adjusted;
    __Vfunc_round_pack32__10615__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10615__biased;
    __Vfunc_round_pack32__10615__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10627__Vfuncout;
    __Vfunc_round_pack32__10627__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10627__negative;
    __Vfunc_round_pack32__10627__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10627__exponent;
    __Vfunc_round_pack32__10627__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10627__significand;
    __Vfunc_round_pack32__10627__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10627__shifted;
    __Vfunc_round_pack32__10627__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10627__rounded;
    __Vfunc_round_pack32__10627__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10627__adjusted;
    __Vfunc_round_pack32__10627__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10627__biased;
    __Vfunc_round_pack32__10627__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10639__Vfuncout;
    __Vfunc_round_pack32__10639__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10639__negative;
    __Vfunc_round_pack32__10639__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10639__exponent;
    __Vfunc_round_pack32__10639__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10639__significand;
    __Vfunc_round_pack32__10639__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10639__shifted;
    __Vfunc_round_pack32__10639__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10639__rounded;
    __Vfunc_round_pack32__10639__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10639__adjusted;
    __Vfunc_round_pack32__10639__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10639__biased;
    __Vfunc_round_pack32__10639__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10651__Vfuncout;
    __Vfunc_round_pack32__10651__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10651__negative;
    __Vfunc_round_pack32__10651__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10651__exponent;
    __Vfunc_round_pack32__10651__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10651__significand;
    __Vfunc_round_pack32__10651__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10651__shifted;
    __Vfunc_round_pack32__10651__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10651__rounded;
    __Vfunc_round_pack32__10651__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10651__adjusted;
    __Vfunc_round_pack32__10651__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10651__biased;
    __Vfunc_round_pack32__10651__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10663__Vfuncout;
    __Vfunc_round_pack32__10663__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10663__negative;
    __Vfunc_round_pack32__10663__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10663__exponent;
    __Vfunc_round_pack32__10663__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10663__significand;
    __Vfunc_round_pack32__10663__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10663__shifted;
    __Vfunc_round_pack32__10663__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10663__rounded;
    __Vfunc_round_pack32__10663__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10663__adjusted;
    __Vfunc_round_pack32__10663__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10663__biased;
    __Vfunc_round_pack32__10663__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10675__Vfuncout;
    __Vfunc_round_pack32__10675__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10675__negative;
    __Vfunc_round_pack32__10675__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10675__exponent;
    __Vfunc_round_pack32__10675__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10675__significand;
    __Vfunc_round_pack32__10675__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10675__shifted;
    __Vfunc_round_pack32__10675__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10675__rounded;
    __Vfunc_round_pack32__10675__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10675__adjusted;
    __Vfunc_round_pack32__10675__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10675__biased;
    __Vfunc_round_pack32__10675__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10687__Vfuncout;
    __Vfunc_round_pack32__10687__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10687__negative;
    __Vfunc_round_pack32__10687__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10687__exponent;
    __Vfunc_round_pack32__10687__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10687__significand;
    __Vfunc_round_pack32__10687__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10687__shifted;
    __Vfunc_round_pack32__10687__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10687__rounded;
    __Vfunc_round_pack32__10687__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10687__adjusted;
    __Vfunc_round_pack32__10687__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10687__biased;
    __Vfunc_round_pack32__10687__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10699__Vfuncout;
    __Vfunc_round_pack32__10699__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10699__negative;
    __Vfunc_round_pack32__10699__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10699__exponent;
    __Vfunc_round_pack32__10699__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10699__significand;
    __Vfunc_round_pack32__10699__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10699__shifted;
    __Vfunc_round_pack32__10699__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10699__rounded;
    __Vfunc_round_pack32__10699__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10699__adjusted;
    __Vfunc_round_pack32__10699__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10699__biased;
    __Vfunc_round_pack32__10699__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10711__Vfuncout;
    __Vfunc_round_pack32__10711__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10711__negative;
    __Vfunc_round_pack32__10711__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10711__exponent;
    __Vfunc_round_pack32__10711__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10711__significand;
    __Vfunc_round_pack32__10711__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10711__shifted;
    __Vfunc_round_pack32__10711__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10711__rounded;
    __Vfunc_round_pack32__10711__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10711__adjusted;
    __Vfunc_round_pack32__10711__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10711__biased;
    __Vfunc_round_pack32__10711__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10723__Vfuncout;
    __Vfunc_round_pack32__10723__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10723__negative;
    __Vfunc_round_pack32__10723__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10723__exponent;
    __Vfunc_round_pack32__10723__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10723__significand;
    __Vfunc_round_pack32__10723__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10723__shifted;
    __Vfunc_round_pack32__10723__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10723__rounded;
    __Vfunc_round_pack32__10723__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10723__adjusted;
    __Vfunc_round_pack32__10723__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10723__biased;
    __Vfunc_round_pack32__10723__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10735__Vfuncout;
    __Vfunc_round_pack32__10735__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10735__negative;
    __Vfunc_round_pack32__10735__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10735__exponent;
    __Vfunc_round_pack32__10735__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10735__significand;
    __Vfunc_round_pack32__10735__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10735__shifted;
    __Vfunc_round_pack32__10735__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10735__rounded;
    __Vfunc_round_pack32__10735__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10735__adjusted;
    __Vfunc_round_pack32__10735__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10735__biased;
    __Vfunc_round_pack32__10735__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10747__Vfuncout;
    __Vfunc_round_pack32__10747__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10747__negative;
    __Vfunc_round_pack32__10747__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10747__exponent;
    __Vfunc_round_pack32__10747__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10747__significand;
    __Vfunc_round_pack32__10747__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10747__shifted;
    __Vfunc_round_pack32__10747__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10747__rounded;
    __Vfunc_round_pack32__10747__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10747__adjusted;
    __Vfunc_round_pack32__10747__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10747__biased;
    __Vfunc_round_pack32__10747__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10759__Vfuncout;
    __Vfunc_round_pack32__10759__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10759__negative;
    __Vfunc_round_pack32__10759__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10759__exponent;
    __Vfunc_round_pack32__10759__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10759__significand;
    __Vfunc_round_pack32__10759__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10759__shifted;
    __Vfunc_round_pack32__10759__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10759__rounded;
    __Vfunc_round_pack32__10759__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10759__adjusted;
    __Vfunc_round_pack32__10759__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10759__biased;
    __Vfunc_round_pack32__10759__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10771__Vfuncout;
    __Vfunc_round_pack32__10771__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10771__negative;
    __Vfunc_round_pack32__10771__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10771__exponent;
    __Vfunc_round_pack32__10771__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10771__significand;
    __Vfunc_round_pack32__10771__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10771__shifted;
    __Vfunc_round_pack32__10771__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10771__rounded;
    __Vfunc_round_pack32__10771__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10771__adjusted;
    __Vfunc_round_pack32__10771__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10771__biased;
    __Vfunc_round_pack32__10771__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10783__Vfuncout;
    __Vfunc_round_pack32__10783__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10783__negative;
    __Vfunc_round_pack32__10783__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10783__exponent;
    __Vfunc_round_pack32__10783__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10783__significand;
    __Vfunc_round_pack32__10783__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10783__shifted;
    __Vfunc_round_pack32__10783__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10783__rounded;
    __Vfunc_round_pack32__10783__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10783__adjusted;
    __Vfunc_round_pack32__10783__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10783__biased;
    __Vfunc_round_pack32__10783__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10795__Vfuncout;
    __Vfunc_round_pack32__10795__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10795__negative;
    __Vfunc_round_pack32__10795__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10795__exponent;
    __Vfunc_round_pack32__10795__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10795__significand;
    __Vfunc_round_pack32__10795__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10795__shifted;
    __Vfunc_round_pack32__10795__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10795__rounded;
    __Vfunc_round_pack32__10795__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10795__adjusted;
    __Vfunc_round_pack32__10795__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10795__biased;
    __Vfunc_round_pack32__10795__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10807__Vfuncout;
    __Vfunc_round_pack32__10807__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10807__negative;
    __Vfunc_round_pack32__10807__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10807__exponent;
    __Vfunc_round_pack32__10807__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10807__significand;
    __Vfunc_round_pack32__10807__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10807__shifted;
    __Vfunc_round_pack32__10807__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10807__rounded;
    __Vfunc_round_pack32__10807__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10807__adjusted;
    __Vfunc_round_pack32__10807__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10807__biased;
    __Vfunc_round_pack32__10807__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10819__Vfuncout;
    __Vfunc_round_pack32__10819__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10819__negative;
    __Vfunc_round_pack32__10819__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10819__exponent;
    __Vfunc_round_pack32__10819__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10819__significand;
    __Vfunc_round_pack32__10819__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10819__shifted;
    __Vfunc_round_pack32__10819__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10819__rounded;
    __Vfunc_round_pack32__10819__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10819__adjusted;
    __Vfunc_round_pack32__10819__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10819__biased;
    __Vfunc_round_pack32__10819__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10831__Vfuncout;
    __Vfunc_round_pack32__10831__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10831__negative;
    __Vfunc_round_pack32__10831__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10831__exponent;
    __Vfunc_round_pack32__10831__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10831__significand;
    __Vfunc_round_pack32__10831__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10831__shifted;
    __Vfunc_round_pack32__10831__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10831__rounded;
    __Vfunc_round_pack32__10831__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10831__adjusted;
    __Vfunc_round_pack32__10831__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10831__biased;
    __Vfunc_round_pack32__10831__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10843__Vfuncout;
    __Vfunc_round_pack32__10843__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10843__negative;
    __Vfunc_round_pack32__10843__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10843__exponent;
    __Vfunc_round_pack32__10843__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10843__significand;
    __Vfunc_round_pack32__10843__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10843__shifted;
    __Vfunc_round_pack32__10843__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10843__rounded;
    __Vfunc_round_pack32__10843__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10843__adjusted;
    __Vfunc_round_pack32__10843__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10843__biased;
    __Vfunc_round_pack32__10843__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10855__Vfuncout;
    __Vfunc_round_pack32__10855__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10855__negative;
    __Vfunc_round_pack32__10855__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10855__exponent;
    __Vfunc_round_pack32__10855__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10855__significand;
    __Vfunc_round_pack32__10855__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10855__shifted;
    __Vfunc_round_pack32__10855__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10855__rounded;
    __Vfunc_round_pack32__10855__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10855__adjusted;
    __Vfunc_round_pack32__10855__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10855__biased;
    __Vfunc_round_pack32__10855__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10867__Vfuncout;
    __Vfunc_round_pack32__10867__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10867__negative;
    __Vfunc_round_pack32__10867__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10867__exponent;
    __Vfunc_round_pack32__10867__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10867__significand;
    __Vfunc_round_pack32__10867__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10867__shifted;
    __Vfunc_round_pack32__10867__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10867__rounded;
    __Vfunc_round_pack32__10867__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10867__adjusted;
    __Vfunc_round_pack32__10867__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10867__biased;
    __Vfunc_round_pack32__10867__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10879__Vfuncout;
    __Vfunc_round_pack32__10879__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10879__negative;
    __Vfunc_round_pack32__10879__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10879__exponent;
    __Vfunc_round_pack32__10879__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10879__significand;
    __Vfunc_round_pack32__10879__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10879__shifted;
    __Vfunc_round_pack32__10879__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10879__rounded;
    __Vfunc_round_pack32__10879__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10879__adjusted;
    __Vfunc_round_pack32__10879__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10879__biased;
    __Vfunc_round_pack32__10879__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10891__Vfuncout;
    __Vfunc_round_pack32__10891__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10891__negative;
    __Vfunc_round_pack32__10891__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10891__exponent;
    __Vfunc_round_pack32__10891__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10891__significand;
    __Vfunc_round_pack32__10891__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10891__shifted;
    __Vfunc_round_pack32__10891__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10891__rounded;
    __Vfunc_round_pack32__10891__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10891__adjusted;
    __Vfunc_round_pack32__10891__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10891__biased;
    __Vfunc_round_pack32__10891__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10903__Vfuncout;
    __Vfunc_round_pack32__10903__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10903__negative;
    __Vfunc_round_pack32__10903__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10903__exponent;
    __Vfunc_round_pack32__10903__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10903__significand;
    __Vfunc_round_pack32__10903__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10903__shifted;
    __Vfunc_round_pack32__10903__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10903__rounded;
    __Vfunc_round_pack32__10903__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10903__adjusted;
    __Vfunc_round_pack32__10903__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10903__biased;
    __Vfunc_round_pack32__10903__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10915__Vfuncout;
    __Vfunc_round_pack32__10915__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10915__negative;
    __Vfunc_round_pack32__10915__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10915__exponent;
    __Vfunc_round_pack32__10915__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10915__significand;
    __Vfunc_round_pack32__10915__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10915__shifted;
    __Vfunc_round_pack32__10915__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10915__rounded;
    __Vfunc_round_pack32__10915__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10915__adjusted;
    __Vfunc_round_pack32__10915__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10915__biased;
    __Vfunc_round_pack32__10915__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10927__Vfuncout;
    __Vfunc_round_pack32__10927__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10927__negative;
    __Vfunc_round_pack32__10927__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10927__exponent;
    __Vfunc_round_pack32__10927__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10927__significand;
    __Vfunc_round_pack32__10927__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10927__shifted;
    __Vfunc_round_pack32__10927__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10927__rounded;
    __Vfunc_round_pack32__10927__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10927__adjusted;
    __Vfunc_round_pack32__10927__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10927__biased;
    __Vfunc_round_pack32__10927__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10939__Vfuncout;
    __Vfunc_round_pack32__10939__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10939__negative;
    __Vfunc_round_pack32__10939__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10939__exponent;
    __Vfunc_round_pack32__10939__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10939__significand;
    __Vfunc_round_pack32__10939__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10939__shifted;
    __Vfunc_round_pack32__10939__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10939__rounded;
    __Vfunc_round_pack32__10939__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10939__adjusted;
    __Vfunc_round_pack32__10939__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10939__biased;
    __Vfunc_round_pack32__10939__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10951__Vfuncout;
    __Vfunc_round_pack32__10951__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10951__negative;
    __Vfunc_round_pack32__10951__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10951__exponent;
    __Vfunc_round_pack32__10951__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10951__significand;
    __Vfunc_round_pack32__10951__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10951__shifted;
    __Vfunc_round_pack32__10951__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10951__rounded;
    __Vfunc_round_pack32__10951__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10951__adjusted;
    __Vfunc_round_pack32__10951__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10951__biased;
    __Vfunc_round_pack32__10951__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10963__Vfuncout;
    __Vfunc_round_pack32__10963__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10963__negative;
    __Vfunc_round_pack32__10963__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10963__exponent;
    __Vfunc_round_pack32__10963__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10963__significand;
    __Vfunc_round_pack32__10963__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10963__shifted;
    __Vfunc_round_pack32__10963__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10963__rounded;
    __Vfunc_round_pack32__10963__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10963__adjusted;
    __Vfunc_round_pack32__10963__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10963__biased;
    __Vfunc_round_pack32__10963__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10975__Vfuncout;
    __Vfunc_round_pack32__10975__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10975__negative;
    __Vfunc_round_pack32__10975__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10975__exponent;
    __Vfunc_round_pack32__10975__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10975__significand;
    __Vfunc_round_pack32__10975__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10975__shifted;
    __Vfunc_round_pack32__10975__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10975__rounded;
    __Vfunc_round_pack32__10975__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10975__adjusted;
    __Vfunc_round_pack32__10975__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10975__biased;
    __Vfunc_round_pack32__10975__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10987__Vfuncout;
    __Vfunc_round_pack32__10987__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10987__negative;
    __Vfunc_round_pack32__10987__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10987__exponent;
    __Vfunc_round_pack32__10987__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10987__significand;
    __Vfunc_round_pack32__10987__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10987__shifted;
    __Vfunc_round_pack32__10987__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10987__rounded;
    __Vfunc_round_pack32__10987__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10987__adjusted;
    __Vfunc_round_pack32__10987__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10987__biased;
    __Vfunc_round_pack32__10987__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10999__Vfuncout;
    __Vfunc_round_pack32__10999__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10999__negative;
    __Vfunc_round_pack32__10999__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10999__exponent;
    __Vfunc_round_pack32__10999__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10999__significand;
    __Vfunc_round_pack32__10999__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10999__shifted;
    __Vfunc_round_pack32__10999__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10999__rounded;
    __Vfunc_round_pack32__10999__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10999__adjusted;
    __Vfunc_round_pack32__10999__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10999__biased;
    __Vfunc_round_pack32__10999__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11011__Vfuncout;
    __Vfunc_round_pack32__11011__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11011__negative;
    __Vfunc_round_pack32__11011__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11011__exponent;
    __Vfunc_round_pack32__11011__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11011__significand;
    __Vfunc_round_pack32__11011__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11011__shifted;
    __Vfunc_round_pack32__11011__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11011__rounded;
    __Vfunc_round_pack32__11011__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11011__adjusted;
    __Vfunc_round_pack32__11011__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11011__biased;
    __Vfunc_round_pack32__11011__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11023__Vfuncout;
    __Vfunc_round_pack32__11023__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11023__negative;
    __Vfunc_round_pack32__11023__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11023__exponent;
    __Vfunc_round_pack32__11023__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11023__significand;
    __Vfunc_round_pack32__11023__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11023__shifted;
    __Vfunc_round_pack32__11023__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11023__rounded;
    __Vfunc_round_pack32__11023__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11023__adjusted;
    __Vfunc_round_pack32__11023__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11023__biased;
    __Vfunc_round_pack32__11023__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11035__Vfuncout;
    __Vfunc_round_pack32__11035__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11035__negative;
    __Vfunc_round_pack32__11035__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11035__exponent;
    __Vfunc_round_pack32__11035__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11035__significand;
    __Vfunc_round_pack32__11035__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11035__shifted;
    __Vfunc_round_pack32__11035__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11035__rounded;
    __Vfunc_round_pack32__11035__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11035__adjusted;
    __Vfunc_round_pack32__11035__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11035__biased;
    __Vfunc_round_pack32__11035__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11047__Vfuncout;
    __Vfunc_round_pack32__11047__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11047__negative;
    __Vfunc_round_pack32__11047__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11047__exponent;
    __Vfunc_round_pack32__11047__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11047__significand;
    __Vfunc_round_pack32__11047__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11047__shifted;
    __Vfunc_round_pack32__11047__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11047__rounded;
    __Vfunc_round_pack32__11047__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11047__adjusted;
    __Vfunc_round_pack32__11047__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11047__biased;
    __Vfunc_round_pack32__11047__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11059__Vfuncout;
    __Vfunc_round_pack32__11059__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11059__negative;
    __Vfunc_round_pack32__11059__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11059__exponent;
    __Vfunc_round_pack32__11059__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11059__significand;
    __Vfunc_round_pack32__11059__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11059__shifted;
    __Vfunc_round_pack32__11059__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11059__rounded;
    __Vfunc_round_pack32__11059__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11059__adjusted;
    __Vfunc_round_pack32__11059__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11059__biased;
    __Vfunc_round_pack32__11059__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11071__Vfuncout;
    __Vfunc_round_pack32__11071__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11071__negative;
    __Vfunc_round_pack32__11071__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11071__exponent;
    __Vfunc_round_pack32__11071__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11071__significand;
    __Vfunc_round_pack32__11071__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11071__shifted;
    __Vfunc_round_pack32__11071__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11071__rounded;
    __Vfunc_round_pack32__11071__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11071__adjusted;
    __Vfunc_round_pack32__11071__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11071__biased;
    __Vfunc_round_pack32__11071__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11083__Vfuncout;
    __Vfunc_round_pack32__11083__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11083__negative;
    __Vfunc_round_pack32__11083__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11083__exponent;
    __Vfunc_round_pack32__11083__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11083__significand;
    __Vfunc_round_pack32__11083__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11083__shifted;
    __Vfunc_round_pack32__11083__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11083__rounded;
    __Vfunc_round_pack32__11083__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11083__adjusted;
    __Vfunc_round_pack32__11083__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11083__biased;
    __Vfunc_round_pack32__11083__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11095__Vfuncout;
    __Vfunc_round_pack32__11095__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11095__negative;
    __Vfunc_round_pack32__11095__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11095__exponent;
    __Vfunc_round_pack32__11095__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11095__significand;
    __Vfunc_round_pack32__11095__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11095__shifted;
    __Vfunc_round_pack32__11095__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11095__rounded;
    __Vfunc_round_pack32__11095__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11095__adjusted;
    __Vfunc_round_pack32__11095__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11095__biased;
    __Vfunc_round_pack32__11095__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11107__Vfuncout;
    __Vfunc_round_pack32__11107__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11107__negative;
    __Vfunc_round_pack32__11107__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11107__exponent;
    __Vfunc_round_pack32__11107__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11107__significand;
    __Vfunc_round_pack32__11107__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11107__shifted;
    __Vfunc_round_pack32__11107__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11107__rounded;
    __Vfunc_round_pack32__11107__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11107__adjusted;
    __Vfunc_round_pack32__11107__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11107__biased;
    __Vfunc_round_pack32__11107__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11119__Vfuncout;
    __Vfunc_round_pack32__11119__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11119__negative;
    __Vfunc_round_pack32__11119__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11119__exponent;
    __Vfunc_round_pack32__11119__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11119__significand;
    __Vfunc_round_pack32__11119__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11119__shifted;
    __Vfunc_round_pack32__11119__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11119__rounded;
    __Vfunc_round_pack32__11119__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11119__adjusted;
    __Vfunc_round_pack32__11119__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11119__biased;
    __Vfunc_round_pack32__11119__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11131__Vfuncout;
    __Vfunc_round_pack32__11131__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11131__negative;
    __Vfunc_round_pack32__11131__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11131__exponent;
    __Vfunc_round_pack32__11131__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11131__significand;
    __Vfunc_round_pack32__11131__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11131__shifted;
    __Vfunc_round_pack32__11131__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11131__rounded;
    __Vfunc_round_pack32__11131__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11131__adjusted;
    __Vfunc_round_pack32__11131__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11131__biased;
    __Vfunc_round_pack32__11131__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11143__Vfuncout;
    __Vfunc_round_pack32__11143__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11143__negative;
    __Vfunc_round_pack32__11143__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11143__exponent;
    __Vfunc_round_pack32__11143__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11143__significand;
    __Vfunc_round_pack32__11143__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11143__shifted;
    __Vfunc_round_pack32__11143__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11143__rounded;
    __Vfunc_round_pack32__11143__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11143__adjusted;
    __Vfunc_round_pack32__11143__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11143__biased;
    __Vfunc_round_pack32__11143__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11155__Vfuncout;
    __Vfunc_round_pack32__11155__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11155__negative;
    __Vfunc_round_pack32__11155__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11155__exponent;
    __Vfunc_round_pack32__11155__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11155__significand;
    __Vfunc_round_pack32__11155__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11155__shifted;
    __Vfunc_round_pack32__11155__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11155__rounded;
    __Vfunc_round_pack32__11155__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11155__adjusted;
    __Vfunc_round_pack32__11155__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11155__biased;
    __Vfunc_round_pack32__11155__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11167__Vfuncout;
    __Vfunc_round_pack32__11167__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11167__negative;
    __Vfunc_round_pack32__11167__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11167__exponent;
    __Vfunc_round_pack32__11167__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11167__significand;
    __Vfunc_round_pack32__11167__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11167__shifted;
    __Vfunc_round_pack32__11167__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11167__rounded;
    __Vfunc_round_pack32__11167__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11167__adjusted;
    __Vfunc_round_pack32__11167__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11167__biased;
    __Vfunc_round_pack32__11167__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11179__Vfuncout;
    __Vfunc_round_pack32__11179__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11179__negative;
    __Vfunc_round_pack32__11179__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11179__exponent;
    __Vfunc_round_pack32__11179__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11179__significand;
    __Vfunc_round_pack32__11179__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11179__shifted;
    __Vfunc_round_pack32__11179__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11179__rounded;
    __Vfunc_round_pack32__11179__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11179__adjusted;
    __Vfunc_round_pack32__11179__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11179__biased;
    __Vfunc_round_pack32__11179__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11191__Vfuncout;
    __Vfunc_round_pack32__11191__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11191__negative;
    __Vfunc_round_pack32__11191__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11191__exponent;
    __Vfunc_round_pack32__11191__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11191__significand;
    __Vfunc_round_pack32__11191__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11191__shifted;
    __Vfunc_round_pack32__11191__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11191__rounded;
    __Vfunc_round_pack32__11191__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11191__adjusted;
    __Vfunc_round_pack32__11191__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11191__biased;
    __Vfunc_round_pack32__11191__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11203__Vfuncout;
    __Vfunc_round_pack32__11203__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11203__negative;
    __Vfunc_round_pack32__11203__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11203__exponent;
    __Vfunc_round_pack32__11203__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11203__significand;
    __Vfunc_round_pack32__11203__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11203__shifted;
    __Vfunc_round_pack32__11203__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11203__rounded;
    __Vfunc_round_pack32__11203__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11203__adjusted;
    __Vfunc_round_pack32__11203__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11203__biased;
    __Vfunc_round_pack32__11203__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11215__Vfuncout;
    __Vfunc_round_pack32__11215__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11215__negative;
    __Vfunc_round_pack32__11215__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11215__exponent;
    __Vfunc_round_pack32__11215__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11215__significand;
    __Vfunc_round_pack32__11215__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11215__shifted;
    __Vfunc_round_pack32__11215__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11215__rounded;
    __Vfunc_round_pack32__11215__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11215__adjusted;
    __Vfunc_round_pack32__11215__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11215__biased;
    __Vfunc_round_pack32__11215__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11227__Vfuncout;
    __Vfunc_round_pack32__11227__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11227__negative;
    __Vfunc_round_pack32__11227__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11227__exponent;
    __Vfunc_round_pack32__11227__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11227__significand;
    __Vfunc_round_pack32__11227__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11227__shifted;
    __Vfunc_round_pack32__11227__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11227__rounded;
    __Vfunc_round_pack32__11227__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11227__adjusted;
    __Vfunc_round_pack32__11227__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11227__biased;
    __Vfunc_round_pack32__11227__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11239__Vfuncout;
    __Vfunc_round_pack32__11239__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11239__negative;
    __Vfunc_round_pack32__11239__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11239__exponent;
    __Vfunc_round_pack32__11239__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11239__significand;
    __Vfunc_round_pack32__11239__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11239__shifted;
    __Vfunc_round_pack32__11239__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11239__rounded;
    __Vfunc_round_pack32__11239__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11239__adjusted;
    __Vfunc_round_pack32__11239__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11239__biased;
    __Vfunc_round_pack32__11239__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11251__Vfuncout;
    __Vfunc_round_pack32__11251__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11251__negative;
    __Vfunc_round_pack32__11251__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11251__exponent;
    __Vfunc_round_pack32__11251__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11251__significand;
    __Vfunc_round_pack32__11251__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11251__shifted;
    __Vfunc_round_pack32__11251__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11251__rounded;
    __Vfunc_round_pack32__11251__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11251__adjusted;
    __Vfunc_round_pack32__11251__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11251__biased;
    __Vfunc_round_pack32__11251__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11263__Vfuncout;
    __Vfunc_round_pack32__11263__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11263__negative;
    __Vfunc_round_pack32__11263__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11263__exponent;
    __Vfunc_round_pack32__11263__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11263__significand;
    __Vfunc_round_pack32__11263__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11263__shifted;
    __Vfunc_round_pack32__11263__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11263__rounded;
    __Vfunc_round_pack32__11263__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11263__adjusted;
    __Vfunc_round_pack32__11263__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11263__biased;
    __Vfunc_round_pack32__11263__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11275__Vfuncout;
    __Vfunc_round_pack32__11275__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11275__negative;
    __Vfunc_round_pack32__11275__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11275__exponent;
    __Vfunc_round_pack32__11275__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11275__significand;
    __Vfunc_round_pack32__11275__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11275__shifted;
    __Vfunc_round_pack32__11275__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11275__rounded;
    __Vfunc_round_pack32__11275__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11275__adjusted;
    __Vfunc_round_pack32__11275__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11275__biased;
    __Vfunc_round_pack32__11275__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11287__Vfuncout;
    __Vfunc_round_pack32__11287__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11287__negative;
    __Vfunc_round_pack32__11287__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11287__exponent;
    __Vfunc_round_pack32__11287__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11287__significand;
    __Vfunc_round_pack32__11287__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11287__shifted;
    __Vfunc_round_pack32__11287__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11287__rounded;
    __Vfunc_round_pack32__11287__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11287__adjusted;
    __Vfunc_round_pack32__11287__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11287__biased;
    __Vfunc_round_pack32__11287__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11299__Vfuncout;
    __Vfunc_round_pack32__11299__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11299__negative;
    __Vfunc_round_pack32__11299__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11299__exponent;
    __Vfunc_round_pack32__11299__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11299__significand;
    __Vfunc_round_pack32__11299__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11299__shifted;
    __Vfunc_round_pack32__11299__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11299__rounded;
    __Vfunc_round_pack32__11299__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11299__adjusted;
    __Vfunc_round_pack32__11299__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11299__biased;
    __Vfunc_round_pack32__11299__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11311__Vfuncout;
    __Vfunc_round_pack32__11311__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11311__negative;
    __Vfunc_round_pack32__11311__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11311__exponent;
    __Vfunc_round_pack32__11311__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11311__significand;
    __Vfunc_round_pack32__11311__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11311__shifted;
    __Vfunc_round_pack32__11311__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11311__rounded;
    __Vfunc_round_pack32__11311__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11311__adjusted;
    __Vfunc_round_pack32__11311__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11311__biased;
    __Vfunc_round_pack32__11311__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11323__Vfuncout;
    __Vfunc_round_pack32__11323__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11323__negative;
    __Vfunc_round_pack32__11323__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11323__exponent;
    __Vfunc_round_pack32__11323__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11323__significand;
    __Vfunc_round_pack32__11323__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11323__shifted;
    __Vfunc_round_pack32__11323__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11323__rounded;
    __Vfunc_round_pack32__11323__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11323__adjusted;
    __Vfunc_round_pack32__11323__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11323__biased;
    __Vfunc_round_pack32__11323__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11335__Vfuncout;
    __Vfunc_round_pack32__11335__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11335__negative;
    __Vfunc_round_pack32__11335__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11335__exponent;
    __Vfunc_round_pack32__11335__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11335__significand;
    __Vfunc_round_pack32__11335__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11335__shifted;
    __Vfunc_round_pack32__11335__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11335__rounded;
    __Vfunc_round_pack32__11335__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11335__adjusted;
    __Vfunc_round_pack32__11335__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11335__biased;
    __Vfunc_round_pack32__11335__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11347__Vfuncout;
    __Vfunc_round_pack32__11347__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11347__negative;
    __Vfunc_round_pack32__11347__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11347__exponent;
    __Vfunc_round_pack32__11347__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11347__significand;
    __Vfunc_round_pack32__11347__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11347__shifted;
    __Vfunc_round_pack32__11347__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11347__rounded;
    __Vfunc_round_pack32__11347__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11347__adjusted;
    __Vfunc_round_pack32__11347__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11347__biased;
    __Vfunc_round_pack32__11347__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11359__Vfuncout;
    __Vfunc_round_pack32__11359__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11359__negative;
    __Vfunc_round_pack32__11359__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11359__exponent;
    __Vfunc_round_pack32__11359__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11359__significand;
    __Vfunc_round_pack32__11359__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11359__shifted;
    __Vfunc_round_pack32__11359__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11359__rounded;
    __Vfunc_round_pack32__11359__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11359__adjusted;
    __Vfunc_round_pack32__11359__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11359__biased;
    __Vfunc_round_pack32__11359__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__11371__Vfuncout;
    __Vfunc_round_pack32__11371__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__11371__negative;
    __Vfunc_round_pack32__11371__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11371__exponent;
    __Vfunc_round_pack32__11371__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11371__significand;
    __Vfunc_round_pack32__11371__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__11371__shifted;
    __Vfunc_round_pack32__11371__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__11371__rounded;
    __Vfunc_round_pack32__11371__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__11371__adjusted;
    __Vfunc_round_pack32__11371__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__11371__biased;
    __Vfunc_round_pack32__11371__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14175__Vfuncout;
    __Vfunc_fp32_invalid__14175__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14175__value;
    __Vfunc_fp32_invalid__14175__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14176__Vfuncout;
    __Vfunc_fp32_invalid__14176__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14176__value;
    __Vfunc_fp32_invalid__14176__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14181__Vfuncout;
    __Vfunc_fp32_invalid__14181__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14181__value;
    __Vfunc_fp32_invalid__14181__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14182__Vfuncout;
    __Vfunc_fp32_invalid__14182__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14182__value;
    __Vfunc_fp32_invalid__14182__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__14190__Vfuncout;
    __Vfunc_round_pack32__14190__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__14190__negative;
    __Vfunc_round_pack32__14190__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14190__exponent;
    __Vfunc_round_pack32__14190__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14190__significand;
    __Vfunc_round_pack32__14190__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14190__shifted;
    __Vfunc_round_pack32__14190__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__14190__rounded;
    __Vfunc_round_pack32__14190__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14190__adjusted;
    __Vfunc_round_pack32__14190__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__14190__biased;
    __Vfunc_round_pack32__14190__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14211__Vfuncout;
    __Vfunc_fp32_invalid__14211__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14211__value;
    __Vfunc_fp32_invalid__14211__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14212__Vfuncout;
    __Vfunc_fp32_invalid__14212__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14212__value;
    __Vfunc_fp32_invalid__14212__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14217__Vfuncout;
    __Vfunc_fp32_invalid__14217__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14217__value;
    __Vfunc_fp32_invalid__14217__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14218__Vfuncout;
    __Vfunc_fp32_invalid__14218__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14218__value;
    __Vfunc_fp32_invalid__14218__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__14226__Vfuncout;
    __Vfunc_round_pack32__14226__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__14226__negative;
    __Vfunc_round_pack32__14226__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14226__exponent;
    __Vfunc_round_pack32__14226__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14226__significand;
    __Vfunc_round_pack32__14226__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14226__shifted;
    __Vfunc_round_pack32__14226__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__14226__rounded;
    __Vfunc_round_pack32__14226__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14226__adjusted;
    __Vfunc_round_pack32__14226__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__14226__biased;
    __Vfunc_round_pack32__14226__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14247__Vfuncout;
    __Vfunc_fp32_invalid__14247__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14247__value;
    __Vfunc_fp32_invalid__14247__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14248__Vfuncout;
    __Vfunc_fp32_invalid__14248__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14248__value;
    __Vfunc_fp32_invalid__14248__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14253__Vfuncout;
    __Vfunc_fp32_invalid__14253__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14253__value;
    __Vfunc_fp32_invalid__14253__value = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__14254__Vfuncout;
    __Vfunc_fp32_invalid__14254__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__14254__value;
    __Vfunc_fp32_invalid__14254__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__14262__Vfuncout;
    __Vfunc_round_pack32__14262__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__14262__negative;
    __Vfunc_round_pack32__14262__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14262__exponent;
    __Vfunc_round_pack32__14262__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14262__significand;
    __Vfunc_round_pack32__14262__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__14262__shifted;
    __Vfunc_round_pack32__14262__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__14262__rounded;
    __Vfunc_round_pack32__14262__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__14262__adjusted;
    __Vfunc_round_pack32__14262__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__14262__biased;
    __Vfunc_round_pack32__14262__biased = 0;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__gamma_scale__DOT__packed4 
        = vlSelf->__Vfunc_round_pack32__11383__Vfuncout;
    __Vfunc_round_pack32__11371__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11371__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11371__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11371__adjusted = __Vfunc_round_pack32__11371__exponent;
    __Vfunc_round_pack32__11371__shifted = __Vfunc_round_pack32__11371__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11371__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11372__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11371__exponent)));
        vlSelf->__Vfunc_shift_jam27__11372__value = __Vfunc_round_pack32__11371__significand;
        __Vfunc_round_pack32__11371__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11372__distance))) {
            vlSelf->__Vfunc_shift_jam27__11372__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11372__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11372__distance))) {
            vlSelf->__Vfunc_shift_jam27__11372__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11372__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11372__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11372__value, (IData)(vlSelf->__Vfunc_shift_jam27__11372__distance)));
            vlSelf->__Vfunc_shift_jam27__11372__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11372__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11372__distance)))));
            vlSelf->__Vfunc_shift_jam27__11372__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11372__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11372__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11372__discarded))));
        }
        __Vfunc_round_pack32__11371__shifted = vlSelf->__Vfunc_shift_jam27__11372__Vfuncout;
    }
    __Vfunc_round_pack32__11371__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11371__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11371__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11371__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11371__rounded)) {
        __Vfunc_round_pack32__11371__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11371__rounded, 1U));
        __Vfunc_round_pack32__11371__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11371__adjusted)));
    }
    __Vfunc_round_pack32__11371__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11371__rounded)) {
        __Vfunc_round_pack32__11371__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11371__adjusted)));
    }
    __Vfunc_round_pack32__11371__Vfuncout = (((0U == __Vfunc_round_pack32__11371__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11371__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11371__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11371__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11371__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11371__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11371__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11371__Vfuncout;
    __Vfunc_round_pack32__11359__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11359__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11359__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11359__adjusted = __Vfunc_round_pack32__11359__exponent;
    __Vfunc_round_pack32__11359__shifted = __Vfunc_round_pack32__11359__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11359__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11360__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11359__exponent)));
        vlSelf->__Vfunc_shift_jam27__11360__value = __Vfunc_round_pack32__11359__significand;
        __Vfunc_round_pack32__11359__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11360__distance))) {
            vlSelf->__Vfunc_shift_jam27__11360__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11360__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11360__distance))) {
            vlSelf->__Vfunc_shift_jam27__11360__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11360__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11360__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11360__value, (IData)(vlSelf->__Vfunc_shift_jam27__11360__distance)));
            vlSelf->__Vfunc_shift_jam27__11360__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11360__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11360__distance)))));
            vlSelf->__Vfunc_shift_jam27__11360__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11360__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11360__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11360__discarded))));
        }
        __Vfunc_round_pack32__11359__shifted = vlSelf->__Vfunc_shift_jam27__11360__Vfuncout;
    }
    __Vfunc_round_pack32__11359__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11359__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11359__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11359__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11359__rounded)) {
        __Vfunc_round_pack32__11359__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11359__rounded, 1U));
        __Vfunc_round_pack32__11359__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11359__adjusted)));
    }
    __Vfunc_round_pack32__11359__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11359__rounded)) {
        __Vfunc_round_pack32__11359__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11359__adjusted)));
    }
    __Vfunc_round_pack32__11359__Vfuncout = (((0U == __Vfunc_round_pack32__11359__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11359__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11359__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11359__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11359__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11359__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11359__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11359__Vfuncout;
    __Vfunc_round_pack32__11347__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11347__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11347__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11347__adjusted = __Vfunc_round_pack32__11347__exponent;
    __Vfunc_round_pack32__11347__shifted = __Vfunc_round_pack32__11347__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11347__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11348__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11347__exponent)));
        vlSelf->__Vfunc_shift_jam27__11348__value = __Vfunc_round_pack32__11347__significand;
        __Vfunc_round_pack32__11347__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11348__distance))) {
            vlSelf->__Vfunc_shift_jam27__11348__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11348__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11348__distance))) {
            vlSelf->__Vfunc_shift_jam27__11348__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11348__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11348__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11348__value, (IData)(vlSelf->__Vfunc_shift_jam27__11348__distance)));
            vlSelf->__Vfunc_shift_jam27__11348__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11348__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11348__distance)))));
            vlSelf->__Vfunc_shift_jam27__11348__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11348__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11348__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11348__discarded))));
        }
        __Vfunc_round_pack32__11347__shifted = vlSelf->__Vfunc_shift_jam27__11348__Vfuncout;
    }
    __Vfunc_round_pack32__11347__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11347__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11347__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11347__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11347__rounded)) {
        __Vfunc_round_pack32__11347__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11347__rounded, 1U));
        __Vfunc_round_pack32__11347__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11347__adjusted)));
    }
    __Vfunc_round_pack32__11347__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11347__rounded)) {
        __Vfunc_round_pack32__11347__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11347__adjusted)));
    }
    __Vfunc_round_pack32__11347__Vfuncout = (((0U == __Vfunc_round_pack32__11347__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11347__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11347__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11347__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11347__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11347__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11347__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11347__Vfuncout;
    __Vfunc_round_pack32__11335__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11335__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11335__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11335__adjusted = __Vfunc_round_pack32__11335__exponent;
    __Vfunc_round_pack32__11335__shifted = __Vfunc_round_pack32__11335__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11335__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11336__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11335__exponent)));
        vlSelf->__Vfunc_shift_jam27__11336__value = __Vfunc_round_pack32__11335__significand;
        __Vfunc_round_pack32__11335__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11336__distance))) {
            vlSelf->__Vfunc_shift_jam27__11336__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11336__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11336__distance))) {
            vlSelf->__Vfunc_shift_jam27__11336__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11336__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11336__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11336__value, (IData)(vlSelf->__Vfunc_shift_jam27__11336__distance)));
            vlSelf->__Vfunc_shift_jam27__11336__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11336__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11336__distance)))));
            vlSelf->__Vfunc_shift_jam27__11336__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11336__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11336__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11336__discarded))));
        }
        __Vfunc_round_pack32__11335__shifted = vlSelf->__Vfunc_shift_jam27__11336__Vfuncout;
    }
    __Vfunc_round_pack32__11335__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11335__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11335__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11335__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11335__rounded)) {
        __Vfunc_round_pack32__11335__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11335__rounded, 1U));
        __Vfunc_round_pack32__11335__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11335__adjusted)));
    }
    __Vfunc_round_pack32__11335__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11335__rounded)) {
        __Vfunc_round_pack32__11335__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11335__adjusted)));
    }
    __Vfunc_round_pack32__11335__Vfuncout = (((0U == __Vfunc_round_pack32__11335__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11335__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11335__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11335__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11335__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11335__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11335__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11335__Vfuncout;
    __Vfunc_round_pack32__11323__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11323__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11323__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11323__adjusted = __Vfunc_round_pack32__11323__exponent;
    __Vfunc_round_pack32__11323__shifted = __Vfunc_round_pack32__11323__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11323__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11324__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11323__exponent)));
        vlSelf->__Vfunc_shift_jam27__11324__value = __Vfunc_round_pack32__11323__significand;
        __Vfunc_round_pack32__11323__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11324__distance))) {
            vlSelf->__Vfunc_shift_jam27__11324__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11324__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11324__distance))) {
            vlSelf->__Vfunc_shift_jam27__11324__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11324__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11324__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11324__value, (IData)(vlSelf->__Vfunc_shift_jam27__11324__distance)));
            vlSelf->__Vfunc_shift_jam27__11324__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11324__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11324__distance)))));
            vlSelf->__Vfunc_shift_jam27__11324__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11324__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11324__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11324__discarded))));
        }
        __Vfunc_round_pack32__11323__shifted = vlSelf->__Vfunc_shift_jam27__11324__Vfuncout;
    }
    __Vfunc_round_pack32__11323__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11323__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11323__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11323__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11323__rounded)) {
        __Vfunc_round_pack32__11323__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11323__rounded, 1U));
        __Vfunc_round_pack32__11323__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11323__adjusted)));
    }
    __Vfunc_round_pack32__11323__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11323__rounded)) {
        __Vfunc_round_pack32__11323__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11323__adjusted)));
    }
    __Vfunc_round_pack32__11323__Vfuncout = (((0U == __Vfunc_round_pack32__11323__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11323__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11323__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11323__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11323__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11323__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11323__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11323__Vfuncout;
    __Vfunc_round_pack32__11311__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11311__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11311__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11311__adjusted = __Vfunc_round_pack32__11311__exponent;
    __Vfunc_round_pack32__11311__shifted = __Vfunc_round_pack32__11311__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11311__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11312__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11311__exponent)));
        vlSelf->__Vfunc_shift_jam27__11312__value = __Vfunc_round_pack32__11311__significand;
        __Vfunc_round_pack32__11311__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11312__distance))) {
            vlSelf->__Vfunc_shift_jam27__11312__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11312__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11312__distance))) {
            vlSelf->__Vfunc_shift_jam27__11312__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11312__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11312__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11312__value, (IData)(vlSelf->__Vfunc_shift_jam27__11312__distance)));
            vlSelf->__Vfunc_shift_jam27__11312__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11312__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11312__distance)))));
            vlSelf->__Vfunc_shift_jam27__11312__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11312__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11312__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11312__discarded))));
        }
        __Vfunc_round_pack32__11311__shifted = vlSelf->__Vfunc_shift_jam27__11312__Vfuncout;
    }
    __Vfunc_round_pack32__11311__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11311__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11311__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11311__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11311__rounded)) {
        __Vfunc_round_pack32__11311__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11311__rounded, 1U));
        __Vfunc_round_pack32__11311__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11311__adjusted)));
    }
    __Vfunc_round_pack32__11311__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11311__rounded)) {
        __Vfunc_round_pack32__11311__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11311__adjusted)));
    }
    __Vfunc_round_pack32__11311__Vfuncout = (((0U == __Vfunc_round_pack32__11311__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11311__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11311__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11311__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11311__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11311__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11311__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11311__Vfuncout;
    __Vfunc_round_pack32__11299__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11299__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11299__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11299__adjusted = __Vfunc_round_pack32__11299__exponent;
    __Vfunc_round_pack32__11299__shifted = __Vfunc_round_pack32__11299__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11299__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11300__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11299__exponent)));
        vlSelf->__Vfunc_shift_jam27__11300__value = __Vfunc_round_pack32__11299__significand;
        __Vfunc_round_pack32__11299__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11300__distance))) {
            vlSelf->__Vfunc_shift_jam27__11300__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11300__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11300__distance))) {
            vlSelf->__Vfunc_shift_jam27__11300__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11300__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11300__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11300__value, (IData)(vlSelf->__Vfunc_shift_jam27__11300__distance)));
            vlSelf->__Vfunc_shift_jam27__11300__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11300__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11300__distance)))));
            vlSelf->__Vfunc_shift_jam27__11300__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11300__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11300__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11300__discarded))));
        }
        __Vfunc_round_pack32__11299__shifted = vlSelf->__Vfunc_shift_jam27__11300__Vfuncout;
    }
    __Vfunc_round_pack32__11299__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11299__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11299__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11299__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11299__rounded)) {
        __Vfunc_round_pack32__11299__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11299__rounded, 1U));
        __Vfunc_round_pack32__11299__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11299__adjusted)));
    }
    __Vfunc_round_pack32__11299__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11299__rounded)) {
        __Vfunc_round_pack32__11299__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11299__adjusted)));
    }
    __Vfunc_round_pack32__11299__Vfuncout = (((0U == __Vfunc_round_pack32__11299__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11299__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11299__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11299__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11299__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11299__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11299__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11299__Vfuncout;
    __Vfunc_round_pack32__11287__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11287__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11287__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11287__adjusted = __Vfunc_round_pack32__11287__exponent;
    __Vfunc_round_pack32__11287__shifted = __Vfunc_round_pack32__11287__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11287__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11288__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11287__exponent)));
        vlSelf->__Vfunc_shift_jam27__11288__value = __Vfunc_round_pack32__11287__significand;
        __Vfunc_round_pack32__11287__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11288__distance))) {
            vlSelf->__Vfunc_shift_jam27__11288__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11288__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11288__distance))) {
            vlSelf->__Vfunc_shift_jam27__11288__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11288__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11288__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11288__value, (IData)(vlSelf->__Vfunc_shift_jam27__11288__distance)));
            vlSelf->__Vfunc_shift_jam27__11288__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11288__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11288__distance)))));
            vlSelf->__Vfunc_shift_jam27__11288__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11288__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11288__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11288__discarded))));
        }
        __Vfunc_round_pack32__11287__shifted = vlSelf->__Vfunc_shift_jam27__11288__Vfuncout;
    }
    __Vfunc_round_pack32__11287__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11287__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11287__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11287__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11287__rounded)) {
        __Vfunc_round_pack32__11287__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11287__rounded, 1U));
        __Vfunc_round_pack32__11287__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11287__adjusted)));
    }
    __Vfunc_round_pack32__11287__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11287__rounded)) {
        __Vfunc_round_pack32__11287__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11287__adjusted)));
    }
    __Vfunc_round_pack32__11287__Vfuncout = (((0U == __Vfunc_round_pack32__11287__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11287__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11287__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11287__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11287__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11287__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11287__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11287__Vfuncout;
    __Vfunc_round_pack32__11275__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11275__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11275__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11275__adjusted = __Vfunc_round_pack32__11275__exponent;
    __Vfunc_round_pack32__11275__shifted = __Vfunc_round_pack32__11275__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11275__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11276__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11275__exponent)));
        vlSelf->__Vfunc_shift_jam27__11276__value = __Vfunc_round_pack32__11275__significand;
        __Vfunc_round_pack32__11275__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11276__distance))) {
            vlSelf->__Vfunc_shift_jam27__11276__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11276__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11276__distance))) {
            vlSelf->__Vfunc_shift_jam27__11276__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11276__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11276__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11276__value, (IData)(vlSelf->__Vfunc_shift_jam27__11276__distance)));
            vlSelf->__Vfunc_shift_jam27__11276__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11276__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11276__distance)))));
            vlSelf->__Vfunc_shift_jam27__11276__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11276__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11276__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11276__discarded))));
        }
        __Vfunc_round_pack32__11275__shifted = vlSelf->__Vfunc_shift_jam27__11276__Vfuncout;
    }
    __Vfunc_round_pack32__11275__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11275__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11275__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11275__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11275__rounded)) {
        __Vfunc_round_pack32__11275__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11275__rounded, 1U));
        __Vfunc_round_pack32__11275__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11275__adjusted)));
    }
    __Vfunc_round_pack32__11275__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11275__rounded)) {
        __Vfunc_round_pack32__11275__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11275__adjusted)));
    }
    __Vfunc_round_pack32__11275__Vfuncout = (((0U == __Vfunc_round_pack32__11275__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11275__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11275__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11275__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11275__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11275__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11275__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11275__Vfuncout;
    __Vfunc_round_pack32__11263__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11263__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11263__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11263__adjusted = __Vfunc_round_pack32__11263__exponent;
    __Vfunc_round_pack32__11263__shifted = __Vfunc_round_pack32__11263__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11263__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11264__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11263__exponent)));
        vlSelf->__Vfunc_shift_jam27__11264__value = __Vfunc_round_pack32__11263__significand;
        __Vfunc_round_pack32__11263__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11264__distance))) {
            vlSelf->__Vfunc_shift_jam27__11264__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11264__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11264__distance))) {
            vlSelf->__Vfunc_shift_jam27__11264__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11264__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11264__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11264__value, (IData)(vlSelf->__Vfunc_shift_jam27__11264__distance)));
            vlSelf->__Vfunc_shift_jam27__11264__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11264__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11264__distance)))));
            vlSelf->__Vfunc_shift_jam27__11264__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11264__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11264__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11264__discarded))));
        }
        __Vfunc_round_pack32__11263__shifted = vlSelf->__Vfunc_shift_jam27__11264__Vfuncout;
    }
    __Vfunc_round_pack32__11263__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11263__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11263__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11263__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11263__rounded)) {
        __Vfunc_round_pack32__11263__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11263__rounded, 1U));
        __Vfunc_round_pack32__11263__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11263__adjusted)));
    }
    __Vfunc_round_pack32__11263__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11263__rounded)) {
        __Vfunc_round_pack32__11263__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11263__adjusted)));
    }
    __Vfunc_round_pack32__11263__Vfuncout = (((0U == __Vfunc_round_pack32__11263__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11263__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11263__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11263__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11263__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11263__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11263__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11263__Vfuncout;
    __Vfunc_round_pack32__11251__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11251__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11251__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11251__adjusted = __Vfunc_round_pack32__11251__exponent;
    __Vfunc_round_pack32__11251__shifted = __Vfunc_round_pack32__11251__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11251__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11252__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11251__exponent)));
        vlSelf->__Vfunc_shift_jam27__11252__value = __Vfunc_round_pack32__11251__significand;
        __Vfunc_round_pack32__11251__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11252__distance))) {
            vlSelf->__Vfunc_shift_jam27__11252__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11252__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11252__distance))) {
            vlSelf->__Vfunc_shift_jam27__11252__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11252__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11252__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11252__value, (IData)(vlSelf->__Vfunc_shift_jam27__11252__distance)));
            vlSelf->__Vfunc_shift_jam27__11252__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11252__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11252__distance)))));
            vlSelf->__Vfunc_shift_jam27__11252__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11252__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11252__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11252__discarded))));
        }
        __Vfunc_round_pack32__11251__shifted = vlSelf->__Vfunc_shift_jam27__11252__Vfuncout;
    }
    __Vfunc_round_pack32__11251__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11251__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11251__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11251__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11251__rounded)) {
        __Vfunc_round_pack32__11251__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11251__rounded, 1U));
        __Vfunc_round_pack32__11251__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11251__adjusted)));
    }
    __Vfunc_round_pack32__11251__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11251__rounded)) {
        __Vfunc_round_pack32__11251__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11251__adjusted)));
    }
    __Vfunc_round_pack32__11251__Vfuncout = (((0U == __Vfunc_round_pack32__11251__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11251__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11251__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11251__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11251__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11251__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11251__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11251__Vfuncout;
    __Vfunc_round_pack32__11239__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11239__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11239__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11239__adjusted = __Vfunc_round_pack32__11239__exponent;
    __Vfunc_round_pack32__11239__shifted = __Vfunc_round_pack32__11239__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11239__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11240__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11239__exponent)));
        vlSelf->__Vfunc_shift_jam27__11240__value = __Vfunc_round_pack32__11239__significand;
        __Vfunc_round_pack32__11239__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11240__distance))) {
            vlSelf->__Vfunc_shift_jam27__11240__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11240__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11240__distance))) {
            vlSelf->__Vfunc_shift_jam27__11240__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11240__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11240__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11240__value, (IData)(vlSelf->__Vfunc_shift_jam27__11240__distance)));
            vlSelf->__Vfunc_shift_jam27__11240__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11240__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11240__distance)))));
            vlSelf->__Vfunc_shift_jam27__11240__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11240__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11240__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11240__discarded))));
        }
        __Vfunc_round_pack32__11239__shifted = vlSelf->__Vfunc_shift_jam27__11240__Vfuncout;
    }
    __Vfunc_round_pack32__11239__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11239__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11239__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11239__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11239__rounded)) {
        __Vfunc_round_pack32__11239__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11239__rounded, 1U));
        __Vfunc_round_pack32__11239__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11239__adjusted)));
    }
    __Vfunc_round_pack32__11239__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11239__rounded)) {
        __Vfunc_round_pack32__11239__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11239__adjusted)));
    }
    __Vfunc_round_pack32__11239__Vfuncout = (((0U == __Vfunc_round_pack32__11239__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11239__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11239__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11239__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11239__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11239__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11239__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11239__Vfuncout;
    __Vfunc_round_pack32__11227__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11227__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11227__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11227__adjusted = __Vfunc_round_pack32__11227__exponent;
    __Vfunc_round_pack32__11227__shifted = __Vfunc_round_pack32__11227__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11227__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11228__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11227__exponent)));
        vlSelf->__Vfunc_shift_jam27__11228__value = __Vfunc_round_pack32__11227__significand;
        __Vfunc_round_pack32__11227__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11228__distance))) {
            vlSelf->__Vfunc_shift_jam27__11228__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11228__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11228__distance))) {
            vlSelf->__Vfunc_shift_jam27__11228__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11228__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11228__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11228__value, (IData)(vlSelf->__Vfunc_shift_jam27__11228__distance)));
            vlSelf->__Vfunc_shift_jam27__11228__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11228__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11228__distance)))));
            vlSelf->__Vfunc_shift_jam27__11228__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11228__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11228__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11228__discarded))));
        }
        __Vfunc_round_pack32__11227__shifted = vlSelf->__Vfunc_shift_jam27__11228__Vfuncout;
    }
    __Vfunc_round_pack32__11227__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11227__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11227__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11227__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11227__rounded)) {
        __Vfunc_round_pack32__11227__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11227__rounded, 1U));
        __Vfunc_round_pack32__11227__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11227__adjusted)));
    }
    __Vfunc_round_pack32__11227__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11227__rounded)) {
        __Vfunc_round_pack32__11227__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11227__adjusted)));
    }
    __Vfunc_round_pack32__11227__Vfuncout = (((0U == __Vfunc_round_pack32__11227__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11227__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11227__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11227__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11227__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11227__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11227__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11227__Vfuncout;
    __Vfunc_round_pack32__11215__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11215__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11215__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11215__adjusted = __Vfunc_round_pack32__11215__exponent;
    __Vfunc_round_pack32__11215__shifted = __Vfunc_round_pack32__11215__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11215__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11216__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11215__exponent)));
        vlSelf->__Vfunc_shift_jam27__11216__value = __Vfunc_round_pack32__11215__significand;
        __Vfunc_round_pack32__11215__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11216__distance))) {
            vlSelf->__Vfunc_shift_jam27__11216__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11216__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11216__distance))) {
            vlSelf->__Vfunc_shift_jam27__11216__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11216__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11216__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11216__value, (IData)(vlSelf->__Vfunc_shift_jam27__11216__distance)));
            vlSelf->__Vfunc_shift_jam27__11216__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11216__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11216__distance)))));
            vlSelf->__Vfunc_shift_jam27__11216__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11216__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11216__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11216__discarded))));
        }
        __Vfunc_round_pack32__11215__shifted = vlSelf->__Vfunc_shift_jam27__11216__Vfuncout;
    }
    __Vfunc_round_pack32__11215__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11215__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11215__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11215__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11215__rounded)) {
        __Vfunc_round_pack32__11215__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11215__rounded, 1U));
        __Vfunc_round_pack32__11215__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11215__adjusted)));
    }
    __Vfunc_round_pack32__11215__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11215__rounded)) {
        __Vfunc_round_pack32__11215__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11215__adjusted)));
    }
    __Vfunc_round_pack32__11215__Vfuncout = (((0U == __Vfunc_round_pack32__11215__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11215__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11215__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11215__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11215__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11215__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11215__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11215__Vfuncout;
    __Vfunc_round_pack32__11203__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11203__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11203__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11203__adjusted = __Vfunc_round_pack32__11203__exponent;
    __Vfunc_round_pack32__11203__shifted = __Vfunc_round_pack32__11203__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11203__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11204__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11203__exponent)));
        vlSelf->__Vfunc_shift_jam27__11204__value = __Vfunc_round_pack32__11203__significand;
        __Vfunc_round_pack32__11203__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11204__distance))) {
            vlSelf->__Vfunc_shift_jam27__11204__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11204__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11204__distance))) {
            vlSelf->__Vfunc_shift_jam27__11204__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11204__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11204__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11204__value, (IData)(vlSelf->__Vfunc_shift_jam27__11204__distance)));
            vlSelf->__Vfunc_shift_jam27__11204__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11204__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11204__distance)))));
            vlSelf->__Vfunc_shift_jam27__11204__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11204__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11204__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11204__discarded))));
        }
        __Vfunc_round_pack32__11203__shifted = vlSelf->__Vfunc_shift_jam27__11204__Vfuncout;
    }
    __Vfunc_round_pack32__11203__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11203__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11203__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11203__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11203__rounded)) {
        __Vfunc_round_pack32__11203__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11203__rounded, 1U));
        __Vfunc_round_pack32__11203__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11203__adjusted)));
    }
    __Vfunc_round_pack32__11203__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11203__rounded)) {
        __Vfunc_round_pack32__11203__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11203__adjusted)));
    }
    __Vfunc_round_pack32__11203__Vfuncout = (((0U == __Vfunc_round_pack32__11203__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11203__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11203__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11203__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11203__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11203__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11203__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11203__Vfuncout;
    __Vfunc_round_pack32__11191__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11191__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11191__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11191__adjusted = __Vfunc_round_pack32__11191__exponent;
    __Vfunc_round_pack32__11191__shifted = __Vfunc_round_pack32__11191__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11191__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11192__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11191__exponent)));
        vlSelf->__Vfunc_shift_jam27__11192__value = __Vfunc_round_pack32__11191__significand;
        __Vfunc_round_pack32__11191__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11192__distance))) {
            vlSelf->__Vfunc_shift_jam27__11192__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11192__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11192__distance))) {
            vlSelf->__Vfunc_shift_jam27__11192__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11192__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11192__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11192__value, (IData)(vlSelf->__Vfunc_shift_jam27__11192__distance)));
            vlSelf->__Vfunc_shift_jam27__11192__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11192__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11192__distance)))));
            vlSelf->__Vfunc_shift_jam27__11192__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11192__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11192__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11192__discarded))));
        }
        __Vfunc_round_pack32__11191__shifted = vlSelf->__Vfunc_shift_jam27__11192__Vfuncout;
    }
    __Vfunc_round_pack32__11191__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11191__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11191__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11191__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11191__rounded)) {
        __Vfunc_round_pack32__11191__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11191__rounded, 1U));
        __Vfunc_round_pack32__11191__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11191__adjusted)));
    }
    __Vfunc_round_pack32__11191__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11191__rounded)) {
        __Vfunc_round_pack32__11191__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11191__adjusted)));
    }
    __Vfunc_round_pack32__11191__Vfuncout = (((0U == __Vfunc_round_pack32__11191__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11191__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11191__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11191__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11191__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11191__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11191__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11191__Vfuncout;
    __Vfunc_round_pack32__11179__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11179__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11179__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11179__adjusted = __Vfunc_round_pack32__11179__exponent;
    __Vfunc_round_pack32__11179__shifted = __Vfunc_round_pack32__11179__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11179__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11180__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11179__exponent)));
        vlSelf->__Vfunc_shift_jam27__11180__value = __Vfunc_round_pack32__11179__significand;
        __Vfunc_round_pack32__11179__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11180__distance))) {
            vlSelf->__Vfunc_shift_jam27__11180__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11180__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11180__distance))) {
            vlSelf->__Vfunc_shift_jam27__11180__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11180__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11180__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11180__value, (IData)(vlSelf->__Vfunc_shift_jam27__11180__distance)));
            vlSelf->__Vfunc_shift_jam27__11180__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11180__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11180__distance)))));
            vlSelf->__Vfunc_shift_jam27__11180__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11180__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11180__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11180__discarded))));
        }
        __Vfunc_round_pack32__11179__shifted = vlSelf->__Vfunc_shift_jam27__11180__Vfuncout;
    }
    __Vfunc_round_pack32__11179__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11179__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11179__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11179__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11179__rounded)) {
        __Vfunc_round_pack32__11179__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11179__rounded, 1U));
        __Vfunc_round_pack32__11179__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11179__adjusted)));
    }
    __Vfunc_round_pack32__11179__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11179__rounded)) {
        __Vfunc_round_pack32__11179__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11179__adjusted)));
    }
    __Vfunc_round_pack32__11179__Vfuncout = (((0U == __Vfunc_round_pack32__11179__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11179__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11179__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11179__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11179__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11179__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11179__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11179__Vfuncout;
    __Vfunc_round_pack32__11167__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11167__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11167__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11167__adjusted = __Vfunc_round_pack32__11167__exponent;
    __Vfunc_round_pack32__11167__shifted = __Vfunc_round_pack32__11167__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11167__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11168__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11167__exponent)));
        vlSelf->__Vfunc_shift_jam27__11168__value = __Vfunc_round_pack32__11167__significand;
        __Vfunc_round_pack32__11167__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11168__distance))) {
            vlSelf->__Vfunc_shift_jam27__11168__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11168__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11168__distance))) {
            vlSelf->__Vfunc_shift_jam27__11168__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11168__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11168__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11168__value, (IData)(vlSelf->__Vfunc_shift_jam27__11168__distance)));
            vlSelf->__Vfunc_shift_jam27__11168__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11168__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11168__distance)))));
            vlSelf->__Vfunc_shift_jam27__11168__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11168__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11168__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11168__discarded))));
        }
        __Vfunc_round_pack32__11167__shifted = vlSelf->__Vfunc_shift_jam27__11168__Vfuncout;
    }
    __Vfunc_round_pack32__11167__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11167__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11167__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11167__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11167__rounded)) {
        __Vfunc_round_pack32__11167__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11167__rounded, 1U));
        __Vfunc_round_pack32__11167__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11167__adjusted)));
    }
    __Vfunc_round_pack32__11167__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11167__rounded)) {
        __Vfunc_round_pack32__11167__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11167__adjusted)));
    }
    __Vfunc_round_pack32__11167__Vfuncout = (((0U == __Vfunc_round_pack32__11167__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11167__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11167__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11167__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11167__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11167__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11167__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11167__Vfuncout;
    __Vfunc_round_pack32__11155__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11155__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11155__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11155__adjusted = __Vfunc_round_pack32__11155__exponent;
    __Vfunc_round_pack32__11155__shifted = __Vfunc_round_pack32__11155__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11155__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11156__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11155__exponent)));
        vlSelf->__Vfunc_shift_jam27__11156__value = __Vfunc_round_pack32__11155__significand;
        __Vfunc_round_pack32__11155__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11156__distance))) {
            vlSelf->__Vfunc_shift_jam27__11156__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11156__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11156__distance))) {
            vlSelf->__Vfunc_shift_jam27__11156__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11156__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11156__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11156__value, (IData)(vlSelf->__Vfunc_shift_jam27__11156__distance)));
            vlSelf->__Vfunc_shift_jam27__11156__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11156__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11156__distance)))));
            vlSelf->__Vfunc_shift_jam27__11156__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11156__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11156__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11156__discarded))));
        }
        __Vfunc_round_pack32__11155__shifted = vlSelf->__Vfunc_shift_jam27__11156__Vfuncout;
    }
    __Vfunc_round_pack32__11155__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11155__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11155__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11155__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11155__rounded)) {
        __Vfunc_round_pack32__11155__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11155__rounded, 1U));
        __Vfunc_round_pack32__11155__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11155__adjusted)));
    }
    __Vfunc_round_pack32__11155__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11155__rounded)) {
        __Vfunc_round_pack32__11155__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11155__adjusted)));
    }
    __Vfunc_round_pack32__11155__Vfuncout = (((0U == __Vfunc_round_pack32__11155__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11155__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11155__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11155__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11155__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11155__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11155__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11155__Vfuncout;
    __Vfunc_round_pack32__11143__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11143__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11143__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11143__adjusted = __Vfunc_round_pack32__11143__exponent;
    __Vfunc_round_pack32__11143__shifted = __Vfunc_round_pack32__11143__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11143__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11144__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11143__exponent)));
        vlSelf->__Vfunc_shift_jam27__11144__value = __Vfunc_round_pack32__11143__significand;
        __Vfunc_round_pack32__11143__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11144__distance))) {
            vlSelf->__Vfunc_shift_jam27__11144__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11144__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11144__distance))) {
            vlSelf->__Vfunc_shift_jam27__11144__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11144__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11144__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11144__value, (IData)(vlSelf->__Vfunc_shift_jam27__11144__distance)));
            vlSelf->__Vfunc_shift_jam27__11144__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11144__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11144__distance)))));
            vlSelf->__Vfunc_shift_jam27__11144__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11144__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11144__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11144__discarded))));
        }
        __Vfunc_round_pack32__11143__shifted = vlSelf->__Vfunc_shift_jam27__11144__Vfuncout;
    }
    __Vfunc_round_pack32__11143__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11143__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11143__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11143__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11143__rounded)) {
        __Vfunc_round_pack32__11143__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11143__rounded, 1U));
        __Vfunc_round_pack32__11143__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11143__adjusted)));
    }
    __Vfunc_round_pack32__11143__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11143__rounded)) {
        __Vfunc_round_pack32__11143__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11143__adjusted)));
    }
    __Vfunc_round_pack32__11143__Vfuncout = (((0U == __Vfunc_round_pack32__11143__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11143__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11143__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11143__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11143__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11143__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11143__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11143__Vfuncout;
    __Vfunc_round_pack32__11131__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11131__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11131__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11131__adjusted = __Vfunc_round_pack32__11131__exponent;
    __Vfunc_round_pack32__11131__shifted = __Vfunc_round_pack32__11131__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11131__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11132__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11131__exponent)));
        vlSelf->__Vfunc_shift_jam27__11132__value = __Vfunc_round_pack32__11131__significand;
        __Vfunc_round_pack32__11131__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11132__distance))) {
            vlSelf->__Vfunc_shift_jam27__11132__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11132__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11132__distance))) {
            vlSelf->__Vfunc_shift_jam27__11132__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11132__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11132__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11132__value, (IData)(vlSelf->__Vfunc_shift_jam27__11132__distance)));
            vlSelf->__Vfunc_shift_jam27__11132__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11132__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11132__distance)))));
            vlSelf->__Vfunc_shift_jam27__11132__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11132__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11132__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11132__discarded))));
        }
        __Vfunc_round_pack32__11131__shifted = vlSelf->__Vfunc_shift_jam27__11132__Vfuncout;
    }
    __Vfunc_round_pack32__11131__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11131__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11131__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11131__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11131__rounded)) {
        __Vfunc_round_pack32__11131__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11131__rounded, 1U));
        __Vfunc_round_pack32__11131__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11131__adjusted)));
    }
    __Vfunc_round_pack32__11131__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11131__rounded)) {
        __Vfunc_round_pack32__11131__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11131__adjusted)));
    }
    __Vfunc_round_pack32__11131__Vfuncout = (((0U == __Vfunc_round_pack32__11131__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11131__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11131__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11131__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11131__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11131__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11131__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11131__Vfuncout;
    __Vfunc_round_pack32__11119__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11119__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11119__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11119__adjusted = __Vfunc_round_pack32__11119__exponent;
    __Vfunc_round_pack32__11119__shifted = __Vfunc_round_pack32__11119__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11119__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11120__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11119__exponent)));
        vlSelf->__Vfunc_shift_jam27__11120__value = __Vfunc_round_pack32__11119__significand;
        __Vfunc_round_pack32__11119__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11120__distance))) {
            vlSelf->__Vfunc_shift_jam27__11120__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11120__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11120__distance))) {
            vlSelf->__Vfunc_shift_jam27__11120__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11120__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11120__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11120__value, (IData)(vlSelf->__Vfunc_shift_jam27__11120__distance)));
            vlSelf->__Vfunc_shift_jam27__11120__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11120__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11120__distance)))));
            vlSelf->__Vfunc_shift_jam27__11120__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11120__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11120__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11120__discarded))));
        }
        __Vfunc_round_pack32__11119__shifted = vlSelf->__Vfunc_shift_jam27__11120__Vfuncout;
    }
    __Vfunc_round_pack32__11119__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11119__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11119__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11119__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11119__rounded)) {
        __Vfunc_round_pack32__11119__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11119__rounded, 1U));
        __Vfunc_round_pack32__11119__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11119__adjusted)));
    }
    __Vfunc_round_pack32__11119__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11119__rounded)) {
        __Vfunc_round_pack32__11119__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11119__adjusted)));
    }
    __Vfunc_round_pack32__11119__Vfuncout = (((0U == __Vfunc_round_pack32__11119__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11119__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11119__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11119__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11119__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11119__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11119__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11119__Vfuncout;
    __Vfunc_round_pack32__11107__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11107__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11107__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11107__adjusted = __Vfunc_round_pack32__11107__exponent;
    __Vfunc_round_pack32__11107__shifted = __Vfunc_round_pack32__11107__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11107__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11108__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11107__exponent)));
        vlSelf->__Vfunc_shift_jam27__11108__value = __Vfunc_round_pack32__11107__significand;
        __Vfunc_round_pack32__11107__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11108__distance))) {
            vlSelf->__Vfunc_shift_jam27__11108__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11108__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11108__distance))) {
            vlSelf->__Vfunc_shift_jam27__11108__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11108__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11108__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11108__value, (IData)(vlSelf->__Vfunc_shift_jam27__11108__distance)));
            vlSelf->__Vfunc_shift_jam27__11108__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11108__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11108__distance)))));
            vlSelf->__Vfunc_shift_jam27__11108__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11108__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11108__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11108__discarded))));
        }
        __Vfunc_round_pack32__11107__shifted = vlSelf->__Vfunc_shift_jam27__11108__Vfuncout;
    }
    __Vfunc_round_pack32__11107__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11107__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11107__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11107__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11107__rounded)) {
        __Vfunc_round_pack32__11107__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11107__rounded, 1U));
        __Vfunc_round_pack32__11107__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11107__adjusted)));
    }
    __Vfunc_round_pack32__11107__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11107__rounded)) {
        __Vfunc_round_pack32__11107__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11107__adjusted)));
    }
    __Vfunc_round_pack32__11107__Vfuncout = (((0U == __Vfunc_round_pack32__11107__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11107__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11107__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11107__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11107__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11107__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11107__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11107__Vfuncout;
    __Vfunc_round_pack32__11095__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11095__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11095__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11095__adjusted = __Vfunc_round_pack32__11095__exponent;
    __Vfunc_round_pack32__11095__shifted = __Vfunc_round_pack32__11095__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11095__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11096__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11095__exponent)));
        vlSelf->__Vfunc_shift_jam27__11096__value = __Vfunc_round_pack32__11095__significand;
        __Vfunc_round_pack32__11095__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11096__distance))) {
            vlSelf->__Vfunc_shift_jam27__11096__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11096__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11096__distance))) {
            vlSelf->__Vfunc_shift_jam27__11096__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11096__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11096__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11096__value, (IData)(vlSelf->__Vfunc_shift_jam27__11096__distance)));
            vlSelf->__Vfunc_shift_jam27__11096__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11096__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11096__distance)))));
            vlSelf->__Vfunc_shift_jam27__11096__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11096__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11096__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11096__discarded))));
        }
        __Vfunc_round_pack32__11095__shifted = vlSelf->__Vfunc_shift_jam27__11096__Vfuncout;
    }
    __Vfunc_round_pack32__11095__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11095__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11095__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11095__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11095__rounded)) {
        __Vfunc_round_pack32__11095__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11095__rounded, 1U));
        __Vfunc_round_pack32__11095__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11095__adjusted)));
    }
    __Vfunc_round_pack32__11095__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11095__rounded)) {
        __Vfunc_round_pack32__11095__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11095__adjusted)));
    }
    __Vfunc_round_pack32__11095__Vfuncout = (((0U == __Vfunc_round_pack32__11095__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11095__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11095__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11095__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11095__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11095__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11095__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11095__Vfuncout;
    __Vfunc_round_pack32__11083__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11083__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11083__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11083__adjusted = __Vfunc_round_pack32__11083__exponent;
    __Vfunc_round_pack32__11083__shifted = __Vfunc_round_pack32__11083__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11083__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11084__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11083__exponent)));
        vlSelf->__Vfunc_shift_jam27__11084__value = __Vfunc_round_pack32__11083__significand;
        __Vfunc_round_pack32__11083__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11084__distance))) {
            vlSelf->__Vfunc_shift_jam27__11084__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11084__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11084__distance))) {
            vlSelf->__Vfunc_shift_jam27__11084__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11084__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11084__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11084__value, (IData)(vlSelf->__Vfunc_shift_jam27__11084__distance)));
            vlSelf->__Vfunc_shift_jam27__11084__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11084__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11084__distance)))));
            vlSelf->__Vfunc_shift_jam27__11084__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11084__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11084__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11084__discarded))));
        }
        __Vfunc_round_pack32__11083__shifted = vlSelf->__Vfunc_shift_jam27__11084__Vfuncout;
    }
    __Vfunc_round_pack32__11083__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11083__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11083__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11083__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11083__rounded)) {
        __Vfunc_round_pack32__11083__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11083__rounded, 1U));
        __Vfunc_round_pack32__11083__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11083__adjusted)));
    }
    __Vfunc_round_pack32__11083__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11083__rounded)) {
        __Vfunc_round_pack32__11083__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11083__adjusted)));
    }
    __Vfunc_round_pack32__11083__Vfuncout = (((0U == __Vfunc_round_pack32__11083__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11083__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11083__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11083__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11083__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11083__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11083__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11083__Vfuncout;
    __Vfunc_round_pack32__11071__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11071__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11071__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11071__adjusted = __Vfunc_round_pack32__11071__exponent;
    __Vfunc_round_pack32__11071__shifted = __Vfunc_round_pack32__11071__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11071__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11072__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11071__exponent)));
        vlSelf->__Vfunc_shift_jam27__11072__value = __Vfunc_round_pack32__11071__significand;
        __Vfunc_round_pack32__11071__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11072__distance))) {
            vlSelf->__Vfunc_shift_jam27__11072__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11072__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11072__distance))) {
            vlSelf->__Vfunc_shift_jam27__11072__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11072__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11072__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11072__value, (IData)(vlSelf->__Vfunc_shift_jam27__11072__distance)));
            vlSelf->__Vfunc_shift_jam27__11072__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11072__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11072__distance)))));
            vlSelf->__Vfunc_shift_jam27__11072__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11072__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11072__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11072__discarded))));
        }
        __Vfunc_round_pack32__11071__shifted = vlSelf->__Vfunc_shift_jam27__11072__Vfuncout;
    }
    __Vfunc_round_pack32__11071__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11071__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11071__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11071__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11071__rounded)) {
        __Vfunc_round_pack32__11071__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11071__rounded, 1U));
        __Vfunc_round_pack32__11071__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11071__adjusted)));
    }
    __Vfunc_round_pack32__11071__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11071__rounded)) {
        __Vfunc_round_pack32__11071__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11071__adjusted)));
    }
    __Vfunc_round_pack32__11071__Vfuncout = (((0U == __Vfunc_round_pack32__11071__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11071__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11071__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11071__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11071__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11071__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11071__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11071__Vfuncout;
    __Vfunc_round_pack32__11059__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11059__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11059__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11059__adjusted = __Vfunc_round_pack32__11059__exponent;
    __Vfunc_round_pack32__11059__shifted = __Vfunc_round_pack32__11059__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11059__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11060__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11059__exponent)));
        vlSelf->__Vfunc_shift_jam27__11060__value = __Vfunc_round_pack32__11059__significand;
        __Vfunc_round_pack32__11059__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11060__distance))) {
            vlSelf->__Vfunc_shift_jam27__11060__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11060__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11060__distance))) {
            vlSelf->__Vfunc_shift_jam27__11060__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11060__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11060__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11060__value, (IData)(vlSelf->__Vfunc_shift_jam27__11060__distance)));
            vlSelf->__Vfunc_shift_jam27__11060__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11060__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11060__distance)))));
            vlSelf->__Vfunc_shift_jam27__11060__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11060__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11060__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11060__discarded))));
        }
        __Vfunc_round_pack32__11059__shifted = vlSelf->__Vfunc_shift_jam27__11060__Vfuncout;
    }
    __Vfunc_round_pack32__11059__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11059__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11059__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11059__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11059__rounded)) {
        __Vfunc_round_pack32__11059__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11059__rounded, 1U));
        __Vfunc_round_pack32__11059__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11059__adjusted)));
    }
    __Vfunc_round_pack32__11059__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11059__rounded)) {
        __Vfunc_round_pack32__11059__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11059__adjusted)));
    }
    __Vfunc_round_pack32__11059__Vfuncout = (((0U == __Vfunc_round_pack32__11059__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11059__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11059__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11059__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11059__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11059__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11059__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11059__Vfuncout;
    __Vfunc_round_pack32__11047__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11047__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11047__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11047__adjusted = __Vfunc_round_pack32__11047__exponent;
    __Vfunc_round_pack32__11047__shifted = __Vfunc_round_pack32__11047__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11047__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11048__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11047__exponent)));
        vlSelf->__Vfunc_shift_jam27__11048__value = __Vfunc_round_pack32__11047__significand;
        __Vfunc_round_pack32__11047__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11048__distance))) {
            vlSelf->__Vfunc_shift_jam27__11048__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11048__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11048__distance))) {
            vlSelf->__Vfunc_shift_jam27__11048__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11048__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11048__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11048__value, (IData)(vlSelf->__Vfunc_shift_jam27__11048__distance)));
            vlSelf->__Vfunc_shift_jam27__11048__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11048__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11048__distance)))));
            vlSelf->__Vfunc_shift_jam27__11048__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11048__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11048__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11048__discarded))));
        }
        __Vfunc_round_pack32__11047__shifted = vlSelf->__Vfunc_shift_jam27__11048__Vfuncout;
    }
    __Vfunc_round_pack32__11047__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11047__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11047__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11047__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11047__rounded)) {
        __Vfunc_round_pack32__11047__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11047__rounded, 1U));
        __Vfunc_round_pack32__11047__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11047__adjusted)));
    }
    __Vfunc_round_pack32__11047__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11047__rounded)) {
        __Vfunc_round_pack32__11047__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11047__adjusted)));
    }
    __Vfunc_round_pack32__11047__Vfuncout = (((0U == __Vfunc_round_pack32__11047__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11047__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11047__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11047__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11047__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11047__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11047__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11047__Vfuncout;
    __Vfunc_round_pack32__11035__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11035__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11035__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11035__adjusted = __Vfunc_round_pack32__11035__exponent;
    __Vfunc_round_pack32__11035__shifted = __Vfunc_round_pack32__11035__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11035__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11036__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11035__exponent)));
        vlSelf->__Vfunc_shift_jam27__11036__value = __Vfunc_round_pack32__11035__significand;
        __Vfunc_round_pack32__11035__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11036__distance))) {
            vlSelf->__Vfunc_shift_jam27__11036__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11036__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11036__distance))) {
            vlSelf->__Vfunc_shift_jam27__11036__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11036__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11036__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11036__value, (IData)(vlSelf->__Vfunc_shift_jam27__11036__distance)));
            vlSelf->__Vfunc_shift_jam27__11036__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11036__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11036__distance)))));
            vlSelf->__Vfunc_shift_jam27__11036__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11036__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11036__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11036__discarded))));
        }
        __Vfunc_round_pack32__11035__shifted = vlSelf->__Vfunc_shift_jam27__11036__Vfuncout;
    }
    __Vfunc_round_pack32__11035__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11035__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11035__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11035__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11035__rounded)) {
        __Vfunc_round_pack32__11035__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11035__rounded, 1U));
        __Vfunc_round_pack32__11035__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11035__adjusted)));
    }
    __Vfunc_round_pack32__11035__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11035__rounded)) {
        __Vfunc_round_pack32__11035__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11035__adjusted)));
    }
    __Vfunc_round_pack32__11035__Vfuncout = (((0U == __Vfunc_round_pack32__11035__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11035__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11035__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11035__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11035__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11035__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11035__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11035__Vfuncout;
    __Vfunc_round_pack32__11023__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11023__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11023__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11023__adjusted = __Vfunc_round_pack32__11023__exponent;
    __Vfunc_round_pack32__11023__shifted = __Vfunc_round_pack32__11023__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11023__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11024__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11023__exponent)));
        vlSelf->__Vfunc_shift_jam27__11024__value = __Vfunc_round_pack32__11023__significand;
        __Vfunc_round_pack32__11023__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11024__distance))) {
            vlSelf->__Vfunc_shift_jam27__11024__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11024__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11024__distance))) {
            vlSelf->__Vfunc_shift_jam27__11024__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11024__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11024__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11024__value, (IData)(vlSelf->__Vfunc_shift_jam27__11024__distance)));
            vlSelf->__Vfunc_shift_jam27__11024__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11024__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11024__distance)))));
            vlSelf->__Vfunc_shift_jam27__11024__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11024__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11024__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11024__discarded))));
        }
        __Vfunc_round_pack32__11023__shifted = vlSelf->__Vfunc_shift_jam27__11024__Vfuncout;
    }
    __Vfunc_round_pack32__11023__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11023__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11023__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11023__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11023__rounded)) {
        __Vfunc_round_pack32__11023__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11023__rounded, 1U));
        __Vfunc_round_pack32__11023__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11023__adjusted)));
    }
    __Vfunc_round_pack32__11023__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11023__rounded)) {
        __Vfunc_round_pack32__11023__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11023__adjusted)));
    }
    __Vfunc_round_pack32__11023__Vfuncout = (((0U == __Vfunc_round_pack32__11023__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11023__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11023__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11023__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11023__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11023__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11023__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11023__Vfuncout;
    __Vfunc_round_pack32__11011__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__11011__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__11011__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__11011__adjusted = __Vfunc_round_pack32__11011__exponent;
    __Vfunc_round_pack32__11011__shifted = __Vfunc_round_pack32__11011__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__11011__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11012__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__11011__exponent)));
        vlSelf->__Vfunc_shift_jam27__11012__value = __Vfunc_round_pack32__11011__significand;
        __Vfunc_round_pack32__11011__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11012__distance))) {
            vlSelf->__Vfunc_shift_jam27__11012__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11012__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11012__distance))) {
            vlSelf->__Vfunc_shift_jam27__11012__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11012__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11012__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11012__value, (IData)(vlSelf->__Vfunc_shift_jam27__11012__distance)));
            vlSelf->__Vfunc_shift_jam27__11012__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11012__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11012__distance)))));
            vlSelf->__Vfunc_shift_jam27__11012__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11012__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11012__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11012__discarded))));
        }
        __Vfunc_round_pack32__11011__shifted = vlSelf->__Vfunc_shift_jam27__11012__Vfuncout;
    }
    __Vfunc_round_pack32__11011__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__11011__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__11011__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__11011__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__11011__rounded)) {
        __Vfunc_round_pack32__11011__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__11011__rounded, 1U));
        __Vfunc_round_pack32__11011__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__11011__adjusted)));
    }
    __Vfunc_round_pack32__11011__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__11011__rounded)) {
        __Vfunc_round_pack32__11011__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__11011__adjusted)));
    }
    __Vfunc_round_pack32__11011__Vfuncout = (((0U == __Vfunc_round_pack32__11011__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__11011__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__11011__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__11011__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__11011__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__11011__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__11011__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__11011__Vfuncout;
    __Vfunc_round_pack32__10999__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10999__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10999__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10999__adjusted = __Vfunc_round_pack32__10999__exponent;
    __Vfunc_round_pack32__10999__shifted = __Vfunc_round_pack32__10999__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10999__exponent))) {
        vlSelf->__Vfunc_shift_jam27__11000__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10999__exponent)));
        vlSelf->__Vfunc_shift_jam27__11000__value = __Vfunc_round_pack32__10999__significand;
        __Vfunc_round_pack32__10999__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__11000__distance))) {
            vlSelf->__Vfunc_shift_jam27__11000__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__11000__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__11000__distance))) {
            vlSelf->__Vfunc_shift_jam27__11000__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__11000__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__11000__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11000__value, (IData)(vlSelf->__Vfunc_shift_jam27__11000__distance)));
            vlSelf->__Vfunc_shift_jam27__11000__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__11000__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__11000__distance)))));
            vlSelf->__Vfunc_shift_jam27__11000__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__11000__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__11000__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__11000__discarded))));
        }
        __Vfunc_round_pack32__10999__shifted = vlSelf->__Vfunc_shift_jam27__11000__Vfuncout;
    }
    __Vfunc_round_pack32__10999__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10999__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10999__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10999__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10999__rounded)) {
        __Vfunc_round_pack32__10999__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10999__rounded, 1U));
        __Vfunc_round_pack32__10999__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10999__adjusted)));
    }
    __Vfunc_round_pack32__10999__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10999__rounded)) {
        __Vfunc_round_pack32__10999__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10999__adjusted)));
    }
    __Vfunc_round_pack32__10999__Vfuncout = (((0U == __Vfunc_round_pack32__10999__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10999__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10999__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10999__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10999__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10999__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10999__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10999__Vfuncout;
    __Vfunc_round_pack32__10987__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10987__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10987__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10987__adjusted = __Vfunc_round_pack32__10987__exponent;
    __Vfunc_round_pack32__10987__shifted = __Vfunc_round_pack32__10987__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10987__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10988__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10987__exponent)));
        vlSelf->__Vfunc_shift_jam27__10988__value = __Vfunc_round_pack32__10987__significand;
        __Vfunc_round_pack32__10987__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10988__distance))) {
            vlSelf->__Vfunc_shift_jam27__10988__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10988__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10988__distance))) {
            vlSelf->__Vfunc_shift_jam27__10988__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10988__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10988__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10988__value, (IData)(vlSelf->__Vfunc_shift_jam27__10988__distance)));
            vlSelf->__Vfunc_shift_jam27__10988__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10988__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10988__distance)))));
            vlSelf->__Vfunc_shift_jam27__10988__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10988__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10988__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10988__discarded))));
        }
        __Vfunc_round_pack32__10987__shifted = vlSelf->__Vfunc_shift_jam27__10988__Vfuncout;
    }
    __Vfunc_round_pack32__10987__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10987__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10987__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10987__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10987__rounded)) {
        __Vfunc_round_pack32__10987__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10987__rounded, 1U));
        __Vfunc_round_pack32__10987__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10987__adjusted)));
    }
    __Vfunc_round_pack32__10987__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10987__rounded)) {
        __Vfunc_round_pack32__10987__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10987__adjusted)));
    }
    __Vfunc_round_pack32__10987__Vfuncout = (((0U == __Vfunc_round_pack32__10987__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10987__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10987__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10987__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10987__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10987__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10987__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10987__Vfuncout;
    __Vfunc_round_pack32__10975__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10975__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10975__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10975__adjusted = __Vfunc_round_pack32__10975__exponent;
    __Vfunc_round_pack32__10975__shifted = __Vfunc_round_pack32__10975__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10975__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10976__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10975__exponent)));
        vlSelf->__Vfunc_shift_jam27__10976__value = __Vfunc_round_pack32__10975__significand;
        __Vfunc_round_pack32__10975__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10976__distance))) {
            vlSelf->__Vfunc_shift_jam27__10976__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10976__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10976__distance))) {
            vlSelf->__Vfunc_shift_jam27__10976__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10976__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10976__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10976__value, (IData)(vlSelf->__Vfunc_shift_jam27__10976__distance)));
            vlSelf->__Vfunc_shift_jam27__10976__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10976__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10976__distance)))));
            vlSelf->__Vfunc_shift_jam27__10976__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10976__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10976__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10976__discarded))));
        }
        __Vfunc_round_pack32__10975__shifted = vlSelf->__Vfunc_shift_jam27__10976__Vfuncout;
    }
    __Vfunc_round_pack32__10975__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10975__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10975__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10975__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10975__rounded)) {
        __Vfunc_round_pack32__10975__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10975__rounded, 1U));
        __Vfunc_round_pack32__10975__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10975__adjusted)));
    }
    __Vfunc_round_pack32__10975__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10975__rounded)) {
        __Vfunc_round_pack32__10975__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10975__adjusted)));
    }
    __Vfunc_round_pack32__10975__Vfuncout = (((0U == __Vfunc_round_pack32__10975__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10975__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10975__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10975__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10975__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10975__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10975__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10975__Vfuncout;
    __Vfunc_round_pack32__10963__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10963__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10963__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10963__adjusted = __Vfunc_round_pack32__10963__exponent;
    __Vfunc_round_pack32__10963__shifted = __Vfunc_round_pack32__10963__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10963__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10964__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10963__exponent)));
        vlSelf->__Vfunc_shift_jam27__10964__value = __Vfunc_round_pack32__10963__significand;
        __Vfunc_round_pack32__10963__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10964__distance))) {
            vlSelf->__Vfunc_shift_jam27__10964__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10964__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10964__distance))) {
            vlSelf->__Vfunc_shift_jam27__10964__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10964__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10964__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10964__value, (IData)(vlSelf->__Vfunc_shift_jam27__10964__distance)));
            vlSelf->__Vfunc_shift_jam27__10964__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10964__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10964__distance)))));
            vlSelf->__Vfunc_shift_jam27__10964__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10964__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10964__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10964__discarded))));
        }
        __Vfunc_round_pack32__10963__shifted = vlSelf->__Vfunc_shift_jam27__10964__Vfuncout;
    }
    __Vfunc_round_pack32__10963__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10963__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10963__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10963__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10963__rounded)) {
        __Vfunc_round_pack32__10963__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10963__rounded, 1U));
        __Vfunc_round_pack32__10963__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10963__adjusted)));
    }
    __Vfunc_round_pack32__10963__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10963__rounded)) {
        __Vfunc_round_pack32__10963__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10963__adjusted)));
    }
    __Vfunc_round_pack32__10963__Vfuncout = (((0U == __Vfunc_round_pack32__10963__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10963__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10963__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10963__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10963__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10963__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10963__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10963__Vfuncout;
    __Vfunc_round_pack32__10951__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10951__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10951__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10951__adjusted = __Vfunc_round_pack32__10951__exponent;
    __Vfunc_round_pack32__10951__shifted = __Vfunc_round_pack32__10951__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10951__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10952__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10951__exponent)));
        vlSelf->__Vfunc_shift_jam27__10952__value = __Vfunc_round_pack32__10951__significand;
        __Vfunc_round_pack32__10951__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10952__distance))) {
            vlSelf->__Vfunc_shift_jam27__10952__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10952__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10952__distance))) {
            vlSelf->__Vfunc_shift_jam27__10952__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10952__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10952__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10952__value, (IData)(vlSelf->__Vfunc_shift_jam27__10952__distance)));
            vlSelf->__Vfunc_shift_jam27__10952__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10952__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10952__distance)))));
            vlSelf->__Vfunc_shift_jam27__10952__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10952__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10952__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10952__discarded))));
        }
        __Vfunc_round_pack32__10951__shifted = vlSelf->__Vfunc_shift_jam27__10952__Vfuncout;
    }
    __Vfunc_round_pack32__10951__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10951__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10951__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10951__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10951__rounded)) {
        __Vfunc_round_pack32__10951__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10951__rounded, 1U));
        __Vfunc_round_pack32__10951__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10951__adjusted)));
    }
    __Vfunc_round_pack32__10951__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10951__rounded)) {
        __Vfunc_round_pack32__10951__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10951__adjusted)));
    }
    __Vfunc_round_pack32__10951__Vfuncout = (((0U == __Vfunc_round_pack32__10951__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10951__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10951__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10951__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10951__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10951__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10951__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10951__Vfuncout;
    __Vfunc_round_pack32__10939__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10939__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10939__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10939__adjusted = __Vfunc_round_pack32__10939__exponent;
    __Vfunc_round_pack32__10939__shifted = __Vfunc_round_pack32__10939__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10939__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10940__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10939__exponent)));
        vlSelf->__Vfunc_shift_jam27__10940__value = __Vfunc_round_pack32__10939__significand;
        __Vfunc_round_pack32__10939__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10940__distance))) {
            vlSelf->__Vfunc_shift_jam27__10940__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10940__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10940__distance))) {
            vlSelf->__Vfunc_shift_jam27__10940__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10940__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10940__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10940__value, (IData)(vlSelf->__Vfunc_shift_jam27__10940__distance)));
            vlSelf->__Vfunc_shift_jam27__10940__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10940__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10940__distance)))));
            vlSelf->__Vfunc_shift_jam27__10940__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10940__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10940__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10940__discarded))));
        }
        __Vfunc_round_pack32__10939__shifted = vlSelf->__Vfunc_shift_jam27__10940__Vfuncout;
    }
    __Vfunc_round_pack32__10939__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10939__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10939__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10939__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10939__rounded)) {
        __Vfunc_round_pack32__10939__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10939__rounded, 1U));
        __Vfunc_round_pack32__10939__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10939__adjusted)));
    }
    __Vfunc_round_pack32__10939__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10939__rounded)) {
        __Vfunc_round_pack32__10939__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10939__adjusted)));
    }
    __Vfunc_round_pack32__10939__Vfuncout = (((0U == __Vfunc_round_pack32__10939__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10939__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10939__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10939__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10939__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10939__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10939__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10939__Vfuncout;
    __Vfunc_round_pack32__10927__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10927__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10927__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10927__adjusted = __Vfunc_round_pack32__10927__exponent;
    __Vfunc_round_pack32__10927__shifted = __Vfunc_round_pack32__10927__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10927__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10928__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10927__exponent)));
        vlSelf->__Vfunc_shift_jam27__10928__value = __Vfunc_round_pack32__10927__significand;
        __Vfunc_round_pack32__10927__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10928__distance))) {
            vlSelf->__Vfunc_shift_jam27__10928__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10928__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10928__distance))) {
            vlSelf->__Vfunc_shift_jam27__10928__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10928__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10928__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10928__value, (IData)(vlSelf->__Vfunc_shift_jam27__10928__distance)));
            vlSelf->__Vfunc_shift_jam27__10928__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10928__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10928__distance)))));
            vlSelf->__Vfunc_shift_jam27__10928__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10928__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10928__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10928__discarded))));
        }
        __Vfunc_round_pack32__10927__shifted = vlSelf->__Vfunc_shift_jam27__10928__Vfuncout;
    }
    __Vfunc_round_pack32__10927__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10927__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10927__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10927__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10927__rounded)) {
        __Vfunc_round_pack32__10927__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10927__rounded, 1U));
        __Vfunc_round_pack32__10927__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10927__adjusted)));
    }
    __Vfunc_round_pack32__10927__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10927__rounded)) {
        __Vfunc_round_pack32__10927__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10927__adjusted)));
    }
    __Vfunc_round_pack32__10927__Vfuncout = (((0U == __Vfunc_round_pack32__10927__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10927__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10927__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10927__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10927__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10927__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10927__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10927__Vfuncout;
    __Vfunc_round_pack32__10915__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10915__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10915__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10915__adjusted = __Vfunc_round_pack32__10915__exponent;
    __Vfunc_round_pack32__10915__shifted = __Vfunc_round_pack32__10915__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10915__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10916__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10915__exponent)));
        vlSelf->__Vfunc_shift_jam27__10916__value = __Vfunc_round_pack32__10915__significand;
        __Vfunc_round_pack32__10915__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10916__distance))) {
            vlSelf->__Vfunc_shift_jam27__10916__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10916__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10916__distance))) {
            vlSelf->__Vfunc_shift_jam27__10916__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10916__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10916__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10916__value, (IData)(vlSelf->__Vfunc_shift_jam27__10916__distance)));
            vlSelf->__Vfunc_shift_jam27__10916__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10916__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10916__distance)))));
            vlSelf->__Vfunc_shift_jam27__10916__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10916__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10916__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10916__discarded))));
        }
        __Vfunc_round_pack32__10915__shifted = vlSelf->__Vfunc_shift_jam27__10916__Vfuncout;
    }
    __Vfunc_round_pack32__10915__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10915__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10915__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10915__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10915__rounded)) {
        __Vfunc_round_pack32__10915__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10915__rounded, 1U));
        __Vfunc_round_pack32__10915__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10915__adjusted)));
    }
    __Vfunc_round_pack32__10915__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10915__rounded)) {
        __Vfunc_round_pack32__10915__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10915__adjusted)));
    }
    __Vfunc_round_pack32__10915__Vfuncout = (((0U == __Vfunc_round_pack32__10915__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10915__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10915__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10915__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10915__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10915__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10915__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10915__Vfuncout;
    __Vfunc_round_pack32__10903__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10903__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10903__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10903__adjusted = __Vfunc_round_pack32__10903__exponent;
    __Vfunc_round_pack32__10903__shifted = __Vfunc_round_pack32__10903__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10903__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10904__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10903__exponent)));
        vlSelf->__Vfunc_shift_jam27__10904__value = __Vfunc_round_pack32__10903__significand;
        __Vfunc_round_pack32__10903__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10904__distance))) {
            vlSelf->__Vfunc_shift_jam27__10904__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10904__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10904__distance))) {
            vlSelf->__Vfunc_shift_jam27__10904__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10904__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10904__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10904__value, (IData)(vlSelf->__Vfunc_shift_jam27__10904__distance)));
            vlSelf->__Vfunc_shift_jam27__10904__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10904__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10904__distance)))));
            vlSelf->__Vfunc_shift_jam27__10904__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10904__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10904__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10904__discarded))));
        }
        __Vfunc_round_pack32__10903__shifted = vlSelf->__Vfunc_shift_jam27__10904__Vfuncout;
    }
    __Vfunc_round_pack32__10903__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10903__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10903__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10903__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10903__rounded)) {
        __Vfunc_round_pack32__10903__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10903__rounded, 1U));
        __Vfunc_round_pack32__10903__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10903__adjusted)));
    }
    __Vfunc_round_pack32__10903__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10903__rounded)) {
        __Vfunc_round_pack32__10903__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10903__adjusted)));
    }
    __Vfunc_round_pack32__10903__Vfuncout = (((0U == __Vfunc_round_pack32__10903__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10903__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10903__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10903__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10903__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10903__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10903__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10903__Vfuncout;
    __Vfunc_round_pack32__10891__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10891__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10891__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10891__adjusted = __Vfunc_round_pack32__10891__exponent;
    __Vfunc_round_pack32__10891__shifted = __Vfunc_round_pack32__10891__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10891__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10892__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10891__exponent)));
        vlSelf->__Vfunc_shift_jam27__10892__value = __Vfunc_round_pack32__10891__significand;
        __Vfunc_round_pack32__10891__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10892__distance))) {
            vlSelf->__Vfunc_shift_jam27__10892__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10892__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10892__distance))) {
            vlSelf->__Vfunc_shift_jam27__10892__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10892__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10892__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10892__value, (IData)(vlSelf->__Vfunc_shift_jam27__10892__distance)));
            vlSelf->__Vfunc_shift_jam27__10892__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10892__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10892__distance)))));
            vlSelf->__Vfunc_shift_jam27__10892__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10892__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10892__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10892__discarded))));
        }
        __Vfunc_round_pack32__10891__shifted = vlSelf->__Vfunc_shift_jam27__10892__Vfuncout;
    }
    __Vfunc_round_pack32__10891__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10891__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10891__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10891__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10891__rounded)) {
        __Vfunc_round_pack32__10891__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10891__rounded, 1U));
        __Vfunc_round_pack32__10891__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10891__adjusted)));
    }
    __Vfunc_round_pack32__10891__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10891__rounded)) {
        __Vfunc_round_pack32__10891__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10891__adjusted)));
    }
    __Vfunc_round_pack32__10891__Vfuncout = (((0U == __Vfunc_round_pack32__10891__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10891__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10891__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10891__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10891__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10891__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10891__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10891__Vfuncout;
    __Vfunc_round_pack32__10879__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10879__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10879__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10879__adjusted = __Vfunc_round_pack32__10879__exponent;
    __Vfunc_round_pack32__10879__shifted = __Vfunc_round_pack32__10879__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10879__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10880__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10879__exponent)));
        vlSelf->__Vfunc_shift_jam27__10880__value = __Vfunc_round_pack32__10879__significand;
        __Vfunc_round_pack32__10879__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10880__distance))) {
            vlSelf->__Vfunc_shift_jam27__10880__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10880__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10880__distance))) {
            vlSelf->__Vfunc_shift_jam27__10880__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10880__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10880__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10880__value, (IData)(vlSelf->__Vfunc_shift_jam27__10880__distance)));
            vlSelf->__Vfunc_shift_jam27__10880__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10880__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10880__distance)))));
            vlSelf->__Vfunc_shift_jam27__10880__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10880__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10880__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10880__discarded))));
        }
        __Vfunc_round_pack32__10879__shifted = vlSelf->__Vfunc_shift_jam27__10880__Vfuncout;
    }
    __Vfunc_round_pack32__10879__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10879__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10879__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10879__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10879__rounded)) {
        __Vfunc_round_pack32__10879__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10879__rounded, 1U));
        __Vfunc_round_pack32__10879__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10879__adjusted)));
    }
    __Vfunc_round_pack32__10879__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10879__rounded)) {
        __Vfunc_round_pack32__10879__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10879__adjusted)));
    }
    __Vfunc_round_pack32__10879__Vfuncout = (((0U == __Vfunc_round_pack32__10879__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10879__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10879__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10879__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10879__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10879__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10879__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10879__Vfuncout;
    __Vfunc_round_pack32__10867__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10867__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10867__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10867__adjusted = __Vfunc_round_pack32__10867__exponent;
    __Vfunc_round_pack32__10867__shifted = __Vfunc_round_pack32__10867__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10867__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10868__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10867__exponent)));
        vlSelf->__Vfunc_shift_jam27__10868__value = __Vfunc_round_pack32__10867__significand;
        __Vfunc_round_pack32__10867__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10868__distance))) {
            vlSelf->__Vfunc_shift_jam27__10868__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10868__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10868__distance))) {
            vlSelf->__Vfunc_shift_jam27__10868__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10868__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10868__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10868__value, (IData)(vlSelf->__Vfunc_shift_jam27__10868__distance)));
            vlSelf->__Vfunc_shift_jam27__10868__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10868__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10868__distance)))));
            vlSelf->__Vfunc_shift_jam27__10868__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10868__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10868__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10868__discarded))));
        }
        __Vfunc_round_pack32__10867__shifted = vlSelf->__Vfunc_shift_jam27__10868__Vfuncout;
    }
    __Vfunc_round_pack32__10867__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10867__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10867__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10867__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10867__rounded)) {
        __Vfunc_round_pack32__10867__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10867__rounded, 1U));
        __Vfunc_round_pack32__10867__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10867__adjusted)));
    }
    __Vfunc_round_pack32__10867__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10867__rounded)) {
        __Vfunc_round_pack32__10867__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10867__adjusted)));
    }
    __Vfunc_round_pack32__10867__Vfuncout = (((0U == __Vfunc_round_pack32__10867__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10867__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10867__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10867__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10867__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10867__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10867__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10867__Vfuncout;
    __Vfunc_round_pack32__10855__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10855__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10855__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10855__adjusted = __Vfunc_round_pack32__10855__exponent;
    __Vfunc_round_pack32__10855__shifted = __Vfunc_round_pack32__10855__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10855__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10856__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10855__exponent)));
        vlSelf->__Vfunc_shift_jam27__10856__value = __Vfunc_round_pack32__10855__significand;
        __Vfunc_round_pack32__10855__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10856__distance))) {
            vlSelf->__Vfunc_shift_jam27__10856__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10856__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10856__distance))) {
            vlSelf->__Vfunc_shift_jam27__10856__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10856__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10856__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10856__value, (IData)(vlSelf->__Vfunc_shift_jam27__10856__distance)));
            vlSelf->__Vfunc_shift_jam27__10856__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10856__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10856__distance)))));
            vlSelf->__Vfunc_shift_jam27__10856__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10856__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10856__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10856__discarded))));
        }
        __Vfunc_round_pack32__10855__shifted = vlSelf->__Vfunc_shift_jam27__10856__Vfuncout;
    }
    __Vfunc_round_pack32__10855__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10855__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10855__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10855__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10855__rounded)) {
        __Vfunc_round_pack32__10855__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10855__rounded, 1U));
        __Vfunc_round_pack32__10855__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10855__adjusted)));
    }
    __Vfunc_round_pack32__10855__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10855__rounded)) {
        __Vfunc_round_pack32__10855__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10855__adjusted)));
    }
    __Vfunc_round_pack32__10855__Vfuncout = (((0U == __Vfunc_round_pack32__10855__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10855__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10855__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10855__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10855__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10855__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10855__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10855__Vfuncout;
    __Vfunc_round_pack32__10843__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10843__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10843__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10843__adjusted = __Vfunc_round_pack32__10843__exponent;
    __Vfunc_round_pack32__10843__shifted = __Vfunc_round_pack32__10843__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10843__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10844__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10843__exponent)));
        vlSelf->__Vfunc_shift_jam27__10844__value = __Vfunc_round_pack32__10843__significand;
        __Vfunc_round_pack32__10843__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10844__distance))) {
            vlSelf->__Vfunc_shift_jam27__10844__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10844__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10844__distance))) {
            vlSelf->__Vfunc_shift_jam27__10844__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10844__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10844__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10844__value, (IData)(vlSelf->__Vfunc_shift_jam27__10844__distance)));
            vlSelf->__Vfunc_shift_jam27__10844__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10844__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10844__distance)))));
            vlSelf->__Vfunc_shift_jam27__10844__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10844__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10844__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10844__discarded))));
        }
        __Vfunc_round_pack32__10843__shifted = vlSelf->__Vfunc_shift_jam27__10844__Vfuncout;
    }
    __Vfunc_round_pack32__10843__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10843__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10843__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10843__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10843__rounded)) {
        __Vfunc_round_pack32__10843__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10843__rounded, 1U));
        __Vfunc_round_pack32__10843__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10843__adjusted)));
    }
    __Vfunc_round_pack32__10843__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10843__rounded)) {
        __Vfunc_round_pack32__10843__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10843__adjusted)));
    }
    __Vfunc_round_pack32__10843__Vfuncout = (((0U == __Vfunc_round_pack32__10843__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10843__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10843__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10843__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10843__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10843__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10843__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10843__Vfuncout;
    __Vfunc_round_pack32__10831__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10831__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10831__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10831__adjusted = __Vfunc_round_pack32__10831__exponent;
    __Vfunc_round_pack32__10831__shifted = __Vfunc_round_pack32__10831__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10831__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10832__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10831__exponent)));
        vlSelf->__Vfunc_shift_jam27__10832__value = __Vfunc_round_pack32__10831__significand;
        __Vfunc_round_pack32__10831__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10832__distance))) {
            vlSelf->__Vfunc_shift_jam27__10832__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10832__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10832__distance))) {
            vlSelf->__Vfunc_shift_jam27__10832__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10832__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10832__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10832__value, (IData)(vlSelf->__Vfunc_shift_jam27__10832__distance)));
            vlSelf->__Vfunc_shift_jam27__10832__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10832__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10832__distance)))));
            vlSelf->__Vfunc_shift_jam27__10832__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10832__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10832__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10832__discarded))));
        }
        __Vfunc_round_pack32__10831__shifted = vlSelf->__Vfunc_shift_jam27__10832__Vfuncout;
    }
    __Vfunc_round_pack32__10831__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10831__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10831__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10831__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10831__rounded)) {
        __Vfunc_round_pack32__10831__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10831__rounded, 1U));
        __Vfunc_round_pack32__10831__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10831__adjusted)));
    }
    __Vfunc_round_pack32__10831__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10831__rounded)) {
        __Vfunc_round_pack32__10831__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10831__adjusted)));
    }
    __Vfunc_round_pack32__10831__Vfuncout = (((0U == __Vfunc_round_pack32__10831__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10831__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10831__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10831__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10831__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10831__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10831__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10831__Vfuncout;
    __Vfunc_round_pack32__10819__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10819__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10819__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10819__adjusted = __Vfunc_round_pack32__10819__exponent;
    __Vfunc_round_pack32__10819__shifted = __Vfunc_round_pack32__10819__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10819__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10820__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10819__exponent)));
        vlSelf->__Vfunc_shift_jam27__10820__value = __Vfunc_round_pack32__10819__significand;
        __Vfunc_round_pack32__10819__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10820__distance))) {
            vlSelf->__Vfunc_shift_jam27__10820__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10820__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10820__distance))) {
            vlSelf->__Vfunc_shift_jam27__10820__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10820__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10820__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10820__value, (IData)(vlSelf->__Vfunc_shift_jam27__10820__distance)));
            vlSelf->__Vfunc_shift_jam27__10820__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10820__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10820__distance)))));
            vlSelf->__Vfunc_shift_jam27__10820__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10820__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10820__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10820__discarded))));
        }
        __Vfunc_round_pack32__10819__shifted = vlSelf->__Vfunc_shift_jam27__10820__Vfuncout;
    }
    __Vfunc_round_pack32__10819__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10819__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10819__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10819__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10819__rounded)) {
        __Vfunc_round_pack32__10819__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10819__rounded, 1U));
        __Vfunc_round_pack32__10819__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10819__adjusted)));
    }
    __Vfunc_round_pack32__10819__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10819__rounded)) {
        __Vfunc_round_pack32__10819__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10819__adjusted)));
    }
    __Vfunc_round_pack32__10819__Vfuncout = (((0U == __Vfunc_round_pack32__10819__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10819__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10819__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10819__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10819__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10819__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10819__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10819__Vfuncout;
    __Vfunc_round_pack32__10807__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10807__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10807__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10807__adjusted = __Vfunc_round_pack32__10807__exponent;
    __Vfunc_round_pack32__10807__shifted = __Vfunc_round_pack32__10807__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10807__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10808__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10807__exponent)));
        vlSelf->__Vfunc_shift_jam27__10808__value = __Vfunc_round_pack32__10807__significand;
        __Vfunc_round_pack32__10807__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10808__distance))) {
            vlSelf->__Vfunc_shift_jam27__10808__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10808__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10808__distance))) {
            vlSelf->__Vfunc_shift_jam27__10808__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10808__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10808__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10808__value, (IData)(vlSelf->__Vfunc_shift_jam27__10808__distance)));
            vlSelf->__Vfunc_shift_jam27__10808__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10808__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10808__distance)))));
            vlSelf->__Vfunc_shift_jam27__10808__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10808__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10808__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10808__discarded))));
        }
        __Vfunc_round_pack32__10807__shifted = vlSelf->__Vfunc_shift_jam27__10808__Vfuncout;
    }
    __Vfunc_round_pack32__10807__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10807__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10807__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10807__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10807__rounded)) {
        __Vfunc_round_pack32__10807__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10807__rounded, 1U));
        __Vfunc_round_pack32__10807__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10807__adjusted)));
    }
    __Vfunc_round_pack32__10807__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10807__rounded)) {
        __Vfunc_round_pack32__10807__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10807__adjusted)));
    }
    __Vfunc_round_pack32__10807__Vfuncout = (((0U == __Vfunc_round_pack32__10807__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10807__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10807__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10807__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10807__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10807__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10807__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10807__Vfuncout;
    __Vfunc_round_pack32__10795__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10795__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10795__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10795__adjusted = __Vfunc_round_pack32__10795__exponent;
    __Vfunc_round_pack32__10795__shifted = __Vfunc_round_pack32__10795__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10795__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10796__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10795__exponent)));
        vlSelf->__Vfunc_shift_jam27__10796__value = __Vfunc_round_pack32__10795__significand;
        __Vfunc_round_pack32__10795__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10796__distance))) {
            vlSelf->__Vfunc_shift_jam27__10796__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10796__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10796__distance))) {
            vlSelf->__Vfunc_shift_jam27__10796__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10796__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10796__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10796__value, (IData)(vlSelf->__Vfunc_shift_jam27__10796__distance)));
            vlSelf->__Vfunc_shift_jam27__10796__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10796__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10796__distance)))));
            vlSelf->__Vfunc_shift_jam27__10796__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10796__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10796__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10796__discarded))));
        }
        __Vfunc_round_pack32__10795__shifted = vlSelf->__Vfunc_shift_jam27__10796__Vfuncout;
    }
    __Vfunc_round_pack32__10795__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10795__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10795__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10795__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10795__rounded)) {
        __Vfunc_round_pack32__10795__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10795__rounded, 1U));
        __Vfunc_round_pack32__10795__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10795__adjusted)));
    }
    __Vfunc_round_pack32__10795__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10795__rounded)) {
        __Vfunc_round_pack32__10795__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10795__adjusted)));
    }
    __Vfunc_round_pack32__10795__Vfuncout = (((0U == __Vfunc_round_pack32__10795__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10795__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10795__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10795__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10795__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10795__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10795__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10795__Vfuncout;
    __Vfunc_round_pack32__10783__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10783__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10783__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10783__adjusted = __Vfunc_round_pack32__10783__exponent;
    __Vfunc_round_pack32__10783__shifted = __Vfunc_round_pack32__10783__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10783__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10784__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10783__exponent)));
        vlSelf->__Vfunc_shift_jam27__10784__value = __Vfunc_round_pack32__10783__significand;
        __Vfunc_round_pack32__10783__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10784__distance))) {
            vlSelf->__Vfunc_shift_jam27__10784__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10784__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10784__distance))) {
            vlSelf->__Vfunc_shift_jam27__10784__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10784__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10784__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10784__value, (IData)(vlSelf->__Vfunc_shift_jam27__10784__distance)));
            vlSelf->__Vfunc_shift_jam27__10784__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10784__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10784__distance)))));
            vlSelf->__Vfunc_shift_jam27__10784__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10784__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10784__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10784__discarded))));
        }
        __Vfunc_round_pack32__10783__shifted = vlSelf->__Vfunc_shift_jam27__10784__Vfuncout;
    }
    __Vfunc_round_pack32__10783__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10783__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10783__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10783__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10783__rounded)) {
        __Vfunc_round_pack32__10783__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10783__rounded, 1U));
        __Vfunc_round_pack32__10783__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10783__adjusted)));
    }
    __Vfunc_round_pack32__10783__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10783__rounded)) {
        __Vfunc_round_pack32__10783__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10783__adjusted)));
    }
    __Vfunc_round_pack32__10783__Vfuncout = (((0U == __Vfunc_round_pack32__10783__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10783__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10783__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10783__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10783__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10783__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10783__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10783__Vfuncout;
    __Vfunc_round_pack32__10771__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10771__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10771__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10771__adjusted = __Vfunc_round_pack32__10771__exponent;
    __Vfunc_round_pack32__10771__shifted = __Vfunc_round_pack32__10771__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10771__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10772__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10771__exponent)));
        vlSelf->__Vfunc_shift_jam27__10772__value = __Vfunc_round_pack32__10771__significand;
        __Vfunc_round_pack32__10771__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10772__distance))) {
            vlSelf->__Vfunc_shift_jam27__10772__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10772__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10772__distance))) {
            vlSelf->__Vfunc_shift_jam27__10772__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10772__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10772__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10772__value, (IData)(vlSelf->__Vfunc_shift_jam27__10772__distance)));
            vlSelf->__Vfunc_shift_jam27__10772__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10772__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10772__distance)))));
            vlSelf->__Vfunc_shift_jam27__10772__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10772__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10772__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10772__discarded))));
        }
        __Vfunc_round_pack32__10771__shifted = vlSelf->__Vfunc_shift_jam27__10772__Vfuncout;
    }
    __Vfunc_round_pack32__10771__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10771__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10771__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10771__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10771__rounded)) {
        __Vfunc_round_pack32__10771__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10771__rounded, 1U));
        __Vfunc_round_pack32__10771__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10771__adjusted)));
    }
    __Vfunc_round_pack32__10771__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10771__rounded)) {
        __Vfunc_round_pack32__10771__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10771__adjusted)));
    }
    __Vfunc_round_pack32__10771__Vfuncout = (((0U == __Vfunc_round_pack32__10771__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10771__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10771__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10771__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10771__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10771__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10771__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10771__Vfuncout;
    __Vfunc_round_pack32__10759__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10759__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10759__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10759__adjusted = __Vfunc_round_pack32__10759__exponent;
    __Vfunc_round_pack32__10759__shifted = __Vfunc_round_pack32__10759__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10759__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10760__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10759__exponent)));
        vlSelf->__Vfunc_shift_jam27__10760__value = __Vfunc_round_pack32__10759__significand;
        __Vfunc_round_pack32__10759__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10760__distance))) {
            vlSelf->__Vfunc_shift_jam27__10760__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10760__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10760__distance))) {
            vlSelf->__Vfunc_shift_jam27__10760__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10760__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10760__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10760__value, (IData)(vlSelf->__Vfunc_shift_jam27__10760__distance)));
            vlSelf->__Vfunc_shift_jam27__10760__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10760__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10760__distance)))));
            vlSelf->__Vfunc_shift_jam27__10760__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10760__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10760__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10760__discarded))));
        }
        __Vfunc_round_pack32__10759__shifted = vlSelf->__Vfunc_shift_jam27__10760__Vfuncout;
    }
    __Vfunc_round_pack32__10759__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10759__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10759__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10759__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10759__rounded)) {
        __Vfunc_round_pack32__10759__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10759__rounded, 1U));
        __Vfunc_round_pack32__10759__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10759__adjusted)));
    }
    __Vfunc_round_pack32__10759__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10759__rounded)) {
        __Vfunc_round_pack32__10759__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10759__adjusted)));
    }
    __Vfunc_round_pack32__10759__Vfuncout = (((0U == __Vfunc_round_pack32__10759__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10759__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10759__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10759__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10759__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10759__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10759__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10759__Vfuncout;
    __Vfunc_round_pack32__10747__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10747__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10747__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10747__adjusted = __Vfunc_round_pack32__10747__exponent;
    __Vfunc_round_pack32__10747__shifted = __Vfunc_round_pack32__10747__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10747__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10748__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10747__exponent)));
        vlSelf->__Vfunc_shift_jam27__10748__value = __Vfunc_round_pack32__10747__significand;
        __Vfunc_round_pack32__10747__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10748__distance))) {
            vlSelf->__Vfunc_shift_jam27__10748__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10748__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10748__distance))) {
            vlSelf->__Vfunc_shift_jam27__10748__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10748__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10748__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10748__value, (IData)(vlSelf->__Vfunc_shift_jam27__10748__distance)));
            vlSelf->__Vfunc_shift_jam27__10748__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10748__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10748__distance)))));
            vlSelf->__Vfunc_shift_jam27__10748__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10748__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10748__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10748__discarded))));
        }
        __Vfunc_round_pack32__10747__shifted = vlSelf->__Vfunc_shift_jam27__10748__Vfuncout;
    }
    __Vfunc_round_pack32__10747__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10747__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10747__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10747__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10747__rounded)) {
        __Vfunc_round_pack32__10747__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10747__rounded, 1U));
        __Vfunc_round_pack32__10747__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10747__adjusted)));
    }
    __Vfunc_round_pack32__10747__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10747__rounded)) {
        __Vfunc_round_pack32__10747__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10747__adjusted)));
    }
    __Vfunc_round_pack32__10747__Vfuncout = (((0U == __Vfunc_round_pack32__10747__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10747__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10747__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10747__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10747__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10747__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10747__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10747__Vfuncout;
    __Vfunc_round_pack32__10735__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10735__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10735__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10735__adjusted = __Vfunc_round_pack32__10735__exponent;
    __Vfunc_round_pack32__10735__shifted = __Vfunc_round_pack32__10735__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10735__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10736__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10735__exponent)));
        vlSelf->__Vfunc_shift_jam27__10736__value = __Vfunc_round_pack32__10735__significand;
        __Vfunc_round_pack32__10735__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10736__distance))) {
            vlSelf->__Vfunc_shift_jam27__10736__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10736__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10736__distance))) {
            vlSelf->__Vfunc_shift_jam27__10736__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10736__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10736__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10736__value, (IData)(vlSelf->__Vfunc_shift_jam27__10736__distance)));
            vlSelf->__Vfunc_shift_jam27__10736__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10736__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10736__distance)))));
            vlSelf->__Vfunc_shift_jam27__10736__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10736__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10736__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10736__discarded))));
        }
        __Vfunc_round_pack32__10735__shifted = vlSelf->__Vfunc_shift_jam27__10736__Vfuncout;
    }
    __Vfunc_round_pack32__10735__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10735__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10735__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10735__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10735__rounded)) {
        __Vfunc_round_pack32__10735__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10735__rounded, 1U));
        __Vfunc_round_pack32__10735__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10735__adjusted)));
    }
    __Vfunc_round_pack32__10735__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10735__rounded)) {
        __Vfunc_round_pack32__10735__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10735__adjusted)));
    }
    __Vfunc_round_pack32__10735__Vfuncout = (((0U == __Vfunc_round_pack32__10735__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10735__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10735__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10735__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10735__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10735__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10735__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10735__Vfuncout;
    __Vfunc_round_pack32__10723__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10723__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10723__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10723__adjusted = __Vfunc_round_pack32__10723__exponent;
    __Vfunc_round_pack32__10723__shifted = __Vfunc_round_pack32__10723__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10723__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10724__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10723__exponent)));
        vlSelf->__Vfunc_shift_jam27__10724__value = __Vfunc_round_pack32__10723__significand;
        __Vfunc_round_pack32__10723__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10724__distance))) {
            vlSelf->__Vfunc_shift_jam27__10724__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10724__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10724__distance))) {
            vlSelf->__Vfunc_shift_jam27__10724__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10724__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10724__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10724__value, (IData)(vlSelf->__Vfunc_shift_jam27__10724__distance)));
            vlSelf->__Vfunc_shift_jam27__10724__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10724__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10724__distance)))));
            vlSelf->__Vfunc_shift_jam27__10724__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10724__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10724__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10724__discarded))));
        }
        __Vfunc_round_pack32__10723__shifted = vlSelf->__Vfunc_shift_jam27__10724__Vfuncout;
    }
    __Vfunc_round_pack32__10723__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10723__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10723__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10723__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10723__rounded)) {
        __Vfunc_round_pack32__10723__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10723__rounded, 1U));
        __Vfunc_round_pack32__10723__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10723__adjusted)));
    }
    __Vfunc_round_pack32__10723__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10723__rounded)) {
        __Vfunc_round_pack32__10723__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10723__adjusted)));
    }
    __Vfunc_round_pack32__10723__Vfuncout = (((0U == __Vfunc_round_pack32__10723__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10723__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10723__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10723__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10723__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10723__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10723__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10723__Vfuncout;
    __Vfunc_round_pack32__10711__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10711__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10711__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10711__adjusted = __Vfunc_round_pack32__10711__exponent;
    __Vfunc_round_pack32__10711__shifted = __Vfunc_round_pack32__10711__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10711__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10712__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10711__exponent)));
        vlSelf->__Vfunc_shift_jam27__10712__value = __Vfunc_round_pack32__10711__significand;
        __Vfunc_round_pack32__10711__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10712__distance))) {
            vlSelf->__Vfunc_shift_jam27__10712__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10712__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10712__distance))) {
            vlSelf->__Vfunc_shift_jam27__10712__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10712__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10712__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10712__value, (IData)(vlSelf->__Vfunc_shift_jam27__10712__distance)));
            vlSelf->__Vfunc_shift_jam27__10712__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10712__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10712__distance)))));
            vlSelf->__Vfunc_shift_jam27__10712__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10712__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10712__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10712__discarded))));
        }
        __Vfunc_round_pack32__10711__shifted = vlSelf->__Vfunc_shift_jam27__10712__Vfuncout;
    }
    __Vfunc_round_pack32__10711__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10711__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10711__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10711__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10711__rounded)) {
        __Vfunc_round_pack32__10711__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10711__rounded, 1U));
        __Vfunc_round_pack32__10711__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10711__adjusted)));
    }
    __Vfunc_round_pack32__10711__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10711__rounded)) {
        __Vfunc_round_pack32__10711__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10711__adjusted)));
    }
    __Vfunc_round_pack32__10711__Vfuncout = (((0U == __Vfunc_round_pack32__10711__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10711__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10711__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10711__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10711__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10711__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10711__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10711__Vfuncout;
    __Vfunc_round_pack32__10699__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10699__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10699__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10699__adjusted = __Vfunc_round_pack32__10699__exponent;
    __Vfunc_round_pack32__10699__shifted = __Vfunc_round_pack32__10699__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10699__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10700__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10699__exponent)));
        vlSelf->__Vfunc_shift_jam27__10700__value = __Vfunc_round_pack32__10699__significand;
        __Vfunc_round_pack32__10699__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10700__distance))) {
            vlSelf->__Vfunc_shift_jam27__10700__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10700__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10700__distance))) {
            vlSelf->__Vfunc_shift_jam27__10700__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10700__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10700__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10700__value, (IData)(vlSelf->__Vfunc_shift_jam27__10700__distance)));
            vlSelf->__Vfunc_shift_jam27__10700__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10700__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10700__distance)))));
            vlSelf->__Vfunc_shift_jam27__10700__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10700__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10700__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10700__discarded))));
        }
        __Vfunc_round_pack32__10699__shifted = vlSelf->__Vfunc_shift_jam27__10700__Vfuncout;
    }
    __Vfunc_round_pack32__10699__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10699__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10699__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10699__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10699__rounded)) {
        __Vfunc_round_pack32__10699__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10699__rounded, 1U));
        __Vfunc_round_pack32__10699__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10699__adjusted)));
    }
    __Vfunc_round_pack32__10699__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10699__rounded)) {
        __Vfunc_round_pack32__10699__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10699__adjusted)));
    }
    __Vfunc_round_pack32__10699__Vfuncout = (((0U == __Vfunc_round_pack32__10699__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10699__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10699__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10699__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10699__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10699__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10699__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10699__Vfuncout;
    __Vfunc_round_pack32__10687__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10687__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10687__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10687__adjusted = __Vfunc_round_pack32__10687__exponent;
    __Vfunc_round_pack32__10687__shifted = __Vfunc_round_pack32__10687__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10687__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10688__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10687__exponent)));
        vlSelf->__Vfunc_shift_jam27__10688__value = __Vfunc_round_pack32__10687__significand;
        __Vfunc_round_pack32__10687__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10688__distance))) {
            vlSelf->__Vfunc_shift_jam27__10688__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10688__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10688__distance))) {
            vlSelf->__Vfunc_shift_jam27__10688__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10688__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10688__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10688__value, (IData)(vlSelf->__Vfunc_shift_jam27__10688__distance)));
            vlSelf->__Vfunc_shift_jam27__10688__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10688__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10688__distance)))));
            vlSelf->__Vfunc_shift_jam27__10688__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10688__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10688__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10688__discarded))));
        }
        __Vfunc_round_pack32__10687__shifted = vlSelf->__Vfunc_shift_jam27__10688__Vfuncout;
    }
    __Vfunc_round_pack32__10687__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10687__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10687__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10687__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10687__rounded)) {
        __Vfunc_round_pack32__10687__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10687__rounded, 1U));
        __Vfunc_round_pack32__10687__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10687__adjusted)));
    }
    __Vfunc_round_pack32__10687__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10687__rounded)) {
        __Vfunc_round_pack32__10687__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10687__adjusted)));
    }
    __Vfunc_round_pack32__10687__Vfuncout = (((0U == __Vfunc_round_pack32__10687__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10687__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10687__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10687__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10687__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10687__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10687__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10687__Vfuncout;
    __Vfunc_round_pack32__10675__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10675__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10675__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10675__adjusted = __Vfunc_round_pack32__10675__exponent;
    __Vfunc_round_pack32__10675__shifted = __Vfunc_round_pack32__10675__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10675__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10676__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10675__exponent)));
        vlSelf->__Vfunc_shift_jam27__10676__value = __Vfunc_round_pack32__10675__significand;
        __Vfunc_round_pack32__10675__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10676__distance))) {
            vlSelf->__Vfunc_shift_jam27__10676__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10676__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10676__distance))) {
            vlSelf->__Vfunc_shift_jam27__10676__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10676__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10676__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10676__value, (IData)(vlSelf->__Vfunc_shift_jam27__10676__distance)));
            vlSelf->__Vfunc_shift_jam27__10676__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10676__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10676__distance)))));
            vlSelf->__Vfunc_shift_jam27__10676__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10676__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10676__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10676__discarded))));
        }
        __Vfunc_round_pack32__10675__shifted = vlSelf->__Vfunc_shift_jam27__10676__Vfuncout;
    }
    __Vfunc_round_pack32__10675__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10675__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10675__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10675__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10675__rounded)) {
        __Vfunc_round_pack32__10675__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10675__rounded, 1U));
        __Vfunc_round_pack32__10675__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10675__adjusted)));
    }
    __Vfunc_round_pack32__10675__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10675__rounded)) {
        __Vfunc_round_pack32__10675__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10675__adjusted)));
    }
    __Vfunc_round_pack32__10675__Vfuncout = (((0U == __Vfunc_round_pack32__10675__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10675__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10675__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10675__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10675__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10675__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10675__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10675__Vfuncout;
    __Vfunc_round_pack32__10663__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10663__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10663__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10663__adjusted = __Vfunc_round_pack32__10663__exponent;
    __Vfunc_round_pack32__10663__shifted = __Vfunc_round_pack32__10663__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10663__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10664__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10663__exponent)));
        vlSelf->__Vfunc_shift_jam27__10664__value = __Vfunc_round_pack32__10663__significand;
        __Vfunc_round_pack32__10663__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10664__distance))) {
            vlSelf->__Vfunc_shift_jam27__10664__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10664__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10664__distance))) {
            vlSelf->__Vfunc_shift_jam27__10664__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10664__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10664__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10664__value, (IData)(vlSelf->__Vfunc_shift_jam27__10664__distance)));
            vlSelf->__Vfunc_shift_jam27__10664__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10664__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10664__distance)))));
            vlSelf->__Vfunc_shift_jam27__10664__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10664__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10664__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10664__discarded))));
        }
        __Vfunc_round_pack32__10663__shifted = vlSelf->__Vfunc_shift_jam27__10664__Vfuncout;
    }
    __Vfunc_round_pack32__10663__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10663__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10663__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10663__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10663__rounded)) {
        __Vfunc_round_pack32__10663__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10663__rounded, 1U));
        __Vfunc_round_pack32__10663__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10663__adjusted)));
    }
    __Vfunc_round_pack32__10663__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10663__rounded)) {
        __Vfunc_round_pack32__10663__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10663__adjusted)));
    }
    __Vfunc_round_pack32__10663__Vfuncout = (((0U == __Vfunc_round_pack32__10663__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10663__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10663__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10663__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10663__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10663__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10663__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10663__Vfuncout;
    __Vfunc_round_pack32__10651__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10651__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10651__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10651__adjusted = __Vfunc_round_pack32__10651__exponent;
    __Vfunc_round_pack32__10651__shifted = __Vfunc_round_pack32__10651__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10651__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10652__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10651__exponent)));
        vlSelf->__Vfunc_shift_jam27__10652__value = __Vfunc_round_pack32__10651__significand;
        __Vfunc_round_pack32__10651__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10652__distance))) {
            vlSelf->__Vfunc_shift_jam27__10652__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10652__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10652__distance))) {
            vlSelf->__Vfunc_shift_jam27__10652__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10652__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10652__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10652__value, (IData)(vlSelf->__Vfunc_shift_jam27__10652__distance)));
            vlSelf->__Vfunc_shift_jam27__10652__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10652__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10652__distance)))));
            vlSelf->__Vfunc_shift_jam27__10652__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10652__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10652__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10652__discarded))));
        }
        __Vfunc_round_pack32__10651__shifted = vlSelf->__Vfunc_shift_jam27__10652__Vfuncout;
    }
    __Vfunc_round_pack32__10651__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10651__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10651__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10651__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10651__rounded)) {
        __Vfunc_round_pack32__10651__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10651__rounded, 1U));
        __Vfunc_round_pack32__10651__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10651__adjusted)));
    }
    __Vfunc_round_pack32__10651__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10651__rounded)) {
        __Vfunc_round_pack32__10651__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10651__adjusted)));
    }
    __Vfunc_round_pack32__10651__Vfuncout = (((0U == __Vfunc_round_pack32__10651__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10651__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10651__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10651__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10651__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10651__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10651__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10651__Vfuncout;
    __Vfunc_round_pack32__10639__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10639__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10639__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10639__adjusted = __Vfunc_round_pack32__10639__exponent;
    __Vfunc_round_pack32__10639__shifted = __Vfunc_round_pack32__10639__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10639__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10640__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10639__exponent)));
        vlSelf->__Vfunc_shift_jam27__10640__value = __Vfunc_round_pack32__10639__significand;
        __Vfunc_round_pack32__10639__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10640__distance))) {
            vlSelf->__Vfunc_shift_jam27__10640__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10640__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10640__distance))) {
            vlSelf->__Vfunc_shift_jam27__10640__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10640__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10640__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10640__value, (IData)(vlSelf->__Vfunc_shift_jam27__10640__distance)));
            vlSelf->__Vfunc_shift_jam27__10640__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10640__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10640__distance)))));
            vlSelf->__Vfunc_shift_jam27__10640__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10640__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10640__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10640__discarded))));
        }
        __Vfunc_round_pack32__10639__shifted = vlSelf->__Vfunc_shift_jam27__10640__Vfuncout;
    }
    __Vfunc_round_pack32__10639__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10639__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10639__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10639__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10639__rounded)) {
        __Vfunc_round_pack32__10639__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10639__rounded, 1U));
        __Vfunc_round_pack32__10639__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10639__adjusted)));
    }
    __Vfunc_round_pack32__10639__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10639__rounded)) {
        __Vfunc_round_pack32__10639__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10639__adjusted)));
    }
    __Vfunc_round_pack32__10639__Vfuncout = (((0U == __Vfunc_round_pack32__10639__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10639__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10639__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10639__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10639__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10639__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10639__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10639__Vfuncout;
    __Vfunc_round_pack32__10627__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10627__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10627__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10627__adjusted = __Vfunc_round_pack32__10627__exponent;
    __Vfunc_round_pack32__10627__shifted = __Vfunc_round_pack32__10627__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10627__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10628__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10627__exponent)));
        vlSelf->__Vfunc_shift_jam27__10628__value = __Vfunc_round_pack32__10627__significand;
        __Vfunc_round_pack32__10627__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10628__distance))) {
            vlSelf->__Vfunc_shift_jam27__10628__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10628__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10628__distance))) {
            vlSelf->__Vfunc_shift_jam27__10628__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10628__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10628__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10628__value, (IData)(vlSelf->__Vfunc_shift_jam27__10628__distance)));
            vlSelf->__Vfunc_shift_jam27__10628__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10628__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10628__distance)))));
            vlSelf->__Vfunc_shift_jam27__10628__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10628__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10628__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10628__discarded))));
        }
        __Vfunc_round_pack32__10627__shifted = vlSelf->__Vfunc_shift_jam27__10628__Vfuncout;
    }
    __Vfunc_round_pack32__10627__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10627__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10627__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10627__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10627__rounded)) {
        __Vfunc_round_pack32__10627__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10627__rounded, 1U));
        __Vfunc_round_pack32__10627__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10627__adjusted)));
    }
    __Vfunc_round_pack32__10627__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10627__rounded)) {
        __Vfunc_round_pack32__10627__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10627__adjusted)));
    }
    __Vfunc_round_pack32__10627__Vfuncout = (((0U == __Vfunc_round_pack32__10627__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10627__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10627__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10627__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10627__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10627__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10627__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10627__Vfuncout;
    __Vfunc_round_pack32__10615__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10615__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10615__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10615__adjusted = __Vfunc_round_pack32__10615__exponent;
    __Vfunc_round_pack32__10615__shifted = __Vfunc_round_pack32__10615__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10615__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10616__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10615__exponent)));
        vlSelf->__Vfunc_shift_jam27__10616__value = __Vfunc_round_pack32__10615__significand;
        __Vfunc_round_pack32__10615__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10616__distance))) {
            vlSelf->__Vfunc_shift_jam27__10616__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10616__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10616__distance))) {
            vlSelf->__Vfunc_shift_jam27__10616__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10616__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10616__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10616__value, (IData)(vlSelf->__Vfunc_shift_jam27__10616__distance)));
            vlSelf->__Vfunc_shift_jam27__10616__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10616__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10616__distance)))));
            vlSelf->__Vfunc_shift_jam27__10616__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10616__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10616__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10616__discarded))));
        }
        __Vfunc_round_pack32__10615__shifted = vlSelf->__Vfunc_shift_jam27__10616__Vfuncout;
    }
    __Vfunc_round_pack32__10615__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10615__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10615__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10615__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10615__rounded)) {
        __Vfunc_round_pack32__10615__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10615__rounded, 1U));
        __Vfunc_round_pack32__10615__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10615__adjusted)));
    }
    __Vfunc_round_pack32__10615__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10615__rounded)) {
        __Vfunc_round_pack32__10615__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10615__adjusted)));
    }
    __Vfunc_round_pack32__10615__Vfuncout = (((0U == __Vfunc_round_pack32__10615__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10615__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10615__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10615__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10615__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10615__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10615__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10615__Vfuncout;
    __Vfunc_round_pack32__10603__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10603__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10603__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10603__adjusted = __Vfunc_round_pack32__10603__exponent;
    __Vfunc_round_pack32__10603__shifted = __Vfunc_round_pack32__10603__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10603__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10604__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10603__exponent)));
        vlSelf->__Vfunc_shift_jam27__10604__value = __Vfunc_round_pack32__10603__significand;
        __Vfunc_round_pack32__10603__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10604__distance))) {
            vlSelf->__Vfunc_shift_jam27__10604__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10604__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10604__distance))) {
            vlSelf->__Vfunc_shift_jam27__10604__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10604__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10604__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10604__value, (IData)(vlSelf->__Vfunc_shift_jam27__10604__distance)));
            vlSelf->__Vfunc_shift_jam27__10604__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10604__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10604__distance)))));
            vlSelf->__Vfunc_shift_jam27__10604__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10604__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10604__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10604__discarded))));
        }
        __Vfunc_round_pack32__10603__shifted = vlSelf->__Vfunc_shift_jam27__10604__Vfuncout;
    }
    __Vfunc_round_pack32__10603__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10603__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10603__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10603__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10603__rounded)) {
        __Vfunc_round_pack32__10603__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10603__rounded, 1U));
        __Vfunc_round_pack32__10603__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10603__adjusted)));
    }
    __Vfunc_round_pack32__10603__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10603__rounded)) {
        __Vfunc_round_pack32__10603__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10603__adjusted)));
    }
    __Vfunc_round_pack32__10603__Vfuncout = (((0U == __Vfunc_round_pack32__10603__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10603__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10603__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10603__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10603__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10603__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10603__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10603__Vfuncout;
    __Vfunc_round_pack32__10591__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10591__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10591__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10591__adjusted = __Vfunc_round_pack32__10591__exponent;
    __Vfunc_round_pack32__10591__shifted = __Vfunc_round_pack32__10591__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10591__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10592__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10591__exponent)));
        vlSelf->__Vfunc_shift_jam27__10592__value = __Vfunc_round_pack32__10591__significand;
        __Vfunc_round_pack32__10591__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10592__distance))) {
            vlSelf->__Vfunc_shift_jam27__10592__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10592__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10592__distance))) {
            vlSelf->__Vfunc_shift_jam27__10592__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10592__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10592__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10592__value, (IData)(vlSelf->__Vfunc_shift_jam27__10592__distance)));
            vlSelf->__Vfunc_shift_jam27__10592__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10592__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10592__distance)))));
            vlSelf->__Vfunc_shift_jam27__10592__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10592__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10592__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10592__discarded))));
        }
        __Vfunc_round_pack32__10591__shifted = vlSelf->__Vfunc_shift_jam27__10592__Vfuncout;
    }
    __Vfunc_round_pack32__10591__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10591__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10591__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10591__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10591__rounded)) {
        __Vfunc_round_pack32__10591__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10591__rounded, 1U));
        __Vfunc_round_pack32__10591__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10591__adjusted)));
    }
    __Vfunc_round_pack32__10591__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10591__rounded)) {
        __Vfunc_round_pack32__10591__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10591__adjusted)));
    }
    __Vfunc_round_pack32__10591__Vfuncout = (((0U == __Vfunc_round_pack32__10591__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10591__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10591__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10591__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10591__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10591__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10591__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10591__Vfuncout;
    __Vfunc_round_pack32__10579__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10579__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10579__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10579__adjusted = __Vfunc_round_pack32__10579__exponent;
    __Vfunc_round_pack32__10579__shifted = __Vfunc_round_pack32__10579__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10579__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10580__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10579__exponent)));
        vlSelf->__Vfunc_shift_jam27__10580__value = __Vfunc_round_pack32__10579__significand;
        __Vfunc_round_pack32__10579__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10580__distance))) {
            vlSelf->__Vfunc_shift_jam27__10580__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10580__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10580__distance))) {
            vlSelf->__Vfunc_shift_jam27__10580__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10580__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10580__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10580__value, (IData)(vlSelf->__Vfunc_shift_jam27__10580__distance)));
            vlSelf->__Vfunc_shift_jam27__10580__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10580__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10580__distance)))));
            vlSelf->__Vfunc_shift_jam27__10580__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10580__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10580__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10580__discarded))));
        }
        __Vfunc_round_pack32__10579__shifted = vlSelf->__Vfunc_shift_jam27__10580__Vfuncout;
    }
    __Vfunc_round_pack32__10579__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10579__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10579__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10579__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10579__rounded)) {
        __Vfunc_round_pack32__10579__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10579__rounded, 1U));
        __Vfunc_round_pack32__10579__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10579__adjusted)));
    }
    __Vfunc_round_pack32__10579__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10579__rounded)) {
        __Vfunc_round_pack32__10579__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10579__adjusted)));
    }
    __Vfunc_round_pack32__10579__Vfuncout = (((0U == __Vfunc_round_pack32__10579__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10579__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10579__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10579__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10579__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10579__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10579__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10579__Vfuncout;
    __Vfunc_round_pack32__10567__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10567__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10567__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10567__adjusted = __Vfunc_round_pack32__10567__exponent;
    __Vfunc_round_pack32__10567__shifted = __Vfunc_round_pack32__10567__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10567__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10568__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10567__exponent)));
        vlSelf->__Vfunc_shift_jam27__10568__value = __Vfunc_round_pack32__10567__significand;
        __Vfunc_round_pack32__10567__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10568__distance))) {
            vlSelf->__Vfunc_shift_jam27__10568__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10568__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10568__distance))) {
            vlSelf->__Vfunc_shift_jam27__10568__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10568__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10568__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10568__value, (IData)(vlSelf->__Vfunc_shift_jam27__10568__distance)));
            vlSelf->__Vfunc_shift_jam27__10568__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10568__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10568__distance)))));
            vlSelf->__Vfunc_shift_jam27__10568__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10568__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10568__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10568__discarded))));
        }
        __Vfunc_round_pack32__10567__shifted = vlSelf->__Vfunc_shift_jam27__10568__Vfuncout;
    }
    __Vfunc_round_pack32__10567__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10567__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10567__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10567__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10567__rounded)) {
        __Vfunc_round_pack32__10567__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10567__rounded, 1U));
        __Vfunc_round_pack32__10567__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10567__adjusted)));
    }
    __Vfunc_round_pack32__10567__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10567__rounded)) {
        __Vfunc_round_pack32__10567__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10567__adjusted)));
    }
    __Vfunc_round_pack32__10567__Vfuncout = (((0U == __Vfunc_round_pack32__10567__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10567__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10567__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10567__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10567__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10567__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10567__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10567__Vfuncout;
    __Vfunc_round_pack32__10555__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10555__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10555__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10555__adjusted = __Vfunc_round_pack32__10555__exponent;
    __Vfunc_round_pack32__10555__shifted = __Vfunc_round_pack32__10555__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10555__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10556__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10555__exponent)));
        vlSelf->__Vfunc_shift_jam27__10556__value = __Vfunc_round_pack32__10555__significand;
        __Vfunc_round_pack32__10555__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10556__distance))) {
            vlSelf->__Vfunc_shift_jam27__10556__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10556__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10556__distance))) {
            vlSelf->__Vfunc_shift_jam27__10556__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10556__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10556__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10556__value, (IData)(vlSelf->__Vfunc_shift_jam27__10556__distance)));
            vlSelf->__Vfunc_shift_jam27__10556__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10556__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10556__distance)))));
            vlSelf->__Vfunc_shift_jam27__10556__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10556__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10556__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10556__discarded))));
        }
        __Vfunc_round_pack32__10555__shifted = vlSelf->__Vfunc_shift_jam27__10556__Vfuncout;
    }
    __Vfunc_round_pack32__10555__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10555__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10555__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10555__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10555__rounded)) {
        __Vfunc_round_pack32__10555__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10555__rounded, 1U));
        __Vfunc_round_pack32__10555__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10555__adjusted)));
    }
    __Vfunc_round_pack32__10555__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10555__rounded)) {
        __Vfunc_round_pack32__10555__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10555__adjusted)));
    }
    __Vfunc_round_pack32__10555__Vfuncout = (((0U == __Vfunc_round_pack32__10555__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10555__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10555__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10555__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10555__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10555__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10555__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10555__Vfuncout;
    __Vfunc_round_pack32__10543__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10543__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10543__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10543__adjusted = __Vfunc_round_pack32__10543__exponent;
    __Vfunc_round_pack32__10543__shifted = __Vfunc_round_pack32__10543__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10543__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10544__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10543__exponent)));
        vlSelf->__Vfunc_shift_jam27__10544__value = __Vfunc_round_pack32__10543__significand;
        __Vfunc_round_pack32__10543__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10544__distance))) {
            vlSelf->__Vfunc_shift_jam27__10544__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10544__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10544__distance))) {
            vlSelf->__Vfunc_shift_jam27__10544__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10544__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10544__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10544__value, (IData)(vlSelf->__Vfunc_shift_jam27__10544__distance)));
            vlSelf->__Vfunc_shift_jam27__10544__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10544__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10544__distance)))));
            vlSelf->__Vfunc_shift_jam27__10544__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10544__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10544__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10544__discarded))));
        }
        __Vfunc_round_pack32__10543__shifted = vlSelf->__Vfunc_shift_jam27__10544__Vfuncout;
    }
    __Vfunc_round_pack32__10543__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10543__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10543__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10543__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10543__rounded)) {
        __Vfunc_round_pack32__10543__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10543__rounded, 1U));
        __Vfunc_round_pack32__10543__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10543__adjusted)));
    }
    __Vfunc_round_pack32__10543__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10543__rounded)) {
        __Vfunc_round_pack32__10543__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10543__adjusted)));
    }
    __Vfunc_round_pack32__10543__Vfuncout = (((0U == __Vfunc_round_pack32__10543__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10543__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10543__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10543__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10543__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10543__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10543__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10543__Vfuncout;
    __Vfunc_round_pack32__10531__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10531__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10531__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10531__adjusted = __Vfunc_round_pack32__10531__exponent;
    __Vfunc_round_pack32__10531__shifted = __Vfunc_round_pack32__10531__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10531__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10532__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10531__exponent)));
        vlSelf->__Vfunc_shift_jam27__10532__value = __Vfunc_round_pack32__10531__significand;
        __Vfunc_round_pack32__10531__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10532__distance))) {
            vlSelf->__Vfunc_shift_jam27__10532__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10532__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10532__distance))) {
            vlSelf->__Vfunc_shift_jam27__10532__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10532__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10532__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10532__value, (IData)(vlSelf->__Vfunc_shift_jam27__10532__distance)));
            vlSelf->__Vfunc_shift_jam27__10532__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10532__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10532__distance)))));
            vlSelf->__Vfunc_shift_jam27__10532__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10532__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10532__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10532__discarded))));
        }
        __Vfunc_round_pack32__10531__shifted = vlSelf->__Vfunc_shift_jam27__10532__Vfuncout;
    }
    __Vfunc_round_pack32__10531__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10531__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10531__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10531__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10531__rounded)) {
        __Vfunc_round_pack32__10531__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10531__rounded, 1U));
        __Vfunc_round_pack32__10531__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10531__adjusted)));
    }
    __Vfunc_round_pack32__10531__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10531__rounded)) {
        __Vfunc_round_pack32__10531__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10531__adjusted)));
    }
    __Vfunc_round_pack32__10531__Vfuncout = (((0U == __Vfunc_round_pack32__10531__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10531__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10531__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10531__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10531__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10531__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10531__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10531__Vfuncout;
    __Vfunc_round_pack32__10519__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10519__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10519__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10519__adjusted = __Vfunc_round_pack32__10519__exponent;
    __Vfunc_round_pack32__10519__shifted = __Vfunc_round_pack32__10519__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10519__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10520__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10519__exponent)));
        vlSelf->__Vfunc_shift_jam27__10520__value = __Vfunc_round_pack32__10519__significand;
        __Vfunc_round_pack32__10519__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10520__distance))) {
            vlSelf->__Vfunc_shift_jam27__10520__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10520__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10520__distance))) {
            vlSelf->__Vfunc_shift_jam27__10520__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10520__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10520__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10520__value, (IData)(vlSelf->__Vfunc_shift_jam27__10520__distance)));
            vlSelf->__Vfunc_shift_jam27__10520__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10520__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10520__distance)))));
            vlSelf->__Vfunc_shift_jam27__10520__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10520__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10520__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10520__discarded))));
        }
        __Vfunc_round_pack32__10519__shifted = vlSelf->__Vfunc_shift_jam27__10520__Vfuncout;
    }
    __Vfunc_round_pack32__10519__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10519__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10519__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10519__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10519__rounded)) {
        __Vfunc_round_pack32__10519__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10519__rounded, 1U));
        __Vfunc_round_pack32__10519__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10519__adjusted)));
    }
    __Vfunc_round_pack32__10519__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10519__rounded)) {
        __Vfunc_round_pack32__10519__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10519__adjusted)));
    }
    __Vfunc_round_pack32__10519__Vfuncout = (((0U == __Vfunc_round_pack32__10519__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10519__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10519__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10519__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10519__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10519__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10519__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10519__Vfuncout;
    __Vfunc_round_pack32__10507__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10507__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10507__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10507__adjusted = __Vfunc_round_pack32__10507__exponent;
    __Vfunc_round_pack32__10507__shifted = __Vfunc_round_pack32__10507__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10507__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10508__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10507__exponent)));
        vlSelf->__Vfunc_shift_jam27__10508__value = __Vfunc_round_pack32__10507__significand;
        __Vfunc_round_pack32__10507__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10508__distance))) {
            vlSelf->__Vfunc_shift_jam27__10508__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10508__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10508__distance))) {
            vlSelf->__Vfunc_shift_jam27__10508__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10508__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10508__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10508__value, (IData)(vlSelf->__Vfunc_shift_jam27__10508__distance)));
            vlSelf->__Vfunc_shift_jam27__10508__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10508__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10508__distance)))));
            vlSelf->__Vfunc_shift_jam27__10508__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10508__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10508__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10508__discarded))));
        }
        __Vfunc_round_pack32__10507__shifted = vlSelf->__Vfunc_shift_jam27__10508__Vfuncout;
    }
    __Vfunc_round_pack32__10507__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10507__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10507__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10507__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10507__rounded)) {
        __Vfunc_round_pack32__10507__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10507__rounded, 1U));
        __Vfunc_round_pack32__10507__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10507__adjusted)));
    }
    __Vfunc_round_pack32__10507__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10507__rounded)) {
        __Vfunc_round_pack32__10507__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10507__adjusted)));
    }
    __Vfunc_round_pack32__10507__Vfuncout = (((0U == __Vfunc_round_pack32__10507__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10507__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10507__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10507__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10507__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10507__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10507__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10507__Vfuncout;
    __Vfunc_round_pack32__10495__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10495__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10495__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10495__adjusted = __Vfunc_round_pack32__10495__exponent;
    __Vfunc_round_pack32__10495__shifted = __Vfunc_round_pack32__10495__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10495__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10496__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10495__exponent)));
        vlSelf->__Vfunc_shift_jam27__10496__value = __Vfunc_round_pack32__10495__significand;
        __Vfunc_round_pack32__10495__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10496__distance))) {
            vlSelf->__Vfunc_shift_jam27__10496__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10496__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10496__distance))) {
            vlSelf->__Vfunc_shift_jam27__10496__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10496__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10496__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10496__value, (IData)(vlSelf->__Vfunc_shift_jam27__10496__distance)));
            vlSelf->__Vfunc_shift_jam27__10496__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10496__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10496__distance)))));
            vlSelf->__Vfunc_shift_jam27__10496__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10496__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10496__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10496__discarded))));
        }
        __Vfunc_round_pack32__10495__shifted = vlSelf->__Vfunc_shift_jam27__10496__Vfuncout;
    }
    __Vfunc_round_pack32__10495__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10495__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10495__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10495__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10495__rounded)) {
        __Vfunc_round_pack32__10495__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10495__rounded, 1U));
        __Vfunc_round_pack32__10495__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10495__adjusted)));
    }
    __Vfunc_round_pack32__10495__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10495__rounded)) {
        __Vfunc_round_pack32__10495__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10495__adjusted)));
    }
    __Vfunc_round_pack32__10495__Vfuncout = (((0U == __Vfunc_round_pack32__10495__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10495__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10495__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10495__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10495__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10495__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10495__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10495__Vfuncout;
    __Vfunc_round_pack32__10483__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10483__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10483__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10483__adjusted = __Vfunc_round_pack32__10483__exponent;
    __Vfunc_round_pack32__10483__shifted = __Vfunc_round_pack32__10483__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10483__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10484__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10483__exponent)));
        vlSelf->__Vfunc_shift_jam27__10484__value = __Vfunc_round_pack32__10483__significand;
        __Vfunc_round_pack32__10483__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10484__distance))) {
            vlSelf->__Vfunc_shift_jam27__10484__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10484__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10484__distance))) {
            vlSelf->__Vfunc_shift_jam27__10484__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10484__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10484__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10484__value, (IData)(vlSelf->__Vfunc_shift_jam27__10484__distance)));
            vlSelf->__Vfunc_shift_jam27__10484__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10484__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10484__distance)))));
            vlSelf->__Vfunc_shift_jam27__10484__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10484__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10484__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10484__discarded))));
        }
        __Vfunc_round_pack32__10483__shifted = vlSelf->__Vfunc_shift_jam27__10484__Vfuncout;
    }
    __Vfunc_round_pack32__10483__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10483__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10483__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10483__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10483__rounded)) {
        __Vfunc_round_pack32__10483__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10483__rounded, 1U));
        __Vfunc_round_pack32__10483__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10483__adjusted)));
    }
    __Vfunc_round_pack32__10483__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10483__rounded)) {
        __Vfunc_round_pack32__10483__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10483__adjusted)));
    }
    __Vfunc_round_pack32__10483__Vfuncout = (((0U == __Vfunc_round_pack32__10483__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10483__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10483__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10483__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10483__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10483__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10483__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10483__Vfuncout;
    __Vfunc_round_pack32__10471__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10471__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10471__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10471__adjusted = __Vfunc_round_pack32__10471__exponent;
    __Vfunc_round_pack32__10471__shifted = __Vfunc_round_pack32__10471__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10471__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10472__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10471__exponent)));
        vlSelf->__Vfunc_shift_jam27__10472__value = __Vfunc_round_pack32__10471__significand;
        __Vfunc_round_pack32__10471__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10472__distance))) {
            vlSelf->__Vfunc_shift_jam27__10472__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10472__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10472__distance))) {
            vlSelf->__Vfunc_shift_jam27__10472__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10472__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10472__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10472__value, (IData)(vlSelf->__Vfunc_shift_jam27__10472__distance)));
            vlSelf->__Vfunc_shift_jam27__10472__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10472__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10472__distance)))));
            vlSelf->__Vfunc_shift_jam27__10472__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10472__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10472__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10472__discarded))));
        }
        __Vfunc_round_pack32__10471__shifted = vlSelf->__Vfunc_shift_jam27__10472__Vfuncout;
    }
    __Vfunc_round_pack32__10471__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10471__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10471__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10471__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10471__rounded)) {
        __Vfunc_round_pack32__10471__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10471__rounded, 1U));
        __Vfunc_round_pack32__10471__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10471__adjusted)));
    }
    __Vfunc_round_pack32__10471__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10471__rounded)) {
        __Vfunc_round_pack32__10471__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10471__adjusted)));
    }
    __Vfunc_round_pack32__10471__Vfuncout = (((0U == __Vfunc_round_pack32__10471__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10471__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10471__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10471__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10471__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10471__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10471__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10471__Vfuncout;
    __Vfunc_round_pack32__10459__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10459__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10459__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10459__adjusted = __Vfunc_round_pack32__10459__exponent;
    __Vfunc_round_pack32__10459__shifted = __Vfunc_round_pack32__10459__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10459__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10460__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10459__exponent)));
        vlSelf->__Vfunc_shift_jam27__10460__value = __Vfunc_round_pack32__10459__significand;
        __Vfunc_round_pack32__10459__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10460__distance))) {
            vlSelf->__Vfunc_shift_jam27__10460__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10460__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10460__distance))) {
            vlSelf->__Vfunc_shift_jam27__10460__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10460__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10460__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10460__value, (IData)(vlSelf->__Vfunc_shift_jam27__10460__distance)));
            vlSelf->__Vfunc_shift_jam27__10460__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10460__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10460__distance)))));
            vlSelf->__Vfunc_shift_jam27__10460__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10460__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10460__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10460__discarded))));
        }
        __Vfunc_round_pack32__10459__shifted = vlSelf->__Vfunc_shift_jam27__10460__Vfuncout;
    }
    __Vfunc_round_pack32__10459__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10459__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10459__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10459__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10459__rounded)) {
        __Vfunc_round_pack32__10459__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10459__rounded, 1U));
        __Vfunc_round_pack32__10459__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10459__adjusted)));
    }
    __Vfunc_round_pack32__10459__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10459__rounded)) {
        __Vfunc_round_pack32__10459__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10459__adjusted)));
    }
    __Vfunc_round_pack32__10459__Vfuncout = (((0U == __Vfunc_round_pack32__10459__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10459__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10459__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10459__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10459__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10459__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10459__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10459__Vfuncout;
    __Vfunc_round_pack32__10447__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10447__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10447__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10447__adjusted = __Vfunc_round_pack32__10447__exponent;
    __Vfunc_round_pack32__10447__shifted = __Vfunc_round_pack32__10447__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10447__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10448__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10447__exponent)));
        vlSelf->__Vfunc_shift_jam27__10448__value = __Vfunc_round_pack32__10447__significand;
        __Vfunc_round_pack32__10447__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10448__distance))) {
            vlSelf->__Vfunc_shift_jam27__10448__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10448__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10448__distance))) {
            vlSelf->__Vfunc_shift_jam27__10448__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10448__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10448__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10448__value, (IData)(vlSelf->__Vfunc_shift_jam27__10448__distance)));
            vlSelf->__Vfunc_shift_jam27__10448__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10448__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10448__distance)))));
            vlSelf->__Vfunc_shift_jam27__10448__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10448__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10448__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10448__discarded))));
        }
        __Vfunc_round_pack32__10447__shifted = vlSelf->__Vfunc_shift_jam27__10448__Vfuncout;
    }
    __Vfunc_round_pack32__10447__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10447__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10447__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10447__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10447__rounded)) {
        __Vfunc_round_pack32__10447__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10447__rounded, 1U));
        __Vfunc_round_pack32__10447__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10447__adjusted)));
    }
    __Vfunc_round_pack32__10447__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10447__rounded)) {
        __Vfunc_round_pack32__10447__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10447__adjusted)));
    }
    __Vfunc_round_pack32__10447__Vfuncout = (((0U == __Vfunc_round_pack32__10447__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10447__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10447__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10447__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10447__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10447__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10447__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10447__Vfuncout;
    __Vfunc_round_pack32__10435__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__significand3;
    __Vfunc_round_pack32__10435__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__exponent3;
    __Vfunc_round_pack32__10435__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__negative) 
                                                   >> 2U));
    __Vfunc_round_pack32__10435__adjusted = __Vfunc_round_pack32__10435__exponent;
    __Vfunc_round_pack32__10435__shifted = __Vfunc_round_pack32__10435__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10435__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10436__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10435__exponent)));
        vlSelf->__Vfunc_shift_jam27__10436__value = __Vfunc_round_pack32__10435__significand;
        __Vfunc_round_pack32__10435__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10436__distance))) {
            vlSelf->__Vfunc_shift_jam27__10436__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10436__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10436__distance))) {
            vlSelf->__Vfunc_shift_jam27__10436__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10436__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10436__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10436__value, (IData)(vlSelf->__Vfunc_shift_jam27__10436__distance)));
            vlSelf->__Vfunc_shift_jam27__10436__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10436__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10436__distance)))));
            vlSelf->__Vfunc_shift_jam27__10436__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10436__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10436__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10436__discarded))));
        }
        __Vfunc_round_pack32__10435__shifted = vlSelf->__Vfunc_shift_jam27__10436__Vfuncout;
    }
    __Vfunc_round_pack32__10435__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10435__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10435__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10435__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10435__rounded)) {
        __Vfunc_round_pack32__10435__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10435__rounded, 1U));
        __Vfunc_round_pack32__10435__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10435__adjusted)));
    }
    __Vfunc_round_pack32__10435__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10435__rounded)) {
        __Vfunc_round_pack32__10435__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10435__adjusted)));
    }
    __Vfunc_round_pack32__10435__Vfuncout = (((0U == __Vfunc_round_pack32__10435__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10435__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10435__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10435__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10435__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10435__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10435__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__gamma_scale__DOT__packed4 
        = __Vfunc_round_pack32__10435__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffffffeU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | ((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                         && (1U & (
                                                   vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                   | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__unit_rounded 
                                                      >> 0x10U))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffffffdU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 1U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 1U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffffffbU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 2U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 2U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffffff7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 3U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 3U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffffffefU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 4U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 4U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffffffdfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 5U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 5U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffffffbfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 6U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 6U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffffff7fU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 7U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 7U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffffeffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 8U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 8U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffffdffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 9U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 9U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffffbffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0xaU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xaU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffff7ffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0xbU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xbU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffffefffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0xcU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xcU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffffdfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0xdU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xdU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffffbfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0xeU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xeU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffff7fffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0xfU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xfU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffeffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x10U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffdffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x11U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x11U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfffbffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x12U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x12U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfff7ffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x13U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x13U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffefffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x14U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x14U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffdfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x15U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x15U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xffbfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x16U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x16U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xff7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x17U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x17U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfeffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x18U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x18U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfdffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x19U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x19U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xfbffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x1aU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1aU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xf7ffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x1bU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1bU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xefffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x1cU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1cU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xdfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x1dU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1dU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0xbfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                                >> 0x1eU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1eU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U] 
        = ((0x7fffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[0U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[0U] 
                                               >> 0x1fU) 
                                              | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__unit_rounded 
                                                 >> 0x10U)))) 
              << 0x1fU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffffffeU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | ((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                         && (1U & (
                                                   vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                   | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__unit_rounded 
                                                      >> 0x10U))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffffffdU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 1U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 1U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffffffbU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 2U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 2U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffffff7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 3U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 3U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffffffefU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 4U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 4U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffffffdfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 5U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 5U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffffffbfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 6U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 6U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffffff7fU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 7U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 7U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffffeffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 8U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 8U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffffdffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 9U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 9U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffffbffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0xaU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xaU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffff7ffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0xbU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xbU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffffefffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0xcU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xcU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffffdfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0xdU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xdU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffffbfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0xeU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xeU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffff7fffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0xfU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xfU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffeffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x10U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffdffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x11U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x11U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfffbffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x12U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x12U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfff7ffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x13U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x13U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffefffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x14U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x14U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffdfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x15U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x15U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xffbfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x16U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x16U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xff7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x17U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x17U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfeffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x18U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x18U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfdffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x19U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x19U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xfbffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x1aU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1aU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xf7ffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x1bU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1bU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xefffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x1cU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1cU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xdfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x1dU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1dU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0xbfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                                >> 0x1eU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1eU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U] 
        = ((0x7fffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[1U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[1U] 
                                               >> 0x1fU) 
                                              | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__unit_rounded 
                                                 >> 0x10U)))) 
              << 0x1fU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffffffeU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | ((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                         && (1U & (
                                                   vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                   | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__unit_rounded 
                                                      >> 0x10U))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffffffdU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 1U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 1U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffffffbU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 2U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 2U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffffff7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 3U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 3U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffffffefU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 4U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 4U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffffffdfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 5U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 5U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffffffbfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 6U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 6U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffffff7fU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 7U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 7U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffffeffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 8U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 8U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffffdffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 9U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 9U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffffbffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0xaU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xaU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffff7ffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0xbU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xbU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffffefffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0xcU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xcU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffffdfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0xdU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xdU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffffbfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0xeU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xeU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffff7fffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0xfU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xfU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffeffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x10U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffdffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x11U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x11U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfffbffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x12U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x12U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfff7ffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x13U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x13U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffefffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x14U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x14U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffdfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x15U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x15U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xffbfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x16U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x16U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xff7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x17U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x17U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfeffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x18U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x18U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfdffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x19U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x19U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xfbffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x1aU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1aU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xf7ffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x1bU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1bU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xefffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x1cU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1cU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xdfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x1dU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1dU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0xbfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                                >> 0x1eU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1eU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U] 
        = ((0x7fffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[2U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[2U] 
                                               >> 0x1fU) 
                                              | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__unit_rounded 
                                                 >> 0x10U)))) 
              << 0x1fU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffffffeU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | ((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                         && (1U & (
                                                   vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                   | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__unit_rounded 
                                                      >> 0x10U))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffffffdU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 1U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 1U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffffffbU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 2U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 2U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffffff7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 3U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 3U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffffffefU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 4U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 4U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffffffdfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 5U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 5U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffffffbfU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 6U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 6U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffffff7fU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 7U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 7U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffffeffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 8U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 8U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffffdffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 9U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 9U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffffbffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0xaU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xaU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffff7ffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0xbU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xbU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffffefffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0xcU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xcU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffffdfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0xdU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xdU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffffbfffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0xeU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xeU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffff7fffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0xfU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0xfU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffeffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x10U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffdffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x11U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x11U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfffbffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x12U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x12U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfff7ffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x13U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x13U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffefffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x14U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x14U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffdfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x15U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x15U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xffbfffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x16U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x16U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xff7fffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x17U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x17U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfeffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x18U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x18U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfdffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x19U) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x19U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xfbffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x1aU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1aU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xf7ffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x1bU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1bU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xefffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x1cU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1cU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xdfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x1dU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1dU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0xbfffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && (1U & 
                                              ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                                >> 0x1eU) 
                                               | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__unit_rounded 
                                                  >> 0x10U))))) 
              << 0x1eU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U] 
        = ((0x7fffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_failed[3U]) 
           | (((IData)(vlSelf->rst_n) && ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort))) 
                                          && ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__scale_failed[3U] 
                                               >> 0x1fU) 
                                              | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__unit_rounded 
                                                 >> 0x10U)))) 
              << 0x1fU));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__0__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__1__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[1U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[1U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__2__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[1U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[1U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__3__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[2U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[2U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__4__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[2U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[2U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__5__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[3U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[3U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__6__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[3U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[3U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__7__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[4U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[4U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__8__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[4U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[4U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__9__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[5U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[5U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__10__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[5U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[5U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__11__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[6U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[6U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__12__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[6U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[6U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__13__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[7U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[7U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__14__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[7U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[7U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__15__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[8U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[8U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__16__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[8U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[8U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__17__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[9U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[9U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__18__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[9U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[9U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__19__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xaU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xaU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__20__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xaU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xaU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__21__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xbU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xbU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__22__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xbU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xbU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__23__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xcU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xcU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__24__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xcU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xcU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__25__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xdU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xdU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__26__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xdU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xdU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__27__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xeU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xeU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__28__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xeU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xeU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__29__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xfU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xfU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__30__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xfU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0xfU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__31__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x10U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x10U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__32__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x10U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x10U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__33__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x11U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x11U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__34__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x11U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x11U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__35__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x12U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x12U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__36__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x12U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x12U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__37__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x13U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x13U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__38__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x13U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x13U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__39__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x14U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x14U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__40__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x14U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x14U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__41__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x15U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x15U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__42__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x15U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x15U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__43__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x16U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x16U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__44__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x16U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x16U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__45__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x17U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x17U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__46__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x17U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x17U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__47__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x18U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x18U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__48__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x18U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x18U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__49__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x19U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x19U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__50__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x19U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x19U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__51__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1aU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1aU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__52__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1aU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1aU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__53__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1bU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1bU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__54__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1bU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1bU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__55__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1cU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1cU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__56__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1cU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1cU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__57__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1dU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1dU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__58__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1dU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1dU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__59__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1eU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1eU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__60__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1eU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1eU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__61__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1fU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1fU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__62__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1fU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x1fU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__63__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x20U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x20U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__64__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x20U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x20U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__65__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x21U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x21U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__66__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x21U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x21U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__67__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x22U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x22U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__68__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x22U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x22U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__69__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x23U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x23U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__70__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x23U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x23U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__71__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x24U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x24U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__72__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x24U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x24U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__73__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x25U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x25U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__74__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x25U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x25U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__75__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x26U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x26U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__76__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x26U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x26U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__77__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x27U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x27U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__78__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x27U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x27U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__79__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x28U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x28U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__80__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x28U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x28U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__81__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x29U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x29U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__82__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x29U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x29U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__83__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2aU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2aU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__84__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2aU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2aU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__85__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2bU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2bU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__86__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2bU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2bU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__87__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2cU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2cU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__88__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2cU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2cU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__89__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2dU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2dU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__90__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2dU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2dU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__91__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2eU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2eU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__92__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2eU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2eU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__93__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2fU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2fU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__94__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2fU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x2fU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__95__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x30U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x30U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__96__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x30U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x30U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__97__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x31U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x31U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__98__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x31U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x31U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__99__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x32U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x32U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__100__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x32U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x32U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__101__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x33U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x33U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__102__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x33U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x33U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__103__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x34U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x34U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__104__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x34U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x34U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__105__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x35U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x35U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__106__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x35U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x35U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__107__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x36U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x36U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__108__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x36U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x36U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__109__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x37U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x37U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__110__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x37U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x37U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__111__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x38U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x38U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__112__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x38U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x38U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__113__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x39U] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x39U]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__114__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x39U] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x39U]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__115__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3aU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3aU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__116__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3aU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3aU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__117__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3bU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3bU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__118__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3bU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3bU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__119__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3cU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3cU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__120__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3cU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3cU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__121__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3dU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3dU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__122__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3dU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3dU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__123__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3eU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3eU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__124__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3eU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3eU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__125__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3fU] 
        = ((0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3fU]) 
           | ((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                         ? 0U : (0xffffU 
                                                 & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__126__KET____DOT__unit_rounded))
               : 0U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3fU] 
        = ((0xffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__unit_vector[0x3fU]) 
           | (((IData)(vlSelf->rst_n) ? ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)
                                          ? 0U : (0xffffU 
                                                  & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalize__BRA__127__KET____DOT__unit_rounded))
                : 0U) << 0x10U));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__small2)));
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)))) {
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_ready))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__gamma[__Vilp] 
                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_gamma[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__gamma[__Vilp] 
                = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14261__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14261__part 
                            = vlSelf->__Vfunc_leading_zero32__14261__value;
                        vlSelf->__Vfunc_leading_zero32__14261__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14261__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                            vlSelf->__Vfunc_leading_zero32__14261__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14261__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14261__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14261__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14261__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14261__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14261__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14261__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14261__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__14262__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__significand4;
    __Vfunc_round_pack32__14262__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__exponent4;
    __Vfunc_round_pack32__14262__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__negative4;
    __Vfunc_round_pack32__14262__adjusted = __Vfunc_round_pack32__14262__exponent;
    __Vfunc_round_pack32__14262__shifted = __Vfunc_round_pack32__14262__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__14262__exponent))) {
        vlSelf->__Vfunc_shift_jam27__14263__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__14262__exponent)));
        vlSelf->__Vfunc_shift_jam27__14263__value = __Vfunc_round_pack32__14262__significand;
        __Vfunc_round_pack32__14262__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__14263__distance))) {
            vlSelf->__Vfunc_shift_jam27__14263__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__14263__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__14263__distance))) {
            vlSelf->__Vfunc_shift_jam27__14263__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__14263__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__14263__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__14263__value, (IData)(vlSelf->__Vfunc_shift_jam27__14263__distance)));
            vlSelf->__Vfunc_shift_jam27__14263__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__14263__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__14263__distance)))));
            vlSelf->__Vfunc_shift_jam27__14263__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__14263__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__14263__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__14263__discarded))));
        }
        __Vfunc_round_pack32__14262__shifted = vlSelf->__Vfunc_shift_jam27__14263__Vfuncout;
    }
    __Vfunc_round_pack32__14262__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__14262__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__14262__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__14262__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__14262__rounded)) {
        __Vfunc_round_pack32__14262__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__14262__rounded, 1U));
        __Vfunc_round_pack32__14262__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__14262__adjusted)));
    }
    __Vfunc_round_pack32__14262__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__14262__rounded)) {
        __Vfunc_round_pack32__14262__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__14262__adjusted)));
    }
    __Vfunc_round_pack32__14262__Vfuncout = (((0U == __Vfunc_round_pack32__14262__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__14262__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__14262__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__14262__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__14262__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__14262__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__14262__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__rotate_y__DOT__packed5 
        = __Vfunc_round_pack32__14262__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2 = 0ULL;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__significand3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__negative = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__value4 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__error4 = 0U;
        } else {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__negative 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__negative) 
                            << 1U)) | ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x1fU] 
                                        ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine[0x1fU]) 
                                       >> 0x1fU));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__failed 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__failed) 
                            << 1U)) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__pair_failed) 
                                        | ([&]() {
                                __Vfunc_fp32_invalid__14247__value 
                                    = (0xffff0000U 
                                       & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x1fU]);
                                __Vfunc_fp32_invalid__14247__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__14247__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__14247__Vfuncout))) 
                                       | ([&]() {
                            __Vfunc_fp32_invalid__14248__value 
                                = (0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine[0x1fU]);
                            __Vfunc_fp32_invalid__14248__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__14248__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__14248__Vfuncout))));
            if ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent2)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent3 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__value4 = 0U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__error4 = 1U;
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__value4 
                    = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__packed4);
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__error4 = 0U;
            }
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_a1)) 
                                        * (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_b1))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent2 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_a1) 
                             + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_b1)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_a1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_a, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_b1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__raw_b, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_b)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_a1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_hdee58c1a__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_b1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h2328246a__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__shift_b)));
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__mantissa_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__exponent3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__product2 = 0ULL;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__significand3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__negative = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__value4 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xs__DOT__error4 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2 = 0ULL;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__significand3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__negative = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__value4 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__error4 = 0U;
        } else {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__negative 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__negative) 
                            << 1U)) | ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x3fU] 
                                        ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine[0x1fU]) 
                                       >> 0x1fU));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__failed 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__failed) 
                            << 1U)) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__pair_failed) 
                                        | ([&]() {
                                __Vfunc_fp32_invalid__14253__value 
                                    = (0xffff0000U 
                                       & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x3fU]);
                                __Vfunc_fp32_invalid__14253__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__14253__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__14253__Vfuncout))) 
                                       | ([&]() {
                            __Vfunc_fp32_invalid__14254__value 
                                = (0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine[0x1fU]);
                            __Vfunc_fp32_invalid__14254__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__14254__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__14254__Vfuncout))));
            if ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent2)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent3 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__value4 = 0U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__error4 = 1U;
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__value4 
                    = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__packed4);
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__error4 = 0U;
            }
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_a1)) 
                                        * (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_b1))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent2 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_a1) 
                             + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_b1)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_a1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__raw_a, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_b1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_xc__DOT__raw_b, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_b)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_a1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h877ed755__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_b1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h3801e262__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__shift_b)));
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__mantissa_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__exponent3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__product2 = 0ULL;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__significand3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__negative = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__value4 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__63__KET____DOT__mul_yc__DOT__error4 = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14225__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14225__part 
                            = vlSelf->__Vfunc_leading_zero32__14225__value;
                        vlSelf->__Vfunc_leading_zero32__14225__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14225__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                            vlSelf->__Vfunc_leading_zero32__14225__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14225__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14225__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14225__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14225__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14225__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14225__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14225__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14225__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__14226__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__significand4;
    __Vfunc_round_pack32__14226__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__exponent4;
    __Vfunc_round_pack32__14226__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__negative4;
    __Vfunc_round_pack32__14226__adjusted = __Vfunc_round_pack32__14226__exponent;
    __Vfunc_round_pack32__14226__shifted = __Vfunc_round_pack32__14226__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__14226__exponent))) {
        vlSelf->__Vfunc_shift_jam27__14227__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__14226__exponent)));
        vlSelf->__Vfunc_shift_jam27__14227__value = __Vfunc_round_pack32__14226__significand;
        __Vfunc_round_pack32__14226__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__14227__distance))) {
            vlSelf->__Vfunc_shift_jam27__14227__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__14227__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__14227__distance))) {
            vlSelf->__Vfunc_shift_jam27__14227__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__14227__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__14227__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__14227__value, (IData)(vlSelf->__Vfunc_shift_jam27__14227__distance)));
            vlSelf->__Vfunc_shift_jam27__14227__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__14227__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__14227__distance)))));
            vlSelf->__Vfunc_shift_jam27__14227__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__14227__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__14227__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__14227__discarded))));
        }
        __Vfunc_round_pack32__14226__shifted = vlSelf->__Vfunc_shift_jam27__14227__Vfuncout;
    }
    __Vfunc_round_pack32__14226__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__14226__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__14226__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__14226__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__14226__rounded)) {
        __Vfunc_round_pack32__14226__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__14226__rounded, 1U));
        __Vfunc_round_pack32__14226__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__14226__adjusted)));
    }
    __Vfunc_round_pack32__14226__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__14226__rounded)) {
        __Vfunc_round_pack32__14226__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__14226__adjusted)));
    }
    __Vfunc_round_pack32__14226__Vfuncout = (((0U == __Vfunc_round_pack32__14226__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__14226__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__14226__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__14226__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__14226__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__14226__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__14226__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__rotate_y__DOT__packed5 
        = __Vfunc_round_pack32__14226__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2 = 0ULL;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__significand3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__negative = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__value4 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__error4 = 0U;
        } else {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__negative 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__negative) 
                            << 1U)) | (1U & ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x1fU] 
                                              ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine[0x1fU]) 
                                             >> 0xfU)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__failed 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__failed) 
                            << 1U)) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__pair_failed) 
                                        | ([&]() {
                                __Vfunc_fp32_invalid__14211__value 
                                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x1fU] 
                                       << 0x10U);
                                __Vfunc_fp32_invalid__14211__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__14211__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__14211__Vfuncout))) 
                                       | ([&]() {
                            __Vfunc_fp32_invalid__14212__value 
                                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine[0x1fU] 
                                   << 0x10U);
                            __Vfunc_fp32_invalid__14212__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__14212__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__14212__Vfuncout))));
            if ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent2)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent3 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__value4 = 0U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__error4 = 1U;
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__value4 
                    = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__packed4);
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__error4 = 0U;
            }
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_a1)) 
                                        * (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_b1))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent2 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_a1) 
                             + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_b1)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_a1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_a, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_b1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__raw_b, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_b)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_a1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h6e10560b__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_b1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_ha266fd3e__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__shift_b)));
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__mantissa_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__exponent3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__product2 = 0ULL;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__significand3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__negative = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__value4 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xs__DOT__error4 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2 = 0ULL;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__significand3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__negative = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__value4 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__error4 = 0U;
        } else {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__negative 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__negative) 
                            << 1U)) | (1U & ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x3fU] 
                                              ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine[0x1fU]) 
                                             >> 0xfU)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__failed 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__failed) 
                            << 1U)) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__pair_failed) 
                                        | ([&]() {
                                __Vfunc_fp32_invalid__14217__value 
                                    = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x3fU] 
                                       << 0x10U);
                                __Vfunc_fp32_invalid__14217__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__14217__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__14217__Vfuncout))) 
                                       | ([&]() {
                            __Vfunc_fp32_invalid__14218__value 
                                = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine[0x1fU] 
                                   << 0x10U);
                            __Vfunc_fp32_invalid__14218__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__14218__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__14218__Vfuncout))));
            if ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent2)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent3 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__value4 = 0U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__error4 = 1U;
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__value4 
                    = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__packed4);
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__error4 = 0U;
            }
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_a1)) 
                                        * (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_b1))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent2 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_a1) 
                             + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_b1)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_a1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__raw_a, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_b1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_xc__DOT__raw_b, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_b)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_a1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h8d0ed736__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_b1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h0436797a__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__shift_b)));
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__mantissa_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__exponent3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__product2 = 0ULL;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__significand3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__negative = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__value4 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__62__KET____DOT__mul_yc__DOT__error4 = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__14189__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__14189__part 
                            = vlSelf->__Vfunc_leading_zero32__14189__value;
                        vlSelf->__Vfunc_leading_zero32__14189__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__14189__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                            vlSelf->__Vfunc_leading_zero32__14189__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__14189__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__14189__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__14189__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__14189__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__14189__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__14189__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__14189__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__14189__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__14190__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__significand4;
    __Vfunc_round_pack32__14190__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__exponent4;
    __Vfunc_round_pack32__14190__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__negative4;
    __Vfunc_round_pack32__14190__adjusted = __Vfunc_round_pack32__14190__exponent;
    __Vfunc_round_pack32__14190__shifted = __Vfunc_round_pack32__14190__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__14190__exponent))) {
        vlSelf->__Vfunc_shift_jam27__14191__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__14190__exponent)));
        vlSelf->__Vfunc_shift_jam27__14191__value = __Vfunc_round_pack32__14190__significand;
        __Vfunc_round_pack32__14190__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__14191__distance))) {
            vlSelf->__Vfunc_shift_jam27__14191__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__14191__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__14191__distance))) {
            vlSelf->__Vfunc_shift_jam27__14191__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__14191__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__14191__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__14191__value, (IData)(vlSelf->__Vfunc_shift_jam27__14191__distance)));
            vlSelf->__Vfunc_shift_jam27__14191__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__14191__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__14191__distance)))));
            vlSelf->__Vfunc_shift_jam27__14191__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__14191__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__14191__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__14191__discarded))));
        }
        __Vfunc_round_pack32__14190__shifted = vlSelf->__Vfunc_shift_jam27__14191__Vfuncout;
    }
    __Vfunc_round_pack32__14190__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__14190__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__14190__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__14190__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__14190__rounded)) {
        __Vfunc_round_pack32__14190__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__14190__rounded, 1U));
        __Vfunc_round_pack32__14190__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__14190__adjusted)));
    }
    __Vfunc_round_pack32__14190__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__14190__rounded)) {
        __Vfunc_round_pack32__14190__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__14190__adjusted)));
    }
    __Vfunc_round_pack32__14190__Vfuncout = (((0U == __Vfunc_round_pack32__14190__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__14190__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__14190__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__14190__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__14190__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__14190__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__14190__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__rotate_y__DOT__packed5 
        = __Vfunc_round_pack32__14190__Vfuncout;
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2 = 0ULL;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__significand3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__negative = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__value4 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__error4 = 0U;
        } else {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__negative 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__negative) 
                            << 1U)) | ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x1eU] 
                                        ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine[0x1eU]) 
                                       >> 0x1fU));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__failed 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__failed) 
                            << 1U)) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__pair_failed) 
                                        | ([&]() {
                                __Vfunc_fp32_invalid__14175__value 
                                    = (0xffff0000U 
                                       & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x1eU]);
                                __Vfunc_fp32_invalid__14175__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__14175__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__14175__Vfuncout))) 
                                       | ([&]() {
                            __Vfunc_fp32_invalid__14176__value 
                                = (0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sine[0x1eU]);
                            __Vfunc_fp32_invalid__14176__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__14176__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__14176__Vfuncout))));
            if ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent2)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent3 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__value4 = 0U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__error4 = 1U;
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__value4 
                    = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__packed4);
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__error4 = 0U;
            }
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_a1)) 
                                        * (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_b1))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent2 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_a1) 
                             + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_b1)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_a1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_a, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_b1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__raw_b, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_b)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_a1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h9a2fee03__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_b1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h0dde5350__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__shift_b)));
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__mantissa_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__exponent3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__product2 = 0ULL;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__significand3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__negative = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__value4 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xs__DOT__error4 = 0U;
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_a1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_b1 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent2 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2 = 0ULL;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__significand3 = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__negative = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__failed = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__value4 = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__error4 = 0U;
        } else {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__negative 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__negative) 
                            << 1U)) | ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x3eU] 
                                        ^ vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine[0x1eU]) 
                                       >> 0x1fU));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__failed 
                = ((0xeU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__failed) 
                            << 1U)) | (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__pair_failed) 
                                        | ([&]() {
                                __Vfunc_fp32_invalid__14181__value 
                                    = (0xffff0000U 
                                       & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__normalized_head[0x3eU]);
                                __Vfunc_fp32_invalid__14181__Vfuncout 
                                    = (0xffU == (0xffU 
                                                 & (__Vfunc_fp32_invalid__14181__value 
                                                    >> 0x17U)));
                            }(), (IData)(__Vfunc_fp32_invalid__14181__Vfuncout))) 
                                       | ([&]() {
                            __Vfunc_fp32_invalid__14182__value 
                                = (0xffff0000U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__cosine[0x1eU]);
                            __Vfunc_fp32_invalid__14182__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__14182__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__14182__Vfuncout))));
            if ((1U & (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2 
                               >> 0x2fU)))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2 
                                               >> 0x16U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x3fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent3 
                    = (0xfffU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent2)));
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__significand3 
                    = ((0x7fffffeU & ((IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2 
                                               >> 0x15U)) 
                                      << 1U)) | (IData)(
                                                        (0ULL 
                                                         != 
                                                         (0x1fffffULL 
                                                          & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2))));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent3 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent2;
            }
            if ((1U & (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__failed) 
                        >> 2U) | (IData)((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__packed4 
                                          >> 0x20U))))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__value4 = 0U;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__error4 = 1U;
            } else {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__value4 
                    = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__packed4);
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__error4 = 0U;
            }
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2 
                = (0xffffffffffffULL & ((QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_a1)) 
                                        * (QData)((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_b1))));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent2 
                = (0xfffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_a1) 
                             + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_b1)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_a1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__raw_a, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_b1 
                = (0xffffffU & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_xc__DOT__raw_b, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_b)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_a1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h5513e0e4__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_a)));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_b1 
                = (0xfffU & ((IData)(vlSelf->__VdfgTmp_h00c0b2f0__0) 
                             - (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__shift_b)));
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__mantissa_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_a1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent_b1 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent2 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__exponent3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__product2 = 0ULL;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__significand3 = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__negative = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__value4 = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__61__KET____DOT__mul_yc__DOT__error4 = 0U;
    }
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__split_half_rope__BRA__60__KET____DOT__rotate_y__DOT__small2)));
}
