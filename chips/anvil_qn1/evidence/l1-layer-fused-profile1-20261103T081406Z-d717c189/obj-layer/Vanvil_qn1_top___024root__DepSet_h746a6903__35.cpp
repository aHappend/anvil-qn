// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__26(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__26\n"); );
    // Init
    SData/*11:0*/ __Vfunc_round_pack32__9756__exponent;
    __Vfunc_round_pack32__9756__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9756__shifted;
    __Vfunc_round_pack32__9756__shifted = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9762__Vfuncout;
    __Vfunc_round_pack32__9762__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9762__negative;
    __Vfunc_round_pack32__9762__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9762__exponent;
    __Vfunc_round_pack32__9762__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9762__significand;
    __Vfunc_round_pack32__9762__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9762__shifted;
    __Vfunc_round_pack32__9762__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9762__rounded;
    __Vfunc_round_pack32__9762__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9762__adjusted;
    __Vfunc_round_pack32__9762__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9762__biased;
    __Vfunc_round_pack32__9762__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9768__Vfuncout;
    __Vfunc_round_pack32__9768__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9768__negative;
    __Vfunc_round_pack32__9768__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9768__exponent;
    __Vfunc_round_pack32__9768__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9768__significand;
    __Vfunc_round_pack32__9768__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9768__shifted;
    __Vfunc_round_pack32__9768__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9768__rounded;
    __Vfunc_round_pack32__9768__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9768__adjusted;
    __Vfunc_round_pack32__9768__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9768__biased;
    __Vfunc_round_pack32__9768__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9774__Vfuncout;
    __Vfunc_round_pack32__9774__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9774__negative;
    __Vfunc_round_pack32__9774__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9774__exponent;
    __Vfunc_round_pack32__9774__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9774__significand;
    __Vfunc_round_pack32__9774__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9774__shifted;
    __Vfunc_round_pack32__9774__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9774__rounded;
    __Vfunc_round_pack32__9774__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9774__adjusted;
    __Vfunc_round_pack32__9774__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9774__biased;
    __Vfunc_round_pack32__9774__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9780__Vfuncout;
    __Vfunc_round_pack32__9780__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9780__negative;
    __Vfunc_round_pack32__9780__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9780__exponent;
    __Vfunc_round_pack32__9780__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9780__significand;
    __Vfunc_round_pack32__9780__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9780__shifted;
    __Vfunc_round_pack32__9780__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9780__rounded;
    __Vfunc_round_pack32__9780__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9780__adjusted;
    __Vfunc_round_pack32__9780__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9780__biased;
    __Vfunc_round_pack32__9780__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9786__Vfuncout;
    __Vfunc_round_pack32__9786__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9786__negative;
    __Vfunc_round_pack32__9786__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9786__exponent;
    __Vfunc_round_pack32__9786__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9786__significand;
    __Vfunc_round_pack32__9786__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9786__shifted;
    __Vfunc_round_pack32__9786__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9786__rounded;
    __Vfunc_round_pack32__9786__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9786__adjusted;
    __Vfunc_round_pack32__9786__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9786__biased;
    __Vfunc_round_pack32__9786__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9792__Vfuncout;
    __Vfunc_round_pack32__9792__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9792__negative;
    __Vfunc_round_pack32__9792__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9792__exponent;
    __Vfunc_round_pack32__9792__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9792__significand;
    __Vfunc_round_pack32__9792__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9792__shifted;
    __Vfunc_round_pack32__9792__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9792__rounded;
    __Vfunc_round_pack32__9792__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9792__adjusted;
    __Vfunc_round_pack32__9792__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9792__biased;
    __Vfunc_round_pack32__9792__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9798__Vfuncout;
    __Vfunc_round_pack32__9798__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9798__negative;
    __Vfunc_round_pack32__9798__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9798__exponent;
    __Vfunc_round_pack32__9798__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9798__significand;
    __Vfunc_round_pack32__9798__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9798__shifted;
    __Vfunc_round_pack32__9798__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9798__rounded;
    __Vfunc_round_pack32__9798__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9798__adjusted;
    __Vfunc_round_pack32__9798__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9798__biased;
    __Vfunc_round_pack32__9798__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9804__Vfuncout;
    __Vfunc_round_pack32__9804__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9804__negative;
    __Vfunc_round_pack32__9804__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9804__exponent;
    __Vfunc_round_pack32__9804__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9804__significand;
    __Vfunc_round_pack32__9804__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9804__shifted;
    __Vfunc_round_pack32__9804__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9804__rounded;
    __Vfunc_round_pack32__9804__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9804__adjusted;
    __Vfunc_round_pack32__9804__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9804__biased;
    __Vfunc_round_pack32__9804__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9810__Vfuncout;
    __Vfunc_round_pack32__9810__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9810__negative;
    __Vfunc_round_pack32__9810__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9810__exponent;
    __Vfunc_round_pack32__9810__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9810__significand;
    __Vfunc_round_pack32__9810__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9810__shifted;
    __Vfunc_round_pack32__9810__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9810__rounded;
    __Vfunc_round_pack32__9810__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9810__adjusted;
    __Vfunc_round_pack32__9810__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9810__biased;
    __Vfunc_round_pack32__9810__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9816__Vfuncout;
    __Vfunc_round_pack32__9816__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9816__negative;
    __Vfunc_round_pack32__9816__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9816__exponent;
    __Vfunc_round_pack32__9816__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9816__significand;
    __Vfunc_round_pack32__9816__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9816__shifted;
    __Vfunc_round_pack32__9816__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9816__rounded;
    __Vfunc_round_pack32__9816__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9816__adjusted;
    __Vfunc_round_pack32__9816__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9816__biased;
    __Vfunc_round_pack32__9816__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9822__Vfuncout;
    __Vfunc_round_pack32__9822__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9822__negative;
    __Vfunc_round_pack32__9822__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9822__exponent;
    __Vfunc_round_pack32__9822__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9822__significand;
    __Vfunc_round_pack32__9822__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9822__shifted;
    __Vfunc_round_pack32__9822__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9822__rounded;
    __Vfunc_round_pack32__9822__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9822__adjusted;
    __Vfunc_round_pack32__9822__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9822__biased;
    __Vfunc_round_pack32__9822__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9828__Vfuncout;
    __Vfunc_round_pack32__9828__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9828__negative;
    __Vfunc_round_pack32__9828__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9828__exponent;
    __Vfunc_round_pack32__9828__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9828__significand;
    __Vfunc_round_pack32__9828__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9828__shifted;
    __Vfunc_round_pack32__9828__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9828__rounded;
    __Vfunc_round_pack32__9828__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9828__adjusted;
    __Vfunc_round_pack32__9828__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9828__biased;
    __Vfunc_round_pack32__9828__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9834__Vfuncout;
    __Vfunc_round_pack32__9834__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9834__negative;
    __Vfunc_round_pack32__9834__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9834__exponent;
    __Vfunc_round_pack32__9834__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9834__significand;
    __Vfunc_round_pack32__9834__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9834__shifted;
    __Vfunc_round_pack32__9834__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9834__rounded;
    __Vfunc_round_pack32__9834__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9834__adjusted;
    __Vfunc_round_pack32__9834__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9834__biased;
    __Vfunc_round_pack32__9834__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9840__Vfuncout;
    __Vfunc_round_pack32__9840__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9840__negative;
    __Vfunc_round_pack32__9840__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9840__exponent;
    __Vfunc_round_pack32__9840__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9840__significand;
    __Vfunc_round_pack32__9840__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9840__shifted;
    __Vfunc_round_pack32__9840__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9840__rounded;
    __Vfunc_round_pack32__9840__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9840__adjusted;
    __Vfunc_round_pack32__9840__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9840__biased;
    __Vfunc_round_pack32__9840__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9846__Vfuncout;
    __Vfunc_round_pack32__9846__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9846__negative;
    __Vfunc_round_pack32__9846__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9846__exponent;
    __Vfunc_round_pack32__9846__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9846__significand;
    __Vfunc_round_pack32__9846__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9846__shifted;
    __Vfunc_round_pack32__9846__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9846__rounded;
    __Vfunc_round_pack32__9846__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9846__adjusted;
    __Vfunc_round_pack32__9846__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9846__biased;
    __Vfunc_round_pack32__9846__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9852__Vfuncout;
    __Vfunc_round_pack32__9852__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9852__negative;
    __Vfunc_round_pack32__9852__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9852__exponent;
    __Vfunc_round_pack32__9852__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9852__significand;
    __Vfunc_round_pack32__9852__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9852__shifted;
    __Vfunc_round_pack32__9852__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9852__rounded;
    __Vfunc_round_pack32__9852__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9852__adjusted;
    __Vfunc_round_pack32__9852__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9852__biased;
    __Vfunc_round_pack32__9852__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9858__Vfuncout;
    __Vfunc_round_pack32__9858__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9858__negative;
    __Vfunc_round_pack32__9858__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9858__exponent;
    __Vfunc_round_pack32__9858__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9858__significand;
    __Vfunc_round_pack32__9858__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9858__shifted;
    __Vfunc_round_pack32__9858__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9858__rounded;
    __Vfunc_round_pack32__9858__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9858__adjusted;
    __Vfunc_round_pack32__9858__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9858__biased;
    __Vfunc_round_pack32__9858__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9864__Vfuncout;
    __Vfunc_round_pack32__9864__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9864__negative;
    __Vfunc_round_pack32__9864__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9864__exponent;
    __Vfunc_round_pack32__9864__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9864__significand;
    __Vfunc_round_pack32__9864__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9864__shifted;
    __Vfunc_round_pack32__9864__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9864__rounded;
    __Vfunc_round_pack32__9864__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9864__adjusted;
    __Vfunc_round_pack32__9864__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9864__biased;
    __Vfunc_round_pack32__9864__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9870__Vfuncout;
    __Vfunc_round_pack32__9870__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9870__negative;
    __Vfunc_round_pack32__9870__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9870__exponent;
    __Vfunc_round_pack32__9870__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9870__significand;
    __Vfunc_round_pack32__9870__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9870__shifted;
    __Vfunc_round_pack32__9870__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9870__rounded;
    __Vfunc_round_pack32__9870__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9870__adjusted;
    __Vfunc_round_pack32__9870__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9870__biased;
    __Vfunc_round_pack32__9870__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9876__Vfuncout;
    __Vfunc_round_pack32__9876__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9876__negative;
    __Vfunc_round_pack32__9876__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9876__exponent;
    __Vfunc_round_pack32__9876__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9876__significand;
    __Vfunc_round_pack32__9876__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9876__shifted;
    __Vfunc_round_pack32__9876__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9876__rounded;
    __Vfunc_round_pack32__9876__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9876__adjusted;
    __Vfunc_round_pack32__9876__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9876__biased;
    __Vfunc_round_pack32__9876__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9882__Vfuncout;
    __Vfunc_round_pack32__9882__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9882__negative;
    __Vfunc_round_pack32__9882__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9882__exponent;
    __Vfunc_round_pack32__9882__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9882__significand;
    __Vfunc_round_pack32__9882__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9882__shifted;
    __Vfunc_round_pack32__9882__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9882__rounded;
    __Vfunc_round_pack32__9882__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9882__adjusted;
    __Vfunc_round_pack32__9882__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9882__biased;
    __Vfunc_round_pack32__9882__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9888__Vfuncout;
    __Vfunc_round_pack32__9888__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9888__negative;
    __Vfunc_round_pack32__9888__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9888__exponent;
    __Vfunc_round_pack32__9888__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9888__significand;
    __Vfunc_round_pack32__9888__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9888__shifted;
    __Vfunc_round_pack32__9888__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9888__rounded;
    __Vfunc_round_pack32__9888__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9888__adjusted;
    __Vfunc_round_pack32__9888__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9888__biased;
    __Vfunc_round_pack32__9888__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9894__Vfuncout;
    __Vfunc_round_pack32__9894__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9894__negative;
    __Vfunc_round_pack32__9894__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9894__exponent;
    __Vfunc_round_pack32__9894__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9894__significand;
    __Vfunc_round_pack32__9894__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9894__shifted;
    __Vfunc_round_pack32__9894__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9894__rounded;
    __Vfunc_round_pack32__9894__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9894__adjusted;
    __Vfunc_round_pack32__9894__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9894__biased;
    __Vfunc_round_pack32__9894__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9900__Vfuncout;
    __Vfunc_round_pack32__9900__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9900__negative;
    __Vfunc_round_pack32__9900__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9900__exponent;
    __Vfunc_round_pack32__9900__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9900__significand;
    __Vfunc_round_pack32__9900__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9900__shifted;
    __Vfunc_round_pack32__9900__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9900__rounded;
    __Vfunc_round_pack32__9900__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9900__adjusted;
    __Vfunc_round_pack32__9900__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9900__biased;
    __Vfunc_round_pack32__9900__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9906__Vfuncout;
    __Vfunc_round_pack32__9906__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9906__negative;
    __Vfunc_round_pack32__9906__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9906__exponent;
    __Vfunc_round_pack32__9906__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9906__significand;
    __Vfunc_round_pack32__9906__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9906__shifted;
    __Vfunc_round_pack32__9906__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9906__rounded;
    __Vfunc_round_pack32__9906__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9906__adjusted;
    __Vfunc_round_pack32__9906__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9906__biased;
    __Vfunc_round_pack32__9906__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9912__Vfuncout;
    __Vfunc_round_pack32__9912__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9912__negative;
    __Vfunc_round_pack32__9912__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9912__exponent;
    __Vfunc_round_pack32__9912__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9912__significand;
    __Vfunc_round_pack32__9912__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9912__shifted;
    __Vfunc_round_pack32__9912__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9912__rounded;
    __Vfunc_round_pack32__9912__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9912__adjusted;
    __Vfunc_round_pack32__9912__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9912__biased;
    __Vfunc_round_pack32__9912__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9918__Vfuncout;
    __Vfunc_round_pack32__9918__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9918__negative;
    __Vfunc_round_pack32__9918__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9918__exponent;
    __Vfunc_round_pack32__9918__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9918__significand;
    __Vfunc_round_pack32__9918__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9918__shifted;
    __Vfunc_round_pack32__9918__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9918__rounded;
    __Vfunc_round_pack32__9918__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9918__adjusted;
    __Vfunc_round_pack32__9918__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9918__biased;
    __Vfunc_round_pack32__9918__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9924__Vfuncout;
    __Vfunc_round_pack32__9924__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9924__negative;
    __Vfunc_round_pack32__9924__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9924__exponent;
    __Vfunc_round_pack32__9924__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9924__significand;
    __Vfunc_round_pack32__9924__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9924__shifted;
    __Vfunc_round_pack32__9924__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9924__rounded;
    __Vfunc_round_pack32__9924__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9924__adjusted;
    __Vfunc_round_pack32__9924__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9924__biased;
    __Vfunc_round_pack32__9924__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9930__Vfuncout;
    __Vfunc_round_pack32__9930__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9930__negative;
    __Vfunc_round_pack32__9930__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9930__exponent;
    __Vfunc_round_pack32__9930__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9930__significand;
    __Vfunc_round_pack32__9930__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9930__shifted;
    __Vfunc_round_pack32__9930__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9930__rounded;
    __Vfunc_round_pack32__9930__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9930__adjusted;
    __Vfunc_round_pack32__9930__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9930__biased;
    __Vfunc_round_pack32__9930__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9936__Vfuncout;
    __Vfunc_round_pack32__9936__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9936__negative;
    __Vfunc_round_pack32__9936__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9936__exponent;
    __Vfunc_round_pack32__9936__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9936__significand;
    __Vfunc_round_pack32__9936__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9936__shifted;
    __Vfunc_round_pack32__9936__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9936__rounded;
    __Vfunc_round_pack32__9936__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9936__adjusted;
    __Vfunc_round_pack32__9936__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9936__biased;
    __Vfunc_round_pack32__9936__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9942__Vfuncout;
    __Vfunc_round_pack32__9942__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9942__negative;
    __Vfunc_round_pack32__9942__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9942__exponent;
    __Vfunc_round_pack32__9942__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9942__significand;
    __Vfunc_round_pack32__9942__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9942__shifted;
    __Vfunc_round_pack32__9942__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9942__rounded;
    __Vfunc_round_pack32__9942__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9942__adjusted;
    __Vfunc_round_pack32__9942__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9942__biased;
    __Vfunc_round_pack32__9942__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9948__Vfuncout;
    __Vfunc_round_pack32__9948__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9948__negative;
    __Vfunc_round_pack32__9948__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9948__exponent;
    __Vfunc_round_pack32__9948__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9948__significand;
    __Vfunc_round_pack32__9948__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9948__shifted;
    __Vfunc_round_pack32__9948__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9948__rounded;
    __Vfunc_round_pack32__9948__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9948__adjusted;
    __Vfunc_round_pack32__9948__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9948__biased;
    __Vfunc_round_pack32__9948__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9954__Vfuncout;
    __Vfunc_round_pack32__9954__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9954__negative;
    __Vfunc_round_pack32__9954__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9954__exponent;
    __Vfunc_round_pack32__9954__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9954__significand;
    __Vfunc_round_pack32__9954__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9954__shifted;
    __Vfunc_round_pack32__9954__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9954__rounded;
    __Vfunc_round_pack32__9954__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9954__adjusted;
    __Vfunc_round_pack32__9954__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9954__biased;
    __Vfunc_round_pack32__9954__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9960__Vfuncout;
    __Vfunc_round_pack32__9960__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9960__negative;
    __Vfunc_round_pack32__9960__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9960__exponent;
    __Vfunc_round_pack32__9960__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9960__significand;
    __Vfunc_round_pack32__9960__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9960__shifted;
    __Vfunc_round_pack32__9960__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9960__rounded;
    __Vfunc_round_pack32__9960__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9960__adjusted;
    __Vfunc_round_pack32__9960__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9960__biased;
    __Vfunc_round_pack32__9960__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9966__Vfuncout;
    __Vfunc_round_pack32__9966__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9966__negative;
    __Vfunc_round_pack32__9966__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9966__exponent;
    __Vfunc_round_pack32__9966__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9966__significand;
    __Vfunc_round_pack32__9966__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9966__shifted;
    __Vfunc_round_pack32__9966__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9966__rounded;
    __Vfunc_round_pack32__9966__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9966__adjusted;
    __Vfunc_round_pack32__9966__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9966__biased;
    __Vfunc_round_pack32__9966__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9972__Vfuncout;
    __Vfunc_round_pack32__9972__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9972__negative;
    __Vfunc_round_pack32__9972__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9972__exponent;
    __Vfunc_round_pack32__9972__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9972__significand;
    __Vfunc_round_pack32__9972__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9972__shifted;
    __Vfunc_round_pack32__9972__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9972__rounded;
    __Vfunc_round_pack32__9972__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9972__adjusted;
    __Vfunc_round_pack32__9972__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9972__biased;
    __Vfunc_round_pack32__9972__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9978__Vfuncout;
    __Vfunc_round_pack32__9978__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9978__negative;
    __Vfunc_round_pack32__9978__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9978__exponent;
    __Vfunc_round_pack32__9978__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9978__significand;
    __Vfunc_round_pack32__9978__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9978__shifted;
    __Vfunc_round_pack32__9978__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9978__rounded;
    __Vfunc_round_pack32__9978__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9978__adjusted;
    __Vfunc_round_pack32__9978__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9978__biased;
    __Vfunc_round_pack32__9978__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9984__Vfuncout;
    __Vfunc_round_pack32__9984__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9984__negative;
    __Vfunc_round_pack32__9984__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9984__exponent;
    __Vfunc_round_pack32__9984__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9984__significand;
    __Vfunc_round_pack32__9984__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9984__shifted;
    __Vfunc_round_pack32__9984__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9984__rounded;
    __Vfunc_round_pack32__9984__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9984__adjusted;
    __Vfunc_round_pack32__9984__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9984__biased;
    __Vfunc_round_pack32__9984__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9990__Vfuncout;
    __Vfunc_round_pack32__9990__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9990__negative;
    __Vfunc_round_pack32__9990__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9990__exponent;
    __Vfunc_round_pack32__9990__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9990__significand;
    __Vfunc_round_pack32__9990__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9990__shifted;
    __Vfunc_round_pack32__9990__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9990__rounded;
    __Vfunc_round_pack32__9990__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9990__adjusted;
    __Vfunc_round_pack32__9990__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9990__biased;
    __Vfunc_round_pack32__9990__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9996__Vfuncout;
    __Vfunc_round_pack32__9996__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9996__negative;
    __Vfunc_round_pack32__9996__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9996__exponent;
    __Vfunc_round_pack32__9996__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9996__significand;
    __Vfunc_round_pack32__9996__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9996__shifted;
    __Vfunc_round_pack32__9996__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9996__rounded;
    __Vfunc_round_pack32__9996__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9996__adjusted;
    __Vfunc_round_pack32__9996__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9996__biased;
    __Vfunc_round_pack32__9996__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10002__Vfuncout;
    __Vfunc_round_pack32__10002__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10002__negative;
    __Vfunc_round_pack32__10002__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10002__exponent;
    __Vfunc_round_pack32__10002__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10002__significand;
    __Vfunc_round_pack32__10002__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10002__shifted;
    __Vfunc_round_pack32__10002__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10002__rounded;
    __Vfunc_round_pack32__10002__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10002__adjusted;
    __Vfunc_round_pack32__10002__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10002__biased;
    __Vfunc_round_pack32__10002__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10008__Vfuncout;
    __Vfunc_round_pack32__10008__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10008__negative;
    __Vfunc_round_pack32__10008__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10008__exponent;
    __Vfunc_round_pack32__10008__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10008__significand;
    __Vfunc_round_pack32__10008__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10008__shifted;
    __Vfunc_round_pack32__10008__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10008__rounded;
    __Vfunc_round_pack32__10008__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10008__adjusted;
    __Vfunc_round_pack32__10008__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10008__biased;
    __Vfunc_round_pack32__10008__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10014__Vfuncout;
    __Vfunc_round_pack32__10014__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10014__negative;
    __Vfunc_round_pack32__10014__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10014__exponent;
    __Vfunc_round_pack32__10014__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10014__significand;
    __Vfunc_round_pack32__10014__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10014__shifted;
    __Vfunc_round_pack32__10014__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10014__rounded;
    __Vfunc_round_pack32__10014__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10014__adjusted;
    __Vfunc_round_pack32__10014__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10014__biased;
    __Vfunc_round_pack32__10014__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10020__Vfuncout;
    __Vfunc_round_pack32__10020__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10020__negative;
    __Vfunc_round_pack32__10020__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10020__exponent;
    __Vfunc_round_pack32__10020__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10020__significand;
    __Vfunc_round_pack32__10020__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10020__shifted;
    __Vfunc_round_pack32__10020__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10020__rounded;
    __Vfunc_round_pack32__10020__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10020__adjusted;
    __Vfunc_round_pack32__10020__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10020__biased;
    __Vfunc_round_pack32__10020__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10026__Vfuncout;
    __Vfunc_round_pack32__10026__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10026__negative;
    __Vfunc_round_pack32__10026__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10026__exponent;
    __Vfunc_round_pack32__10026__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10026__significand;
    __Vfunc_round_pack32__10026__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10026__shifted;
    __Vfunc_round_pack32__10026__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10026__rounded;
    __Vfunc_round_pack32__10026__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10026__adjusted;
    __Vfunc_round_pack32__10026__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10026__biased;
    __Vfunc_round_pack32__10026__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10032__Vfuncout;
    __Vfunc_round_pack32__10032__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10032__negative;
    __Vfunc_round_pack32__10032__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10032__exponent;
    __Vfunc_round_pack32__10032__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10032__significand;
    __Vfunc_round_pack32__10032__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10032__shifted;
    __Vfunc_round_pack32__10032__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10032__rounded;
    __Vfunc_round_pack32__10032__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10032__adjusted;
    __Vfunc_round_pack32__10032__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10032__biased;
    __Vfunc_round_pack32__10032__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10038__Vfuncout;
    __Vfunc_round_pack32__10038__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10038__negative;
    __Vfunc_round_pack32__10038__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10038__exponent;
    __Vfunc_round_pack32__10038__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10038__significand;
    __Vfunc_round_pack32__10038__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10038__shifted;
    __Vfunc_round_pack32__10038__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10038__rounded;
    __Vfunc_round_pack32__10038__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10038__adjusted;
    __Vfunc_round_pack32__10038__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10038__biased;
    __Vfunc_round_pack32__10038__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10044__Vfuncout;
    __Vfunc_round_pack32__10044__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10044__negative;
    __Vfunc_round_pack32__10044__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10044__exponent;
    __Vfunc_round_pack32__10044__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10044__significand;
    __Vfunc_round_pack32__10044__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10044__shifted;
    __Vfunc_round_pack32__10044__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10044__rounded;
    __Vfunc_round_pack32__10044__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10044__adjusted;
    __Vfunc_round_pack32__10044__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10044__biased;
    __Vfunc_round_pack32__10044__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10050__Vfuncout;
    __Vfunc_round_pack32__10050__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10050__negative;
    __Vfunc_round_pack32__10050__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10050__exponent;
    __Vfunc_round_pack32__10050__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10050__significand;
    __Vfunc_round_pack32__10050__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10050__shifted;
    __Vfunc_round_pack32__10050__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10050__rounded;
    __Vfunc_round_pack32__10050__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10050__adjusted;
    __Vfunc_round_pack32__10050__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10050__biased;
    __Vfunc_round_pack32__10050__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10056__Vfuncout;
    __Vfunc_round_pack32__10056__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10056__negative;
    __Vfunc_round_pack32__10056__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10056__exponent;
    __Vfunc_round_pack32__10056__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10056__significand;
    __Vfunc_round_pack32__10056__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10056__shifted;
    __Vfunc_round_pack32__10056__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10056__rounded;
    __Vfunc_round_pack32__10056__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10056__adjusted;
    __Vfunc_round_pack32__10056__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10056__biased;
    __Vfunc_round_pack32__10056__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10062__Vfuncout;
    __Vfunc_round_pack32__10062__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10062__negative;
    __Vfunc_round_pack32__10062__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10062__exponent;
    __Vfunc_round_pack32__10062__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10062__significand;
    __Vfunc_round_pack32__10062__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10062__shifted;
    __Vfunc_round_pack32__10062__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10062__rounded;
    __Vfunc_round_pack32__10062__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10062__adjusted;
    __Vfunc_round_pack32__10062__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10062__biased;
    __Vfunc_round_pack32__10062__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10068__Vfuncout;
    __Vfunc_round_pack32__10068__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10068__negative;
    __Vfunc_round_pack32__10068__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10068__exponent;
    __Vfunc_round_pack32__10068__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10068__significand;
    __Vfunc_round_pack32__10068__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10068__shifted;
    __Vfunc_round_pack32__10068__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10068__rounded;
    __Vfunc_round_pack32__10068__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10068__adjusted;
    __Vfunc_round_pack32__10068__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10068__biased;
    __Vfunc_round_pack32__10068__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10074__Vfuncout;
    __Vfunc_round_pack32__10074__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10074__negative;
    __Vfunc_round_pack32__10074__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10074__exponent;
    __Vfunc_round_pack32__10074__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10074__significand;
    __Vfunc_round_pack32__10074__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10074__shifted;
    __Vfunc_round_pack32__10074__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10074__rounded;
    __Vfunc_round_pack32__10074__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10074__adjusted;
    __Vfunc_round_pack32__10074__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10074__biased;
    __Vfunc_round_pack32__10074__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10080__Vfuncout;
    __Vfunc_round_pack32__10080__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10080__negative;
    __Vfunc_round_pack32__10080__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10080__exponent;
    __Vfunc_round_pack32__10080__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10080__significand;
    __Vfunc_round_pack32__10080__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10080__shifted;
    __Vfunc_round_pack32__10080__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10080__rounded;
    __Vfunc_round_pack32__10080__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10080__adjusted;
    __Vfunc_round_pack32__10080__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10080__biased;
    __Vfunc_round_pack32__10080__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10086__Vfuncout;
    __Vfunc_round_pack32__10086__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10086__negative;
    __Vfunc_round_pack32__10086__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10086__exponent;
    __Vfunc_round_pack32__10086__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10086__significand;
    __Vfunc_round_pack32__10086__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10086__shifted;
    __Vfunc_round_pack32__10086__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10086__rounded;
    __Vfunc_round_pack32__10086__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10086__adjusted;
    __Vfunc_round_pack32__10086__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10086__biased;
    __Vfunc_round_pack32__10086__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10092__Vfuncout;
    __Vfunc_round_pack32__10092__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10092__negative;
    __Vfunc_round_pack32__10092__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10092__exponent;
    __Vfunc_round_pack32__10092__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10092__significand;
    __Vfunc_round_pack32__10092__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10092__shifted;
    __Vfunc_round_pack32__10092__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10092__rounded;
    __Vfunc_round_pack32__10092__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10092__adjusted;
    __Vfunc_round_pack32__10092__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10092__biased;
    __Vfunc_round_pack32__10092__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10098__Vfuncout;
    __Vfunc_round_pack32__10098__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10098__negative;
    __Vfunc_round_pack32__10098__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10098__exponent;
    __Vfunc_round_pack32__10098__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10098__significand;
    __Vfunc_round_pack32__10098__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10098__shifted;
    __Vfunc_round_pack32__10098__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10098__rounded;
    __Vfunc_round_pack32__10098__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10098__adjusted;
    __Vfunc_round_pack32__10098__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10098__biased;
    __Vfunc_round_pack32__10098__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10104__Vfuncout;
    __Vfunc_round_pack32__10104__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10104__negative;
    __Vfunc_round_pack32__10104__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10104__exponent;
    __Vfunc_round_pack32__10104__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10104__significand;
    __Vfunc_round_pack32__10104__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10104__shifted;
    __Vfunc_round_pack32__10104__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10104__rounded;
    __Vfunc_round_pack32__10104__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10104__adjusted;
    __Vfunc_round_pack32__10104__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10104__biased;
    __Vfunc_round_pack32__10104__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10110__Vfuncout;
    __Vfunc_round_pack32__10110__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10110__negative;
    __Vfunc_round_pack32__10110__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10110__exponent;
    __Vfunc_round_pack32__10110__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10110__significand;
    __Vfunc_round_pack32__10110__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10110__shifted;
    __Vfunc_round_pack32__10110__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10110__rounded;
    __Vfunc_round_pack32__10110__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10110__adjusted;
    __Vfunc_round_pack32__10110__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10110__biased;
    __Vfunc_round_pack32__10110__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10116__Vfuncout;
    __Vfunc_round_pack32__10116__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10116__negative;
    __Vfunc_round_pack32__10116__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10116__exponent;
    __Vfunc_round_pack32__10116__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10116__significand;
    __Vfunc_round_pack32__10116__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10116__shifted;
    __Vfunc_round_pack32__10116__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10116__rounded;
    __Vfunc_round_pack32__10116__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10116__adjusted;
    __Vfunc_round_pack32__10116__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10116__biased;
    __Vfunc_round_pack32__10116__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10122__Vfuncout;
    __Vfunc_round_pack32__10122__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10122__negative;
    __Vfunc_round_pack32__10122__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10122__exponent;
    __Vfunc_round_pack32__10122__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10122__significand;
    __Vfunc_round_pack32__10122__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10122__shifted;
    __Vfunc_round_pack32__10122__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10122__rounded;
    __Vfunc_round_pack32__10122__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10122__adjusted;
    __Vfunc_round_pack32__10122__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10122__biased;
    __Vfunc_round_pack32__10122__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10128__Vfuncout;
    __Vfunc_round_pack32__10128__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10128__negative;
    __Vfunc_round_pack32__10128__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10128__exponent;
    __Vfunc_round_pack32__10128__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10128__significand;
    __Vfunc_round_pack32__10128__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10128__shifted;
    __Vfunc_round_pack32__10128__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10128__rounded;
    __Vfunc_round_pack32__10128__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10128__adjusted;
    __Vfunc_round_pack32__10128__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10128__biased;
    __Vfunc_round_pack32__10128__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10134__Vfuncout;
    __Vfunc_round_pack32__10134__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10134__negative;
    __Vfunc_round_pack32__10134__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10134__exponent;
    __Vfunc_round_pack32__10134__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10134__significand;
    __Vfunc_round_pack32__10134__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10134__shifted;
    __Vfunc_round_pack32__10134__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10134__rounded;
    __Vfunc_round_pack32__10134__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10134__adjusted;
    __Vfunc_round_pack32__10134__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10134__biased;
    __Vfunc_round_pack32__10134__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10140__Vfuncout;
    __Vfunc_round_pack32__10140__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10140__negative;
    __Vfunc_round_pack32__10140__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10140__exponent;
    __Vfunc_round_pack32__10140__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10140__significand;
    __Vfunc_round_pack32__10140__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10140__shifted;
    __Vfunc_round_pack32__10140__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10140__rounded;
    __Vfunc_round_pack32__10140__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10140__adjusted;
    __Vfunc_round_pack32__10140__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10140__biased;
    __Vfunc_round_pack32__10140__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10146__Vfuncout;
    __Vfunc_round_pack32__10146__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10146__negative;
    __Vfunc_round_pack32__10146__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10146__exponent;
    __Vfunc_round_pack32__10146__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10146__significand;
    __Vfunc_round_pack32__10146__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10146__shifted;
    __Vfunc_round_pack32__10146__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10146__rounded;
    __Vfunc_round_pack32__10146__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10146__adjusted;
    __Vfunc_round_pack32__10146__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10146__biased;
    __Vfunc_round_pack32__10146__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10152__Vfuncout;
    __Vfunc_round_pack32__10152__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10152__negative;
    __Vfunc_round_pack32__10152__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10152__exponent;
    __Vfunc_round_pack32__10152__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10152__significand;
    __Vfunc_round_pack32__10152__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10152__shifted;
    __Vfunc_round_pack32__10152__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10152__rounded;
    __Vfunc_round_pack32__10152__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10152__adjusted;
    __Vfunc_round_pack32__10152__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10152__biased;
    __Vfunc_round_pack32__10152__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10158__Vfuncout;
    __Vfunc_round_pack32__10158__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10158__negative;
    __Vfunc_round_pack32__10158__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10158__exponent;
    __Vfunc_round_pack32__10158__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10158__significand;
    __Vfunc_round_pack32__10158__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10158__shifted;
    __Vfunc_round_pack32__10158__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10158__rounded;
    __Vfunc_round_pack32__10158__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10158__adjusted;
    __Vfunc_round_pack32__10158__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10158__biased;
    __Vfunc_round_pack32__10158__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10164__Vfuncout;
    __Vfunc_round_pack32__10164__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10164__negative;
    __Vfunc_round_pack32__10164__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10164__exponent;
    __Vfunc_round_pack32__10164__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10164__significand;
    __Vfunc_round_pack32__10164__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10164__shifted;
    __Vfunc_round_pack32__10164__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10164__rounded;
    __Vfunc_round_pack32__10164__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10164__adjusted;
    __Vfunc_round_pack32__10164__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10164__biased;
    __Vfunc_round_pack32__10164__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__10170__Vfuncout;
    __Vfunc_round_pack32__10170__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__10170__negative;
    __Vfunc_round_pack32__10170__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10170__exponent;
    __Vfunc_round_pack32__10170__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10170__significand;
    __Vfunc_round_pack32__10170__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__10170__shifted;
    __Vfunc_round_pack32__10170__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__10170__rounded;
    __Vfunc_round_pack32__10170__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__10170__adjusted;
    __Vfunc_round_pack32__10170__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__10170__biased;
    __Vfunc_round_pack32__10170__biased = 0;
    // Body
    __Vfunc_round_pack32__10170__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10170__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10170__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10170__adjusted = __Vfunc_round_pack32__10170__exponent;
    __Vfunc_round_pack32__10170__shifted = __Vfunc_round_pack32__10170__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10170__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10171__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10170__exponent)));
        vlSelf->__Vfunc_shift_jam27__10171__value = __Vfunc_round_pack32__10170__significand;
        __Vfunc_round_pack32__10170__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10171__distance))) {
            vlSelf->__Vfunc_shift_jam27__10171__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10171__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10171__distance))) {
            vlSelf->__Vfunc_shift_jam27__10171__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10171__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10171__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10171__value, (IData)(vlSelf->__Vfunc_shift_jam27__10171__distance)));
            vlSelf->__Vfunc_shift_jam27__10171__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10171__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10171__distance)))));
            vlSelf->__Vfunc_shift_jam27__10171__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10171__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10171__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10171__discarded))));
        }
        __Vfunc_round_pack32__10170__shifted = vlSelf->__Vfunc_shift_jam27__10171__Vfuncout;
    }
    __Vfunc_round_pack32__10170__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10170__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10170__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10170__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10170__rounded)) {
        __Vfunc_round_pack32__10170__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10170__rounded, 1U));
        __Vfunc_round_pack32__10170__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10170__adjusted)));
    }
    __Vfunc_round_pack32__10170__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10170__rounded)) {
        __Vfunc_round_pack32__10170__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10170__adjusted)));
    }
    __Vfunc_round_pack32__10170__Vfuncout = (((0U == __Vfunc_round_pack32__10170__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10170__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10170__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10170__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10170__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10170__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10170__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10170__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10163__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10163__part 
                            = vlSelf->__Vfunc_leading_zero32__10163__value;
                        vlSelf->__Vfunc_leading_zero32__10163__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10163__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                            vlSelf->__Vfunc_leading_zero32__10163__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10163__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10163__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10163__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10163__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10163__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10163__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10163__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10163__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10164__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10164__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10164__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10164__adjusted = __Vfunc_round_pack32__10164__exponent;
    __Vfunc_round_pack32__10164__shifted = __Vfunc_round_pack32__10164__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10164__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10165__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10164__exponent)));
        vlSelf->__Vfunc_shift_jam27__10165__value = __Vfunc_round_pack32__10164__significand;
        __Vfunc_round_pack32__10164__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10165__distance))) {
            vlSelf->__Vfunc_shift_jam27__10165__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10165__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10165__distance))) {
            vlSelf->__Vfunc_shift_jam27__10165__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10165__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10165__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10165__value, (IData)(vlSelf->__Vfunc_shift_jam27__10165__distance)));
            vlSelf->__Vfunc_shift_jam27__10165__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10165__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10165__distance)))));
            vlSelf->__Vfunc_shift_jam27__10165__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10165__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10165__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10165__discarded))));
        }
        __Vfunc_round_pack32__10164__shifted = vlSelf->__Vfunc_shift_jam27__10165__Vfuncout;
    }
    __Vfunc_round_pack32__10164__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10164__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10164__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10164__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10164__rounded)) {
        __Vfunc_round_pack32__10164__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10164__rounded, 1U));
        __Vfunc_round_pack32__10164__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10164__adjusted)));
    }
    __Vfunc_round_pack32__10164__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10164__rounded)) {
        __Vfunc_round_pack32__10164__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10164__adjusted)));
    }
    __Vfunc_round_pack32__10164__Vfuncout = (((0U == __Vfunc_round_pack32__10164__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10164__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10164__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10164__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10164__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10164__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10164__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10164__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10157__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10157__part 
                            = vlSelf->__Vfunc_leading_zero32__10157__value;
                        vlSelf->__Vfunc_leading_zero32__10157__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10157__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                            vlSelf->__Vfunc_leading_zero32__10157__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10157__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10157__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10157__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10157__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10157__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10157__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10157__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10157__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10158__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10158__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10158__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10158__adjusted = __Vfunc_round_pack32__10158__exponent;
    __Vfunc_round_pack32__10158__shifted = __Vfunc_round_pack32__10158__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10158__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10159__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10158__exponent)));
        vlSelf->__Vfunc_shift_jam27__10159__value = __Vfunc_round_pack32__10158__significand;
        __Vfunc_round_pack32__10158__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10159__distance))) {
            vlSelf->__Vfunc_shift_jam27__10159__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10159__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10159__distance))) {
            vlSelf->__Vfunc_shift_jam27__10159__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10159__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10159__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10159__value, (IData)(vlSelf->__Vfunc_shift_jam27__10159__distance)));
            vlSelf->__Vfunc_shift_jam27__10159__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10159__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10159__distance)))));
            vlSelf->__Vfunc_shift_jam27__10159__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10159__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10159__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10159__discarded))));
        }
        __Vfunc_round_pack32__10158__shifted = vlSelf->__Vfunc_shift_jam27__10159__Vfuncout;
    }
    __Vfunc_round_pack32__10158__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10158__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10158__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10158__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10158__rounded)) {
        __Vfunc_round_pack32__10158__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10158__rounded, 1U));
        __Vfunc_round_pack32__10158__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10158__adjusted)));
    }
    __Vfunc_round_pack32__10158__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10158__rounded)) {
        __Vfunc_round_pack32__10158__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10158__adjusted)));
    }
    __Vfunc_round_pack32__10158__Vfuncout = (((0U == __Vfunc_round_pack32__10158__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10158__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10158__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10158__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10158__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10158__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10158__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10158__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10151__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10151__part 
                            = vlSelf->__Vfunc_leading_zero32__10151__value;
                        vlSelf->__Vfunc_leading_zero32__10151__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10151__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                            vlSelf->__Vfunc_leading_zero32__10151__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10151__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10151__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10151__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10151__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10151__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10151__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10151__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10151__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10152__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10152__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10152__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10152__adjusted = __Vfunc_round_pack32__10152__exponent;
    __Vfunc_round_pack32__10152__shifted = __Vfunc_round_pack32__10152__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10152__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10153__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10152__exponent)));
        vlSelf->__Vfunc_shift_jam27__10153__value = __Vfunc_round_pack32__10152__significand;
        __Vfunc_round_pack32__10152__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10153__distance))) {
            vlSelf->__Vfunc_shift_jam27__10153__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10153__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10153__distance))) {
            vlSelf->__Vfunc_shift_jam27__10153__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10153__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10153__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10153__value, (IData)(vlSelf->__Vfunc_shift_jam27__10153__distance)));
            vlSelf->__Vfunc_shift_jam27__10153__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10153__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10153__distance)))));
            vlSelf->__Vfunc_shift_jam27__10153__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10153__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10153__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10153__discarded))));
        }
        __Vfunc_round_pack32__10152__shifted = vlSelf->__Vfunc_shift_jam27__10153__Vfuncout;
    }
    __Vfunc_round_pack32__10152__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10152__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10152__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10152__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10152__rounded)) {
        __Vfunc_round_pack32__10152__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10152__rounded, 1U));
        __Vfunc_round_pack32__10152__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10152__adjusted)));
    }
    __Vfunc_round_pack32__10152__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10152__rounded)) {
        __Vfunc_round_pack32__10152__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10152__adjusted)));
    }
    __Vfunc_round_pack32__10152__Vfuncout = (((0U == __Vfunc_round_pack32__10152__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10152__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10152__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10152__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10152__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10152__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10152__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10152__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10145__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10145__part 
                            = vlSelf->__Vfunc_leading_zero32__10145__value;
                        vlSelf->__Vfunc_leading_zero32__10145__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10145__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                            vlSelf->__Vfunc_leading_zero32__10145__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10145__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10145__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10145__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10145__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10145__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10145__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10145__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10145__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10146__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10146__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10146__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10146__adjusted = __Vfunc_round_pack32__10146__exponent;
    __Vfunc_round_pack32__10146__shifted = __Vfunc_round_pack32__10146__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10146__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10147__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10146__exponent)));
        vlSelf->__Vfunc_shift_jam27__10147__value = __Vfunc_round_pack32__10146__significand;
        __Vfunc_round_pack32__10146__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10147__distance))) {
            vlSelf->__Vfunc_shift_jam27__10147__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10147__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10147__distance))) {
            vlSelf->__Vfunc_shift_jam27__10147__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10147__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10147__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10147__value, (IData)(vlSelf->__Vfunc_shift_jam27__10147__distance)));
            vlSelf->__Vfunc_shift_jam27__10147__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10147__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10147__distance)))));
            vlSelf->__Vfunc_shift_jam27__10147__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10147__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10147__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10147__discarded))));
        }
        __Vfunc_round_pack32__10146__shifted = vlSelf->__Vfunc_shift_jam27__10147__Vfuncout;
    }
    __Vfunc_round_pack32__10146__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10146__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10146__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10146__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10146__rounded)) {
        __Vfunc_round_pack32__10146__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10146__rounded, 1U));
        __Vfunc_round_pack32__10146__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10146__adjusted)));
    }
    __Vfunc_round_pack32__10146__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10146__rounded)) {
        __Vfunc_round_pack32__10146__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10146__adjusted)));
    }
    __Vfunc_round_pack32__10146__Vfuncout = (((0U == __Vfunc_round_pack32__10146__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10146__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10146__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10146__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10146__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10146__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10146__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10146__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10139__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10139__part 
                            = vlSelf->__Vfunc_leading_zero32__10139__value;
                        vlSelf->__Vfunc_leading_zero32__10139__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10139__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                            vlSelf->__Vfunc_leading_zero32__10139__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10139__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10139__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10139__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10139__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10139__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10139__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10139__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10139__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10140__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10140__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10140__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10140__adjusted = __Vfunc_round_pack32__10140__exponent;
    __Vfunc_round_pack32__10140__shifted = __Vfunc_round_pack32__10140__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10140__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10141__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10140__exponent)));
        vlSelf->__Vfunc_shift_jam27__10141__value = __Vfunc_round_pack32__10140__significand;
        __Vfunc_round_pack32__10140__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10141__distance))) {
            vlSelf->__Vfunc_shift_jam27__10141__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10141__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10141__distance))) {
            vlSelf->__Vfunc_shift_jam27__10141__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10141__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10141__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10141__value, (IData)(vlSelf->__Vfunc_shift_jam27__10141__distance)));
            vlSelf->__Vfunc_shift_jam27__10141__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10141__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10141__distance)))));
            vlSelf->__Vfunc_shift_jam27__10141__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10141__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10141__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10141__discarded))));
        }
        __Vfunc_round_pack32__10140__shifted = vlSelf->__Vfunc_shift_jam27__10141__Vfuncout;
    }
    __Vfunc_round_pack32__10140__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10140__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10140__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10140__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10140__rounded)) {
        __Vfunc_round_pack32__10140__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10140__rounded, 1U));
        __Vfunc_round_pack32__10140__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10140__adjusted)));
    }
    __Vfunc_round_pack32__10140__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10140__rounded)) {
        __Vfunc_round_pack32__10140__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10140__adjusted)));
    }
    __Vfunc_round_pack32__10140__Vfuncout = (((0U == __Vfunc_round_pack32__10140__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10140__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10140__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10140__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10140__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10140__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10140__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10140__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10133__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10133__part 
                            = vlSelf->__Vfunc_leading_zero32__10133__value;
                        vlSelf->__Vfunc_leading_zero32__10133__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10133__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                            vlSelf->__Vfunc_leading_zero32__10133__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10133__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10133__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10133__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10133__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10133__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10133__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10133__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10133__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10134__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10134__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10134__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10134__adjusted = __Vfunc_round_pack32__10134__exponent;
    __Vfunc_round_pack32__10134__shifted = __Vfunc_round_pack32__10134__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10134__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10135__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10134__exponent)));
        vlSelf->__Vfunc_shift_jam27__10135__value = __Vfunc_round_pack32__10134__significand;
        __Vfunc_round_pack32__10134__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10135__distance))) {
            vlSelf->__Vfunc_shift_jam27__10135__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10135__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10135__distance))) {
            vlSelf->__Vfunc_shift_jam27__10135__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10135__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10135__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10135__value, (IData)(vlSelf->__Vfunc_shift_jam27__10135__distance)));
            vlSelf->__Vfunc_shift_jam27__10135__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10135__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10135__distance)))));
            vlSelf->__Vfunc_shift_jam27__10135__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10135__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10135__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10135__discarded))));
        }
        __Vfunc_round_pack32__10134__shifted = vlSelf->__Vfunc_shift_jam27__10135__Vfuncout;
    }
    __Vfunc_round_pack32__10134__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10134__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10134__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10134__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10134__rounded)) {
        __Vfunc_round_pack32__10134__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10134__rounded, 1U));
        __Vfunc_round_pack32__10134__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10134__adjusted)));
    }
    __Vfunc_round_pack32__10134__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10134__rounded)) {
        __Vfunc_round_pack32__10134__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10134__adjusted)));
    }
    __Vfunc_round_pack32__10134__Vfuncout = (((0U == __Vfunc_round_pack32__10134__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10134__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10134__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10134__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10134__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10134__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10134__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10134__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10127__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10127__part 
                            = vlSelf->__Vfunc_leading_zero32__10127__value;
                        vlSelf->__Vfunc_leading_zero32__10127__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10127__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                            vlSelf->__Vfunc_leading_zero32__10127__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10127__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10127__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10127__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10127__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10127__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10127__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10127__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10127__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10128__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10128__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10128__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10128__adjusted = __Vfunc_round_pack32__10128__exponent;
    __Vfunc_round_pack32__10128__shifted = __Vfunc_round_pack32__10128__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10128__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10129__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10128__exponent)));
        vlSelf->__Vfunc_shift_jam27__10129__value = __Vfunc_round_pack32__10128__significand;
        __Vfunc_round_pack32__10128__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10129__distance))) {
            vlSelf->__Vfunc_shift_jam27__10129__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10129__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10129__distance))) {
            vlSelf->__Vfunc_shift_jam27__10129__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10129__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10129__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10129__value, (IData)(vlSelf->__Vfunc_shift_jam27__10129__distance)));
            vlSelf->__Vfunc_shift_jam27__10129__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10129__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10129__distance)))));
            vlSelf->__Vfunc_shift_jam27__10129__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10129__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10129__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10129__discarded))));
        }
        __Vfunc_round_pack32__10128__shifted = vlSelf->__Vfunc_shift_jam27__10129__Vfuncout;
    }
    __Vfunc_round_pack32__10128__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10128__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10128__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10128__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10128__rounded)) {
        __Vfunc_round_pack32__10128__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10128__rounded, 1U));
        __Vfunc_round_pack32__10128__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10128__adjusted)));
    }
    __Vfunc_round_pack32__10128__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10128__rounded)) {
        __Vfunc_round_pack32__10128__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10128__adjusted)));
    }
    __Vfunc_round_pack32__10128__Vfuncout = (((0U == __Vfunc_round_pack32__10128__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10128__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10128__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10128__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10128__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10128__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10128__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10128__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10121__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10121__part 
                            = vlSelf->__Vfunc_leading_zero32__10121__value;
                        vlSelf->__Vfunc_leading_zero32__10121__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10121__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                            vlSelf->__Vfunc_leading_zero32__10121__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10121__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10121__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10121__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10121__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10121__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10121__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10121__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10121__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10122__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10122__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10122__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10122__adjusted = __Vfunc_round_pack32__10122__exponent;
    __Vfunc_round_pack32__10122__shifted = __Vfunc_round_pack32__10122__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10122__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10123__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10122__exponent)));
        vlSelf->__Vfunc_shift_jam27__10123__value = __Vfunc_round_pack32__10122__significand;
        __Vfunc_round_pack32__10122__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10123__distance))) {
            vlSelf->__Vfunc_shift_jam27__10123__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10123__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10123__distance))) {
            vlSelf->__Vfunc_shift_jam27__10123__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10123__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10123__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10123__value, (IData)(vlSelf->__Vfunc_shift_jam27__10123__distance)));
            vlSelf->__Vfunc_shift_jam27__10123__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10123__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10123__distance)))));
            vlSelf->__Vfunc_shift_jam27__10123__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10123__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10123__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10123__discarded))));
        }
        __Vfunc_round_pack32__10122__shifted = vlSelf->__Vfunc_shift_jam27__10123__Vfuncout;
    }
    __Vfunc_round_pack32__10122__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10122__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10122__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10122__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10122__rounded)) {
        __Vfunc_round_pack32__10122__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10122__rounded, 1U));
        __Vfunc_round_pack32__10122__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10122__adjusted)));
    }
    __Vfunc_round_pack32__10122__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10122__rounded)) {
        __Vfunc_round_pack32__10122__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10122__adjusted)));
    }
    __Vfunc_round_pack32__10122__Vfuncout = (((0U == __Vfunc_round_pack32__10122__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10122__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10122__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10122__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10122__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10122__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10122__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10122__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10115__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10115__part 
                            = vlSelf->__Vfunc_leading_zero32__10115__value;
                        vlSelf->__Vfunc_leading_zero32__10115__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10115__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                            vlSelf->__Vfunc_leading_zero32__10115__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10115__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10115__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10115__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10115__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10115__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10115__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10115__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10115__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10116__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10116__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10116__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10116__adjusted = __Vfunc_round_pack32__10116__exponent;
    __Vfunc_round_pack32__10116__shifted = __Vfunc_round_pack32__10116__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10116__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10117__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10116__exponent)));
        vlSelf->__Vfunc_shift_jam27__10117__value = __Vfunc_round_pack32__10116__significand;
        __Vfunc_round_pack32__10116__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10117__distance))) {
            vlSelf->__Vfunc_shift_jam27__10117__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10117__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10117__distance))) {
            vlSelf->__Vfunc_shift_jam27__10117__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10117__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10117__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10117__value, (IData)(vlSelf->__Vfunc_shift_jam27__10117__distance)));
            vlSelf->__Vfunc_shift_jam27__10117__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10117__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10117__distance)))));
            vlSelf->__Vfunc_shift_jam27__10117__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10117__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10117__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10117__discarded))));
        }
        __Vfunc_round_pack32__10116__shifted = vlSelf->__Vfunc_shift_jam27__10117__Vfuncout;
    }
    __Vfunc_round_pack32__10116__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10116__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10116__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10116__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10116__rounded)) {
        __Vfunc_round_pack32__10116__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10116__rounded, 1U));
        __Vfunc_round_pack32__10116__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10116__adjusted)));
    }
    __Vfunc_round_pack32__10116__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10116__rounded)) {
        __Vfunc_round_pack32__10116__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10116__adjusted)));
    }
    __Vfunc_round_pack32__10116__Vfuncout = (((0U == __Vfunc_round_pack32__10116__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10116__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10116__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10116__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10116__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10116__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10116__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10116__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10109__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10109__part 
                            = vlSelf->__Vfunc_leading_zero32__10109__value;
                        vlSelf->__Vfunc_leading_zero32__10109__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10109__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                            vlSelf->__Vfunc_leading_zero32__10109__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10109__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10109__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10109__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10109__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10109__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10109__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10109__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10109__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10110__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10110__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10110__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10110__adjusted = __Vfunc_round_pack32__10110__exponent;
    __Vfunc_round_pack32__10110__shifted = __Vfunc_round_pack32__10110__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10110__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10111__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10110__exponent)));
        vlSelf->__Vfunc_shift_jam27__10111__value = __Vfunc_round_pack32__10110__significand;
        __Vfunc_round_pack32__10110__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10111__distance))) {
            vlSelf->__Vfunc_shift_jam27__10111__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10111__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10111__distance))) {
            vlSelf->__Vfunc_shift_jam27__10111__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10111__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10111__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10111__value, (IData)(vlSelf->__Vfunc_shift_jam27__10111__distance)));
            vlSelf->__Vfunc_shift_jam27__10111__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10111__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10111__distance)))));
            vlSelf->__Vfunc_shift_jam27__10111__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10111__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10111__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10111__discarded))));
        }
        __Vfunc_round_pack32__10110__shifted = vlSelf->__Vfunc_shift_jam27__10111__Vfuncout;
    }
    __Vfunc_round_pack32__10110__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10110__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10110__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10110__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10110__rounded)) {
        __Vfunc_round_pack32__10110__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10110__rounded, 1U));
        __Vfunc_round_pack32__10110__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10110__adjusted)));
    }
    __Vfunc_round_pack32__10110__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10110__rounded)) {
        __Vfunc_round_pack32__10110__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10110__adjusted)));
    }
    __Vfunc_round_pack32__10110__Vfuncout = (((0U == __Vfunc_round_pack32__10110__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10110__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10110__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10110__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10110__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10110__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10110__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10110__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10103__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10103__part 
                            = vlSelf->__Vfunc_leading_zero32__10103__value;
                        vlSelf->__Vfunc_leading_zero32__10103__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10103__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                            vlSelf->__Vfunc_leading_zero32__10103__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10103__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10103__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10103__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10103__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10103__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10103__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10103__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10103__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10104__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10104__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10104__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10104__adjusted = __Vfunc_round_pack32__10104__exponent;
    __Vfunc_round_pack32__10104__shifted = __Vfunc_round_pack32__10104__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10104__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10105__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10104__exponent)));
        vlSelf->__Vfunc_shift_jam27__10105__value = __Vfunc_round_pack32__10104__significand;
        __Vfunc_round_pack32__10104__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10105__distance))) {
            vlSelf->__Vfunc_shift_jam27__10105__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10105__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10105__distance))) {
            vlSelf->__Vfunc_shift_jam27__10105__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10105__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10105__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10105__value, (IData)(vlSelf->__Vfunc_shift_jam27__10105__distance)));
            vlSelf->__Vfunc_shift_jam27__10105__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10105__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10105__distance)))));
            vlSelf->__Vfunc_shift_jam27__10105__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10105__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10105__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10105__discarded))));
        }
        __Vfunc_round_pack32__10104__shifted = vlSelf->__Vfunc_shift_jam27__10105__Vfuncout;
    }
    __Vfunc_round_pack32__10104__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10104__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10104__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10104__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10104__rounded)) {
        __Vfunc_round_pack32__10104__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10104__rounded, 1U));
        __Vfunc_round_pack32__10104__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10104__adjusted)));
    }
    __Vfunc_round_pack32__10104__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10104__rounded)) {
        __Vfunc_round_pack32__10104__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10104__adjusted)));
    }
    __Vfunc_round_pack32__10104__Vfuncout = (((0U == __Vfunc_round_pack32__10104__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10104__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10104__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10104__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10104__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10104__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10104__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10104__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10097__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10097__part 
                            = vlSelf->__Vfunc_leading_zero32__10097__value;
                        vlSelf->__Vfunc_leading_zero32__10097__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10097__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                            vlSelf->__Vfunc_leading_zero32__10097__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10097__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10097__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10097__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10097__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10097__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10097__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10097__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10097__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10098__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10098__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10098__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10098__adjusted = __Vfunc_round_pack32__10098__exponent;
    __Vfunc_round_pack32__10098__shifted = __Vfunc_round_pack32__10098__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10098__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10099__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10098__exponent)));
        vlSelf->__Vfunc_shift_jam27__10099__value = __Vfunc_round_pack32__10098__significand;
        __Vfunc_round_pack32__10098__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10099__distance))) {
            vlSelf->__Vfunc_shift_jam27__10099__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10099__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10099__distance))) {
            vlSelf->__Vfunc_shift_jam27__10099__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10099__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10099__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10099__value, (IData)(vlSelf->__Vfunc_shift_jam27__10099__distance)));
            vlSelf->__Vfunc_shift_jam27__10099__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10099__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10099__distance)))));
            vlSelf->__Vfunc_shift_jam27__10099__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10099__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10099__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10099__discarded))));
        }
        __Vfunc_round_pack32__10098__shifted = vlSelf->__Vfunc_shift_jam27__10099__Vfuncout;
    }
    __Vfunc_round_pack32__10098__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10098__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10098__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10098__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10098__rounded)) {
        __Vfunc_round_pack32__10098__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10098__rounded, 1U));
        __Vfunc_round_pack32__10098__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10098__adjusted)));
    }
    __Vfunc_round_pack32__10098__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10098__rounded)) {
        __Vfunc_round_pack32__10098__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10098__adjusted)));
    }
    __Vfunc_round_pack32__10098__Vfuncout = (((0U == __Vfunc_round_pack32__10098__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10098__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10098__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10098__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10098__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10098__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10098__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10098__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10091__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10091__part 
                            = vlSelf->__Vfunc_leading_zero32__10091__value;
                        vlSelf->__Vfunc_leading_zero32__10091__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10091__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                            vlSelf->__Vfunc_leading_zero32__10091__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10091__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10091__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10091__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10091__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10091__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10091__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10091__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10091__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10092__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10092__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10092__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10092__adjusted = __Vfunc_round_pack32__10092__exponent;
    __Vfunc_round_pack32__10092__shifted = __Vfunc_round_pack32__10092__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10092__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10093__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10092__exponent)));
        vlSelf->__Vfunc_shift_jam27__10093__value = __Vfunc_round_pack32__10092__significand;
        __Vfunc_round_pack32__10092__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10093__distance))) {
            vlSelf->__Vfunc_shift_jam27__10093__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10093__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10093__distance))) {
            vlSelf->__Vfunc_shift_jam27__10093__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10093__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10093__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10093__value, (IData)(vlSelf->__Vfunc_shift_jam27__10093__distance)));
            vlSelf->__Vfunc_shift_jam27__10093__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10093__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10093__distance)))));
            vlSelf->__Vfunc_shift_jam27__10093__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10093__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10093__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10093__discarded))));
        }
        __Vfunc_round_pack32__10092__shifted = vlSelf->__Vfunc_shift_jam27__10093__Vfuncout;
    }
    __Vfunc_round_pack32__10092__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10092__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10092__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10092__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10092__rounded)) {
        __Vfunc_round_pack32__10092__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10092__rounded, 1U));
        __Vfunc_round_pack32__10092__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10092__adjusted)));
    }
    __Vfunc_round_pack32__10092__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10092__rounded)) {
        __Vfunc_round_pack32__10092__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10092__adjusted)));
    }
    __Vfunc_round_pack32__10092__Vfuncout = (((0U == __Vfunc_round_pack32__10092__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10092__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10092__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10092__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10092__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10092__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10092__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10092__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10085__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10085__part 
                            = vlSelf->__Vfunc_leading_zero32__10085__value;
                        vlSelf->__Vfunc_leading_zero32__10085__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10085__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                            vlSelf->__Vfunc_leading_zero32__10085__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10085__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10085__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10085__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10085__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10085__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10085__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10085__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10085__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10086__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10086__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10086__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10086__adjusted = __Vfunc_round_pack32__10086__exponent;
    __Vfunc_round_pack32__10086__shifted = __Vfunc_round_pack32__10086__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10086__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10087__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10086__exponent)));
        vlSelf->__Vfunc_shift_jam27__10087__value = __Vfunc_round_pack32__10086__significand;
        __Vfunc_round_pack32__10086__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10087__distance))) {
            vlSelf->__Vfunc_shift_jam27__10087__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10087__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10087__distance))) {
            vlSelf->__Vfunc_shift_jam27__10087__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10087__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10087__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10087__value, (IData)(vlSelf->__Vfunc_shift_jam27__10087__distance)));
            vlSelf->__Vfunc_shift_jam27__10087__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10087__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10087__distance)))));
            vlSelf->__Vfunc_shift_jam27__10087__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10087__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10087__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10087__discarded))));
        }
        __Vfunc_round_pack32__10086__shifted = vlSelf->__Vfunc_shift_jam27__10087__Vfuncout;
    }
    __Vfunc_round_pack32__10086__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10086__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10086__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10086__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10086__rounded)) {
        __Vfunc_round_pack32__10086__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10086__rounded, 1U));
        __Vfunc_round_pack32__10086__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10086__adjusted)));
    }
    __Vfunc_round_pack32__10086__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10086__rounded)) {
        __Vfunc_round_pack32__10086__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10086__adjusted)));
    }
    __Vfunc_round_pack32__10086__Vfuncout = (((0U == __Vfunc_round_pack32__10086__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10086__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10086__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10086__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10086__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10086__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10086__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10086__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10079__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10079__part 
                            = vlSelf->__Vfunc_leading_zero32__10079__value;
                        vlSelf->__Vfunc_leading_zero32__10079__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10079__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                            vlSelf->__Vfunc_leading_zero32__10079__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10079__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10079__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10079__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10079__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10079__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10079__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10079__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10079__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10080__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10080__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10080__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10080__adjusted = __Vfunc_round_pack32__10080__exponent;
    __Vfunc_round_pack32__10080__shifted = __Vfunc_round_pack32__10080__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10080__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10081__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10080__exponent)));
        vlSelf->__Vfunc_shift_jam27__10081__value = __Vfunc_round_pack32__10080__significand;
        __Vfunc_round_pack32__10080__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10081__distance))) {
            vlSelf->__Vfunc_shift_jam27__10081__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10081__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10081__distance))) {
            vlSelf->__Vfunc_shift_jam27__10081__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10081__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10081__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10081__value, (IData)(vlSelf->__Vfunc_shift_jam27__10081__distance)));
            vlSelf->__Vfunc_shift_jam27__10081__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10081__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10081__distance)))));
            vlSelf->__Vfunc_shift_jam27__10081__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10081__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10081__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10081__discarded))));
        }
        __Vfunc_round_pack32__10080__shifted = vlSelf->__Vfunc_shift_jam27__10081__Vfuncout;
    }
    __Vfunc_round_pack32__10080__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10080__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10080__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10080__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10080__rounded)) {
        __Vfunc_round_pack32__10080__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10080__rounded, 1U));
        __Vfunc_round_pack32__10080__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10080__adjusted)));
    }
    __Vfunc_round_pack32__10080__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10080__rounded)) {
        __Vfunc_round_pack32__10080__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10080__adjusted)));
    }
    __Vfunc_round_pack32__10080__Vfuncout = (((0U == __Vfunc_round_pack32__10080__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10080__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10080__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10080__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10080__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10080__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10080__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10080__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10073__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10073__part 
                            = vlSelf->__Vfunc_leading_zero32__10073__value;
                        vlSelf->__Vfunc_leading_zero32__10073__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10073__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                            vlSelf->__Vfunc_leading_zero32__10073__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10073__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10073__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10073__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10073__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10073__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10073__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10073__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10073__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10074__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10074__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10074__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10074__adjusted = __Vfunc_round_pack32__10074__exponent;
    __Vfunc_round_pack32__10074__shifted = __Vfunc_round_pack32__10074__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10074__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10075__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10074__exponent)));
        vlSelf->__Vfunc_shift_jam27__10075__value = __Vfunc_round_pack32__10074__significand;
        __Vfunc_round_pack32__10074__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10075__distance))) {
            vlSelf->__Vfunc_shift_jam27__10075__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10075__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10075__distance))) {
            vlSelf->__Vfunc_shift_jam27__10075__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10075__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10075__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10075__value, (IData)(vlSelf->__Vfunc_shift_jam27__10075__distance)));
            vlSelf->__Vfunc_shift_jam27__10075__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10075__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10075__distance)))));
            vlSelf->__Vfunc_shift_jam27__10075__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10075__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10075__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10075__discarded))));
        }
        __Vfunc_round_pack32__10074__shifted = vlSelf->__Vfunc_shift_jam27__10075__Vfuncout;
    }
    __Vfunc_round_pack32__10074__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10074__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10074__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10074__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10074__rounded)) {
        __Vfunc_round_pack32__10074__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10074__rounded, 1U));
        __Vfunc_round_pack32__10074__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10074__adjusted)));
    }
    __Vfunc_round_pack32__10074__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10074__rounded)) {
        __Vfunc_round_pack32__10074__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10074__adjusted)));
    }
    __Vfunc_round_pack32__10074__Vfuncout = (((0U == __Vfunc_round_pack32__10074__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10074__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10074__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10074__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10074__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10074__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10074__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10074__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10067__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10067__part 
                            = vlSelf->__Vfunc_leading_zero32__10067__value;
                        vlSelf->__Vfunc_leading_zero32__10067__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10067__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                            vlSelf->__Vfunc_leading_zero32__10067__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10067__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10067__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10067__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10067__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10067__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10067__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10067__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10067__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10068__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10068__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10068__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10068__adjusted = __Vfunc_round_pack32__10068__exponent;
    __Vfunc_round_pack32__10068__shifted = __Vfunc_round_pack32__10068__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10068__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10069__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10068__exponent)));
        vlSelf->__Vfunc_shift_jam27__10069__value = __Vfunc_round_pack32__10068__significand;
        __Vfunc_round_pack32__10068__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10069__distance))) {
            vlSelf->__Vfunc_shift_jam27__10069__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10069__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10069__distance))) {
            vlSelf->__Vfunc_shift_jam27__10069__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10069__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10069__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10069__value, (IData)(vlSelf->__Vfunc_shift_jam27__10069__distance)));
            vlSelf->__Vfunc_shift_jam27__10069__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10069__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10069__distance)))));
            vlSelf->__Vfunc_shift_jam27__10069__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10069__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10069__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10069__discarded))));
        }
        __Vfunc_round_pack32__10068__shifted = vlSelf->__Vfunc_shift_jam27__10069__Vfuncout;
    }
    __Vfunc_round_pack32__10068__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10068__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10068__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10068__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10068__rounded)) {
        __Vfunc_round_pack32__10068__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10068__rounded, 1U));
        __Vfunc_round_pack32__10068__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10068__adjusted)));
    }
    __Vfunc_round_pack32__10068__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10068__rounded)) {
        __Vfunc_round_pack32__10068__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10068__adjusted)));
    }
    __Vfunc_round_pack32__10068__Vfuncout = (((0U == __Vfunc_round_pack32__10068__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10068__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10068__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10068__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10068__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10068__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10068__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10068__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10061__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10061__part 
                            = vlSelf->__Vfunc_leading_zero32__10061__value;
                        vlSelf->__Vfunc_leading_zero32__10061__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10061__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                            vlSelf->__Vfunc_leading_zero32__10061__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10061__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10061__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10061__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10061__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10061__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10061__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10061__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10061__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10062__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10062__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10062__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10062__adjusted = __Vfunc_round_pack32__10062__exponent;
    __Vfunc_round_pack32__10062__shifted = __Vfunc_round_pack32__10062__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10062__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10063__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10062__exponent)));
        vlSelf->__Vfunc_shift_jam27__10063__value = __Vfunc_round_pack32__10062__significand;
        __Vfunc_round_pack32__10062__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10063__distance))) {
            vlSelf->__Vfunc_shift_jam27__10063__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10063__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10063__distance))) {
            vlSelf->__Vfunc_shift_jam27__10063__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10063__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10063__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10063__value, (IData)(vlSelf->__Vfunc_shift_jam27__10063__distance)));
            vlSelf->__Vfunc_shift_jam27__10063__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10063__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10063__distance)))));
            vlSelf->__Vfunc_shift_jam27__10063__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10063__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10063__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10063__discarded))));
        }
        __Vfunc_round_pack32__10062__shifted = vlSelf->__Vfunc_shift_jam27__10063__Vfuncout;
    }
    __Vfunc_round_pack32__10062__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10062__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10062__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10062__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10062__rounded)) {
        __Vfunc_round_pack32__10062__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10062__rounded, 1U));
        __Vfunc_round_pack32__10062__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10062__adjusted)));
    }
    __Vfunc_round_pack32__10062__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10062__rounded)) {
        __Vfunc_round_pack32__10062__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10062__adjusted)));
    }
    __Vfunc_round_pack32__10062__Vfuncout = (((0U == __Vfunc_round_pack32__10062__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10062__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10062__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10062__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10062__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10062__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10062__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10062__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10055__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10055__part 
                            = vlSelf->__Vfunc_leading_zero32__10055__value;
                        vlSelf->__Vfunc_leading_zero32__10055__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10055__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                            vlSelf->__Vfunc_leading_zero32__10055__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10055__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10055__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10055__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10055__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10055__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10055__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10055__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10055__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10056__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10056__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10056__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10056__adjusted = __Vfunc_round_pack32__10056__exponent;
    __Vfunc_round_pack32__10056__shifted = __Vfunc_round_pack32__10056__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10056__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10057__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10056__exponent)));
        vlSelf->__Vfunc_shift_jam27__10057__value = __Vfunc_round_pack32__10056__significand;
        __Vfunc_round_pack32__10056__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10057__distance))) {
            vlSelf->__Vfunc_shift_jam27__10057__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10057__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10057__distance))) {
            vlSelf->__Vfunc_shift_jam27__10057__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10057__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10057__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10057__value, (IData)(vlSelf->__Vfunc_shift_jam27__10057__distance)));
            vlSelf->__Vfunc_shift_jam27__10057__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10057__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10057__distance)))));
            vlSelf->__Vfunc_shift_jam27__10057__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10057__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10057__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10057__discarded))));
        }
        __Vfunc_round_pack32__10056__shifted = vlSelf->__Vfunc_shift_jam27__10057__Vfuncout;
    }
    __Vfunc_round_pack32__10056__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10056__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10056__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10056__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10056__rounded)) {
        __Vfunc_round_pack32__10056__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10056__rounded, 1U));
        __Vfunc_round_pack32__10056__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10056__adjusted)));
    }
    __Vfunc_round_pack32__10056__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10056__rounded)) {
        __Vfunc_round_pack32__10056__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10056__adjusted)));
    }
    __Vfunc_round_pack32__10056__Vfuncout = (((0U == __Vfunc_round_pack32__10056__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10056__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10056__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10056__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10056__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10056__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10056__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10056__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10049__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10049__part 
                            = vlSelf->__Vfunc_leading_zero32__10049__value;
                        vlSelf->__Vfunc_leading_zero32__10049__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10049__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                            vlSelf->__Vfunc_leading_zero32__10049__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10049__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10049__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10049__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10049__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10049__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10049__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10049__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10049__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10050__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10050__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10050__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10050__adjusted = __Vfunc_round_pack32__10050__exponent;
    __Vfunc_round_pack32__10050__shifted = __Vfunc_round_pack32__10050__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10050__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10051__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10050__exponent)));
        vlSelf->__Vfunc_shift_jam27__10051__value = __Vfunc_round_pack32__10050__significand;
        __Vfunc_round_pack32__10050__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10051__distance))) {
            vlSelf->__Vfunc_shift_jam27__10051__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10051__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10051__distance))) {
            vlSelf->__Vfunc_shift_jam27__10051__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10051__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10051__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10051__value, (IData)(vlSelf->__Vfunc_shift_jam27__10051__distance)));
            vlSelf->__Vfunc_shift_jam27__10051__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10051__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10051__distance)))));
            vlSelf->__Vfunc_shift_jam27__10051__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10051__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10051__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10051__discarded))));
        }
        __Vfunc_round_pack32__10050__shifted = vlSelf->__Vfunc_shift_jam27__10051__Vfuncout;
    }
    __Vfunc_round_pack32__10050__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10050__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10050__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10050__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10050__rounded)) {
        __Vfunc_round_pack32__10050__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10050__rounded, 1U));
        __Vfunc_round_pack32__10050__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10050__adjusted)));
    }
    __Vfunc_round_pack32__10050__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10050__rounded)) {
        __Vfunc_round_pack32__10050__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10050__adjusted)));
    }
    __Vfunc_round_pack32__10050__Vfuncout = (((0U == __Vfunc_round_pack32__10050__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10050__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10050__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10050__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10050__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10050__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10050__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__1__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10050__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10043__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10043__part 
                            = vlSelf->__Vfunc_leading_zero32__10043__value;
                        vlSelf->__Vfunc_leading_zero32__10043__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10043__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                            vlSelf->__Vfunc_leading_zero32__10043__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10043__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10043__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10043__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10043__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10043__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10043__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10043__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10043__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10044__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10044__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10044__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10044__adjusted = __Vfunc_round_pack32__10044__exponent;
    __Vfunc_round_pack32__10044__shifted = __Vfunc_round_pack32__10044__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10044__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10045__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10044__exponent)));
        vlSelf->__Vfunc_shift_jam27__10045__value = __Vfunc_round_pack32__10044__significand;
        __Vfunc_round_pack32__10044__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10045__distance))) {
            vlSelf->__Vfunc_shift_jam27__10045__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10045__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10045__distance))) {
            vlSelf->__Vfunc_shift_jam27__10045__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10045__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10045__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10045__value, (IData)(vlSelf->__Vfunc_shift_jam27__10045__distance)));
            vlSelf->__Vfunc_shift_jam27__10045__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10045__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10045__distance)))));
            vlSelf->__Vfunc_shift_jam27__10045__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10045__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10045__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10045__discarded))));
        }
        __Vfunc_round_pack32__10044__shifted = vlSelf->__Vfunc_shift_jam27__10045__Vfuncout;
    }
    __Vfunc_round_pack32__10044__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10044__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10044__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10044__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10044__rounded)) {
        __Vfunc_round_pack32__10044__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10044__rounded, 1U));
        __Vfunc_round_pack32__10044__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10044__adjusted)));
    }
    __Vfunc_round_pack32__10044__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10044__rounded)) {
        __Vfunc_round_pack32__10044__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10044__adjusted)));
    }
    __Vfunc_round_pack32__10044__Vfuncout = (((0U == __Vfunc_round_pack32__10044__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10044__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10044__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10044__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10044__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10044__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10044__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__63__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10044__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10037__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10037__part 
                            = vlSelf->__Vfunc_leading_zero32__10037__value;
                        vlSelf->__Vfunc_leading_zero32__10037__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10037__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                            vlSelf->__Vfunc_leading_zero32__10037__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10037__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10037__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10037__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10037__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10037__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10037__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10037__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10037__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10038__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10038__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10038__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10038__adjusted = __Vfunc_round_pack32__10038__exponent;
    __Vfunc_round_pack32__10038__shifted = __Vfunc_round_pack32__10038__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10038__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10039__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10038__exponent)));
        vlSelf->__Vfunc_shift_jam27__10039__value = __Vfunc_round_pack32__10038__significand;
        __Vfunc_round_pack32__10038__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10039__distance))) {
            vlSelf->__Vfunc_shift_jam27__10039__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10039__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10039__distance))) {
            vlSelf->__Vfunc_shift_jam27__10039__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10039__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10039__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10039__value, (IData)(vlSelf->__Vfunc_shift_jam27__10039__distance)));
            vlSelf->__Vfunc_shift_jam27__10039__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10039__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10039__distance)))));
            vlSelf->__Vfunc_shift_jam27__10039__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10039__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10039__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10039__discarded))));
        }
        __Vfunc_round_pack32__10038__shifted = vlSelf->__Vfunc_shift_jam27__10039__Vfuncout;
    }
    __Vfunc_round_pack32__10038__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10038__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10038__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10038__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10038__rounded)) {
        __Vfunc_round_pack32__10038__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10038__rounded, 1U));
        __Vfunc_round_pack32__10038__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10038__adjusted)));
    }
    __Vfunc_round_pack32__10038__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10038__rounded)) {
        __Vfunc_round_pack32__10038__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10038__adjusted)));
    }
    __Vfunc_round_pack32__10038__Vfuncout = (((0U == __Vfunc_round_pack32__10038__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10038__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10038__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10038__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10038__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10038__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10038__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__62__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10038__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10031__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10031__part 
                            = vlSelf->__Vfunc_leading_zero32__10031__value;
                        vlSelf->__Vfunc_leading_zero32__10031__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10031__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                            vlSelf->__Vfunc_leading_zero32__10031__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10031__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10031__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10031__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10031__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10031__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10031__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10031__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10031__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10032__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10032__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10032__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10032__adjusted = __Vfunc_round_pack32__10032__exponent;
    __Vfunc_round_pack32__10032__shifted = __Vfunc_round_pack32__10032__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10032__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10033__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10032__exponent)));
        vlSelf->__Vfunc_shift_jam27__10033__value = __Vfunc_round_pack32__10032__significand;
        __Vfunc_round_pack32__10032__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10033__distance))) {
            vlSelf->__Vfunc_shift_jam27__10033__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10033__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10033__distance))) {
            vlSelf->__Vfunc_shift_jam27__10033__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10033__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10033__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10033__value, (IData)(vlSelf->__Vfunc_shift_jam27__10033__distance)));
            vlSelf->__Vfunc_shift_jam27__10033__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10033__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10033__distance)))));
            vlSelf->__Vfunc_shift_jam27__10033__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10033__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10033__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10033__discarded))));
        }
        __Vfunc_round_pack32__10032__shifted = vlSelf->__Vfunc_shift_jam27__10033__Vfuncout;
    }
    __Vfunc_round_pack32__10032__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10032__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10032__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10032__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10032__rounded)) {
        __Vfunc_round_pack32__10032__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10032__rounded, 1U));
        __Vfunc_round_pack32__10032__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10032__adjusted)));
    }
    __Vfunc_round_pack32__10032__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10032__rounded)) {
        __Vfunc_round_pack32__10032__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10032__adjusted)));
    }
    __Vfunc_round_pack32__10032__Vfuncout = (((0U == __Vfunc_round_pack32__10032__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10032__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10032__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10032__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10032__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10032__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10032__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__61__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10032__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10025__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10025__part 
                            = vlSelf->__Vfunc_leading_zero32__10025__value;
                        vlSelf->__Vfunc_leading_zero32__10025__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10025__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                            vlSelf->__Vfunc_leading_zero32__10025__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10025__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10025__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10025__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10025__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10025__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10025__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10025__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10025__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10026__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10026__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10026__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10026__adjusted = __Vfunc_round_pack32__10026__exponent;
    __Vfunc_round_pack32__10026__shifted = __Vfunc_round_pack32__10026__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10026__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10027__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10026__exponent)));
        vlSelf->__Vfunc_shift_jam27__10027__value = __Vfunc_round_pack32__10026__significand;
        __Vfunc_round_pack32__10026__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10027__distance))) {
            vlSelf->__Vfunc_shift_jam27__10027__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10027__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10027__distance))) {
            vlSelf->__Vfunc_shift_jam27__10027__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10027__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10027__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10027__value, (IData)(vlSelf->__Vfunc_shift_jam27__10027__distance)));
            vlSelf->__Vfunc_shift_jam27__10027__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10027__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10027__distance)))));
            vlSelf->__Vfunc_shift_jam27__10027__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10027__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10027__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10027__discarded))));
        }
        __Vfunc_round_pack32__10026__shifted = vlSelf->__Vfunc_shift_jam27__10027__Vfuncout;
    }
    __Vfunc_round_pack32__10026__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10026__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10026__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10026__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10026__rounded)) {
        __Vfunc_round_pack32__10026__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10026__rounded, 1U));
        __Vfunc_round_pack32__10026__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10026__adjusted)));
    }
    __Vfunc_round_pack32__10026__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10026__rounded)) {
        __Vfunc_round_pack32__10026__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10026__adjusted)));
    }
    __Vfunc_round_pack32__10026__Vfuncout = (((0U == __Vfunc_round_pack32__10026__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10026__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10026__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10026__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10026__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10026__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10026__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__60__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10026__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10019__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10019__part 
                            = vlSelf->__Vfunc_leading_zero32__10019__value;
                        vlSelf->__Vfunc_leading_zero32__10019__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10019__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                            vlSelf->__Vfunc_leading_zero32__10019__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10019__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10019__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10019__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10019__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10019__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10019__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10019__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10019__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10020__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10020__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10020__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10020__adjusted = __Vfunc_round_pack32__10020__exponent;
    __Vfunc_round_pack32__10020__shifted = __Vfunc_round_pack32__10020__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10020__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10021__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10020__exponent)));
        vlSelf->__Vfunc_shift_jam27__10021__value = __Vfunc_round_pack32__10020__significand;
        __Vfunc_round_pack32__10020__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10021__distance))) {
            vlSelf->__Vfunc_shift_jam27__10021__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10021__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10021__distance))) {
            vlSelf->__Vfunc_shift_jam27__10021__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10021__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10021__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10021__value, (IData)(vlSelf->__Vfunc_shift_jam27__10021__distance)));
            vlSelf->__Vfunc_shift_jam27__10021__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10021__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10021__distance)))));
            vlSelf->__Vfunc_shift_jam27__10021__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10021__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10021__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10021__discarded))));
        }
        __Vfunc_round_pack32__10020__shifted = vlSelf->__Vfunc_shift_jam27__10021__Vfuncout;
    }
    __Vfunc_round_pack32__10020__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10020__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10020__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10020__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10020__rounded)) {
        __Vfunc_round_pack32__10020__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10020__rounded, 1U));
        __Vfunc_round_pack32__10020__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10020__adjusted)));
    }
    __Vfunc_round_pack32__10020__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10020__rounded)) {
        __Vfunc_round_pack32__10020__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10020__adjusted)));
    }
    __Vfunc_round_pack32__10020__Vfuncout = (((0U == __Vfunc_round_pack32__10020__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10020__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10020__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10020__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10020__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10020__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10020__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__59__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10020__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10013__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10013__part 
                            = vlSelf->__Vfunc_leading_zero32__10013__value;
                        vlSelf->__Vfunc_leading_zero32__10013__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10013__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                            vlSelf->__Vfunc_leading_zero32__10013__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10013__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10013__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10013__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10013__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10013__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10013__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10013__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10013__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10014__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10014__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10014__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10014__adjusted = __Vfunc_round_pack32__10014__exponent;
    __Vfunc_round_pack32__10014__shifted = __Vfunc_round_pack32__10014__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10014__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10015__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10014__exponent)));
        vlSelf->__Vfunc_shift_jam27__10015__value = __Vfunc_round_pack32__10014__significand;
        __Vfunc_round_pack32__10014__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10015__distance))) {
            vlSelf->__Vfunc_shift_jam27__10015__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10015__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10015__distance))) {
            vlSelf->__Vfunc_shift_jam27__10015__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10015__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10015__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10015__value, (IData)(vlSelf->__Vfunc_shift_jam27__10015__distance)));
            vlSelf->__Vfunc_shift_jam27__10015__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10015__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10015__distance)))));
            vlSelf->__Vfunc_shift_jam27__10015__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10015__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10015__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10015__discarded))));
        }
        __Vfunc_round_pack32__10014__shifted = vlSelf->__Vfunc_shift_jam27__10015__Vfuncout;
    }
    __Vfunc_round_pack32__10014__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10014__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10014__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10014__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10014__rounded)) {
        __Vfunc_round_pack32__10014__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10014__rounded, 1U));
        __Vfunc_round_pack32__10014__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10014__adjusted)));
    }
    __Vfunc_round_pack32__10014__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10014__rounded)) {
        __Vfunc_round_pack32__10014__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10014__adjusted)));
    }
    __Vfunc_round_pack32__10014__Vfuncout = (((0U == __Vfunc_round_pack32__10014__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10014__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10014__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10014__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10014__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10014__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10014__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__58__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10014__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10007__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10007__part 
                            = vlSelf->__Vfunc_leading_zero32__10007__value;
                        vlSelf->__Vfunc_leading_zero32__10007__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10007__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                            vlSelf->__Vfunc_leading_zero32__10007__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10007__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10007__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10007__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10007__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10007__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10007__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10007__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10007__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10008__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10008__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10008__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10008__adjusted = __Vfunc_round_pack32__10008__exponent;
    __Vfunc_round_pack32__10008__shifted = __Vfunc_round_pack32__10008__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10008__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10009__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10008__exponent)));
        vlSelf->__Vfunc_shift_jam27__10009__value = __Vfunc_round_pack32__10008__significand;
        __Vfunc_round_pack32__10008__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10009__distance))) {
            vlSelf->__Vfunc_shift_jam27__10009__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10009__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10009__distance))) {
            vlSelf->__Vfunc_shift_jam27__10009__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10009__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10009__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10009__value, (IData)(vlSelf->__Vfunc_shift_jam27__10009__distance)));
            vlSelf->__Vfunc_shift_jam27__10009__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10009__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10009__distance)))));
            vlSelf->__Vfunc_shift_jam27__10009__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10009__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10009__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10009__discarded))));
        }
        __Vfunc_round_pack32__10008__shifted = vlSelf->__Vfunc_shift_jam27__10009__Vfuncout;
    }
    __Vfunc_round_pack32__10008__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10008__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10008__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10008__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10008__rounded)) {
        __Vfunc_round_pack32__10008__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10008__rounded, 1U));
        __Vfunc_round_pack32__10008__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10008__adjusted)));
    }
    __Vfunc_round_pack32__10008__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10008__rounded)) {
        __Vfunc_round_pack32__10008__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10008__adjusted)));
    }
    __Vfunc_round_pack32__10008__Vfuncout = (((0U == __Vfunc_round_pack32__10008__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10008__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10008__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10008__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10008__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10008__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10008__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__57__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10008__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__10001__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__10001__part 
                            = vlSelf->__Vfunc_leading_zero32__10001__value;
                        vlSelf->__Vfunc_leading_zero32__10001__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__10001__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                            vlSelf->__Vfunc_leading_zero32__10001__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__10001__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__10001__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__10001__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__10001__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__10001__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__10001__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__10001__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__10001__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__10002__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__10002__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__10002__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__10002__adjusted = __Vfunc_round_pack32__10002__exponent;
    __Vfunc_round_pack32__10002__shifted = __Vfunc_round_pack32__10002__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__10002__exponent))) {
        vlSelf->__Vfunc_shift_jam27__10003__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__10002__exponent)));
        vlSelf->__Vfunc_shift_jam27__10003__value = __Vfunc_round_pack32__10002__significand;
        __Vfunc_round_pack32__10002__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__10003__distance))) {
            vlSelf->__Vfunc_shift_jam27__10003__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__10003__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__10003__distance))) {
            vlSelf->__Vfunc_shift_jam27__10003__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__10003__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__10003__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10003__value, (IData)(vlSelf->__Vfunc_shift_jam27__10003__distance)));
            vlSelf->__Vfunc_shift_jam27__10003__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__10003__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__10003__distance)))));
            vlSelf->__Vfunc_shift_jam27__10003__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__10003__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__10003__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__10003__discarded))));
        }
        __Vfunc_round_pack32__10002__shifted = vlSelf->__Vfunc_shift_jam27__10003__Vfuncout;
    }
    __Vfunc_round_pack32__10002__rounded = (0x1ffffffU 
                                            & ((0xffffffU 
                                                & (__Vfunc_round_pack32__10002__shifted 
                                                   >> 3U)) 
                                               + (1U 
                                                  & ((__Vfunc_round_pack32__10002__shifted 
                                                      >> 2U) 
                                                     & (IData)(
                                                               (0U 
                                                                != 
                                                                (0xbU 
                                                                 & __Vfunc_round_pack32__10002__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__10002__rounded)) {
        __Vfunc_round_pack32__10002__rounded = (0x1ffffffU 
                                                & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__10002__rounded, 1U));
        __Vfunc_round_pack32__10002__adjusted = (0xfffU 
                                                 & ((IData)(1U) 
                                                    + (IData)(__Vfunc_round_pack32__10002__adjusted)));
    }
    __Vfunc_round_pack32__10002__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__10002__rounded)) {
        __Vfunc_round_pack32__10002__biased = (0xffU 
                                               & ((IData)(0x7fU) 
                                                  + (IData)(__Vfunc_round_pack32__10002__adjusted)));
    }
    __Vfunc_round_pack32__10002__Vfuncout = (((0U == __Vfunc_round_pack32__10002__significand) 
                                              | (0U 
                                                 == __Vfunc_round_pack32__10002__rounded))
                                              ? ((QData)((IData)(__Vfunc_round_pack32__10002__negative)) 
                                                 << 0x1fU)
                                              : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__10002__adjusted))
                                                  ? 0x100000000ULL
                                                  : 
                                                 (((QData)((IData)(__Vfunc_round_pack32__10002__negative)) 
                                                   << 0x1fU) 
                                                  | (QData)((IData)(
                                                                    (((IData)(__Vfunc_round_pack32__10002__biased) 
                                                                      << 0x17U) 
                                                                     | (0x7fffffU 
                                                                        & __Vfunc_round_pack32__10002__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__56__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__10002__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9995__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9995__part 
                            = vlSelf->__Vfunc_leading_zero32__9995__value;
                        vlSelf->__Vfunc_leading_zero32__9995__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9995__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                            vlSelf->__Vfunc_leading_zero32__9995__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9995__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9995__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9995__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9995__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9995__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9995__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9995__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9995__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9996__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9996__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9996__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9996__adjusted = __Vfunc_round_pack32__9996__exponent;
    __Vfunc_round_pack32__9996__shifted = __Vfunc_round_pack32__9996__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9996__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9997__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9996__exponent)));
        vlSelf->__Vfunc_shift_jam27__9997__value = __Vfunc_round_pack32__9996__significand;
        __Vfunc_round_pack32__9996__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9997__distance))) {
            vlSelf->__Vfunc_shift_jam27__9997__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9997__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9997__distance))) {
            vlSelf->__Vfunc_shift_jam27__9997__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9997__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9997__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9997__value, (IData)(vlSelf->__Vfunc_shift_jam27__9997__distance)));
            vlSelf->__Vfunc_shift_jam27__9997__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9997__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9997__distance)))));
            vlSelf->__Vfunc_shift_jam27__9997__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9997__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9997__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9997__discarded))));
        }
        __Vfunc_round_pack32__9996__shifted = vlSelf->__Vfunc_shift_jam27__9997__Vfuncout;
    }
    __Vfunc_round_pack32__9996__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9996__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9996__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9996__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9996__rounded)) {
        __Vfunc_round_pack32__9996__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9996__rounded, 1U));
        __Vfunc_round_pack32__9996__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9996__adjusted)));
    }
    __Vfunc_round_pack32__9996__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9996__rounded)) {
        __Vfunc_round_pack32__9996__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9996__adjusted)));
    }
    __Vfunc_round_pack32__9996__Vfuncout = (((0U == __Vfunc_round_pack32__9996__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9996__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9996__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9996__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9996__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9996__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9996__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__55__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9996__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9989__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9989__part 
                            = vlSelf->__Vfunc_leading_zero32__9989__value;
                        vlSelf->__Vfunc_leading_zero32__9989__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9989__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                            vlSelf->__Vfunc_leading_zero32__9989__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9989__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9989__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9989__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9989__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9989__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9989__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9989__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9989__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9990__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9990__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9990__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9990__adjusted = __Vfunc_round_pack32__9990__exponent;
    __Vfunc_round_pack32__9990__shifted = __Vfunc_round_pack32__9990__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9990__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9991__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9990__exponent)));
        vlSelf->__Vfunc_shift_jam27__9991__value = __Vfunc_round_pack32__9990__significand;
        __Vfunc_round_pack32__9990__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9991__distance))) {
            vlSelf->__Vfunc_shift_jam27__9991__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9991__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9991__distance))) {
            vlSelf->__Vfunc_shift_jam27__9991__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9991__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9991__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9991__value, (IData)(vlSelf->__Vfunc_shift_jam27__9991__distance)));
            vlSelf->__Vfunc_shift_jam27__9991__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9991__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9991__distance)))));
            vlSelf->__Vfunc_shift_jam27__9991__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9991__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9991__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9991__discarded))));
        }
        __Vfunc_round_pack32__9990__shifted = vlSelf->__Vfunc_shift_jam27__9991__Vfuncout;
    }
    __Vfunc_round_pack32__9990__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9990__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9990__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9990__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9990__rounded)) {
        __Vfunc_round_pack32__9990__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9990__rounded, 1U));
        __Vfunc_round_pack32__9990__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9990__adjusted)));
    }
    __Vfunc_round_pack32__9990__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9990__rounded)) {
        __Vfunc_round_pack32__9990__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9990__adjusted)));
    }
    __Vfunc_round_pack32__9990__Vfuncout = (((0U == __Vfunc_round_pack32__9990__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9990__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9990__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9990__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9990__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9990__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9990__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__54__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9990__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9983__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9983__part 
                            = vlSelf->__Vfunc_leading_zero32__9983__value;
                        vlSelf->__Vfunc_leading_zero32__9983__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9983__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                            vlSelf->__Vfunc_leading_zero32__9983__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9983__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9983__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9983__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9983__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9983__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9983__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9983__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9983__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9984__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9984__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9984__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9984__adjusted = __Vfunc_round_pack32__9984__exponent;
    __Vfunc_round_pack32__9984__shifted = __Vfunc_round_pack32__9984__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9984__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9985__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9984__exponent)));
        vlSelf->__Vfunc_shift_jam27__9985__value = __Vfunc_round_pack32__9984__significand;
        __Vfunc_round_pack32__9984__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9985__distance))) {
            vlSelf->__Vfunc_shift_jam27__9985__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9985__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9985__distance))) {
            vlSelf->__Vfunc_shift_jam27__9985__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9985__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9985__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9985__value, (IData)(vlSelf->__Vfunc_shift_jam27__9985__distance)));
            vlSelf->__Vfunc_shift_jam27__9985__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9985__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9985__distance)))));
            vlSelf->__Vfunc_shift_jam27__9985__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9985__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9985__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9985__discarded))));
        }
        __Vfunc_round_pack32__9984__shifted = vlSelf->__Vfunc_shift_jam27__9985__Vfuncout;
    }
    __Vfunc_round_pack32__9984__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9984__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9984__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9984__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9984__rounded)) {
        __Vfunc_round_pack32__9984__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9984__rounded, 1U));
        __Vfunc_round_pack32__9984__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9984__adjusted)));
    }
    __Vfunc_round_pack32__9984__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9984__rounded)) {
        __Vfunc_round_pack32__9984__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9984__adjusted)));
    }
    __Vfunc_round_pack32__9984__Vfuncout = (((0U == __Vfunc_round_pack32__9984__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9984__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9984__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9984__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9984__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9984__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9984__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__53__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9984__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9977__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9977__part 
                            = vlSelf->__Vfunc_leading_zero32__9977__value;
                        vlSelf->__Vfunc_leading_zero32__9977__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9977__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                            vlSelf->__Vfunc_leading_zero32__9977__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9977__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9977__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9977__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9977__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9977__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9977__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9977__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9977__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9978__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9978__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9978__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9978__adjusted = __Vfunc_round_pack32__9978__exponent;
    __Vfunc_round_pack32__9978__shifted = __Vfunc_round_pack32__9978__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9978__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9979__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9978__exponent)));
        vlSelf->__Vfunc_shift_jam27__9979__value = __Vfunc_round_pack32__9978__significand;
        __Vfunc_round_pack32__9978__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9979__distance))) {
            vlSelf->__Vfunc_shift_jam27__9979__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9979__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9979__distance))) {
            vlSelf->__Vfunc_shift_jam27__9979__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9979__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9979__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9979__value, (IData)(vlSelf->__Vfunc_shift_jam27__9979__distance)));
            vlSelf->__Vfunc_shift_jam27__9979__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9979__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9979__distance)))));
            vlSelf->__Vfunc_shift_jam27__9979__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9979__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9979__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9979__discarded))));
        }
        __Vfunc_round_pack32__9978__shifted = vlSelf->__Vfunc_shift_jam27__9979__Vfuncout;
    }
    __Vfunc_round_pack32__9978__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9978__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9978__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9978__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9978__rounded)) {
        __Vfunc_round_pack32__9978__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9978__rounded, 1U));
        __Vfunc_round_pack32__9978__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9978__adjusted)));
    }
    __Vfunc_round_pack32__9978__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9978__rounded)) {
        __Vfunc_round_pack32__9978__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9978__adjusted)));
    }
    __Vfunc_round_pack32__9978__Vfuncout = (((0U == __Vfunc_round_pack32__9978__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9978__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9978__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9978__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9978__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9978__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9978__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__52__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9978__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9971__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9971__part 
                            = vlSelf->__Vfunc_leading_zero32__9971__value;
                        vlSelf->__Vfunc_leading_zero32__9971__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9971__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                            vlSelf->__Vfunc_leading_zero32__9971__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9971__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9971__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9971__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9971__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9971__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9971__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9971__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9971__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9972__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9972__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9972__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9972__adjusted = __Vfunc_round_pack32__9972__exponent;
    __Vfunc_round_pack32__9972__shifted = __Vfunc_round_pack32__9972__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9972__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9973__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9972__exponent)));
        vlSelf->__Vfunc_shift_jam27__9973__value = __Vfunc_round_pack32__9972__significand;
        __Vfunc_round_pack32__9972__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9973__distance))) {
            vlSelf->__Vfunc_shift_jam27__9973__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9973__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9973__distance))) {
            vlSelf->__Vfunc_shift_jam27__9973__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9973__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9973__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9973__value, (IData)(vlSelf->__Vfunc_shift_jam27__9973__distance)));
            vlSelf->__Vfunc_shift_jam27__9973__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9973__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9973__distance)))));
            vlSelf->__Vfunc_shift_jam27__9973__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9973__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9973__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9973__discarded))));
        }
        __Vfunc_round_pack32__9972__shifted = vlSelf->__Vfunc_shift_jam27__9973__Vfuncout;
    }
    __Vfunc_round_pack32__9972__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9972__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9972__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9972__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9972__rounded)) {
        __Vfunc_round_pack32__9972__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9972__rounded, 1U));
        __Vfunc_round_pack32__9972__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9972__adjusted)));
    }
    __Vfunc_round_pack32__9972__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9972__rounded)) {
        __Vfunc_round_pack32__9972__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9972__adjusted)));
    }
    __Vfunc_round_pack32__9972__Vfuncout = (((0U == __Vfunc_round_pack32__9972__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9972__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9972__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9972__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9972__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9972__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9972__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__51__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9972__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9965__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9965__part 
                            = vlSelf->__Vfunc_leading_zero32__9965__value;
                        vlSelf->__Vfunc_leading_zero32__9965__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9965__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                            vlSelf->__Vfunc_leading_zero32__9965__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9965__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9965__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9965__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9965__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9965__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9965__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9965__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9965__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9966__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9966__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9966__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9966__adjusted = __Vfunc_round_pack32__9966__exponent;
    __Vfunc_round_pack32__9966__shifted = __Vfunc_round_pack32__9966__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9966__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9967__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9966__exponent)));
        vlSelf->__Vfunc_shift_jam27__9967__value = __Vfunc_round_pack32__9966__significand;
        __Vfunc_round_pack32__9966__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9967__distance))) {
            vlSelf->__Vfunc_shift_jam27__9967__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9967__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9967__distance))) {
            vlSelf->__Vfunc_shift_jam27__9967__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9967__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9967__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9967__value, (IData)(vlSelf->__Vfunc_shift_jam27__9967__distance)));
            vlSelf->__Vfunc_shift_jam27__9967__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9967__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9967__distance)))));
            vlSelf->__Vfunc_shift_jam27__9967__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9967__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9967__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9967__discarded))));
        }
        __Vfunc_round_pack32__9966__shifted = vlSelf->__Vfunc_shift_jam27__9967__Vfuncout;
    }
    __Vfunc_round_pack32__9966__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9966__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9966__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9966__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9966__rounded)) {
        __Vfunc_round_pack32__9966__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9966__rounded, 1U));
        __Vfunc_round_pack32__9966__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9966__adjusted)));
    }
    __Vfunc_round_pack32__9966__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9966__rounded)) {
        __Vfunc_round_pack32__9966__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9966__adjusted)));
    }
    __Vfunc_round_pack32__9966__Vfuncout = (((0U == __Vfunc_round_pack32__9966__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9966__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9966__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9966__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9966__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9966__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9966__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__50__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9966__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9959__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9959__part 
                            = vlSelf->__Vfunc_leading_zero32__9959__value;
                        vlSelf->__Vfunc_leading_zero32__9959__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9959__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                            vlSelf->__Vfunc_leading_zero32__9959__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9959__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9959__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9959__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9959__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9959__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9959__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9959__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9959__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9960__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9960__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9960__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9960__adjusted = __Vfunc_round_pack32__9960__exponent;
    __Vfunc_round_pack32__9960__shifted = __Vfunc_round_pack32__9960__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9960__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9961__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9960__exponent)));
        vlSelf->__Vfunc_shift_jam27__9961__value = __Vfunc_round_pack32__9960__significand;
        __Vfunc_round_pack32__9960__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9961__distance))) {
            vlSelf->__Vfunc_shift_jam27__9961__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9961__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9961__distance))) {
            vlSelf->__Vfunc_shift_jam27__9961__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9961__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9961__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9961__value, (IData)(vlSelf->__Vfunc_shift_jam27__9961__distance)));
            vlSelf->__Vfunc_shift_jam27__9961__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9961__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9961__distance)))));
            vlSelf->__Vfunc_shift_jam27__9961__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9961__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9961__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9961__discarded))));
        }
        __Vfunc_round_pack32__9960__shifted = vlSelf->__Vfunc_shift_jam27__9961__Vfuncout;
    }
    __Vfunc_round_pack32__9960__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9960__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9960__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9960__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9960__rounded)) {
        __Vfunc_round_pack32__9960__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9960__rounded, 1U));
        __Vfunc_round_pack32__9960__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9960__adjusted)));
    }
    __Vfunc_round_pack32__9960__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9960__rounded)) {
        __Vfunc_round_pack32__9960__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9960__adjusted)));
    }
    __Vfunc_round_pack32__9960__Vfuncout = (((0U == __Vfunc_round_pack32__9960__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9960__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9960__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9960__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9960__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9960__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9960__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__49__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9960__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9953__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9953__part 
                            = vlSelf->__Vfunc_leading_zero32__9953__value;
                        vlSelf->__Vfunc_leading_zero32__9953__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9953__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                            vlSelf->__Vfunc_leading_zero32__9953__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9953__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9953__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9953__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9953__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9953__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9953__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9953__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9953__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9954__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9954__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9954__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9954__adjusted = __Vfunc_round_pack32__9954__exponent;
    __Vfunc_round_pack32__9954__shifted = __Vfunc_round_pack32__9954__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9954__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9955__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9954__exponent)));
        vlSelf->__Vfunc_shift_jam27__9955__value = __Vfunc_round_pack32__9954__significand;
        __Vfunc_round_pack32__9954__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9955__distance))) {
            vlSelf->__Vfunc_shift_jam27__9955__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9955__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9955__distance))) {
            vlSelf->__Vfunc_shift_jam27__9955__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9955__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9955__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9955__value, (IData)(vlSelf->__Vfunc_shift_jam27__9955__distance)));
            vlSelf->__Vfunc_shift_jam27__9955__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9955__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9955__distance)))));
            vlSelf->__Vfunc_shift_jam27__9955__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9955__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9955__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9955__discarded))));
        }
        __Vfunc_round_pack32__9954__shifted = vlSelf->__Vfunc_shift_jam27__9955__Vfuncout;
    }
    __Vfunc_round_pack32__9954__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9954__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9954__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9954__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9954__rounded)) {
        __Vfunc_round_pack32__9954__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9954__rounded, 1U));
        __Vfunc_round_pack32__9954__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9954__adjusted)));
    }
    __Vfunc_round_pack32__9954__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9954__rounded)) {
        __Vfunc_round_pack32__9954__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9954__adjusted)));
    }
    __Vfunc_round_pack32__9954__Vfuncout = (((0U == __Vfunc_round_pack32__9954__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9954__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9954__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9954__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9954__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9954__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9954__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__48__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9954__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9947__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9947__part 
                            = vlSelf->__Vfunc_leading_zero32__9947__value;
                        vlSelf->__Vfunc_leading_zero32__9947__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9947__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                            vlSelf->__Vfunc_leading_zero32__9947__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9947__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9947__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9947__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9947__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9947__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9947__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9947__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9947__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9948__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9948__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9948__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9948__adjusted = __Vfunc_round_pack32__9948__exponent;
    __Vfunc_round_pack32__9948__shifted = __Vfunc_round_pack32__9948__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9948__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9949__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9948__exponent)));
        vlSelf->__Vfunc_shift_jam27__9949__value = __Vfunc_round_pack32__9948__significand;
        __Vfunc_round_pack32__9948__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9949__distance))) {
            vlSelf->__Vfunc_shift_jam27__9949__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9949__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9949__distance))) {
            vlSelf->__Vfunc_shift_jam27__9949__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9949__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9949__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9949__value, (IData)(vlSelf->__Vfunc_shift_jam27__9949__distance)));
            vlSelf->__Vfunc_shift_jam27__9949__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9949__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9949__distance)))));
            vlSelf->__Vfunc_shift_jam27__9949__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9949__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9949__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9949__discarded))));
        }
        __Vfunc_round_pack32__9948__shifted = vlSelf->__Vfunc_shift_jam27__9949__Vfuncout;
    }
    __Vfunc_round_pack32__9948__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9948__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9948__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9948__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9948__rounded)) {
        __Vfunc_round_pack32__9948__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9948__rounded, 1U));
        __Vfunc_round_pack32__9948__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9948__adjusted)));
    }
    __Vfunc_round_pack32__9948__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9948__rounded)) {
        __Vfunc_round_pack32__9948__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9948__adjusted)));
    }
    __Vfunc_round_pack32__9948__Vfuncout = (((0U == __Vfunc_round_pack32__9948__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9948__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9948__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9948__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9948__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9948__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9948__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__47__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9948__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9941__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9941__part 
                            = vlSelf->__Vfunc_leading_zero32__9941__value;
                        vlSelf->__Vfunc_leading_zero32__9941__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9941__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                            vlSelf->__Vfunc_leading_zero32__9941__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9941__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9941__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9941__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9941__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9941__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9941__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9941__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9941__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9942__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9942__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9942__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9942__adjusted = __Vfunc_round_pack32__9942__exponent;
    __Vfunc_round_pack32__9942__shifted = __Vfunc_round_pack32__9942__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9942__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9943__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9942__exponent)));
        vlSelf->__Vfunc_shift_jam27__9943__value = __Vfunc_round_pack32__9942__significand;
        __Vfunc_round_pack32__9942__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9943__distance))) {
            vlSelf->__Vfunc_shift_jam27__9943__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9943__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9943__distance))) {
            vlSelf->__Vfunc_shift_jam27__9943__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9943__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9943__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9943__value, (IData)(vlSelf->__Vfunc_shift_jam27__9943__distance)));
            vlSelf->__Vfunc_shift_jam27__9943__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9943__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9943__distance)))));
            vlSelf->__Vfunc_shift_jam27__9943__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9943__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9943__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9943__discarded))));
        }
        __Vfunc_round_pack32__9942__shifted = vlSelf->__Vfunc_shift_jam27__9943__Vfuncout;
    }
    __Vfunc_round_pack32__9942__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9942__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9942__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9942__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9942__rounded)) {
        __Vfunc_round_pack32__9942__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9942__rounded, 1U));
        __Vfunc_round_pack32__9942__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9942__adjusted)));
    }
    __Vfunc_round_pack32__9942__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9942__rounded)) {
        __Vfunc_round_pack32__9942__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9942__adjusted)));
    }
    __Vfunc_round_pack32__9942__Vfuncout = (((0U == __Vfunc_round_pack32__9942__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9942__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9942__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9942__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9942__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9942__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9942__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__46__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9942__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9935__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9935__part 
                            = vlSelf->__Vfunc_leading_zero32__9935__value;
                        vlSelf->__Vfunc_leading_zero32__9935__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9935__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                            vlSelf->__Vfunc_leading_zero32__9935__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9935__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9935__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9935__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9935__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9935__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9935__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9935__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9935__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9936__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9936__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9936__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9936__adjusted = __Vfunc_round_pack32__9936__exponent;
    __Vfunc_round_pack32__9936__shifted = __Vfunc_round_pack32__9936__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9936__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9937__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9936__exponent)));
        vlSelf->__Vfunc_shift_jam27__9937__value = __Vfunc_round_pack32__9936__significand;
        __Vfunc_round_pack32__9936__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9937__distance))) {
            vlSelf->__Vfunc_shift_jam27__9937__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9937__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9937__distance))) {
            vlSelf->__Vfunc_shift_jam27__9937__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9937__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9937__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9937__value, (IData)(vlSelf->__Vfunc_shift_jam27__9937__distance)));
            vlSelf->__Vfunc_shift_jam27__9937__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9937__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9937__distance)))));
            vlSelf->__Vfunc_shift_jam27__9937__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9937__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9937__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9937__discarded))));
        }
        __Vfunc_round_pack32__9936__shifted = vlSelf->__Vfunc_shift_jam27__9937__Vfuncout;
    }
    __Vfunc_round_pack32__9936__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9936__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9936__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9936__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9936__rounded)) {
        __Vfunc_round_pack32__9936__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9936__rounded, 1U));
        __Vfunc_round_pack32__9936__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9936__adjusted)));
    }
    __Vfunc_round_pack32__9936__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9936__rounded)) {
        __Vfunc_round_pack32__9936__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9936__adjusted)));
    }
    __Vfunc_round_pack32__9936__Vfuncout = (((0U == __Vfunc_round_pack32__9936__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9936__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9936__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9936__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9936__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9936__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9936__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__45__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9936__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9929__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9929__part 
                            = vlSelf->__Vfunc_leading_zero32__9929__value;
                        vlSelf->__Vfunc_leading_zero32__9929__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9929__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                            vlSelf->__Vfunc_leading_zero32__9929__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9929__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9929__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9929__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9929__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9929__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9929__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9929__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9929__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9930__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9930__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9930__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9930__adjusted = __Vfunc_round_pack32__9930__exponent;
    __Vfunc_round_pack32__9930__shifted = __Vfunc_round_pack32__9930__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9930__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9931__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9930__exponent)));
        vlSelf->__Vfunc_shift_jam27__9931__value = __Vfunc_round_pack32__9930__significand;
        __Vfunc_round_pack32__9930__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9931__distance))) {
            vlSelf->__Vfunc_shift_jam27__9931__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9931__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9931__distance))) {
            vlSelf->__Vfunc_shift_jam27__9931__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9931__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9931__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9931__value, (IData)(vlSelf->__Vfunc_shift_jam27__9931__distance)));
            vlSelf->__Vfunc_shift_jam27__9931__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9931__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9931__distance)))));
            vlSelf->__Vfunc_shift_jam27__9931__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9931__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9931__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9931__discarded))));
        }
        __Vfunc_round_pack32__9930__shifted = vlSelf->__Vfunc_shift_jam27__9931__Vfuncout;
    }
    __Vfunc_round_pack32__9930__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9930__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9930__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9930__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9930__rounded)) {
        __Vfunc_round_pack32__9930__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9930__rounded, 1U));
        __Vfunc_round_pack32__9930__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9930__adjusted)));
    }
    __Vfunc_round_pack32__9930__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9930__rounded)) {
        __Vfunc_round_pack32__9930__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9930__adjusted)));
    }
    __Vfunc_round_pack32__9930__Vfuncout = (((0U == __Vfunc_round_pack32__9930__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9930__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9930__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9930__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9930__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9930__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9930__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__44__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9930__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9923__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9923__part 
                            = vlSelf->__Vfunc_leading_zero32__9923__value;
                        vlSelf->__Vfunc_leading_zero32__9923__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9923__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                            vlSelf->__Vfunc_leading_zero32__9923__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9923__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9923__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9923__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9923__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9923__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9923__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9923__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9923__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9924__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9924__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9924__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9924__adjusted = __Vfunc_round_pack32__9924__exponent;
    __Vfunc_round_pack32__9924__shifted = __Vfunc_round_pack32__9924__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9924__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9925__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9924__exponent)));
        vlSelf->__Vfunc_shift_jam27__9925__value = __Vfunc_round_pack32__9924__significand;
        __Vfunc_round_pack32__9924__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9925__distance))) {
            vlSelf->__Vfunc_shift_jam27__9925__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9925__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9925__distance))) {
            vlSelf->__Vfunc_shift_jam27__9925__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9925__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9925__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9925__value, (IData)(vlSelf->__Vfunc_shift_jam27__9925__distance)));
            vlSelf->__Vfunc_shift_jam27__9925__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9925__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9925__distance)))));
            vlSelf->__Vfunc_shift_jam27__9925__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9925__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9925__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9925__discarded))));
        }
        __Vfunc_round_pack32__9924__shifted = vlSelf->__Vfunc_shift_jam27__9925__Vfuncout;
    }
    __Vfunc_round_pack32__9924__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9924__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9924__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9924__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9924__rounded)) {
        __Vfunc_round_pack32__9924__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9924__rounded, 1U));
        __Vfunc_round_pack32__9924__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9924__adjusted)));
    }
    __Vfunc_round_pack32__9924__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9924__rounded)) {
        __Vfunc_round_pack32__9924__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9924__adjusted)));
    }
    __Vfunc_round_pack32__9924__Vfuncout = (((0U == __Vfunc_round_pack32__9924__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9924__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9924__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9924__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9924__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9924__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9924__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__43__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9924__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9917__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9917__part 
                            = vlSelf->__Vfunc_leading_zero32__9917__value;
                        vlSelf->__Vfunc_leading_zero32__9917__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9917__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                            vlSelf->__Vfunc_leading_zero32__9917__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9917__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9917__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9917__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9917__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9917__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9917__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9917__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9917__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9918__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9918__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9918__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9918__adjusted = __Vfunc_round_pack32__9918__exponent;
    __Vfunc_round_pack32__9918__shifted = __Vfunc_round_pack32__9918__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9918__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9919__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9918__exponent)));
        vlSelf->__Vfunc_shift_jam27__9919__value = __Vfunc_round_pack32__9918__significand;
        __Vfunc_round_pack32__9918__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9919__distance))) {
            vlSelf->__Vfunc_shift_jam27__9919__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9919__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9919__distance))) {
            vlSelf->__Vfunc_shift_jam27__9919__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9919__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9919__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9919__value, (IData)(vlSelf->__Vfunc_shift_jam27__9919__distance)));
            vlSelf->__Vfunc_shift_jam27__9919__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9919__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9919__distance)))));
            vlSelf->__Vfunc_shift_jam27__9919__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9919__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9919__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9919__discarded))));
        }
        __Vfunc_round_pack32__9918__shifted = vlSelf->__Vfunc_shift_jam27__9919__Vfuncout;
    }
    __Vfunc_round_pack32__9918__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9918__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9918__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9918__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9918__rounded)) {
        __Vfunc_round_pack32__9918__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9918__rounded, 1U));
        __Vfunc_round_pack32__9918__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9918__adjusted)));
    }
    __Vfunc_round_pack32__9918__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9918__rounded)) {
        __Vfunc_round_pack32__9918__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9918__adjusted)));
    }
    __Vfunc_round_pack32__9918__Vfuncout = (((0U == __Vfunc_round_pack32__9918__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9918__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9918__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9918__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9918__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9918__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9918__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__42__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9918__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9911__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9911__part 
                            = vlSelf->__Vfunc_leading_zero32__9911__value;
                        vlSelf->__Vfunc_leading_zero32__9911__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9911__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                            vlSelf->__Vfunc_leading_zero32__9911__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9911__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9911__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9911__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9911__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9911__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9911__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9911__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9911__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9912__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9912__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9912__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9912__adjusted = __Vfunc_round_pack32__9912__exponent;
    __Vfunc_round_pack32__9912__shifted = __Vfunc_round_pack32__9912__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9912__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9913__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9912__exponent)));
        vlSelf->__Vfunc_shift_jam27__9913__value = __Vfunc_round_pack32__9912__significand;
        __Vfunc_round_pack32__9912__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9913__distance))) {
            vlSelf->__Vfunc_shift_jam27__9913__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9913__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9913__distance))) {
            vlSelf->__Vfunc_shift_jam27__9913__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9913__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9913__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9913__value, (IData)(vlSelf->__Vfunc_shift_jam27__9913__distance)));
            vlSelf->__Vfunc_shift_jam27__9913__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9913__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9913__distance)))));
            vlSelf->__Vfunc_shift_jam27__9913__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9913__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9913__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9913__discarded))));
        }
        __Vfunc_round_pack32__9912__shifted = vlSelf->__Vfunc_shift_jam27__9913__Vfuncout;
    }
    __Vfunc_round_pack32__9912__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9912__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9912__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9912__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9912__rounded)) {
        __Vfunc_round_pack32__9912__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9912__rounded, 1U));
        __Vfunc_round_pack32__9912__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9912__adjusted)));
    }
    __Vfunc_round_pack32__9912__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9912__rounded)) {
        __Vfunc_round_pack32__9912__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9912__adjusted)));
    }
    __Vfunc_round_pack32__9912__Vfuncout = (((0U == __Vfunc_round_pack32__9912__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9912__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9912__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9912__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9912__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9912__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9912__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__41__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9912__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9905__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9905__part 
                            = vlSelf->__Vfunc_leading_zero32__9905__value;
                        vlSelf->__Vfunc_leading_zero32__9905__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9905__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                            vlSelf->__Vfunc_leading_zero32__9905__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9905__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9905__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9905__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9905__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9905__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9905__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9905__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9905__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9906__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9906__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9906__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9906__adjusted = __Vfunc_round_pack32__9906__exponent;
    __Vfunc_round_pack32__9906__shifted = __Vfunc_round_pack32__9906__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9906__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9907__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9906__exponent)));
        vlSelf->__Vfunc_shift_jam27__9907__value = __Vfunc_round_pack32__9906__significand;
        __Vfunc_round_pack32__9906__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9907__distance))) {
            vlSelf->__Vfunc_shift_jam27__9907__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9907__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9907__distance))) {
            vlSelf->__Vfunc_shift_jam27__9907__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9907__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9907__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9907__value, (IData)(vlSelf->__Vfunc_shift_jam27__9907__distance)));
            vlSelf->__Vfunc_shift_jam27__9907__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9907__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9907__distance)))));
            vlSelf->__Vfunc_shift_jam27__9907__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9907__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9907__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9907__discarded))));
        }
        __Vfunc_round_pack32__9906__shifted = vlSelf->__Vfunc_shift_jam27__9907__Vfuncout;
    }
    __Vfunc_round_pack32__9906__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9906__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9906__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9906__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9906__rounded)) {
        __Vfunc_round_pack32__9906__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9906__rounded, 1U));
        __Vfunc_round_pack32__9906__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9906__adjusted)));
    }
    __Vfunc_round_pack32__9906__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9906__rounded)) {
        __Vfunc_round_pack32__9906__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9906__adjusted)));
    }
    __Vfunc_round_pack32__9906__Vfuncout = (((0U == __Vfunc_round_pack32__9906__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9906__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9906__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9906__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9906__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9906__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9906__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__40__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9906__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9899__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9899__part 
                            = vlSelf->__Vfunc_leading_zero32__9899__value;
                        vlSelf->__Vfunc_leading_zero32__9899__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9899__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                            vlSelf->__Vfunc_leading_zero32__9899__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9899__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9899__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9899__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9899__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9899__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9899__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9899__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9899__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9900__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9900__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9900__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9900__adjusted = __Vfunc_round_pack32__9900__exponent;
    __Vfunc_round_pack32__9900__shifted = __Vfunc_round_pack32__9900__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9900__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9901__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9900__exponent)));
        vlSelf->__Vfunc_shift_jam27__9901__value = __Vfunc_round_pack32__9900__significand;
        __Vfunc_round_pack32__9900__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9901__distance))) {
            vlSelf->__Vfunc_shift_jam27__9901__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9901__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9901__distance))) {
            vlSelf->__Vfunc_shift_jam27__9901__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9901__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9901__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9901__value, (IData)(vlSelf->__Vfunc_shift_jam27__9901__distance)));
            vlSelf->__Vfunc_shift_jam27__9901__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9901__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9901__distance)))));
            vlSelf->__Vfunc_shift_jam27__9901__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9901__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9901__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9901__discarded))));
        }
        __Vfunc_round_pack32__9900__shifted = vlSelf->__Vfunc_shift_jam27__9901__Vfuncout;
    }
    __Vfunc_round_pack32__9900__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9900__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9900__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9900__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9900__rounded)) {
        __Vfunc_round_pack32__9900__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9900__rounded, 1U));
        __Vfunc_round_pack32__9900__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9900__adjusted)));
    }
    __Vfunc_round_pack32__9900__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9900__rounded)) {
        __Vfunc_round_pack32__9900__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9900__adjusted)));
    }
    __Vfunc_round_pack32__9900__Vfuncout = (((0U == __Vfunc_round_pack32__9900__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9900__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9900__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9900__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9900__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9900__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9900__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__39__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9900__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9893__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9893__part 
                            = vlSelf->__Vfunc_leading_zero32__9893__value;
                        vlSelf->__Vfunc_leading_zero32__9893__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9893__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                            vlSelf->__Vfunc_leading_zero32__9893__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9893__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9893__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9893__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9893__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9893__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9893__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9893__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9893__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9894__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9894__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9894__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9894__adjusted = __Vfunc_round_pack32__9894__exponent;
    __Vfunc_round_pack32__9894__shifted = __Vfunc_round_pack32__9894__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9894__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9895__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9894__exponent)));
        vlSelf->__Vfunc_shift_jam27__9895__value = __Vfunc_round_pack32__9894__significand;
        __Vfunc_round_pack32__9894__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9895__distance))) {
            vlSelf->__Vfunc_shift_jam27__9895__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9895__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9895__distance))) {
            vlSelf->__Vfunc_shift_jam27__9895__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9895__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9895__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9895__value, (IData)(vlSelf->__Vfunc_shift_jam27__9895__distance)));
            vlSelf->__Vfunc_shift_jam27__9895__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9895__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9895__distance)))));
            vlSelf->__Vfunc_shift_jam27__9895__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9895__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9895__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9895__discarded))));
        }
        __Vfunc_round_pack32__9894__shifted = vlSelf->__Vfunc_shift_jam27__9895__Vfuncout;
    }
    __Vfunc_round_pack32__9894__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9894__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9894__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9894__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9894__rounded)) {
        __Vfunc_round_pack32__9894__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9894__rounded, 1U));
        __Vfunc_round_pack32__9894__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9894__adjusted)));
    }
    __Vfunc_round_pack32__9894__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9894__rounded)) {
        __Vfunc_round_pack32__9894__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9894__adjusted)));
    }
    __Vfunc_round_pack32__9894__Vfuncout = (((0U == __Vfunc_round_pack32__9894__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9894__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9894__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9894__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9894__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9894__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9894__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__38__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9894__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9887__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9887__part 
                            = vlSelf->__Vfunc_leading_zero32__9887__value;
                        vlSelf->__Vfunc_leading_zero32__9887__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9887__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                            vlSelf->__Vfunc_leading_zero32__9887__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9887__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9887__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9887__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9887__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9887__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9887__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9887__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9887__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9888__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9888__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9888__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9888__adjusted = __Vfunc_round_pack32__9888__exponent;
    __Vfunc_round_pack32__9888__shifted = __Vfunc_round_pack32__9888__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9888__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9889__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9888__exponent)));
        vlSelf->__Vfunc_shift_jam27__9889__value = __Vfunc_round_pack32__9888__significand;
        __Vfunc_round_pack32__9888__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9889__distance))) {
            vlSelf->__Vfunc_shift_jam27__9889__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9889__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9889__distance))) {
            vlSelf->__Vfunc_shift_jam27__9889__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9889__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9889__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9889__value, (IData)(vlSelf->__Vfunc_shift_jam27__9889__distance)));
            vlSelf->__Vfunc_shift_jam27__9889__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9889__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9889__distance)))));
            vlSelf->__Vfunc_shift_jam27__9889__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9889__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9889__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9889__discarded))));
        }
        __Vfunc_round_pack32__9888__shifted = vlSelf->__Vfunc_shift_jam27__9889__Vfuncout;
    }
    __Vfunc_round_pack32__9888__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9888__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9888__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9888__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9888__rounded)) {
        __Vfunc_round_pack32__9888__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9888__rounded, 1U));
        __Vfunc_round_pack32__9888__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9888__adjusted)));
    }
    __Vfunc_round_pack32__9888__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9888__rounded)) {
        __Vfunc_round_pack32__9888__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9888__adjusted)));
    }
    __Vfunc_round_pack32__9888__Vfuncout = (((0U == __Vfunc_round_pack32__9888__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9888__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9888__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9888__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9888__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9888__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9888__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__37__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9888__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9881__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9881__part 
                            = vlSelf->__Vfunc_leading_zero32__9881__value;
                        vlSelf->__Vfunc_leading_zero32__9881__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9881__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                            vlSelf->__Vfunc_leading_zero32__9881__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9881__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9881__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9881__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9881__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9881__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9881__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9881__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9881__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9882__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9882__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9882__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9882__adjusted = __Vfunc_round_pack32__9882__exponent;
    __Vfunc_round_pack32__9882__shifted = __Vfunc_round_pack32__9882__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9882__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9883__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9882__exponent)));
        vlSelf->__Vfunc_shift_jam27__9883__value = __Vfunc_round_pack32__9882__significand;
        __Vfunc_round_pack32__9882__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9883__distance))) {
            vlSelf->__Vfunc_shift_jam27__9883__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9883__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9883__distance))) {
            vlSelf->__Vfunc_shift_jam27__9883__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9883__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9883__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9883__value, (IData)(vlSelf->__Vfunc_shift_jam27__9883__distance)));
            vlSelf->__Vfunc_shift_jam27__9883__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9883__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9883__distance)))));
            vlSelf->__Vfunc_shift_jam27__9883__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9883__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9883__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9883__discarded))));
        }
        __Vfunc_round_pack32__9882__shifted = vlSelf->__Vfunc_shift_jam27__9883__Vfuncout;
    }
    __Vfunc_round_pack32__9882__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9882__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9882__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9882__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9882__rounded)) {
        __Vfunc_round_pack32__9882__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9882__rounded, 1U));
        __Vfunc_round_pack32__9882__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9882__adjusted)));
    }
    __Vfunc_round_pack32__9882__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9882__rounded)) {
        __Vfunc_round_pack32__9882__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9882__adjusted)));
    }
    __Vfunc_round_pack32__9882__Vfuncout = (((0U == __Vfunc_round_pack32__9882__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9882__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9882__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9882__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9882__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9882__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9882__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__36__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9882__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9875__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9875__part 
                            = vlSelf->__Vfunc_leading_zero32__9875__value;
                        vlSelf->__Vfunc_leading_zero32__9875__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9875__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                            vlSelf->__Vfunc_leading_zero32__9875__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9875__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9875__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9875__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9875__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9875__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9875__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9875__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9875__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9876__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9876__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9876__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9876__adjusted = __Vfunc_round_pack32__9876__exponent;
    __Vfunc_round_pack32__9876__shifted = __Vfunc_round_pack32__9876__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9876__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9877__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9876__exponent)));
        vlSelf->__Vfunc_shift_jam27__9877__value = __Vfunc_round_pack32__9876__significand;
        __Vfunc_round_pack32__9876__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9877__distance))) {
            vlSelf->__Vfunc_shift_jam27__9877__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9877__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9877__distance))) {
            vlSelf->__Vfunc_shift_jam27__9877__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9877__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9877__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9877__value, (IData)(vlSelf->__Vfunc_shift_jam27__9877__distance)));
            vlSelf->__Vfunc_shift_jam27__9877__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9877__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9877__distance)))));
            vlSelf->__Vfunc_shift_jam27__9877__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9877__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9877__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9877__discarded))));
        }
        __Vfunc_round_pack32__9876__shifted = vlSelf->__Vfunc_shift_jam27__9877__Vfuncout;
    }
    __Vfunc_round_pack32__9876__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9876__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9876__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9876__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9876__rounded)) {
        __Vfunc_round_pack32__9876__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9876__rounded, 1U));
        __Vfunc_round_pack32__9876__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9876__adjusted)));
    }
    __Vfunc_round_pack32__9876__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9876__rounded)) {
        __Vfunc_round_pack32__9876__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9876__adjusted)));
    }
    __Vfunc_round_pack32__9876__Vfuncout = (((0U == __Vfunc_round_pack32__9876__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9876__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9876__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9876__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9876__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9876__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9876__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__35__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9876__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9869__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9869__part 
                            = vlSelf->__Vfunc_leading_zero32__9869__value;
                        vlSelf->__Vfunc_leading_zero32__9869__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9869__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                            vlSelf->__Vfunc_leading_zero32__9869__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9869__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9869__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9869__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9869__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9869__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9869__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9869__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9869__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9870__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9870__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9870__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9870__adjusted = __Vfunc_round_pack32__9870__exponent;
    __Vfunc_round_pack32__9870__shifted = __Vfunc_round_pack32__9870__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9870__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9871__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9870__exponent)));
        vlSelf->__Vfunc_shift_jam27__9871__value = __Vfunc_round_pack32__9870__significand;
        __Vfunc_round_pack32__9870__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9871__distance))) {
            vlSelf->__Vfunc_shift_jam27__9871__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9871__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9871__distance))) {
            vlSelf->__Vfunc_shift_jam27__9871__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9871__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9871__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9871__value, (IData)(vlSelf->__Vfunc_shift_jam27__9871__distance)));
            vlSelf->__Vfunc_shift_jam27__9871__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9871__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9871__distance)))));
            vlSelf->__Vfunc_shift_jam27__9871__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9871__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9871__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9871__discarded))));
        }
        __Vfunc_round_pack32__9870__shifted = vlSelf->__Vfunc_shift_jam27__9871__Vfuncout;
    }
    __Vfunc_round_pack32__9870__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9870__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9870__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9870__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9870__rounded)) {
        __Vfunc_round_pack32__9870__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9870__rounded, 1U));
        __Vfunc_round_pack32__9870__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9870__adjusted)));
    }
    __Vfunc_round_pack32__9870__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9870__rounded)) {
        __Vfunc_round_pack32__9870__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9870__adjusted)));
    }
    __Vfunc_round_pack32__9870__Vfuncout = (((0U == __Vfunc_round_pack32__9870__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9870__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9870__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9870__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9870__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9870__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9870__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__34__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9870__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9863__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9863__part 
                            = vlSelf->__Vfunc_leading_zero32__9863__value;
                        vlSelf->__Vfunc_leading_zero32__9863__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9863__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                            vlSelf->__Vfunc_leading_zero32__9863__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9863__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9863__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9863__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9863__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9863__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9863__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9863__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9863__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9864__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9864__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9864__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9864__adjusted = __Vfunc_round_pack32__9864__exponent;
    __Vfunc_round_pack32__9864__shifted = __Vfunc_round_pack32__9864__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9864__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9865__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9864__exponent)));
        vlSelf->__Vfunc_shift_jam27__9865__value = __Vfunc_round_pack32__9864__significand;
        __Vfunc_round_pack32__9864__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9865__distance))) {
            vlSelf->__Vfunc_shift_jam27__9865__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9865__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9865__distance))) {
            vlSelf->__Vfunc_shift_jam27__9865__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9865__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9865__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9865__value, (IData)(vlSelf->__Vfunc_shift_jam27__9865__distance)));
            vlSelf->__Vfunc_shift_jam27__9865__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9865__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9865__distance)))));
            vlSelf->__Vfunc_shift_jam27__9865__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9865__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9865__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9865__discarded))));
        }
        __Vfunc_round_pack32__9864__shifted = vlSelf->__Vfunc_shift_jam27__9865__Vfuncout;
    }
    __Vfunc_round_pack32__9864__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9864__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9864__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9864__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9864__rounded)) {
        __Vfunc_round_pack32__9864__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9864__rounded, 1U));
        __Vfunc_round_pack32__9864__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9864__adjusted)));
    }
    __Vfunc_round_pack32__9864__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9864__rounded)) {
        __Vfunc_round_pack32__9864__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9864__adjusted)));
    }
    __Vfunc_round_pack32__9864__Vfuncout = (((0U == __Vfunc_round_pack32__9864__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9864__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9864__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9864__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9864__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9864__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9864__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__33__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9864__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9857__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9857__part 
                            = vlSelf->__Vfunc_leading_zero32__9857__value;
                        vlSelf->__Vfunc_leading_zero32__9857__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9857__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                            vlSelf->__Vfunc_leading_zero32__9857__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9857__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9857__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9857__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9857__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9857__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9857__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9857__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9857__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9858__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9858__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9858__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9858__adjusted = __Vfunc_round_pack32__9858__exponent;
    __Vfunc_round_pack32__9858__shifted = __Vfunc_round_pack32__9858__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9858__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9859__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9858__exponent)));
        vlSelf->__Vfunc_shift_jam27__9859__value = __Vfunc_round_pack32__9858__significand;
        __Vfunc_round_pack32__9858__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9859__distance))) {
            vlSelf->__Vfunc_shift_jam27__9859__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9859__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9859__distance))) {
            vlSelf->__Vfunc_shift_jam27__9859__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9859__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9859__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9859__value, (IData)(vlSelf->__Vfunc_shift_jam27__9859__distance)));
            vlSelf->__Vfunc_shift_jam27__9859__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9859__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9859__distance)))));
            vlSelf->__Vfunc_shift_jam27__9859__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9859__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9859__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9859__discarded))));
        }
        __Vfunc_round_pack32__9858__shifted = vlSelf->__Vfunc_shift_jam27__9859__Vfuncout;
    }
    __Vfunc_round_pack32__9858__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9858__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9858__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9858__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9858__rounded)) {
        __Vfunc_round_pack32__9858__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9858__rounded, 1U));
        __Vfunc_round_pack32__9858__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9858__adjusted)));
    }
    __Vfunc_round_pack32__9858__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9858__rounded)) {
        __Vfunc_round_pack32__9858__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9858__adjusted)));
    }
    __Vfunc_round_pack32__9858__Vfuncout = (((0U == __Vfunc_round_pack32__9858__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9858__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9858__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9858__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9858__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9858__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9858__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__32__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9858__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9851__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9851__part 
                            = vlSelf->__Vfunc_leading_zero32__9851__value;
                        vlSelf->__Vfunc_leading_zero32__9851__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9851__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                            vlSelf->__Vfunc_leading_zero32__9851__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9851__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9851__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9851__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9851__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9851__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9851__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9851__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9851__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9852__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9852__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9852__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9852__adjusted = __Vfunc_round_pack32__9852__exponent;
    __Vfunc_round_pack32__9852__shifted = __Vfunc_round_pack32__9852__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9852__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9853__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9852__exponent)));
        vlSelf->__Vfunc_shift_jam27__9853__value = __Vfunc_round_pack32__9852__significand;
        __Vfunc_round_pack32__9852__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9853__distance))) {
            vlSelf->__Vfunc_shift_jam27__9853__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9853__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9853__distance))) {
            vlSelf->__Vfunc_shift_jam27__9853__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9853__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9853__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9853__value, (IData)(vlSelf->__Vfunc_shift_jam27__9853__distance)));
            vlSelf->__Vfunc_shift_jam27__9853__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9853__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9853__distance)))));
            vlSelf->__Vfunc_shift_jam27__9853__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9853__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9853__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9853__discarded))));
        }
        __Vfunc_round_pack32__9852__shifted = vlSelf->__Vfunc_shift_jam27__9853__Vfuncout;
    }
    __Vfunc_round_pack32__9852__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9852__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9852__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9852__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9852__rounded)) {
        __Vfunc_round_pack32__9852__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9852__rounded, 1U));
        __Vfunc_round_pack32__9852__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9852__adjusted)));
    }
    __Vfunc_round_pack32__9852__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9852__rounded)) {
        __Vfunc_round_pack32__9852__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9852__adjusted)));
    }
    __Vfunc_round_pack32__9852__Vfuncout = (((0U == __Vfunc_round_pack32__9852__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9852__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9852__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9852__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9852__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9852__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9852__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__31__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9852__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9845__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9845__part 
                            = vlSelf->__Vfunc_leading_zero32__9845__value;
                        vlSelf->__Vfunc_leading_zero32__9845__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9845__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                            vlSelf->__Vfunc_leading_zero32__9845__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9845__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9845__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9845__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9845__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9845__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9845__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9845__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9845__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9846__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9846__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9846__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9846__adjusted = __Vfunc_round_pack32__9846__exponent;
    __Vfunc_round_pack32__9846__shifted = __Vfunc_round_pack32__9846__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9846__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9847__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9846__exponent)));
        vlSelf->__Vfunc_shift_jam27__9847__value = __Vfunc_round_pack32__9846__significand;
        __Vfunc_round_pack32__9846__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9847__distance))) {
            vlSelf->__Vfunc_shift_jam27__9847__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9847__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9847__distance))) {
            vlSelf->__Vfunc_shift_jam27__9847__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9847__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9847__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9847__value, (IData)(vlSelf->__Vfunc_shift_jam27__9847__distance)));
            vlSelf->__Vfunc_shift_jam27__9847__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9847__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9847__distance)))));
            vlSelf->__Vfunc_shift_jam27__9847__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9847__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9847__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9847__discarded))));
        }
        __Vfunc_round_pack32__9846__shifted = vlSelf->__Vfunc_shift_jam27__9847__Vfuncout;
    }
    __Vfunc_round_pack32__9846__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9846__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9846__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9846__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9846__rounded)) {
        __Vfunc_round_pack32__9846__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9846__rounded, 1U));
        __Vfunc_round_pack32__9846__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9846__adjusted)));
    }
    __Vfunc_round_pack32__9846__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9846__rounded)) {
        __Vfunc_round_pack32__9846__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9846__adjusted)));
    }
    __Vfunc_round_pack32__9846__Vfuncout = (((0U == __Vfunc_round_pack32__9846__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9846__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9846__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9846__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9846__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9846__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9846__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__30__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9846__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9839__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9839__part 
                            = vlSelf->__Vfunc_leading_zero32__9839__value;
                        vlSelf->__Vfunc_leading_zero32__9839__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9839__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                            vlSelf->__Vfunc_leading_zero32__9839__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9839__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9839__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9839__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9839__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9839__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9839__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9839__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9839__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9840__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9840__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9840__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9840__adjusted = __Vfunc_round_pack32__9840__exponent;
    __Vfunc_round_pack32__9840__shifted = __Vfunc_round_pack32__9840__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9840__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9841__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9840__exponent)));
        vlSelf->__Vfunc_shift_jam27__9841__value = __Vfunc_round_pack32__9840__significand;
        __Vfunc_round_pack32__9840__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9841__distance))) {
            vlSelf->__Vfunc_shift_jam27__9841__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9841__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9841__distance))) {
            vlSelf->__Vfunc_shift_jam27__9841__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9841__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9841__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9841__value, (IData)(vlSelf->__Vfunc_shift_jam27__9841__distance)));
            vlSelf->__Vfunc_shift_jam27__9841__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9841__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9841__distance)))));
            vlSelf->__Vfunc_shift_jam27__9841__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9841__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9841__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9841__discarded))));
        }
        __Vfunc_round_pack32__9840__shifted = vlSelf->__Vfunc_shift_jam27__9841__Vfuncout;
    }
    __Vfunc_round_pack32__9840__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9840__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9840__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9840__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9840__rounded)) {
        __Vfunc_round_pack32__9840__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9840__rounded, 1U));
        __Vfunc_round_pack32__9840__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9840__adjusted)));
    }
    __Vfunc_round_pack32__9840__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9840__rounded)) {
        __Vfunc_round_pack32__9840__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9840__adjusted)));
    }
    __Vfunc_round_pack32__9840__Vfuncout = (((0U == __Vfunc_round_pack32__9840__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9840__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9840__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9840__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9840__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9840__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9840__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__29__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9840__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9833__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9833__part 
                            = vlSelf->__Vfunc_leading_zero32__9833__value;
                        vlSelf->__Vfunc_leading_zero32__9833__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9833__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                            vlSelf->__Vfunc_leading_zero32__9833__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9833__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9833__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9833__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9833__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9833__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9833__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9833__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9833__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9834__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9834__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9834__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9834__adjusted = __Vfunc_round_pack32__9834__exponent;
    __Vfunc_round_pack32__9834__shifted = __Vfunc_round_pack32__9834__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9834__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9835__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9834__exponent)));
        vlSelf->__Vfunc_shift_jam27__9835__value = __Vfunc_round_pack32__9834__significand;
        __Vfunc_round_pack32__9834__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9835__distance))) {
            vlSelf->__Vfunc_shift_jam27__9835__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9835__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9835__distance))) {
            vlSelf->__Vfunc_shift_jam27__9835__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9835__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9835__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9835__value, (IData)(vlSelf->__Vfunc_shift_jam27__9835__distance)));
            vlSelf->__Vfunc_shift_jam27__9835__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9835__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9835__distance)))));
            vlSelf->__Vfunc_shift_jam27__9835__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9835__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9835__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9835__discarded))));
        }
        __Vfunc_round_pack32__9834__shifted = vlSelf->__Vfunc_shift_jam27__9835__Vfuncout;
    }
    __Vfunc_round_pack32__9834__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9834__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9834__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9834__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9834__rounded)) {
        __Vfunc_round_pack32__9834__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9834__rounded, 1U));
        __Vfunc_round_pack32__9834__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9834__adjusted)));
    }
    __Vfunc_round_pack32__9834__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9834__rounded)) {
        __Vfunc_round_pack32__9834__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9834__adjusted)));
    }
    __Vfunc_round_pack32__9834__Vfuncout = (((0U == __Vfunc_round_pack32__9834__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9834__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9834__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9834__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9834__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9834__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9834__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__28__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9834__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9827__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9827__part 
                            = vlSelf->__Vfunc_leading_zero32__9827__value;
                        vlSelf->__Vfunc_leading_zero32__9827__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9827__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                            vlSelf->__Vfunc_leading_zero32__9827__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9827__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9827__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9827__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9827__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9827__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9827__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9827__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9827__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9828__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9828__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9828__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9828__adjusted = __Vfunc_round_pack32__9828__exponent;
    __Vfunc_round_pack32__9828__shifted = __Vfunc_round_pack32__9828__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9828__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9829__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9828__exponent)));
        vlSelf->__Vfunc_shift_jam27__9829__value = __Vfunc_round_pack32__9828__significand;
        __Vfunc_round_pack32__9828__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9829__distance))) {
            vlSelf->__Vfunc_shift_jam27__9829__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9829__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9829__distance))) {
            vlSelf->__Vfunc_shift_jam27__9829__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9829__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9829__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9829__value, (IData)(vlSelf->__Vfunc_shift_jam27__9829__distance)));
            vlSelf->__Vfunc_shift_jam27__9829__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9829__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9829__distance)))));
            vlSelf->__Vfunc_shift_jam27__9829__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9829__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9829__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9829__discarded))));
        }
        __Vfunc_round_pack32__9828__shifted = vlSelf->__Vfunc_shift_jam27__9829__Vfuncout;
    }
    __Vfunc_round_pack32__9828__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9828__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9828__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9828__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9828__rounded)) {
        __Vfunc_round_pack32__9828__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9828__rounded, 1U));
        __Vfunc_round_pack32__9828__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9828__adjusted)));
    }
    __Vfunc_round_pack32__9828__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9828__rounded)) {
        __Vfunc_round_pack32__9828__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9828__adjusted)));
    }
    __Vfunc_round_pack32__9828__Vfuncout = (((0U == __Vfunc_round_pack32__9828__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9828__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9828__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9828__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9828__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9828__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9828__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__27__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9828__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9821__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9821__part 
                            = vlSelf->__Vfunc_leading_zero32__9821__value;
                        vlSelf->__Vfunc_leading_zero32__9821__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9821__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                            vlSelf->__Vfunc_leading_zero32__9821__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9821__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9821__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9821__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9821__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9821__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9821__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9821__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9821__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9822__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9822__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9822__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9822__adjusted = __Vfunc_round_pack32__9822__exponent;
    __Vfunc_round_pack32__9822__shifted = __Vfunc_round_pack32__9822__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9822__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9823__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9822__exponent)));
        vlSelf->__Vfunc_shift_jam27__9823__value = __Vfunc_round_pack32__9822__significand;
        __Vfunc_round_pack32__9822__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9823__distance))) {
            vlSelf->__Vfunc_shift_jam27__9823__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9823__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9823__distance))) {
            vlSelf->__Vfunc_shift_jam27__9823__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9823__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9823__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9823__value, (IData)(vlSelf->__Vfunc_shift_jam27__9823__distance)));
            vlSelf->__Vfunc_shift_jam27__9823__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9823__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9823__distance)))));
            vlSelf->__Vfunc_shift_jam27__9823__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9823__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9823__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9823__discarded))));
        }
        __Vfunc_round_pack32__9822__shifted = vlSelf->__Vfunc_shift_jam27__9823__Vfuncout;
    }
    __Vfunc_round_pack32__9822__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9822__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9822__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9822__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9822__rounded)) {
        __Vfunc_round_pack32__9822__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9822__rounded, 1U));
        __Vfunc_round_pack32__9822__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9822__adjusted)));
    }
    __Vfunc_round_pack32__9822__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9822__rounded)) {
        __Vfunc_round_pack32__9822__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9822__adjusted)));
    }
    __Vfunc_round_pack32__9822__Vfuncout = (((0U == __Vfunc_round_pack32__9822__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9822__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9822__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9822__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9822__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9822__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9822__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__26__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9822__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9815__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9815__part 
                            = vlSelf->__Vfunc_leading_zero32__9815__value;
                        vlSelf->__Vfunc_leading_zero32__9815__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9815__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                            vlSelf->__Vfunc_leading_zero32__9815__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9815__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9815__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9815__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9815__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9815__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9815__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9815__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9815__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9816__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9816__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9816__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9816__adjusted = __Vfunc_round_pack32__9816__exponent;
    __Vfunc_round_pack32__9816__shifted = __Vfunc_round_pack32__9816__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9816__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9817__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9816__exponent)));
        vlSelf->__Vfunc_shift_jam27__9817__value = __Vfunc_round_pack32__9816__significand;
        __Vfunc_round_pack32__9816__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9817__distance))) {
            vlSelf->__Vfunc_shift_jam27__9817__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9817__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9817__distance))) {
            vlSelf->__Vfunc_shift_jam27__9817__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9817__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9817__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9817__value, (IData)(vlSelf->__Vfunc_shift_jam27__9817__distance)));
            vlSelf->__Vfunc_shift_jam27__9817__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9817__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9817__distance)))));
            vlSelf->__Vfunc_shift_jam27__9817__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9817__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9817__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9817__discarded))));
        }
        __Vfunc_round_pack32__9816__shifted = vlSelf->__Vfunc_shift_jam27__9817__Vfuncout;
    }
    __Vfunc_round_pack32__9816__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9816__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9816__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9816__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9816__rounded)) {
        __Vfunc_round_pack32__9816__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9816__rounded, 1U));
        __Vfunc_round_pack32__9816__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9816__adjusted)));
    }
    __Vfunc_round_pack32__9816__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9816__rounded)) {
        __Vfunc_round_pack32__9816__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9816__adjusted)));
    }
    __Vfunc_round_pack32__9816__Vfuncout = (((0U == __Vfunc_round_pack32__9816__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9816__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9816__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9816__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9816__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9816__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9816__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__25__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9816__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9809__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9809__part 
                            = vlSelf->__Vfunc_leading_zero32__9809__value;
                        vlSelf->__Vfunc_leading_zero32__9809__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9809__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                            vlSelf->__Vfunc_leading_zero32__9809__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9809__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9809__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9809__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9809__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9809__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9809__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9809__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9809__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9810__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9810__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9810__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9810__adjusted = __Vfunc_round_pack32__9810__exponent;
    __Vfunc_round_pack32__9810__shifted = __Vfunc_round_pack32__9810__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9810__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9811__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9810__exponent)));
        vlSelf->__Vfunc_shift_jam27__9811__value = __Vfunc_round_pack32__9810__significand;
        __Vfunc_round_pack32__9810__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9811__distance))) {
            vlSelf->__Vfunc_shift_jam27__9811__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9811__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9811__distance))) {
            vlSelf->__Vfunc_shift_jam27__9811__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9811__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9811__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9811__value, (IData)(vlSelf->__Vfunc_shift_jam27__9811__distance)));
            vlSelf->__Vfunc_shift_jam27__9811__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9811__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9811__distance)))));
            vlSelf->__Vfunc_shift_jam27__9811__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9811__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9811__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9811__discarded))));
        }
        __Vfunc_round_pack32__9810__shifted = vlSelf->__Vfunc_shift_jam27__9811__Vfuncout;
    }
    __Vfunc_round_pack32__9810__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9810__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9810__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9810__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9810__rounded)) {
        __Vfunc_round_pack32__9810__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9810__rounded, 1U));
        __Vfunc_round_pack32__9810__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9810__adjusted)));
    }
    __Vfunc_round_pack32__9810__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9810__rounded)) {
        __Vfunc_round_pack32__9810__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9810__adjusted)));
    }
    __Vfunc_round_pack32__9810__Vfuncout = (((0U == __Vfunc_round_pack32__9810__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9810__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9810__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9810__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9810__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9810__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9810__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__24__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9810__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9803__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9803__part 
                            = vlSelf->__Vfunc_leading_zero32__9803__value;
                        vlSelf->__Vfunc_leading_zero32__9803__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9803__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                            vlSelf->__Vfunc_leading_zero32__9803__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9803__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9803__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9803__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9803__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9803__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9803__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9803__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9803__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9804__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9804__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9804__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9804__adjusted = __Vfunc_round_pack32__9804__exponent;
    __Vfunc_round_pack32__9804__shifted = __Vfunc_round_pack32__9804__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9804__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9805__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9804__exponent)));
        vlSelf->__Vfunc_shift_jam27__9805__value = __Vfunc_round_pack32__9804__significand;
        __Vfunc_round_pack32__9804__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9805__distance))) {
            vlSelf->__Vfunc_shift_jam27__9805__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9805__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9805__distance))) {
            vlSelf->__Vfunc_shift_jam27__9805__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9805__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9805__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9805__value, (IData)(vlSelf->__Vfunc_shift_jam27__9805__distance)));
            vlSelf->__Vfunc_shift_jam27__9805__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9805__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9805__distance)))));
            vlSelf->__Vfunc_shift_jam27__9805__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9805__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9805__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9805__discarded))));
        }
        __Vfunc_round_pack32__9804__shifted = vlSelf->__Vfunc_shift_jam27__9805__Vfuncout;
    }
    __Vfunc_round_pack32__9804__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9804__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9804__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9804__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9804__rounded)) {
        __Vfunc_round_pack32__9804__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9804__rounded, 1U));
        __Vfunc_round_pack32__9804__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9804__adjusted)));
    }
    __Vfunc_round_pack32__9804__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9804__rounded)) {
        __Vfunc_round_pack32__9804__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9804__adjusted)));
    }
    __Vfunc_round_pack32__9804__Vfuncout = (((0U == __Vfunc_round_pack32__9804__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9804__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9804__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9804__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9804__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9804__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9804__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__23__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9804__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9797__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9797__part 
                            = vlSelf->__Vfunc_leading_zero32__9797__value;
                        vlSelf->__Vfunc_leading_zero32__9797__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9797__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                            vlSelf->__Vfunc_leading_zero32__9797__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9797__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9797__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9797__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9797__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9797__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9797__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9797__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9797__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9798__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9798__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9798__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9798__adjusted = __Vfunc_round_pack32__9798__exponent;
    __Vfunc_round_pack32__9798__shifted = __Vfunc_round_pack32__9798__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9798__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9799__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9798__exponent)));
        vlSelf->__Vfunc_shift_jam27__9799__value = __Vfunc_round_pack32__9798__significand;
        __Vfunc_round_pack32__9798__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9799__distance))) {
            vlSelf->__Vfunc_shift_jam27__9799__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9799__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9799__distance))) {
            vlSelf->__Vfunc_shift_jam27__9799__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9799__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9799__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9799__value, (IData)(vlSelf->__Vfunc_shift_jam27__9799__distance)));
            vlSelf->__Vfunc_shift_jam27__9799__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9799__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9799__distance)))));
            vlSelf->__Vfunc_shift_jam27__9799__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9799__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9799__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9799__discarded))));
        }
        __Vfunc_round_pack32__9798__shifted = vlSelf->__Vfunc_shift_jam27__9799__Vfuncout;
    }
    __Vfunc_round_pack32__9798__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9798__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9798__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9798__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9798__rounded)) {
        __Vfunc_round_pack32__9798__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9798__rounded, 1U));
        __Vfunc_round_pack32__9798__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9798__adjusted)));
    }
    __Vfunc_round_pack32__9798__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9798__rounded)) {
        __Vfunc_round_pack32__9798__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9798__adjusted)));
    }
    __Vfunc_round_pack32__9798__Vfuncout = (((0U == __Vfunc_round_pack32__9798__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9798__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9798__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9798__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9798__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9798__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9798__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__22__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9798__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9791__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9791__part 
                            = vlSelf->__Vfunc_leading_zero32__9791__value;
                        vlSelf->__Vfunc_leading_zero32__9791__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9791__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                            vlSelf->__Vfunc_leading_zero32__9791__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9791__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9791__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9791__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9791__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9791__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9791__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9791__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9791__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9792__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9792__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9792__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9792__adjusted = __Vfunc_round_pack32__9792__exponent;
    __Vfunc_round_pack32__9792__shifted = __Vfunc_round_pack32__9792__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9792__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9793__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9792__exponent)));
        vlSelf->__Vfunc_shift_jam27__9793__value = __Vfunc_round_pack32__9792__significand;
        __Vfunc_round_pack32__9792__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9793__distance))) {
            vlSelf->__Vfunc_shift_jam27__9793__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9793__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9793__distance))) {
            vlSelf->__Vfunc_shift_jam27__9793__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9793__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9793__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9793__value, (IData)(vlSelf->__Vfunc_shift_jam27__9793__distance)));
            vlSelf->__Vfunc_shift_jam27__9793__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9793__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9793__distance)))));
            vlSelf->__Vfunc_shift_jam27__9793__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9793__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9793__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9793__discarded))));
        }
        __Vfunc_round_pack32__9792__shifted = vlSelf->__Vfunc_shift_jam27__9793__Vfuncout;
    }
    __Vfunc_round_pack32__9792__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9792__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9792__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9792__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9792__rounded)) {
        __Vfunc_round_pack32__9792__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9792__rounded, 1U));
        __Vfunc_round_pack32__9792__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9792__adjusted)));
    }
    __Vfunc_round_pack32__9792__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9792__rounded)) {
        __Vfunc_round_pack32__9792__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9792__adjusted)));
    }
    __Vfunc_round_pack32__9792__Vfuncout = (((0U == __Vfunc_round_pack32__9792__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9792__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9792__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9792__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9792__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9792__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9792__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__21__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9792__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9785__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9785__part 
                            = vlSelf->__Vfunc_leading_zero32__9785__value;
                        vlSelf->__Vfunc_leading_zero32__9785__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9785__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                            vlSelf->__Vfunc_leading_zero32__9785__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9785__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9785__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9785__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9785__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9785__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9785__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9785__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9785__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9786__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9786__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9786__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9786__adjusted = __Vfunc_round_pack32__9786__exponent;
    __Vfunc_round_pack32__9786__shifted = __Vfunc_round_pack32__9786__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9786__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9787__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9786__exponent)));
        vlSelf->__Vfunc_shift_jam27__9787__value = __Vfunc_round_pack32__9786__significand;
        __Vfunc_round_pack32__9786__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9787__distance))) {
            vlSelf->__Vfunc_shift_jam27__9787__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9787__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9787__distance))) {
            vlSelf->__Vfunc_shift_jam27__9787__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9787__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9787__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9787__value, (IData)(vlSelf->__Vfunc_shift_jam27__9787__distance)));
            vlSelf->__Vfunc_shift_jam27__9787__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9787__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9787__distance)))));
            vlSelf->__Vfunc_shift_jam27__9787__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9787__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9787__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9787__discarded))));
        }
        __Vfunc_round_pack32__9786__shifted = vlSelf->__Vfunc_shift_jam27__9787__Vfuncout;
    }
    __Vfunc_round_pack32__9786__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9786__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9786__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9786__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9786__rounded)) {
        __Vfunc_round_pack32__9786__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9786__rounded, 1U));
        __Vfunc_round_pack32__9786__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9786__adjusted)));
    }
    __Vfunc_round_pack32__9786__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9786__rounded)) {
        __Vfunc_round_pack32__9786__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9786__adjusted)));
    }
    __Vfunc_round_pack32__9786__Vfuncout = (((0U == __Vfunc_round_pack32__9786__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9786__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9786__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9786__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9786__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9786__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9786__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__20__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9786__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9779__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9779__part 
                            = vlSelf->__Vfunc_leading_zero32__9779__value;
                        vlSelf->__Vfunc_leading_zero32__9779__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9779__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                            vlSelf->__Vfunc_leading_zero32__9779__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9779__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9779__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9779__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9779__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9779__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9779__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9779__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9779__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9780__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9780__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9780__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9780__adjusted = __Vfunc_round_pack32__9780__exponent;
    __Vfunc_round_pack32__9780__shifted = __Vfunc_round_pack32__9780__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9780__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9781__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9780__exponent)));
        vlSelf->__Vfunc_shift_jam27__9781__value = __Vfunc_round_pack32__9780__significand;
        __Vfunc_round_pack32__9780__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9781__distance))) {
            vlSelf->__Vfunc_shift_jam27__9781__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9781__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9781__distance))) {
            vlSelf->__Vfunc_shift_jam27__9781__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9781__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9781__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9781__value, (IData)(vlSelf->__Vfunc_shift_jam27__9781__distance)));
            vlSelf->__Vfunc_shift_jam27__9781__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9781__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9781__distance)))));
            vlSelf->__Vfunc_shift_jam27__9781__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9781__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9781__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9781__discarded))));
        }
        __Vfunc_round_pack32__9780__shifted = vlSelf->__Vfunc_shift_jam27__9781__Vfuncout;
    }
    __Vfunc_round_pack32__9780__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9780__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9780__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9780__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9780__rounded)) {
        __Vfunc_round_pack32__9780__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9780__rounded, 1U));
        __Vfunc_round_pack32__9780__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9780__adjusted)));
    }
    __Vfunc_round_pack32__9780__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9780__rounded)) {
        __Vfunc_round_pack32__9780__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9780__adjusted)));
    }
    __Vfunc_round_pack32__9780__Vfuncout = (((0U == __Vfunc_round_pack32__9780__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9780__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9780__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9780__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9780__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9780__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9780__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__19__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9780__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9773__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9773__part 
                            = vlSelf->__Vfunc_leading_zero32__9773__value;
                        vlSelf->__Vfunc_leading_zero32__9773__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9773__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                            vlSelf->__Vfunc_leading_zero32__9773__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9773__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9773__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9773__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9773__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9773__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9773__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9773__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9773__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9774__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9774__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9774__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9774__adjusted = __Vfunc_round_pack32__9774__exponent;
    __Vfunc_round_pack32__9774__shifted = __Vfunc_round_pack32__9774__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9774__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9775__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9774__exponent)));
        vlSelf->__Vfunc_shift_jam27__9775__value = __Vfunc_round_pack32__9774__significand;
        __Vfunc_round_pack32__9774__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9775__distance))) {
            vlSelf->__Vfunc_shift_jam27__9775__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9775__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9775__distance))) {
            vlSelf->__Vfunc_shift_jam27__9775__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9775__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9775__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9775__value, (IData)(vlSelf->__Vfunc_shift_jam27__9775__distance)));
            vlSelf->__Vfunc_shift_jam27__9775__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9775__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9775__distance)))));
            vlSelf->__Vfunc_shift_jam27__9775__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9775__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9775__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9775__discarded))));
        }
        __Vfunc_round_pack32__9774__shifted = vlSelf->__Vfunc_shift_jam27__9775__Vfuncout;
    }
    __Vfunc_round_pack32__9774__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9774__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9774__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9774__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9774__rounded)) {
        __Vfunc_round_pack32__9774__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9774__rounded, 1U));
        __Vfunc_round_pack32__9774__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9774__adjusted)));
    }
    __Vfunc_round_pack32__9774__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9774__rounded)) {
        __Vfunc_round_pack32__9774__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9774__adjusted)));
    }
    __Vfunc_round_pack32__9774__Vfuncout = (((0U == __Vfunc_round_pack32__9774__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9774__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9774__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9774__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9774__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9774__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9774__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__18__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9774__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9767__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9767__part 
                            = vlSelf->__Vfunc_leading_zero32__9767__value;
                        vlSelf->__Vfunc_leading_zero32__9767__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9767__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                            vlSelf->__Vfunc_leading_zero32__9767__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9767__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9767__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9767__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9767__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9767__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9767__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9767__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9767__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9768__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9768__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9768__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9768__adjusted = __Vfunc_round_pack32__9768__exponent;
    __Vfunc_round_pack32__9768__shifted = __Vfunc_round_pack32__9768__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9768__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9769__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9768__exponent)));
        vlSelf->__Vfunc_shift_jam27__9769__value = __Vfunc_round_pack32__9768__significand;
        __Vfunc_round_pack32__9768__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9769__distance))) {
            vlSelf->__Vfunc_shift_jam27__9769__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9769__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9769__distance))) {
            vlSelf->__Vfunc_shift_jam27__9769__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9769__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9769__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9769__value, (IData)(vlSelf->__Vfunc_shift_jam27__9769__distance)));
            vlSelf->__Vfunc_shift_jam27__9769__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9769__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9769__distance)))));
            vlSelf->__Vfunc_shift_jam27__9769__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9769__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9769__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9769__discarded))));
        }
        __Vfunc_round_pack32__9768__shifted = vlSelf->__Vfunc_shift_jam27__9769__Vfuncout;
    }
    __Vfunc_round_pack32__9768__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9768__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9768__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9768__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9768__rounded)) {
        __Vfunc_round_pack32__9768__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9768__rounded, 1U));
        __Vfunc_round_pack32__9768__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9768__adjusted)));
    }
    __Vfunc_round_pack32__9768__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9768__rounded)) {
        __Vfunc_round_pack32__9768__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9768__adjusted)));
    }
    __Vfunc_round_pack32__9768__Vfuncout = (((0U == __Vfunc_round_pack32__9768__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9768__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9768__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9768__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9768__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9768__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9768__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__17__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9768__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9761__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9761__part 
                            = vlSelf->__Vfunc_leading_zero32__9761__value;
                        vlSelf->__Vfunc_leading_zero32__9761__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9761__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                            vlSelf->__Vfunc_leading_zero32__9761__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9761__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9761__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9761__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9761__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9761__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9761__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9761__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9761__Vfuncout)) 
                             - (IData)(5U))));
    __Vfunc_round_pack32__9762__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9762__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__exponent4;
    __Vfunc_round_pack32__9762__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__negative4;
    __Vfunc_round_pack32__9762__adjusted = __Vfunc_round_pack32__9762__exponent;
    __Vfunc_round_pack32__9762__shifted = __Vfunc_round_pack32__9762__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9762__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9763__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9762__exponent)));
        vlSelf->__Vfunc_shift_jam27__9763__value = __Vfunc_round_pack32__9762__significand;
        __Vfunc_round_pack32__9762__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9763__distance))) {
            vlSelf->__Vfunc_shift_jam27__9763__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9763__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9763__distance))) {
            vlSelf->__Vfunc_shift_jam27__9763__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9763__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9763__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9763__value, (IData)(vlSelf->__Vfunc_shift_jam27__9763__distance)));
            vlSelf->__Vfunc_shift_jam27__9763__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9763__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9763__distance)))));
            vlSelf->__Vfunc_shift_jam27__9763__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9763__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9763__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9763__discarded))));
        }
        __Vfunc_round_pack32__9762__shifted = vlSelf->__Vfunc_shift_jam27__9763__Vfuncout;
    }
    __Vfunc_round_pack32__9762__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9762__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9762__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9762__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9762__rounded)) {
        __Vfunc_round_pack32__9762__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9762__rounded, 1U));
        __Vfunc_round_pack32__9762__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9762__adjusted)));
    }
    __Vfunc_round_pack32__9762__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9762__rounded)) {
        __Vfunc_round_pack32__9762__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9762__adjusted)));
    }
    __Vfunc_round_pack32__9762__Vfuncout = (((0U == __Vfunc_round_pack32__9762__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9762__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9762__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9762__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9762__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9762__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9762__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__16__KET____DOT__sum__DOT__packed5 
        = __Vfunc_round_pack32__9762__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum_next 
        = (0xfffffffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__subtract2)
                          ? (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)
                          : (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__large2 
                             + vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__small2)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__left_shift 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__9755__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__sum3;
                        vlSelf->__Vfunc_leading_zero32__9755__part 
                            = vlSelf->__Vfunc_leading_zero32__9755__value;
                        vlSelf->__Vfunc_leading_zero32__9755__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__9755__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                            vlSelf->__Vfunc_leading_zero32__9755__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__9755__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__9755__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__9755__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__9755__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__9755__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__9755__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__9755__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__9755__Vfuncout)) 
                             - (IData)(5U))));
    vlSelf->__Vfunc_round_pack32__9756__significand 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__significand4;
    __Vfunc_round_pack32__9756__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__exponent4;
    vlSelf->__Vfunc_round_pack32__9756__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__sum_levels__BRA__0__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__sum__DOT__negative4;
    vlSelf->__Vfunc_round_pack32__9756__adjusted = __Vfunc_round_pack32__9756__exponent;
    __Vfunc_round_pack32__9756__shifted = vlSelf->__Vfunc_round_pack32__9756__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9756__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9757__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9756__exponent)));
        vlSelf->__Vfunc_shift_jam27__9757__value = vlSelf->__Vfunc_round_pack32__9756__significand;
        vlSelf->__Vfunc_round_pack32__9756__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9757__distance))) {
            vlSelf->__Vfunc_shift_jam27__9757__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9757__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9757__distance))) {
            vlSelf->__Vfunc_shift_jam27__9757__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9757__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9757__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9757__value, (IData)(vlSelf->__Vfunc_shift_jam27__9757__distance)));
            vlSelf->__Vfunc_shift_jam27__9757__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9757__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9757__distance)))));
            vlSelf->__Vfunc_shift_jam27__9757__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9757__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9757__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9757__discarded))));
        }
        __Vfunc_round_pack32__9756__shifted = vlSelf->__Vfunc_shift_jam27__9757__Vfuncout;
    }
    vlSelf->__Vfunc_round_pack32__9756__rounded = (0x1ffffffU 
                                                   & ((0xffffffU 
                                                       & (__Vfunc_round_pack32__9756__shifted 
                                                          >> 3U)) 
                                                      + 
                                                      (1U 
                                                       & ((__Vfunc_round_pack32__9756__shifted 
                                                           >> 2U) 
                                                          & (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (0xbU 
                                                                      & __Vfunc_round_pack32__9756__shifted)))))));
    if ((0x1000000U & vlSelf->__Vfunc_round_pack32__9756__rounded)) {
        vlSelf->__Vfunc_round_pack32__9756__rounded 
            = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__9756__rounded, 1U));
        vlSelf->__Vfunc_round_pack32__9756__adjusted 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__9756__adjusted)));
    }
    vlSelf->__Vfunc_round_pack32__9756__biased = 0U;
    if ((0x800000U & vlSelf->__Vfunc_round_pack32__9756__rounded)) {
        vlSelf->__Vfunc_round_pack32__9756__biased 
            = (0xffU & ((IData)(0x7fU) + (IData)(vlSelf->__Vfunc_round_pack32__9756__adjusted)));
    }
}
