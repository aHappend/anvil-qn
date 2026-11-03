// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

extern const VlWide<64>/*2047:0*/ Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0;

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__29(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__29\n"); );
    // Init
    SData/*11:0*/ __Vfunc_round_pack32__374__exponent;
    __Vfunc_round_pack32__374__exponent = 0;
    IData/*31:0*/ __Vilp;
    QData/*32:0*/ __Vfunc_round_pack32__380__Vfuncout;
    __Vfunc_round_pack32__380__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__380__negative;
    __Vfunc_round_pack32__380__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__380__exponent;
    __Vfunc_round_pack32__380__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__380__significand;
    __Vfunc_round_pack32__380__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__380__shifted;
    __Vfunc_round_pack32__380__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__380__rounded;
    __Vfunc_round_pack32__380__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__380__adjusted;
    __Vfunc_round_pack32__380__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__380__biased;
    __Vfunc_round_pack32__380__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__386__Vfuncout;
    __Vfunc_round_pack32__386__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__386__negative;
    __Vfunc_round_pack32__386__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__386__exponent;
    __Vfunc_round_pack32__386__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__386__significand;
    __Vfunc_round_pack32__386__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__386__shifted;
    __Vfunc_round_pack32__386__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__386__rounded;
    __Vfunc_round_pack32__386__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__386__adjusted;
    __Vfunc_round_pack32__386__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__386__biased;
    __Vfunc_round_pack32__386__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__392__Vfuncout;
    __Vfunc_round_pack32__392__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__392__negative;
    __Vfunc_round_pack32__392__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__392__exponent;
    __Vfunc_round_pack32__392__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__392__significand;
    __Vfunc_round_pack32__392__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__392__shifted;
    __Vfunc_round_pack32__392__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__392__rounded;
    __Vfunc_round_pack32__392__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__392__adjusted;
    __Vfunc_round_pack32__392__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__392__biased;
    __Vfunc_round_pack32__392__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__398__Vfuncout;
    __Vfunc_round_pack32__398__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__398__negative;
    __Vfunc_round_pack32__398__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__398__exponent;
    __Vfunc_round_pack32__398__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__398__significand;
    __Vfunc_round_pack32__398__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__398__shifted;
    __Vfunc_round_pack32__398__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__398__rounded;
    __Vfunc_round_pack32__398__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__398__adjusted;
    __Vfunc_round_pack32__398__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__398__biased;
    __Vfunc_round_pack32__398__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__404__Vfuncout;
    __Vfunc_round_pack32__404__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__404__negative;
    __Vfunc_round_pack32__404__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__404__exponent;
    __Vfunc_round_pack32__404__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__404__significand;
    __Vfunc_round_pack32__404__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__404__shifted;
    __Vfunc_round_pack32__404__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__404__rounded;
    __Vfunc_round_pack32__404__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__404__adjusted;
    __Vfunc_round_pack32__404__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__404__biased;
    __Vfunc_round_pack32__404__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__410__Vfuncout;
    __Vfunc_round_pack32__410__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__410__negative;
    __Vfunc_round_pack32__410__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__410__exponent;
    __Vfunc_round_pack32__410__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__410__significand;
    __Vfunc_round_pack32__410__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__410__shifted;
    __Vfunc_round_pack32__410__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__410__rounded;
    __Vfunc_round_pack32__410__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__410__adjusted;
    __Vfunc_round_pack32__410__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__410__biased;
    __Vfunc_round_pack32__410__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__416__Vfuncout;
    __Vfunc_round_pack32__416__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__416__negative;
    __Vfunc_round_pack32__416__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__416__exponent;
    __Vfunc_round_pack32__416__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__416__significand;
    __Vfunc_round_pack32__416__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__416__shifted;
    __Vfunc_round_pack32__416__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__416__rounded;
    __Vfunc_round_pack32__416__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__416__adjusted;
    __Vfunc_round_pack32__416__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__416__biased;
    __Vfunc_round_pack32__416__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__422__Vfuncout;
    __Vfunc_round_pack32__422__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__422__negative;
    __Vfunc_round_pack32__422__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__422__exponent;
    __Vfunc_round_pack32__422__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__422__significand;
    __Vfunc_round_pack32__422__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__422__shifted;
    __Vfunc_round_pack32__422__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__422__rounded;
    __Vfunc_round_pack32__422__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__422__adjusted;
    __Vfunc_round_pack32__422__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__422__biased;
    __Vfunc_round_pack32__422__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__428__Vfuncout;
    __Vfunc_round_pack32__428__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__428__negative;
    __Vfunc_round_pack32__428__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__428__exponent;
    __Vfunc_round_pack32__428__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__428__significand;
    __Vfunc_round_pack32__428__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__428__shifted;
    __Vfunc_round_pack32__428__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__428__rounded;
    __Vfunc_round_pack32__428__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__428__adjusted;
    __Vfunc_round_pack32__428__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__428__biased;
    __Vfunc_round_pack32__428__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__434__Vfuncout;
    __Vfunc_round_pack32__434__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__434__negative;
    __Vfunc_round_pack32__434__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__434__exponent;
    __Vfunc_round_pack32__434__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__434__significand;
    __Vfunc_round_pack32__434__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__434__shifted;
    __Vfunc_round_pack32__434__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__434__rounded;
    __Vfunc_round_pack32__434__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__434__adjusted;
    __Vfunc_round_pack32__434__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__434__biased;
    __Vfunc_round_pack32__434__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__440__Vfuncout;
    __Vfunc_round_pack32__440__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__440__negative;
    __Vfunc_round_pack32__440__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__440__exponent;
    __Vfunc_round_pack32__440__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__440__significand;
    __Vfunc_round_pack32__440__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__440__shifted;
    __Vfunc_round_pack32__440__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__440__rounded;
    __Vfunc_round_pack32__440__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__440__adjusted;
    __Vfunc_round_pack32__440__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__440__biased;
    __Vfunc_round_pack32__440__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__446__Vfuncout;
    __Vfunc_round_pack32__446__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__446__negative;
    __Vfunc_round_pack32__446__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__446__exponent;
    __Vfunc_round_pack32__446__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__446__significand;
    __Vfunc_round_pack32__446__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__446__shifted;
    __Vfunc_round_pack32__446__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__446__rounded;
    __Vfunc_round_pack32__446__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__446__adjusted;
    __Vfunc_round_pack32__446__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__446__biased;
    __Vfunc_round_pack32__446__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__452__Vfuncout;
    __Vfunc_round_pack32__452__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__452__negative;
    __Vfunc_round_pack32__452__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__452__exponent;
    __Vfunc_round_pack32__452__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__452__significand;
    __Vfunc_round_pack32__452__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__452__shifted;
    __Vfunc_round_pack32__452__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__452__rounded;
    __Vfunc_round_pack32__452__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__452__adjusted;
    __Vfunc_round_pack32__452__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__452__biased;
    __Vfunc_round_pack32__452__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__458__Vfuncout;
    __Vfunc_round_pack32__458__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__458__negative;
    __Vfunc_round_pack32__458__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__458__exponent;
    __Vfunc_round_pack32__458__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__458__significand;
    __Vfunc_round_pack32__458__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__458__shifted;
    __Vfunc_round_pack32__458__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__458__rounded;
    __Vfunc_round_pack32__458__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__458__adjusted;
    __Vfunc_round_pack32__458__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__458__biased;
    __Vfunc_round_pack32__458__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__464__Vfuncout;
    __Vfunc_round_pack32__464__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__464__negative;
    __Vfunc_round_pack32__464__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__464__exponent;
    __Vfunc_round_pack32__464__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__464__significand;
    __Vfunc_round_pack32__464__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__464__shifted;
    __Vfunc_round_pack32__464__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__464__rounded;
    __Vfunc_round_pack32__464__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__464__adjusted;
    __Vfunc_round_pack32__464__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__464__biased;
    __Vfunc_round_pack32__464__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__470__Vfuncout;
    __Vfunc_round_pack32__470__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__470__negative;
    __Vfunc_round_pack32__470__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__470__exponent;
    __Vfunc_round_pack32__470__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__470__significand;
    __Vfunc_round_pack32__470__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__470__shifted;
    __Vfunc_round_pack32__470__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__470__rounded;
    __Vfunc_round_pack32__470__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__470__adjusted;
    __Vfunc_round_pack32__470__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__470__biased;
    __Vfunc_round_pack32__470__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__476__Vfuncout;
    __Vfunc_round_pack32__476__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__476__negative;
    __Vfunc_round_pack32__476__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__476__exponent;
    __Vfunc_round_pack32__476__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__476__significand;
    __Vfunc_round_pack32__476__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__476__shifted;
    __Vfunc_round_pack32__476__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__476__rounded;
    __Vfunc_round_pack32__476__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__476__adjusted;
    __Vfunc_round_pack32__476__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__476__biased;
    __Vfunc_round_pack32__476__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__482__Vfuncout;
    __Vfunc_round_pack32__482__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__482__negative;
    __Vfunc_round_pack32__482__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__482__exponent;
    __Vfunc_round_pack32__482__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__482__significand;
    __Vfunc_round_pack32__482__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__482__shifted;
    __Vfunc_round_pack32__482__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__482__rounded;
    __Vfunc_round_pack32__482__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__482__adjusted;
    __Vfunc_round_pack32__482__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__482__biased;
    __Vfunc_round_pack32__482__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__488__Vfuncout;
    __Vfunc_round_pack32__488__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__488__negative;
    __Vfunc_round_pack32__488__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__488__exponent;
    __Vfunc_round_pack32__488__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__488__significand;
    __Vfunc_round_pack32__488__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__488__shifted;
    __Vfunc_round_pack32__488__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__488__rounded;
    __Vfunc_round_pack32__488__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__488__adjusted;
    __Vfunc_round_pack32__488__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__488__biased;
    __Vfunc_round_pack32__488__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__494__Vfuncout;
    __Vfunc_round_pack32__494__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__494__negative;
    __Vfunc_round_pack32__494__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__494__exponent;
    __Vfunc_round_pack32__494__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__494__significand;
    __Vfunc_round_pack32__494__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__494__shifted;
    __Vfunc_round_pack32__494__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__494__rounded;
    __Vfunc_round_pack32__494__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__494__adjusted;
    __Vfunc_round_pack32__494__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__494__biased;
    __Vfunc_round_pack32__494__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__500__Vfuncout;
    __Vfunc_round_pack32__500__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__500__negative;
    __Vfunc_round_pack32__500__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__500__exponent;
    __Vfunc_round_pack32__500__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__500__significand;
    __Vfunc_round_pack32__500__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__500__shifted;
    __Vfunc_round_pack32__500__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__500__rounded;
    __Vfunc_round_pack32__500__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__500__adjusted;
    __Vfunc_round_pack32__500__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__500__biased;
    __Vfunc_round_pack32__500__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__506__Vfuncout;
    __Vfunc_round_pack32__506__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__506__negative;
    __Vfunc_round_pack32__506__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__506__exponent;
    __Vfunc_round_pack32__506__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__506__significand;
    __Vfunc_round_pack32__506__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__506__shifted;
    __Vfunc_round_pack32__506__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__506__rounded;
    __Vfunc_round_pack32__506__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__506__adjusted;
    __Vfunc_round_pack32__506__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__506__biased;
    __Vfunc_round_pack32__506__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__512__Vfuncout;
    __Vfunc_round_pack32__512__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__512__negative;
    __Vfunc_round_pack32__512__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__512__exponent;
    __Vfunc_round_pack32__512__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__512__significand;
    __Vfunc_round_pack32__512__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__512__shifted;
    __Vfunc_round_pack32__512__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__512__rounded;
    __Vfunc_round_pack32__512__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__512__adjusted;
    __Vfunc_round_pack32__512__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__512__biased;
    __Vfunc_round_pack32__512__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__518__Vfuncout;
    __Vfunc_round_pack32__518__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__518__negative;
    __Vfunc_round_pack32__518__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__518__exponent;
    __Vfunc_round_pack32__518__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__518__significand;
    __Vfunc_round_pack32__518__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__518__shifted;
    __Vfunc_round_pack32__518__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__518__rounded;
    __Vfunc_round_pack32__518__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__518__adjusted;
    __Vfunc_round_pack32__518__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__518__biased;
    __Vfunc_round_pack32__518__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__524__Vfuncout;
    __Vfunc_round_pack32__524__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__524__negative;
    __Vfunc_round_pack32__524__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__524__exponent;
    __Vfunc_round_pack32__524__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__524__significand;
    __Vfunc_round_pack32__524__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__524__shifted;
    __Vfunc_round_pack32__524__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__524__rounded;
    __Vfunc_round_pack32__524__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__524__adjusted;
    __Vfunc_round_pack32__524__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__524__biased;
    __Vfunc_round_pack32__524__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__530__Vfuncout;
    __Vfunc_round_pack32__530__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__530__negative;
    __Vfunc_round_pack32__530__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__530__exponent;
    __Vfunc_round_pack32__530__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__530__significand;
    __Vfunc_round_pack32__530__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__530__shifted;
    __Vfunc_round_pack32__530__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__530__rounded;
    __Vfunc_round_pack32__530__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__530__adjusted;
    __Vfunc_round_pack32__530__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__530__biased;
    __Vfunc_round_pack32__530__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__536__Vfuncout;
    __Vfunc_round_pack32__536__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__536__negative;
    __Vfunc_round_pack32__536__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__536__exponent;
    __Vfunc_round_pack32__536__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__536__significand;
    __Vfunc_round_pack32__536__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__536__shifted;
    __Vfunc_round_pack32__536__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__536__rounded;
    __Vfunc_round_pack32__536__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__536__adjusted;
    __Vfunc_round_pack32__536__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__536__biased;
    __Vfunc_round_pack32__536__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__542__Vfuncout;
    __Vfunc_round_pack32__542__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__542__negative;
    __Vfunc_round_pack32__542__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__542__exponent;
    __Vfunc_round_pack32__542__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__542__significand;
    __Vfunc_round_pack32__542__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__542__shifted;
    __Vfunc_round_pack32__542__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__542__rounded;
    __Vfunc_round_pack32__542__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__542__adjusted;
    __Vfunc_round_pack32__542__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__542__biased;
    __Vfunc_round_pack32__542__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__548__Vfuncout;
    __Vfunc_round_pack32__548__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__548__negative;
    __Vfunc_round_pack32__548__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__548__exponent;
    __Vfunc_round_pack32__548__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__548__significand;
    __Vfunc_round_pack32__548__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__548__shifted;
    __Vfunc_round_pack32__548__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__548__rounded;
    __Vfunc_round_pack32__548__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__548__adjusted;
    __Vfunc_round_pack32__548__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__548__biased;
    __Vfunc_round_pack32__548__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__554__Vfuncout;
    __Vfunc_round_pack32__554__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__554__negative;
    __Vfunc_round_pack32__554__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__554__exponent;
    __Vfunc_round_pack32__554__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__554__significand;
    __Vfunc_round_pack32__554__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__554__shifted;
    __Vfunc_round_pack32__554__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__554__rounded;
    __Vfunc_round_pack32__554__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__554__adjusted;
    __Vfunc_round_pack32__554__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__554__biased;
    __Vfunc_round_pack32__554__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__560__Vfuncout;
    __Vfunc_round_pack32__560__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__560__negative;
    __Vfunc_round_pack32__560__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__560__exponent;
    __Vfunc_round_pack32__560__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__560__significand;
    __Vfunc_round_pack32__560__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__560__shifted;
    __Vfunc_round_pack32__560__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__560__rounded;
    __Vfunc_round_pack32__560__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__560__adjusted;
    __Vfunc_round_pack32__560__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__560__biased;
    __Vfunc_round_pack32__560__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__566__Vfuncout;
    __Vfunc_round_pack32__566__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__566__negative;
    __Vfunc_round_pack32__566__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__566__exponent;
    __Vfunc_round_pack32__566__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__566__significand;
    __Vfunc_round_pack32__566__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__566__shifted;
    __Vfunc_round_pack32__566__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__566__rounded;
    __Vfunc_round_pack32__566__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__566__adjusted;
    __Vfunc_round_pack32__566__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__566__biased;
    __Vfunc_round_pack32__566__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__572__Vfuncout;
    __Vfunc_round_pack32__572__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__572__negative;
    __Vfunc_round_pack32__572__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__572__exponent;
    __Vfunc_round_pack32__572__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__572__significand;
    __Vfunc_round_pack32__572__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__572__shifted;
    __Vfunc_round_pack32__572__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__572__rounded;
    __Vfunc_round_pack32__572__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__572__adjusted;
    __Vfunc_round_pack32__572__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__572__biased;
    __Vfunc_round_pack32__572__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__578__Vfuncout;
    __Vfunc_round_pack32__578__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__578__negative;
    __Vfunc_round_pack32__578__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__578__exponent;
    __Vfunc_round_pack32__578__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__578__significand;
    __Vfunc_round_pack32__578__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__578__shifted;
    __Vfunc_round_pack32__578__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__578__rounded;
    __Vfunc_round_pack32__578__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__578__adjusted;
    __Vfunc_round_pack32__578__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__578__biased;
    __Vfunc_round_pack32__578__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__584__Vfuncout;
    __Vfunc_round_pack32__584__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__584__negative;
    __Vfunc_round_pack32__584__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__584__exponent;
    __Vfunc_round_pack32__584__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__584__significand;
    __Vfunc_round_pack32__584__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__584__shifted;
    __Vfunc_round_pack32__584__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__584__rounded;
    __Vfunc_round_pack32__584__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__584__adjusted;
    __Vfunc_round_pack32__584__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__584__biased;
    __Vfunc_round_pack32__584__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__590__Vfuncout;
    __Vfunc_round_pack32__590__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__590__negative;
    __Vfunc_round_pack32__590__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__590__exponent;
    __Vfunc_round_pack32__590__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__590__significand;
    __Vfunc_round_pack32__590__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__590__shifted;
    __Vfunc_round_pack32__590__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__590__rounded;
    __Vfunc_round_pack32__590__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__590__adjusted;
    __Vfunc_round_pack32__590__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__590__biased;
    __Vfunc_round_pack32__590__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__596__Vfuncout;
    __Vfunc_round_pack32__596__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__596__negative;
    __Vfunc_round_pack32__596__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__596__exponent;
    __Vfunc_round_pack32__596__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__596__significand;
    __Vfunc_round_pack32__596__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__596__shifted;
    __Vfunc_round_pack32__596__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__596__rounded;
    __Vfunc_round_pack32__596__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__596__adjusted;
    __Vfunc_round_pack32__596__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__596__biased;
    __Vfunc_round_pack32__596__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__602__Vfuncout;
    __Vfunc_round_pack32__602__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__602__negative;
    __Vfunc_round_pack32__602__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__602__exponent;
    __Vfunc_round_pack32__602__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__602__significand;
    __Vfunc_round_pack32__602__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__602__shifted;
    __Vfunc_round_pack32__602__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__602__rounded;
    __Vfunc_round_pack32__602__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__602__adjusted;
    __Vfunc_round_pack32__602__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__602__biased;
    __Vfunc_round_pack32__602__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__608__Vfuncout;
    __Vfunc_round_pack32__608__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__608__negative;
    __Vfunc_round_pack32__608__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__608__exponent;
    __Vfunc_round_pack32__608__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__608__significand;
    __Vfunc_round_pack32__608__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__608__shifted;
    __Vfunc_round_pack32__608__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__608__rounded;
    __Vfunc_round_pack32__608__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__608__adjusted;
    __Vfunc_round_pack32__608__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__608__biased;
    __Vfunc_round_pack32__608__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__614__Vfuncout;
    __Vfunc_round_pack32__614__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__614__negative;
    __Vfunc_round_pack32__614__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__614__exponent;
    __Vfunc_round_pack32__614__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__614__significand;
    __Vfunc_round_pack32__614__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__614__shifted;
    __Vfunc_round_pack32__614__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__614__rounded;
    __Vfunc_round_pack32__614__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__614__adjusted;
    __Vfunc_round_pack32__614__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__614__biased;
    __Vfunc_round_pack32__614__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__620__Vfuncout;
    __Vfunc_round_pack32__620__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__620__negative;
    __Vfunc_round_pack32__620__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__620__exponent;
    __Vfunc_round_pack32__620__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__620__significand;
    __Vfunc_round_pack32__620__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__620__shifted;
    __Vfunc_round_pack32__620__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__620__rounded;
    __Vfunc_round_pack32__620__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__620__adjusted;
    __Vfunc_round_pack32__620__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__620__biased;
    __Vfunc_round_pack32__620__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__626__Vfuncout;
    __Vfunc_round_pack32__626__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__626__negative;
    __Vfunc_round_pack32__626__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__626__exponent;
    __Vfunc_round_pack32__626__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__626__significand;
    __Vfunc_round_pack32__626__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__626__shifted;
    __Vfunc_round_pack32__626__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__626__rounded;
    __Vfunc_round_pack32__626__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__626__adjusted;
    __Vfunc_round_pack32__626__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__626__biased;
    __Vfunc_round_pack32__626__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__632__Vfuncout;
    __Vfunc_round_pack32__632__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__632__negative;
    __Vfunc_round_pack32__632__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__632__exponent;
    __Vfunc_round_pack32__632__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__632__significand;
    __Vfunc_round_pack32__632__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__632__shifted;
    __Vfunc_round_pack32__632__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__632__rounded;
    __Vfunc_round_pack32__632__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__632__adjusted;
    __Vfunc_round_pack32__632__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__632__biased;
    __Vfunc_round_pack32__632__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__638__Vfuncout;
    __Vfunc_round_pack32__638__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__638__negative;
    __Vfunc_round_pack32__638__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__638__exponent;
    __Vfunc_round_pack32__638__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__638__significand;
    __Vfunc_round_pack32__638__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__638__shifted;
    __Vfunc_round_pack32__638__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__638__rounded;
    __Vfunc_round_pack32__638__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__638__adjusted;
    __Vfunc_round_pack32__638__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__638__biased;
    __Vfunc_round_pack32__638__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__644__Vfuncout;
    __Vfunc_round_pack32__644__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__644__negative;
    __Vfunc_round_pack32__644__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__644__exponent;
    __Vfunc_round_pack32__644__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__644__significand;
    __Vfunc_round_pack32__644__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__644__shifted;
    __Vfunc_round_pack32__644__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__644__rounded;
    __Vfunc_round_pack32__644__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__644__adjusted;
    __Vfunc_round_pack32__644__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__644__biased;
    __Vfunc_round_pack32__644__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__650__Vfuncout;
    __Vfunc_round_pack32__650__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__650__negative;
    __Vfunc_round_pack32__650__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__650__exponent;
    __Vfunc_round_pack32__650__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__650__significand;
    __Vfunc_round_pack32__650__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__650__shifted;
    __Vfunc_round_pack32__650__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__650__rounded;
    __Vfunc_round_pack32__650__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__650__adjusted;
    __Vfunc_round_pack32__650__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__650__biased;
    __Vfunc_round_pack32__650__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__656__Vfuncout;
    __Vfunc_round_pack32__656__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__656__negative;
    __Vfunc_round_pack32__656__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__656__exponent;
    __Vfunc_round_pack32__656__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__656__significand;
    __Vfunc_round_pack32__656__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__656__shifted;
    __Vfunc_round_pack32__656__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__656__rounded;
    __Vfunc_round_pack32__656__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__656__adjusted;
    __Vfunc_round_pack32__656__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__656__biased;
    __Vfunc_round_pack32__656__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__662__Vfuncout;
    __Vfunc_round_pack32__662__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__662__negative;
    __Vfunc_round_pack32__662__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__662__exponent;
    __Vfunc_round_pack32__662__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__662__significand;
    __Vfunc_round_pack32__662__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__662__shifted;
    __Vfunc_round_pack32__662__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__662__rounded;
    __Vfunc_round_pack32__662__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__662__adjusted;
    __Vfunc_round_pack32__662__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__662__biased;
    __Vfunc_round_pack32__662__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__668__Vfuncout;
    __Vfunc_round_pack32__668__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__668__negative;
    __Vfunc_round_pack32__668__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__668__exponent;
    __Vfunc_round_pack32__668__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__668__significand;
    __Vfunc_round_pack32__668__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__668__shifted;
    __Vfunc_round_pack32__668__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__668__rounded;
    __Vfunc_round_pack32__668__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__668__adjusted;
    __Vfunc_round_pack32__668__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__668__biased;
    __Vfunc_round_pack32__668__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__674__Vfuncout;
    __Vfunc_round_pack32__674__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__674__negative;
    __Vfunc_round_pack32__674__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__674__exponent;
    __Vfunc_round_pack32__674__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__674__significand;
    __Vfunc_round_pack32__674__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__674__shifted;
    __Vfunc_round_pack32__674__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__674__rounded;
    __Vfunc_round_pack32__674__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__674__adjusted;
    __Vfunc_round_pack32__674__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__674__biased;
    __Vfunc_round_pack32__674__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__680__Vfuncout;
    __Vfunc_round_pack32__680__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__680__negative;
    __Vfunc_round_pack32__680__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__680__exponent;
    __Vfunc_round_pack32__680__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__680__significand;
    __Vfunc_round_pack32__680__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__680__shifted;
    __Vfunc_round_pack32__680__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__680__rounded;
    __Vfunc_round_pack32__680__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__680__adjusted;
    __Vfunc_round_pack32__680__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__680__biased;
    __Vfunc_round_pack32__680__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__686__Vfuncout;
    __Vfunc_round_pack32__686__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__686__negative;
    __Vfunc_round_pack32__686__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__686__exponent;
    __Vfunc_round_pack32__686__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__686__significand;
    __Vfunc_round_pack32__686__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__686__shifted;
    __Vfunc_round_pack32__686__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__686__rounded;
    __Vfunc_round_pack32__686__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__686__adjusted;
    __Vfunc_round_pack32__686__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__686__biased;
    __Vfunc_round_pack32__686__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__692__Vfuncout;
    __Vfunc_round_pack32__692__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__692__negative;
    __Vfunc_round_pack32__692__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__692__exponent;
    __Vfunc_round_pack32__692__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__692__significand;
    __Vfunc_round_pack32__692__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__692__shifted;
    __Vfunc_round_pack32__692__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__692__rounded;
    __Vfunc_round_pack32__692__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__692__adjusted;
    __Vfunc_round_pack32__692__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__692__biased;
    __Vfunc_round_pack32__692__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__698__Vfuncout;
    __Vfunc_round_pack32__698__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__698__negative;
    __Vfunc_round_pack32__698__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__698__exponent;
    __Vfunc_round_pack32__698__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__698__significand;
    __Vfunc_round_pack32__698__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__698__shifted;
    __Vfunc_round_pack32__698__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__698__rounded;
    __Vfunc_round_pack32__698__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__698__adjusted;
    __Vfunc_round_pack32__698__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__698__biased;
    __Vfunc_round_pack32__698__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__704__Vfuncout;
    __Vfunc_round_pack32__704__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__704__negative;
    __Vfunc_round_pack32__704__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__704__exponent;
    __Vfunc_round_pack32__704__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__704__significand;
    __Vfunc_round_pack32__704__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__704__shifted;
    __Vfunc_round_pack32__704__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__704__rounded;
    __Vfunc_round_pack32__704__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__704__adjusted;
    __Vfunc_round_pack32__704__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__704__biased;
    __Vfunc_round_pack32__704__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__710__Vfuncout;
    __Vfunc_round_pack32__710__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__710__negative;
    __Vfunc_round_pack32__710__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__710__exponent;
    __Vfunc_round_pack32__710__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__710__significand;
    __Vfunc_round_pack32__710__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__710__shifted;
    __Vfunc_round_pack32__710__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__710__rounded;
    __Vfunc_round_pack32__710__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__710__adjusted;
    __Vfunc_round_pack32__710__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__710__biased;
    __Vfunc_round_pack32__710__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__716__Vfuncout;
    __Vfunc_round_pack32__716__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__716__negative;
    __Vfunc_round_pack32__716__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__716__exponent;
    __Vfunc_round_pack32__716__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__716__significand;
    __Vfunc_round_pack32__716__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__716__shifted;
    __Vfunc_round_pack32__716__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__716__rounded;
    __Vfunc_round_pack32__716__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__716__adjusted;
    __Vfunc_round_pack32__716__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__716__biased;
    __Vfunc_round_pack32__716__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__722__Vfuncout;
    __Vfunc_round_pack32__722__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__722__negative;
    __Vfunc_round_pack32__722__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__722__exponent;
    __Vfunc_round_pack32__722__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__722__significand;
    __Vfunc_round_pack32__722__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__722__shifted;
    __Vfunc_round_pack32__722__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__722__rounded;
    __Vfunc_round_pack32__722__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__722__adjusted;
    __Vfunc_round_pack32__722__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__722__biased;
    __Vfunc_round_pack32__722__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__728__Vfuncout;
    __Vfunc_round_pack32__728__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__728__negative;
    __Vfunc_round_pack32__728__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__728__exponent;
    __Vfunc_round_pack32__728__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__728__significand;
    __Vfunc_round_pack32__728__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__728__shifted;
    __Vfunc_round_pack32__728__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__728__rounded;
    __Vfunc_round_pack32__728__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__728__adjusted;
    __Vfunc_round_pack32__728__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__728__biased;
    __Vfunc_round_pack32__728__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__734__Vfuncout;
    __Vfunc_round_pack32__734__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__734__negative;
    __Vfunc_round_pack32__734__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__734__exponent;
    __Vfunc_round_pack32__734__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__734__significand;
    __Vfunc_round_pack32__734__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__734__shifted;
    __Vfunc_round_pack32__734__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__734__rounded;
    __Vfunc_round_pack32__734__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__734__adjusted;
    __Vfunc_round_pack32__734__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__734__biased;
    __Vfunc_round_pack32__734__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__740__Vfuncout;
    __Vfunc_round_pack32__740__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__740__negative;
    __Vfunc_round_pack32__740__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__740__exponent;
    __Vfunc_round_pack32__740__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__740__significand;
    __Vfunc_round_pack32__740__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__740__shifted;
    __Vfunc_round_pack32__740__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__740__rounded;
    __Vfunc_round_pack32__740__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__740__adjusted;
    __Vfunc_round_pack32__740__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__740__biased;
    __Vfunc_round_pack32__740__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__746__Vfuncout;
    __Vfunc_round_pack32__746__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__746__negative;
    __Vfunc_round_pack32__746__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__746__exponent;
    __Vfunc_round_pack32__746__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__746__significand;
    __Vfunc_round_pack32__746__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__746__shifted;
    __Vfunc_round_pack32__746__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__746__rounded;
    __Vfunc_round_pack32__746__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__746__adjusted;
    __Vfunc_round_pack32__746__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__746__biased;
    __Vfunc_round_pack32__746__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__752__Vfuncout;
    __Vfunc_round_pack32__752__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__752__negative;
    __Vfunc_round_pack32__752__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__752__exponent;
    __Vfunc_round_pack32__752__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__752__significand;
    __Vfunc_round_pack32__752__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__752__shifted;
    __Vfunc_round_pack32__752__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__752__rounded;
    __Vfunc_round_pack32__752__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__752__adjusted;
    __Vfunc_round_pack32__752__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__752__biased;
    __Vfunc_round_pack32__752__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__758__Vfuncout;
    __Vfunc_round_pack32__758__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__758__negative;
    __Vfunc_round_pack32__758__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__758__exponent;
    __Vfunc_round_pack32__758__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__758__significand;
    __Vfunc_round_pack32__758__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__758__shifted;
    __Vfunc_round_pack32__758__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__758__rounded;
    __Vfunc_round_pack32__758__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__758__adjusted;
    __Vfunc_round_pack32__758__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__758__biased;
    __Vfunc_round_pack32__758__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__764__Vfuncout;
    __Vfunc_round_pack32__764__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__764__negative;
    __Vfunc_round_pack32__764__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__764__exponent;
    __Vfunc_round_pack32__764__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__764__significand;
    __Vfunc_round_pack32__764__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__764__shifted;
    __Vfunc_round_pack32__764__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__764__rounded;
    __Vfunc_round_pack32__764__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__764__adjusted;
    __Vfunc_round_pack32__764__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__764__biased;
    __Vfunc_round_pack32__764__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__770__Vfuncout;
    __Vfunc_round_pack32__770__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__770__negative;
    __Vfunc_round_pack32__770__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__770__exponent;
    __Vfunc_round_pack32__770__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__770__significand;
    __Vfunc_round_pack32__770__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__770__shifted;
    __Vfunc_round_pack32__770__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__770__rounded;
    __Vfunc_round_pack32__770__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__770__adjusted;
    __Vfunc_round_pack32__770__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__770__biased;
    __Vfunc_round_pack32__770__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__776__Vfuncout;
    __Vfunc_round_pack32__776__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__776__negative;
    __Vfunc_round_pack32__776__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__776__exponent;
    __Vfunc_round_pack32__776__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__776__significand;
    __Vfunc_round_pack32__776__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__776__shifted;
    __Vfunc_round_pack32__776__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__776__rounded;
    __Vfunc_round_pack32__776__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__776__adjusted;
    __Vfunc_round_pack32__776__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__776__biased;
    __Vfunc_round_pack32__776__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__782__Vfuncout;
    __Vfunc_round_pack32__782__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__782__negative;
    __Vfunc_round_pack32__782__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__782__exponent;
    __Vfunc_round_pack32__782__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__782__significand;
    __Vfunc_round_pack32__782__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__782__shifted;
    __Vfunc_round_pack32__782__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__782__rounded;
    __Vfunc_round_pack32__782__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__782__adjusted;
    __Vfunc_round_pack32__782__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__782__biased;
    __Vfunc_round_pack32__782__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__788__Vfuncout;
    __Vfunc_round_pack32__788__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__788__negative;
    __Vfunc_round_pack32__788__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__788__exponent;
    __Vfunc_round_pack32__788__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__788__significand;
    __Vfunc_round_pack32__788__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__788__shifted;
    __Vfunc_round_pack32__788__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__788__rounded;
    __Vfunc_round_pack32__788__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__788__adjusted;
    __Vfunc_round_pack32__788__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__788__biased;
    __Vfunc_round_pack32__788__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__794__Vfuncout;
    __Vfunc_round_pack32__794__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__794__negative;
    __Vfunc_round_pack32__794__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__794__exponent;
    __Vfunc_round_pack32__794__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__794__significand;
    __Vfunc_round_pack32__794__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__794__shifted;
    __Vfunc_round_pack32__794__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__794__rounded;
    __Vfunc_round_pack32__794__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__794__adjusted;
    __Vfunc_round_pack32__794__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__794__biased;
    __Vfunc_round_pack32__794__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__800__Vfuncout;
    __Vfunc_round_pack32__800__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__800__negative;
    __Vfunc_round_pack32__800__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__800__exponent;
    __Vfunc_round_pack32__800__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__800__significand;
    __Vfunc_round_pack32__800__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__800__shifted;
    __Vfunc_round_pack32__800__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__800__rounded;
    __Vfunc_round_pack32__800__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__800__adjusted;
    __Vfunc_round_pack32__800__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__800__biased;
    __Vfunc_round_pack32__800__biased = 0;
    CData/*0:0*/ __Vfunc_fp32_invalid__8890__Vfuncout;
    __Vfunc_fp32_invalid__8890__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_fp32_invalid__8890__value;
    __Vfunc_fp32_invalid__8890__value = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8893__Vfuncout;
    __Vfunc_round_pack32__8893__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8893__negative;
    __Vfunc_round_pack32__8893__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8893__exponent;
    __Vfunc_round_pack32__8893__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8893__significand;
    __Vfunc_round_pack32__8893__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8893__shifted;
    __Vfunc_round_pack32__8893__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8893__rounded;
    __Vfunc_round_pack32__8893__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8893__adjusted;
    __Vfunc_round_pack32__8893__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8893__biased;
    __Vfunc_round_pack32__8893__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8899__Vfuncout;
    __Vfunc_round_pack32__8899__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8899__negative;
    __Vfunc_round_pack32__8899__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8899__exponent;
    __Vfunc_round_pack32__8899__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8899__significand;
    __Vfunc_round_pack32__8899__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8899__shifted;
    __Vfunc_round_pack32__8899__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8899__rounded;
    __Vfunc_round_pack32__8899__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8899__adjusted;
    __Vfunc_round_pack32__8899__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8899__biased;
    __Vfunc_round_pack32__8899__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8905__Vfuncout;
    __Vfunc_round_pack32__8905__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8905__negative;
    __Vfunc_round_pack32__8905__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8905__exponent;
    __Vfunc_round_pack32__8905__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8905__significand;
    __Vfunc_round_pack32__8905__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8905__shifted;
    __Vfunc_round_pack32__8905__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8905__rounded;
    __Vfunc_round_pack32__8905__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8905__adjusted;
    __Vfunc_round_pack32__8905__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8905__biased;
    __Vfunc_round_pack32__8905__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8911__Vfuncout;
    __Vfunc_round_pack32__8911__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8911__negative;
    __Vfunc_round_pack32__8911__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8911__exponent;
    __Vfunc_round_pack32__8911__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8911__significand;
    __Vfunc_round_pack32__8911__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8911__shifted;
    __Vfunc_round_pack32__8911__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8911__rounded;
    __Vfunc_round_pack32__8911__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8911__adjusted;
    __Vfunc_round_pack32__8911__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8911__biased;
    __Vfunc_round_pack32__8911__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8917__Vfuncout;
    __Vfunc_round_pack32__8917__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8917__negative;
    __Vfunc_round_pack32__8917__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8917__exponent;
    __Vfunc_round_pack32__8917__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8917__significand;
    __Vfunc_round_pack32__8917__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8917__shifted;
    __Vfunc_round_pack32__8917__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8917__rounded;
    __Vfunc_round_pack32__8917__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8917__adjusted;
    __Vfunc_round_pack32__8917__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8917__biased;
    __Vfunc_round_pack32__8917__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8923__Vfuncout;
    __Vfunc_round_pack32__8923__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8923__negative;
    __Vfunc_round_pack32__8923__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8923__exponent;
    __Vfunc_round_pack32__8923__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8923__significand;
    __Vfunc_round_pack32__8923__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8923__shifted;
    __Vfunc_round_pack32__8923__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8923__rounded;
    __Vfunc_round_pack32__8923__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8923__adjusted;
    __Vfunc_round_pack32__8923__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8923__biased;
    __Vfunc_round_pack32__8923__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8929__Vfuncout;
    __Vfunc_round_pack32__8929__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8929__negative;
    __Vfunc_round_pack32__8929__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8929__exponent;
    __Vfunc_round_pack32__8929__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8929__significand;
    __Vfunc_round_pack32__8929__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8929__shifted;
    __Vfunc_round_pack32__8929__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8929__rounded;
    __Vfunc_round_pack32__8929__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8929__adjusted;
    __Vfunc_round_pack32__8929__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8929__biased;
    __Vfunc_round_pack32__8929__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8935__Vfuncout;
    __Vfunc_round_pack32__8935__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8935__negative;
    __Vfunc_round_pack32__8935__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8935__exponent;
    __Vfunc_round_pack32__8935__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8935__significand;
    __Vfunc_round_pack32__8935__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8935__shifted;
    __Vfunc_round_pack32__8935__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8935__rounded;
    __Vfunc_round_pack32__8935__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8935__adjusted;
    __Vfunc_round_pack32__8935__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8935__biased;
    __Vfunc_round_pack32__8935__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8941__Vfuncout;
    __Vfunc_round_pack32__8941__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8941__negative;
    __Vfunc_round_pack32__8941__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8941__exponent;
    __Vfunc_round_pack32__8941__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8941__significand;
    __Vfunc_round_pack32__8941__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8941__shifted;
    __Vfunc_round_pack32__8941__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8941__rounded;
    __Vfunc_round_pack32__8941__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8941__adjusted;
    __Vfunc_round_pack32__8941__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8941__biased;
    __Vfunc_round_pack32__8941__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8947__Vfuncout;
    __Vfunc_round_pack32__8947__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8947__negative;
    __Vfunc_round_pack32__8947__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8947__exponent;
    __Vfunc_round_pack32__8947__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8947__significand;
    __Vfunc_round_pack32__8947__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8947__shifted;
    __Vfunc_round_pack32__8947__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8947__rounded;
    __Vfunc_round_pack32__8947__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8947__adjusted;
    __Vfunc_round_pack32__8947__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8947__biased;
    __Vfunc_round_pack32__8947__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8953__Vfuncout;
    __Vfunc_round_pack32__8953__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8953__negative;
    __Vfunc_round_pack32__8953__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8953__exponent;
    __Vfunc_round_pack32__8953__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8953__significand;
    __Vfunc_round_pack32__8953__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8953__shifted;
    __Vfunc_round_pack32__8953__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8953__rounded;
    __Vfunc_round_pack32__8953__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8953__adjusted;
    __Vfunc_round_pack32__8953__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8953__biased;
    __Vfunc_round_pack32__8953__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8959__Vfuncout;
    __Vfunc_round_pack32__8959__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8959__negative;
    __Vfunc_round_pack32__8959__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8959__exponent;
    __Vfunc_round_pack32__8959__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8959__significand;
    __Vfunc_round_pack32__8959__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8959__shifted;
    __Vfunc_round_pack32__8959__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8959__rounded;
    __Vfunc_round_pack32__8959__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8959__adjusted;
    __Vfunc_round_pack32__8959__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8959__biased;
    __Vfunc_round_pack32__8959__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8965__Vfuncout;
    __Vfunc_round_pack32__8965__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8965__negative;
    __Vfunc_round_pack32__8965__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8965__exponent;
    __Vfunc_round_pack32__8965__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8965__significand;
    __Vfunc_round_pack32__8965__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8965__shifted;
    __Vfunc_round_pack32__8965__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8965__rounded;
    __Vfunc_round_pack32__8965__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8965__adjusted;
    __Vfunc_round_pack32__8965__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8965__biased;
    __Vfunc_round_pack32__8965__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8971__Vfuncout;
    __Vfunc_round_pack32__8971__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8971__negative;
    __Vfunc_round_pack32__8971__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8971__exponent;
    __Vfunc_round_pack32__8971__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8971__significand;
    __Vfunc_round_pack32__8971__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8971__shifted;
    __Vfunc_round_pack32__8971__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8971__rounded;
    __Vfunc_round_pack32__8971__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8971__adjusted;
    __Vfunc_round_pack32__8971__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8971__biased;
    __Vfunc_round_pack32__8971__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8977__Vfuncout;
    __Vfunc_round_pack32__8977__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8977__negative;
    __Vfunc_round_pack32__8977__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8977__exponent;
    __Vfunc_round_pack32__8977__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8977__significand;
    __Vfunc_round_pack32__8977__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8977__shifted;
    __Vfunc_round_pack32__8977__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8977__rounded;
    __Vfunc_round_pack32__8977__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8977__adjusted;
    __Vfunc_round_pack32__8977__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8977__biased;
    __Vfunc_round_pack32__8977__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8983__Vfuncout;
    __Vfunc_round_pack32__8983__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8983__negative;
    __Vfunc_round_pack32__8983__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8983__exponent;
    __Vfunc_round_pack32__8983__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8983__significand;
    __Vfunc_round_pack32__8983__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8983__shifted;
    __Vfunc_round_pack32__8983__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8983__rounded;
    __Vfunc_round_pack32__8983__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8983__adjusted;
    __Vfunc_round_pack32__8983__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8983__biased;
    __Vfunc_round_pack32__8983__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8989__Vfuncout;
    __Vfunc_round_pack32__8989__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8989__negative;
    __Vfunc_round_pack32__8989__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8989__exponent;
    __Vfunc_round_pack32__8989__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8989__significand;
    __Vfunc_round_pack32__8989__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8989__shifted;
    __Vfunc_round_pack32__8989__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8989__rounded;
    __Vfunc_round_pack32__8989__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8989__adjusted;
    __Vfunc_round_pack32__8989__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8989__biased;
    __Vfunc_round_pack32__8989__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__8995__Vfuncout;
    __Vfunc_round_pack32__8995__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__8995__negative;
    __Vfunc_round_pack32__8995__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8995__exponent;
    __Vfunc_round_pack32__8995__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8995__significand;
    __Vfunc_round_pack32__8995__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__8995__shifted;
    __Vfunc_round_pack32__8995__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__8995__rounded;
    __Vfunc_round_pack32__8995__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__8995__adjusted;
    __Vfunc_round_pack32__8995__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__8995__biased;
    __Vfunc_round_pack32__8995__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9001__Vfuncout;
    __Vfunc_round_pack32__9001__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9001__negative;
    __Vfunc_round_pack32__9001__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9001__exponent;
    __Vfunc_round_pack32__9001__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9001__significand;
    __Vfunc_round_pack32__9001__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9001__shifted;
    __Vfunc_round_pack32__9001__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9001__rounded;
    __Vfunc_round_pack32__9001__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9001__adjusted;
    __Vfunc_round_pack32__9001__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9001__biased;
    __Vfunc_round_pack32__9001__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9007__Vfuncout;
    __Vfunc_round_pack32__9007__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9007__negative;
    __Vfunc_round_pack32__9007__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9007__exponent;
    __Vfunc_round_pack32__9007__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9007__significand;
    __Vfunc_round_pack32__9007__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9007__shifted;
    __Vfunc_round_pack32__9007__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9007__rounded;
    __Vfunc_round_pack32__9007__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9007__adjusted;
    __Vfunc_round_pack32__9007__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9007__biased;
    __Vfunc_round_pack32__9007__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9013__Vfuncout;
    __Vfunc_round_pack32__9013__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9013__negative;
    __Vfunc_round_pack32__9013__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9013__exponent;
    __Vfunc_round_pack32__9013__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9013__significand;
    __Vfunc_round_pack32__9013__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9013__shifted;
    __Vfunc_round_pack32__9013__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9013__rounded;
    __Vfunc_round_pack32__9013__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9013__adjusted;
    __Vfunc_round_pack32__9013__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9013__biased;
    __Vfunc_round_pack32__9013__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9019__Vfuncout;
    __Vfunc_round_pack32__9019__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9019__negative;
    __Vfunc_round_pack32__9019__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9019__exponent;
    __Vfunc_round_pack32__9019__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9019__significand;
    __Vfunc_round_pack32__9019__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9019__shifted;
    __Vfunc_round_pack32__9019__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9019__rounded;
    __Vfunc_round_pack32__9019__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9019__adjusted;
    __Vfunc_round_pack32__9019__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9019__biased;
    __Vfunc_round_pack32__9019__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9025__Vfuncout;
    __Vfunc_round_pack32__9025__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9025__negative;
    __Vfunc_round_pack32__9025__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9025__exponent;
    __Vfunc_round_pack32__9025__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9025__significand;
    __Vfunc_round_pack32__9025__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9025__shifted;
    __Vfunc_round_pack32__9025__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9025__rounded;
    __Vfunc_round_pack32__9025__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9025__adjusted;
    __Vfunc_round_pack32__9025__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9025__biased;
    __Vfunc_round_pack32__9025__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9031__Vfuncout;
    __Vfunc_round_pack32__9031__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9031__negative;
    __Vfunc_round_pack32__9031__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9031__exponent;
    __Vfunc_round_pack32__9031__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9031__significand;
    __Vfunc_round_pack32__9031__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9031__shifted;
    __Vfunc_round_pack32__9031__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9031__rounded;
    __Vfunc_round_pack32__9031__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9031__adjusted;
    __Vfunc_round_pack32__9031__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9031__biased;
    __Vfunc_round_pack32__9031__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9037__Vfuncout;
    __Vfunc_round_pack32__9037__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9037__negative;
    __Vfunc_round_pack32__9037__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9037__exponent;
    __Vfunc_round_pack32__9037__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9037__significand;
    __Vfunc_round_pack32__9037__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9037__shifted;
    __Vfunc_round_pack32__9037__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9037__rounded;
    __Vfunc_round_pack32__9037__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9037__adjusted;
    __Vfunc_round_pack32__9037__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9037__biased;
    __Vfunc_round_pack32__9037__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9043__Vfuncout;
    __Vfunc_round_pack32__9043__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9043__negative;
    __Vfunc_round_pack32__9043__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9043__exponent;
    __Vfunc_round_pack32__9043__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9043__significand;
    __Vfunc_round_pack32__9043__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9043__shifted;
    __Vfunc_round_pack32__9043__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9043__rounded;
    __Vfunc_round_pack32__9043__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9043__adjusted;
    __Vfunc_round_pack32__9043__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9043__biased;
    __Vfunc_round_pack32__9043__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9049__Vfuncout;
    __Vfunc_round_pack32__9049__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9049__negative;
    __Vfunc_round_pack32__9049__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9049__exponent;
    __Vfunc_round_pack32__9049__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9049__significand;
    __Vfunc_round_pack32__9049__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9049__shifted;
    __Vfunc_round_pack32__9049__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9049__rounded;
    __Vfunc_round_pack32__9049__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9049__adjusted;
    __Vfunc_round_pack32__9049__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9049__biased;
    __Vfunc_round_pack32__9049__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9055__Vfuncout;
    __Vfunc_round_pack32__9055__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9055__negative;
    __Vfunc_round_pack32__9055__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9055__exponent;
    __Vfunc_round_pack32__9055__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9055__significand;
    __Vfunc_round_pack32__9055__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9055__shifted;
    __Vfunc_round_pack32__9055__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9055__rounded;
    __Vfunc_round_pack32__9055__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9055__adjusted;
    __Vfunc_round_pack32__9055__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9055__biased;
    __Vfunc_round_pack32__9055__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9061__Vfuncout;
    __Vfunc_round_pack32__9061__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9061__negative;
    __Vfunc_round_pack32__9061__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9061__exponent;
    __Vfunc_round_pack32__9061__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9061__significand;
    __Vfunc_round_pack32__9061__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9061__shifted;
    __Vfunc_round_pack32__9061__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9061__rounded;
    __Vfunc_round_pack32__9061__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9061__adjusted;
    __Vfunc_round_pack32__9061__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9061__biased;
    __Vfunc_round_pack32__9061__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9067__Vfuncout;
    __Vfunc_round_pack32__9067__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9067__negative;
    __Vfunc_round_pack32__9067__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9067__exponent;
    __Vfunc_round_pack32__9067__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9067__significand;
    __Vfunc_round_pack32__9067__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9067__shifted;
    __Vfunc_round_pack32__9067__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9067__rounded;
    __Vfunc_round_pack32__9067__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9067__adjusted;
    __Vfunc_round_pack32__9067__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9067__biased;
    __Vfunc_round_pack32__9067__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9073__Vfuncout;
    __Vfunc_round_pack32__9073__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9073__negative;
    __Vfunc_round_pack32__9073__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9073__exponent;
    __Vfunc_round_pack32__9073__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9073__significand;
    __Vfunc_round_pack32__9073__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9073__shifted;
    __Vfunc_round_pack32__9073__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9073__rounded;
    __Vfunc_round_pack32__9073__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9073__adjusted;
    __Vfunc_round_pack32__9073__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9073__biased;
    __Vfunc_round_pack32__9073__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9079__Vfuncout;
    __Vfunc_round_pack32__9079__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9079__negative;
    __Vfunc_round_pack32__9079__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9079__exponent;
    __Vfunc_round_pack32__9079__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9079__significand;
    __Vfunc_round_pack32__9079__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9079__shifted;
    __Vfunc_round_pack32__9079__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9079__rounded;
    __Vfunc_round_pack32__9079__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9079__adjusted;
    __Vfunc_round_pack32__9079__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9079__biased;
    __Vfunc_round_pack32__9079__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9085__Vfuncout;
    __Vfunc_round_pack32__9085__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9085__negative;
    __Vfunc_round_pack32__9085__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9085__exponent;
    __Vfunc_round_pack32__9085__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9085__significand;
    __Vfunc_round_pack32__9085__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9085__shifted;
    __Vfunc_round_pack32__9085__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9085__rounded;
    __Vfunc_round_pack32__9085__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9085__adjusted;
    __Vfunc_round_pack32__9085__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9085__biased;
    __Vfunc_round_pack32__9085__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9091__Vfuncout;
    __Vfunc_round_pack32__9091__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9091__negative;
    __Vfunc_round_pack32__9091__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9091__exponent;
    __Vfunc_round_pack32__9091__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9091__significand;
    __Vfunc_round_pack32__9091__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9091__shifted;
    __Vfunc_round_pack32__9091__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9091__rounded;
    __Vfunc_round_pack32__9091__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9091__adjusted;
    __Vfunc_round_pack32__9091__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9091__biased;
    __Vfunc_round_pack32__9091__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9097__Vfuncout;
    __Vfunc_round_pack32__9097__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9097__negative;
    __Vfunc_round_pack32__9097__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9097__exponent;
    __Vfunc_round_pack32__9097__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9097__significand;
    __Vfunc_round_pack32__9097__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9097__shifted;
    __Vfunc_round_pack32__9097__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9097__rounded;
    __Vfunc_round_pack32__9097__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9097__adjusted;
    __Vfunc_round_pack32__9097__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9097__biased;
    __Vfunc_round_pack32__9097__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9103__Vfuncout;
    __Vfunc_round_pack32__9103__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9103__negative;
    __Vfunc_round_pack32__9103__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9103__exponent;
    __Vfunc_round_pack32__9103__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9103__significand;
    __Vfunc_round_pack32__9103__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9103__shifted;
    __Vfunc_round_pack32__9103__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9103__rounded;
    __Vfunc_round_pack32__9103__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9103__adjusted;
    __Vfunc_round_pack32__9103__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9103__biased;
    __Vfunc_round_pack32__9103__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9109__Vfuncout;
    __Vfunc_round_pack32__9109__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9109__negative;
    __Vfunc_round_pack32__9109__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9109__exponent;
    __Vfunc_round_pack32__9109__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9109__significand;
    __Vfunc_round_pack32__9109__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9109__shifted;
    __Vfunc_round_pack32__9109__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9109__rounded;
    __Vfunc_round_pack32__9109__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9109__adjusted;
    __Vfunc_round_pack32__9109__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9109__biased;
    __Vfunc_round_pack32__9109__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9115__Vfuncout;
    __Vfunc_round_pack32__9115__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9115__negative;
    __Vfunc_round_pack32__9115__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9115__exponent;
    __Vfunc_round_pack32__9115__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9115__significand;
    __Vfunc_round_pack32__9115__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9115__shifted;
    __Vfunc_round_pack32__9115__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9115__rounded;
    __Vfunc_round_pack32__9115__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9115__adjusted;
    __Vfunc_round_pack32__9115__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9115__biased;
    __Vfunc_round_pack32__9115__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9121__Vfuncout;
    __Vfunc_round_pack32__9121__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9121__negative;
    __Vfunc_round_pack32__9121__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9121__exponent;
    __Vfunc_round_pack32__9121__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9121__significand;
    __Vfunc_round_pack32__9121__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9121__shifted;
    __Vfunc_round_pack32__9121__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9121__rounded;
    __Vfunc_round_pack32__9121__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9121__adjusted;
    __Vfunc_round_pack32__9121__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9121__biased;
    __Vfunc_round_pack32__9121__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9127__Vfuncout;
    __Vfunc_round_pack32__9127__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9127__negative;
    __Vfunc_round_pack32__9127__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9127__exponent;
    __Vfunc_round_pack32__9127__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9127__significand;
    __Vfunc_round_pack32__9127__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9127__shifted;
    __Vfunc_round_pack32__9127__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9127__rounded;
    __Vfunc_round_pack32__9127__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9127__adjusted;
    __Vfunc_round_pack32__9127__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9127__biased;
    __Vfunc_round_pack32__9127__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9133__Vfuncout;
    __Vfunc_round_pack32__9133__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9133__negative;
    __Vfunc_round_pack32__9133__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9133__exponent;
    __Vfunc_round_pack32__9133__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9133__significand;
    __Vfunc_round_pack32__9133__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9133__shifted;
    __Vfunc_round_pack32__9133__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9133__rounded;
    __Vfunc_round_pack32__9133__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9133__adjusted;
    __Vfunc_round_pack32__9133__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9133__biased;
    __Vfunc_round_pack32__9133__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9139__Vfuncout;
    __Vfunc_round_pack32__9139__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9139__negative;
    __Vfunc_round_pack32__9139__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9139__exponent;
    __Vfunc_round_pack32__9139__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9139__significand;
    __Vfunc_round_pack32__9139__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9139__shifted;
    __Vfunc_round_pack32__9139__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9139__rounded;
    __Vfunc_round_pack32__9139__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9139__adjusted;
    __Vfunc_round_pack32__9139__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9139__biased;
    __Vfunc_round_pack32__9139__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9145__Vfuncout;
    __Vfunc_round_pack32__9145__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9145__negative;
    __Vfunc_round_pack32__9145__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9145__exponent;
    __Vfunc_round_pack32__9145__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9145__significand;
    __Vfunc_round_pack32__9145__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9145__shifted;
    __Vfunc_round_pack32__9145__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9145__rounded;
    __Vfunc_round_pack32__9145__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9145__adjusted;
    __Vfunc_round_pack32__9145__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9145__biased;
    __Vfunc_round_pack32__9145__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9151__Vfuncout;
    __Vfunc_round_pack32__9151__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9151__negative;
    __Vfunc_round_pack32__9151__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9151__exponent;
    __Vfunc_round_pack32__9151__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9151__significand;
    __Vfunc_round_pack32__9151__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9151__shifted;
    __Vfunc_round_pack32__9151__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9151__rounded;
    __Vfunc_round_pack32__9151__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9151__adjusted;
    __Vfunc_round_pack32__9151__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9151__biased;
    __Vfunc_round_pack32__9151__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9157__Vfuncout;
    __Vfunc_round_pack32__9157__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9157__negative;
    __Vfunc_round_pack32__9157__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9157__exponent;
    __Vfunc_round_pack32__9157__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9157__significand;
    __Vfunc_round_pack32__9157__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9157__shifted;
    __Vfunc_round_pack32__9157__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9157__rounded;
    __Vfunc_round_pack32__9157__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9157__adjusted;
    __Vfunc_round_pack32__9157__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9157__biased;
    __Vfunc_round_pack32__9157__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9163__Vfuncout;
    __Vfunc_round_pack32__9163__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_round_pack32__9163__negative;
    __Vfunc_round_pack32__9163__negative = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9163__exponent;
    __Vfunc_round_pack32__9163__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9163__significand;
    __Vfunc_round_pack32__9163__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__9163__shifted;
    __Vfunc_round_pack32__9163__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__9163__rounded;
    __Vfunc_round_pack32__9163__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__9163__adjusted;
    __Vfunc_round_pack32__9163__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9163__biased;
    __Vfunc_round_pack32__9163__biased = 0;
    QData/*32:0*/ __Vfunc_round_pack32__9169__Vfuncout;
    __Vfunc_round_pack32__9169__Vfuncout = 0;
    CData/*7:0*/ __Vfunc_round_pack32__9169__biased;
    __Vfunc_round_pack32__9169__biased = 0;
    // Body
    if ((0x1000000U & vlSelf->__Vfunc_round_pack32__9169__rounded)) {
        vlSelf->__Vfunc_round_pack32__9169__rounded 
            = (0x1ffffffU & VL_SHIFTR_III(25,25,32, vlSelf->__Vfunc_round_pack32__9169__rounded, 1U));
        vlSelf->__Vfunc_round_pack32__9169__adjusted 
            = (0xfffU & ((IData)(1U) + (IData)(vlSelf->__Vfunc_round_pack32__9169__adjusted)));
    }
    __Vfunc_round_pack32__9169__biased = 0U;
    if ((0x800000U & vlSelf->__Vfunc_round_pack32__9169__rounded)) {
        __Vfunc_round_pack32__9169__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(vlSelf->__Vfunc_round_pack32__9169__adjusted)));
    }
    __Vfunc_round_pack32__9169__Vfuncout = (((0U == vlSelf->__Vfunc_round_pack32__9169__significand) 
                                             | (0U 
                                                == vlSelf->__Vfunc_round_pack32__9169__rounded))
                                             ? ((QData)((IData)(vlSelf->__Vfunc_round_pack32__9169__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(vlSelf->__Vfunc_round_pack32__9169__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(vlSelf->__Vfunc_round_pack32__9169__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9169__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & vlSelf->__Vfunc_round_pack32__9169__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__45__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9169__Vfuncout;
    __Vfunc_round_pack32__9163__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9163__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9163__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9163__adjusted = __Vfunc_round_pack32__9163__exponent;
    __Vfunc_round_pack32__9163__shifted = __Vfunc_round_pack32__9163__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9163__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9164__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9163__exponent)));
        vlSelf->__Vfunc_shift_jam27__9164__value = __Vfunc_round_pack32__9163__significand;
        __Vfunc_round_pack32__9163__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9164__distance))) {
            vlSelf->__Vfunc_shift_jam27__9164__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9164__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9164__distance))) {
            vlSelf->__Vfunc_shift_jam27__9164__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9164__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9164__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9164__value, (IData)(vlSelf->__Vfunc_shift_jam27__9164__distance)));
            vlSelf->__Vfunc_shift_jam27__9164__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9164__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9164__distance)))));
            vlSelf->__Vfunc_shift_jam27__9164__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9164__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9164__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9164__discarded))));
        }
        __Vfunc_round_pack32__9163__shifted = vlSelf->__Vfunc_shift_jam27__9164__Vfuncout;
    }
    __Vfunc_round_pack32__9163__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9163__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9163__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9163__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9163__rounded)) {
        __Vfunc_round_pack32__9163__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9163__rounded, 1U));
        __Vfunc_round_pack32__9163__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9163__adjusted)));
    }
    __Vfunc_round_pack32__9163__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9163__rounded)) {
        __Vfunc_round_pack32__9163__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9163__adjusted)));
    }
    __Vfunc_round_pack32__9163__Vfuncout = (((0U == __Vfunc_round_pack32__9163__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9163__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9163__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9163__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9163__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9163__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9163__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__44__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9163__Vfuncout;
    __Vfunc_round_pack32__9157__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9157__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9157__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9157__adjusted = __Vfunc_round_pack32__9157__exponent;
    __Vfunc_round_pack32__9157__shifted = __Vfunc_round_pack32__9157__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9157__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9158__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9157__exponent)));
        vlSelf->__Vfunc_shift_jam27__9158__value = __Vfunc_round_pack32__9157__significand;
        __Vfunc_round_pack32__9157__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9158__distance))) {
            vlSelf->__Vfunc_shift_jam27__9158__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9158__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9158__distance))) {
            vlSelf->__Vfunc_shift_jam27__9158__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9158__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9158__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9158__value, (IData)(vlSelf->__Vfunc_shift_jam27__9158__distance)));
            vlSelf->__Vfunc_shift_jam27__9158__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9158__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9158__distance)))));
            vlSelf->__Vfunc_shift_jam27__9158__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9158__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9158__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9158__discarded))));
        }
        __Vfunc_round_pack32__9157__shifted = vlSelf->__Vfunc_shift_jam27__9158__Vfuncout;
    }
    __Vfunc_round_pack32__9157__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9157__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9157__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9157__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9157__rounded)) {
        __Vfunc_round_pack32__9157__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9157__rounded, 1U));
        __Vfunc_round_pack32__9157__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9157__adjusted)));
    }
    __Vfunc_round_pack32__9157__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9157__rounded)) {
        __Vfunc_round_pack32__9157__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9157__adjusted)));
    }
    __Vfunc_round_pack32__9157__Vfuncout = (((0U == __Vfunc_round_pack32__9157__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9157__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9157__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9157__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9157__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9157__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9157__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__43__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9157__Vfuncout;
    __Vfunc_round_pack32__9151__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9151__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9151__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9151__adjusted = __Vfunc_round_pack32__9151__exponent;
    __Vfunc_round_pack32__9151__shifted = __Vfunc_round_pack32__9151__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9151__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9152__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9151__exponent)));
        vlSelf->__Vfunc_shift_jam27__9152__value = __Vfunc_round_pack32__9151__significand;
        __Vfunc_round_pack32__9151__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9152__distance))) {
            vlSelf->__Vfunc_shift_jam27__9152__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9152__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9152__distance))) {
            vlSelf->__Vfunc_shift_jam27__9152__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9152__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9152__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9152__value, (IData)(vlSelf->__Vfunc_shift_jam27__9152__distance)));
            vlSelf->__Vfunc_shift_jam27__9152__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9152__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9152__distance)))));
            vlSelf->__Vfunc_shift_jam27__9152__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9152__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9152__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9152__discarded))));
        }
        __Vfunc_round_pack32__9151__shifted = vlSelf->__Vfunc_shift_jam27__9152__Vfuncout;
    }
    __Vfunc_round_pack32__9151__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9151__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9151__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9151__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9151__rounded)) {
        __Vfunc_round_pack32__9151__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9151__rounded, 1U));
        __Vfunc_round_pack32__9151__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9151__adjusted)));
    }
    __Vfunc_round_pack32__9151__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9151__rounded)) {
        __Vfunc_round_pack32__9151__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9151__adjusted)));
    }
    __Vfunc_round_pack32__9151__Vfuncout = (((0U == __Vfunc_round_pack32__9151__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9151__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9151__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9151__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9151__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9151__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9151__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__42__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9151__Vfuncout;
    __Vfunc_round_pack32__9145__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9145__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9145__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9145__adjusted = __Vfunc_round_pack32__9145__exponent;
    __Vfunc_round_pack32__9145__shifted = __Vfunc_round_pack32__9145__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9145__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9146__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9145__exponent)));
        vlSelf->__Vfunc_shift_jam27__9146__value = __Vfunc_round_pack32__9145__significand;
        __Vfunc_round_pack32__9145__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9146__distance))) {
            vlSelf->__Vfunc_shift_jam27__9146__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9146__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9146__distance))) {
            vlSelf->__Vfunc_shift_jam27__9146__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9146__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9146__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9146__value, (IData)(vlSelf->__Vfunc_shift_jam27__9146__distance)));
            vlSelf->__Vfunc_shift_jam27__9146__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9146__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9146__distance)))));
            vlSelf->__Vfunc_shift_jam27__9146__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9146__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9146__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9146__discarded))));
        }
        __Vfunc_round_pack32__9145__shifted = vlSelf->__Vfunc_shift_jam27__9146__Vfuncout;
    }
    __Vfunc_round_pack32__9145__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9145__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9145__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9145__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9145__rounded)) {
        __Vfunc_round_pack32__9145__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9145__rounded, 1U));
        __Vfunc_round_pack32__9145__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9145__adjusted)));
    }
    __Vfunc_round_pack32__9145__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9145__rounded)) {
        __Vfunc_round_pack32__9145__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9145__adjusted)));
    }
    __Vfunc_round_pack32__9145__Vfuncout = (((0U == __Vfunc_round_pack32__9145__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9145__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9145__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9145__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9145__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9145__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9145__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__41__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9145__Vfuncout;
    __Vfunc_round_pack32__9139__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9139__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9139__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9139__adjusted = __Vfunc_round_pack32__9139__exponent;
    __Vfunc_round_pack32__9139__shifted = __Vfunc_round_pack32__9139__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9139__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9140__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9139__exponent)));
        vlSelf->__Vfunc_shift_jam27__9140__value = __Vfunc_round_pack32__9139__significand;
        __Vfunc_round_pack32__9139__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9140__distance))) {
            vlSelf->__Vfunc_shift_jam27__9140__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9140__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9140__distance))) {
            vlSelf->__Vfunc_shift_jam27__9140__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9140__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9140__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9140__value, (IData)(vlSelf->__Vfunc_shift_jam27__9140__distance)));
            vlSelf->__Vfunc_shift_jam27__9140__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9140__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9140__distance)))));
            vlSelf->__Vfunc_shift_jam27__9140__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9140__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9140__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9140__discarded))));
        }
        __Vfunc_round_pack32__9139__shifted = vlSelf->__Vfunc_shift_jam27__9140__Vfuncout;
    }
    __Vfunc_round_pack32__9139__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9139__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9139__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9139__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9139__rounded)) {
        __Vfunc_round_pack32__9139__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9139__rounded, 1U));
        __Vfunc_round_pack32__9139__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9139__adjusted)));
    }
    __Vfunc_round_pack32__9139__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9139__rounded)) {
        __Vfunc_round_pack32__9139__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9139__adjusted)));
    }
    __Vfunc_round_pack32__9139__Vfuncout = (((0U == __Vfunc_round_pack32__9139__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9139__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9139__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9139__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9139__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9139__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9139__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__40__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9139__Vfuncout;
    __Vfunc_round_pack32__9133__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9133__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9133__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9133__adjusted = __Vfunc_round_pack32__9133__exponent;
    __Vfunc_round_pack32__9133__shifted = __Vfunc_round_pack32__9133__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9133__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9134__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9133__exponent)));
        vlSelf->__Vfunc_shift_jam27__9134__value = __Vfunc_round_pack32__9133__significand;
        __Vfunc_round_pack32__9133__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9134__distance))) {
            vlSelf->__Vfunc_shift_jam27__9134__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9134__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9134__distance))) {
            vlSelf->__Vfunc_shift_jam27__9134__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9134__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9134__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9134__value, (IData)(vlSelf->__Vfunc_shift_jam27__9134__distance)));
            vlSelf->__Vfunc_shift_jam27__9134__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9134__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9134__distance)))));
            vlSelf->__Vfunc_shift_jam27__9134__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9134__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9134__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9134__discarded))));
        }
        __Vfunc_round_pack32__9133__shifted = vlSelf->__Vfunc_shift_jam27__9134__Vfuncout;
    }
    __Vfunc_round_pack32__9133__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9133__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9133__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9133__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9133__rounded)) {
        __Vfunc_round_pack32__9133__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9133__rounded, 1U));
        __Vfunc_round_pack32__9133__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9133__adjusted)));
    }
    __Vfunc_round_pack32__9133__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9133__rounded)) {
        __Vfunc_round_pack32__9133__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9133__adjusted)));
    }
    __Vfunc_round_pack32__9133__Vfuncout = (((0U == __Vfunc_round_pack32__9133__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9133__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9133__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9133__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9133__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9133__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9133__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__39__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9133__Vfuncout;
    __Vfunc_round_pack32__9127__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9127__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9127__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9127__adjusted = __Vfunc_round_pack32__9127__exponent;
    __Vfunc_round_pack32__9127__shifted = __Vfunc_round_pack32__9127__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9127__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9128__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9127__exponent)));
        vlSelf->__Vfunc_shift_jam27__9128__value = __Vfunc_round_pack32__9127__significand;
        __Vfunc_round_pack32__9127__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9128__distance))) {
            vlSelf->__Vfunc_shift_jam27__9128__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9128__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9128__distance))) {
            vlSelf->__Vfunc_shift_jam27__9128__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9128__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9128__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9128__value, (IData)(vlSelf->__Vfunc_shift_jam27__9128__distance)));
            vlSelf->__Vfunc_shift_jam27__9128__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9128__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9128__distance)))));
            vlSelf->__Vfunc_shift_jam27__9128__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9128__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9128__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9128__discarded))));
        }
        __Vfunc_round_pack32__9127__shifted = vlSelf->__Vfunc_shift_jam27__9128__Vfuncout;
    }
    __Vfunc_round_pack32__9127__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9127__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9127__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9127__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9127__rounded)) {
        __Vfunc_round_pack32__9127__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9127__rounded, 1U));
        __Vfunc_round_pack32__9127__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9127__adjusted)));
    }
    __Vfunc_round_pack32__9127__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9127__rounded)) {
        __Vfunc_round_pack32__9127__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9127__adjusted)));
    }
    __Vfunc_round_pack32__9127__Vfuncout = (((0U == __Vfunc_round_pack32__9127__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9127__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9127__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9127__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9127__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9127__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9127__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__38__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9127__Vfuncout;
    __Vfunc_round_pack32__9121__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9121__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9121__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9121__adjusted = __Vfunc_round_pack32__9121__exponent;
    __Vfunc_round_pack32__9121__shifted = __Vfunc_round_pack32__9121__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9121__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9122__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9121__exponent)));
        vlSelf->__Vfunc_shift_jam27__9122__value = __Vfunc_round_pack32__9121__significand;
        __Vfunc_round_pack32__9121__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9122__distance))) {
            vlSelf->__Vfunc_shift_jam27__9122__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9122__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9122__distance))) {
            vlSelf->__Vfunc_shift_jam27__9122__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9122__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9122__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9122__value, (IData)(vlSelf->__Vfunc_shift_jam27__9122__distance)));
            vlSelf->__Vfunc_shift_jam27__9122__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9122__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9122__distance)))));
            vlSelf->__Vfunc_shift_jam27__9122__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9122__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9122__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9122__discarded))));
        }
        __Vfunc_round_pack32__9121__shifted = vlSelf->__Vfunc_shift_jam27__9122__Vfuncout;
    }
    __Vfunc_round_pack32__9121__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9121__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9121__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9121__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9121__rounded)) {
        __Vfunc_round_pack32__9121__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9121__rounded, 1U));
        __Vfunc_round_pack32__9121__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9121__adjusted)));
    }
    __Vfunc_round_pack32__9121__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9121__rounded)) {
        __Vfunc_round_pack32__9121__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9121__adjusted)));
    }
    __Vfunc_round_pack32__9121__Vfuncout = (((0U == __Vfunc_round_pack32__9121__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9121__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9121__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9121__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9121__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9121__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9121__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__37__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9121__Vfuncout;
    __Vfunc_round_pack32__9115__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9115__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9115__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9115__adjusted = __Vfunc_round_pack32__9115__exponent;
    __Vfunc_round_pack32__9115__shifted = __Vfunc_round_pack32__9115__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9115__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9116__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9115__exponent)));
        vlSelf->__Vfunc_shift_jam27__9116__value = __Vfunc_round_pack32__9115__significand;
        __Vfunc_round_pack32__9115__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9116__distance))) {
            vlSelf->__Vfunc_shift_jam27__9116__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9116__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9116__distance))) {
            vlSelf->__Vfunc_shift_jam27__9116__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9116__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9116__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9116__value, (IData)(vlSelf->__Vfunc_shift_jam27__9116__distance)));
            vlSelf->__Vfunc_shift_jam27__9116__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9116__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9116__distance)))));
            vlSelf->__Vfunc_shift_jam27__9116__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9116__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9116__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9116__discarded))));
        }
        __Vfunc_round_pack32__9115__shifted = vlSelf->__Vfunc_shift_jam27__9116__Vfuncout;
    }
    __Vfunc_round_pack32__9115__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9115__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9115__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9115__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9115__rounded)) {
        __Vfunc_round_pack32__9115__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9115__rounded, 1U));
        __Vfunc_round_pack32__9115__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9115__adjusted)));
    }
    __Vfunc_round_pack32__9115__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9115__rounded)) {
        __Vfunc_round_pack32__9115__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9115__adjusted)));
    }
    __Vfunc_round_pack32__9115__Vfuncout = (((0U == __Vfunc_round_pack32__9115__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9115__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9115__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9115__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9115__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9115__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9115__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__36__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9115__Vfuncout;
    __Vfunc_round_pack32__9109__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9109__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9109__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9109__adjusted = __Vfunc_round_pack32__9109__exponent;
    __Vfunc_round_pack32__9109__shifted = __Vfunc_round_pack32__9109__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9109__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9110__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9109__exponent)));
        vlSelf->__Vfunc_shift_jam27__9110__value = __Vfunc_round_pack32__9109__significand;
        __Vfunc_round_pack32__9109__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9110__distance))) {
            vlSelf->__Vfunc_shift_jam27__9110__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9110__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9110__distance))) {
            vlSelf->__Vfunc_shift_jam27__9110__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9110__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9110__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9110__value, (IData)(vlSelf->__Vfunc_shift_jam27__9110__distance)));
            vlSelf->__Vfunc_shift_jam27__9110__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9110__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9110__distance)))));
            vlSelf->__Vfunc_shift_jam27__9110__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9110__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9110__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9110__discarded))));
        }
        __Vfunc_round_pack32__9109__shifted = vlSelf->__Vfunc_shift_jam27__9110__Vfuncout;
    }
    __Vfunc_round_pack32__9109__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9109__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9109__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9109__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9109__rounded)) {
        __Vfunc_round_pack32__9109__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9109__rounded, 1U));
        __Vfunc_round_pack32__9109__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9109__adjusted)));
    }
    __Vfunc_round_pack32__9109__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9109__rounded)) {
        __Vfunc_round_pack32__9109__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9109__adjusted)));
    }
    __Vfunc_round_pack32__9109__Vfuncout = (((0U == __Vfunc_round_pack32__9109__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9109__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9109__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9109__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9109__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9109__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9109__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__35__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9109__Vfuncout;
    __Vfunc_round_pack32__9103__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9103__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9103__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9103__adjusted = __Vfunc_round_pack32__9103__exponent;
    __Vfunc_round_pack32__9103__shifted = __Vfunc_round_pack32__9103__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9103__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9104__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9103__exponent)));
        vlSelf->__Vfunc_shift_jam27__9104__value = __Vfunc_round_pack32__9103__significand;
        __Vfunc_round_pack32__9103__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9104__distance))) {
            vlSelf->__Vfunc_shift_jam27__9104__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9104__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9104__distance))) {
            vlSelf->__Vfunc_shift_jam27__9104__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9104__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9104__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9104__value, (IData)(vlSelf->__Vfunc_shift_jam27__9104__distance)));
            vlSelf->__Vfunc_shift_jam27__9104__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9104__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9104__distance)))));
            vlSelf->__Vfunc_shift_jam27__9104__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9104__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9104__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9104__discarded))));
        }
        __Vfunc_round_pack32__9103__shifted = vlSelf->__Vfunc_shift_jam27__9104__Vfuncout;
    }
    __Vfunc_round_pack32__9103__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9103__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9103__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9103__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9103__rounded)) {
        __Vfunc_round_pack32__9103__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9103__rounded, 1U));
        __Vfunc_round_pack32__9103__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9103__adjusted)));
    }
    __Vfunc_round_pack32__9103__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9103__rounded)) {
        __Vfunc_round_pack32__9103__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9103__adjusted)));
    }
    __Vfunc_round_pack32__9103__Vfuncout = (((0U == __Vfunc_round_pack32__9103__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9103__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9103__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9103__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9103__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9103__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9103__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__34__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9103__Vfuncout;
    __Vfunc_round_pack32__9097__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9097__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9097__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9097__adjusted = __Vfunc_round_pack32__9097__exponent;
    __Vfunc_round_pack32__9097__shifted = __Vfunc_round_pack32__9097__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9097__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9098__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9097__exponent)));
        vlSelf->__Vfunc_shift_jam27__9098__value = __Vfunc_round_pack32__9097__significand;
        __Vfunc_round_pack32__9097__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9098__distance))) {
            vlSelf->__Vfunc_shift_jam27__9098__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9098__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9098__distance))) {
            vlSelf->__Vfunc_shift_jam27__9098__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9098__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9098__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9098__value, (IData)(vlSelf->__Vfunc_shift_jam27__9098__distance)));
            vlSelf->__Vfunc_shift_jam27__9098__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9098__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9098__distance)))));
            vlSelf->__Vfunc_shift_jam27__9098__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9098__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9098__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9098__discarded))));
        }
        __Vfunc_round_pack32__9097__shifted = vlSelf->__Vfunc_shift_jam27__9098__Vfuncout;
    }
    __Vfunc_round_pack32__9097__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9097__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9097__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9097__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9097__rounded)) {
        __Vfunc_round_pack32__9097__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9097__rounded, 1U));
        __Vfunc_round_pack32__9097__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9097__adjusted)));
    }
    __Vfunc_round_pack32__9097__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9097__rounded)) {
        __Vfunc_round_pack32__9097__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9097__adjusted)));
    }
    __Vfunc_round_pack32__9097__Vfuncout = (((0U == __Vfunc_round_pack32__9097__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9097__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9097__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9097__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9097__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9097__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9097__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__33__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9097__Vfuncout;
    __Vfunc_round_pack32__9091__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9091__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9091__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9091__adjusted = __Vfunc_round_pack32__9091__exponent;
    __Vfunc_round_pack32__9091__shifted = __Vfunc_round_pack32__9091__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9091__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9092__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9091__exponent)));
        vlSelf->__Vfunc_shift_jam27__9092__value = __Vfunc_round_pack32__9091__significand;
        __Vfunc_round_pack32__9091__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9092__distance))) {
            vlSelf->__Vfunc_shift_jam27__9092__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9092__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9092__distance))) {
            vlSelf->__Vfunc_shift_jam27__9092__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9092__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9092__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9092__value, (IData)(vlSelf->__Vfunc_shift_jam27__9092__distance)));
            vlSelf->__Vfunc_shift_jam27__9092__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9092__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9092__distance)))));
            vlSelf->__Vfunc_shift_jam27__9092__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9092__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9092__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9092__discarded))));
        }
        __Vfunc_round_pack32__9091__shifted = vlSelf->__Vfunc_shift_jam27__9092__Vfuncout;
    }
    __Vfunc_round_pack32__9091__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9091__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9091__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9091__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9091__rounded)) {
        __Vfunc_round_pack32__9091__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9091__rounded, 1U));
        __Vfunc_round_pack32__9091__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9091__adjusted)));
    }
    __Vfunc_round_pack32__9091__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9091__rounded)) {
        __Vfunc_round_pack32__9091__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9091__adjusted)));
    }
    __Vfunc_round_pack32__9091__Vfuncout = (((0U == __Vfunc_round_pack32__9091__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9091__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9091__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9091__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9091__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9091__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9091__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__32__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9091__Vfuncout;
    __Vfunc_round_pack32__9085__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9085__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9085__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9085__adjusted = __Vfunc_round_pack32__9085__exponent;
    __Vfunc_round_pack32__9085__shifted = __Vfunc_round_pack32__9085__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9085__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9086__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9085__exponent)));
        vlSelf->__Vfunc_shift_jam27__9086__value = __Vfunc_round_pack32__9085__significand;
        __Vfunc_round_pack32__9085__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9086__distance))) {
            vlSelf->__Vfunc_shift_jam27__9086__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9086__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9086__distance))) {
            vlSelf->__Vfunc_shift_jam27__9086__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9086__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9086__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9086__value, (IData)(vlSelf->__Vfunc_shift_jam27__9086__distance)));
            vlSelf->__Vfunc_shift_jam27__9086__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9086__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9086__distance)))));
            vlSelf->__Vfunc_shift_jam27__9086__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9086__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9086__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9086__discarded))));
        }
        __Vfunc_round_pack32__9085__shifted = vlSelf->__Vfunc_shift_jam27__9086__Vfuncout;
    }
    __Vfunc_round_pack32__9085__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9085__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9085__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9085__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9085__rounded)) {
        __Vfunc_round_pack32__9085__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9085__rounded, 1U));
        __Vfunc_round_pack32__9085__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9085__adjusted)));
    }
    __Vfunc_round_pack32__9085__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9085__rounded)) {
        __Vfunc_round_pack32__9085__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9085__adjusted)));
    }
    __Vfunc_round_pack32__9085__Vfuncout = (((0U == __Vfunc_round_pack32__9085__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9085__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9085__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9085__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9085__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9085__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9085__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__31__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9085__Vfuncout;
    __Vfunc_round_pack32__9079__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9079__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9079__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9079__adjusted = __Vfunc_round_pack32__9079__exponent;
    __Vfunc_round_pack32__9079__shifted = __Vfunc_round_pack32__9079__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9079__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9080__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9079__exponent)));
        vlSelf->__Vfunc_shift_jam27__9080__value = __Vfunc_round_pack32__9079__significand;
        __Vfunc_round_pack32__9079__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9080__distance))) {
            vlSelf->__Vfunc_shift_jam27__9080__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9080__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9080__distance))) {
            vlSelf->__Vfunc_shift_jam27__9080__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9080__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9080__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9080__value, (IData)(vlSelf->__Vfunc_shift_jam27__9080__distance)));
            vlSelf->__Vfunc_shift_jam27__9080__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9080__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9080__distance)))));
            vlSelf->__Vfunc_shift_jam27__9080__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9080__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9080__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9080__discarded))));
        }
        __Vfunc_round_pack32__9079__shifted = vlSelf->__Vfunc_shift_jam27__9080__Vfuncout;
    }
    __Vfunc_round_pack32__9079__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9079__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9079__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9079__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9079__rounded)) {
        __Vfunc_round_pack32__9079__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9079__rounded, 1U));
        __Vfunc_round_pack32__9079__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9079__adjusted)));
    }
    __Vfunc_round_pack32__9079__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9079__rounded)) {
        __Vfunc_round_pack32__9079__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9079__adjusted)));
    }
    __Vfunc_round_pack32__9079__Vfuncout = (((0U == __Vfunc_round_pack32__9079__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9079__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9079__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9079__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9079__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9079__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9079__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__30__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9079__Vfuncout;
    __Vfunc_round_pack32__9073__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9073__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9073__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9073__adjusted = __Vfunc_round_pack32__9073__exponent;
    __Vfunc_round_pack32__9073__shifted = __Vfunc_round_pack32__9073__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9073__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9074__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9073__exponent)));
        vlSelf->__Vfunc_shift_jam27__9074__value = __Vfunc_round_pack32__9073__significand;
        __Vfunc_round_pack32__9073__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9074__distance))) {
            vlSelf->__Vfunc_shift_jam27__9074__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9074__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9074__distance))) {
            vlSelf->__Vfunc_shift_jam27__9074__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9074__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9074__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9074__value, (IData)(vlSelf->__Vfunc_shift_jam27__9074__distance)));
            vlSelf->__Vfunc_shift_jam27__9074__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9074__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9074__distance)))));
            vlSelf->__Vfunc_shift_jam27__9074__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9074__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9074__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9074__discarded))));
        }
        __Vfunc_round_pack32__9073__shifted = vlSelf->__Vfunc_shift_jam27__9074__Vfuncout;
    }
    __Vfunc_round_pack32__9073__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9073__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9073__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9073__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9073__rounded)) {
        __Vfunc_round_pack32__9073__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9073__rounded, 1U));
        __Vfunc_round_pack32__9073__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9073__adjusted)));
    }
    __Vfunc_round_pack32__9073__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9073__rounded)) {
        __Vfunc_round_pack32__9073__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9073__adjusted)));
    }
    __Vfunc_round_pack32__9073__Vfuncout = (((0U == __Vfunc_round_pack32__9073__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9073__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9073__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9073__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9073__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9073__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9073__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__29__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9073__Vfuncout;
    __Vfunc_round_pack32__9067__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9067__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9067__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9067__adjusted = __Vfunc_round_pack32__9067__exponent;
    __Vfunc_round_pack32__9067__shifted = __Vfunc_round_pack32__9067__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9067__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9068__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9067__exponent)));
        vlSelf->__Vfunc_shift_jam27__9068__value = __Vfunc_round_pack32__9067__significand;
        __Vfunc_round_pack32__9067__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9068__distance))) {
            vlSelf->__Vfunc_shift_jam27__9068__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9068__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9068__distance))) {
            vlSelf->__Vfunc_shift_jam27__9068__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9068__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9068__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9068__value, (IData)(vlSelf->__Vfunc_shift_jam27__9068__distance)));
            vlSelf->__Vfunc_shift_jam27__9068__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9068__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9068__distance)))));
            vlSelf->__Vfunc_shift_jam27__9068__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9068__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9068__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9068__discarded))));
        }
        __Vfunc_round_pack32__9067__shifted = vlSelf->__Vfunc_shift_jam27__9068__Vfuncout;
    }
    __Vfunc_round_pack32__9067__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9067__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9067__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9067__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9067__rounded)) {
        __Vfunc_round_pack32__9067__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9067__rounded, 1U));
        __Vfunc_round_pack32__9067__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9067__adjusted)));
    }
    __Vfunc_round_pack32__9067__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9067__rounded)) {
        __Vfunc_round_pack32__9067__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9067__adjusted)));
    }
    __Vfunc_round_pack32__9067__Vfuncout = (((0U == __Vfunc_round_pack32__9067__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9067__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9067__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9067__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9067__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9067__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9067__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__28__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9067__Vfuncout;
    __Vfunc_round_pack32__9061__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9061__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9061__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9061__adjusted = __Vfunc_round_pack32__9061__exponent;
    __Vfunc_round_pack32__9061__shifted = __Vfunc_round_pack32__9061__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9061__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9062__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9061__exponent)));
        vlSelf->__Vfunc_shift_jam27__9062__value = __Vfunc_round_pack32__9061__significand;
        __Vfunc_round_pack32__9061__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9062__distance))) {
            vlSelf->__Vfunc_shift_jam27__9062__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9062__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9062__distance))) {
            vlSelf->__Vfunc_shift_jam27__9062__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9062__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9062__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9062__value, (IData)(vlSelf->__Vfunc_shift_jam27__9062__distance)));
            vlSelf->__Vfunc_shift_jam27__9062__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9062__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9062__distance)))));
            vlSelf->__Vfunc_shift_jam27__9062__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9062__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9062__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9062__discarded))));
        }
        __Vfunc_round_pack32__9061__shifted = vlSelf->__Vfunc_shift_jam27__9062__Vfuncout;
    }
    __Vfunc_round_pack32__9061__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9061__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9061__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9061__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9061__rounded)) {
        __Vfunc_round_pack32__9061__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9061__rounded, 1U));
        __Vfunc_round_pack32__9061__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9061__adjusted)));
    }
    __Vfunc_round_pack32__9061__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9061__rounded)) {
        __Vfunc_round_pack32__9061__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9061__adjusted)));
    }
    __Vfunc_round_pack32__9061__Vfuncout = (((0U == __Vfunc_round_pack32__9061__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9061__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9061__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9061__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9061__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9061__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9061__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__27__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9061__Vfuncout;
    __Vfunc_round_pack32__9055__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9055__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9055__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9055__adjusted = __Vfunc_round_pack32__9055__exponent;
    __Vfunc_round_pack32__9055__shifted = __Vfunc_round_pack32__9055__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9055__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9056__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9055__exponent)));
        vlSelf->__Vfunc_shift_jam27__9056__value = __Vfunc_round_pack32__9055__significand;
        __Vfunc_round_pack32__9055__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9056__distance))) {
            vlSelf->__Vfunc_shift_jam27__9056__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9056__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9056__distance))) {
            vlSelf->__Vfunc_shift_jam27__9056__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9056__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9056__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9056__value, (IData)(vlSelf->__Vfunc_shift_jam27__9056__distance)));
            vlSelf->__Vfunc_shift_jam27__9056__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9056__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9056__distance)))));
            vlSelf->__Vfunc_shift_jam27__9056__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9056__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9056__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9056__discarded))));
        }
        __Vfunc_round_pack32__9055__shifted = vlSelf->__Vfunc_shift_jam27__9056__Vfuncout;
    }
    __Vfunc_round_pack32__9055__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9055__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9055__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9055__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9055__rounded)) {
        __Vfunc_round_pack32__9055__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9055__rounded, 1U));
        __Vfunc_round_pack32__9055__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9055__adjusted)));
    }
    __Vfunc_round_pack32__9055__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9055__rounded)) {
        __Vfunc_round_pack32__9055__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9055__adjusted)));
    }
    __Vfunc_round_pack32__9055__Vfuncout = (((0U == __Vfunc_round_pack32__9055__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9055__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9055__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9055__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9055__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9055__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9055__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__26__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9055__Vfuncout;
    __Vfunc_round_pack32__9049__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9049__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9049__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9049__adjusted = __Vfunc_round_pack32__9049__exponent;
    __Vfunc_round_pack32__9049__shifted = __Vfunc_round_pack32__9049__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9049__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9050__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9049__exponent)));
        vlSelf->__Vfunc_shift_jam27__9050__value = __Vfunc_round_pack32__9049__significand;
        __Vfunc_round_pack32__9049__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9050__distance))) {
            vlSelf->__Vfunc_shift_jam27__9050__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9050__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9050__distance))) {
            vlSelf->__Vfunc_shift_jam27__9050__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9050__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9050__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9050__value, (IData)(vlSelf->__Vfunc_shift_jam27__9050__distance)));
            vlSelf->__Vfunc_shift_jam27__9050__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9050__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9050__distance)))));
            vlSelf->__Vfunc_shift_jam27__9050__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9050__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9050__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9050__discarded))));
        }
        __Vfunc_round_pack32__9049__shifted = vlSelf->__Vfunc_shift_jam27__9050__Vfuncout;
    }
    __Vfunc_round_pack32__9049__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9049__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9049__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9049__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9049__rounded)) {
        __Vfunc_round_pack32__9049__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9049__rounded, 1U));
        __Vfunc_round_pack32__9049__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9049__adjusted)));
    }
    __Vfunc_round_pack32__9049__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9049__rounded)) {
        __Vfunc_round_pack32__9049__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9049__adjusted)));
    }
    __Vfunc_round_pack32__9049__Vfuncout = (((0U == __Vfunc_round_pack32__9049__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9049__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9049__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9049__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9049__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9049__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9049__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__25__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9049__Vfuncout;
    __Vfunc_round_pack32__9043__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9043__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9043__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9043__adjusted = __Vfunc_round_pack32__9043__exponent;
    __Vfunc_round_pack32__9043__shifted = __Vfunc_round_pack32__9043__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9043__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9044__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9043__exponent)));
        vlSelf->__Vfunc_shift_jam27__9044__value = __Vfunc_round_pack32__9043__significand;
        __Vfunc_round_pack32__9043__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9044__distance))) {
            vlSelf->__Vfunc_shift_jam27__9044__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9044__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9044__distance))) {
            vlSelf->__Vfunc_shift_jam27__9044__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9044__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9044__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9044__value, (IData)(vlSelf->__Vfunc_shift_jam27__9044__distance)));
            vlSelf->__Vfunc_shift_jam27__9044__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9044__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9044__distance)))));
            vlSelf->__Vfunc_shift_jam27__9044__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9044__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9044__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9044__discarded))));
        }
        __Vfunc_round_pack32__9043__shifted = vlSelf->__Vfunc_shift_jam27__9044__Vfuncout;
    }
    __Vfunc_round_pack32__9043__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9043__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9043__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9043__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9043__rounded)) {
        __Vfunc_round_pack32__9043__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9043__rounded, 1U));
        __Vfunc_round_pack32__9043__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9043__adjusted)));
    }
    __Vfunc_round_pack32__9043__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9043__rounded)) {
        __Vfunc_round_pack32__9043__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9043__adjusted)));
    }
    __Vfunc_round_pack32__9043__Vfuncout = (((0U == __Vfunc_round_pack32__9043__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9043__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9043__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9043__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9043__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9043__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9043__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__24__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9043__Vfuncout;
    __Vfunc_round_pack32__9037__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9037__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9037__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9037__adjusted = __Vfunc_round_pack32__9037__exponent;
    __Vfunc_round_pack32__9037__shifted = __Vfunc_round_pack32__9037__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9037__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9038__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9037__exponent)));
        vlSelf->__Vfunc_shift_jam27__9038__value = __Vfunc_round_pack32__9037__significand;
        __Vfunc_round_pack32__9037__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9038__distance))) {
            vlSelf->__Vfunc_shift_jam27__9038__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9038__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9038__distance))) {
            vlSelf->__Vfunc_shift_jam27__9038__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9038__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9038__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9038__value, (IData)(vlSelf->__Vfunc_shift_jam27__9038__distance)));
            vlSelf->__Vfunc_shift_jam27__9038__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9038__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9038__distance)))));
            vlSelf->__Vfunc_shift_jam27__9038__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9038__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9038__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9038__discarded))));
        }
        __Vfunc_round_pack32__9037__shifted = vlSelf->__Vfunc_shift_jam27__9038__Vfuncout;
    }
    __Vfunc_round_pack32__9037__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9037__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9037__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9037__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9037__rounded)) {
        __Vfunc_round_pack32__9037__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9037__rounded, 1U));
        __Vfunc_round_pack32__9037__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9037__adjusted)));
    }
    __Vfunc_round_pack32__9037__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9037__rounded)) {
        __Vfunc_round_pack32__9037__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9037__adjusted)));
    }
    __Vfunc_round_pack32__9037__Vfuncout = (((0U == __Vfunc_round_pack32__9037__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9037__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9037__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9037__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9037__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9037__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9037__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__23__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9037__Vfuncout;
    __Vfunc_round_pack32__9031__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9031__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9031__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9031__adjusted = __Vfunc_round_pack32__9031__exponent;
    __Vfunc_round_pack32__9031__shifted = __Vfunc_round_pack32__9031__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9031__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9032__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9031__exponent)));
        vlSelf->__Vfunc_shift_jam27__9032__value = __Vfunc_round_pack32__9031__significand;
        __Vfunc_round_pack32__9031__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9032__distance))) {
            vlSelf->__Vfunc_shift_jam27__9032__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9032__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9032__distance))) {
            vlSelf->__Vfunc_shift_jam27__9032__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9032__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9032__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9032__value, (IData)(vlSelf->__Vfunc_shift_jam27__9032__distance)));
            vlSelf->__Vfunc_shift_jam27__9032__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9032__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9032__distance)))));
            vlSelf->__Vfunc_shift_jam27__9032__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9032__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9032__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9032__discarded))));
        }
        __Vfunc_round_pack32__9031__shifted = vlSelf->__Vfunc_shift_jam27__9032__Vfuncout;
    }
    __Vfunc_round_pack32__9031__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9031__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9031__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9031__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9031__rounded)) {
        __Vfunc_round_pack32__9031__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9031__rounded, 1U));
        __Vfunc_round_pack32__9031__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9031__adjusted)));
    }
    __Vfunc_round_pack32__9031__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9031__rounded)) {
        __Vfunc_round_pack32__9031__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9031__adjusted)));
    }
    __Vfunc_round_pack32__9031__Vfuncout = (((0U == __Vfunc_round_pack32__9031__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9031__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9031__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9031__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9031__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9031__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9031__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__22__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9031__Vfuncout;
    __Vfunc_round_pack32__9025__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9025__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9025__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9025__adjusted = __Vfunc_round_pack32__9025__exponent;
    __Vfunc_round_pack32__9025__shifted = __Vfunc_round_pack32__9025__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9025__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9026__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9025__exponent)));
        vlSelf->__Vfunc_shift_jam27__9026__value = __Vfunc_round_pack32__9025__significand;
        __Vfunc_round_pack32__9025__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9026__distance))) {
            vlSelf->__Vfunc_shift_jam27__9026__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9026__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9026__distance))) {
            vlSelf->__Vfunc_shift_jam27__9026__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9026__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9026__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9026__value, (IData)(vlSelf->__Vfunc_shift_jam27__9026__distance)));
            vlSelf->__Vfunc_shift_jam27__9026__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9026__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9026__distance)))));
            vlSelf->__Vfunc_shift_jam27__9026__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9026__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9026__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9026__discarded))));
        }
        __Vfunc_round_pack32__9025__shifted = vlSelf->__Vfunc_shift_jam27__9026__Vfuncout;
    }
    __Vfunc_round_pack32__9025__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9025__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9025__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9025__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9025__rounded)) {
        __Vfunc_round_pack32__9025__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9025__rounded, 1U));
        __Vfunc_round_pack32__9025__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9025__adjusted)));
    }
    __Vfunc_round_pack32__9025__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9025__rounded)) {
        __Vfunc_round_pack32__9025__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9025__adjusted)));
    }
    __Vfunc_round_pack32__9025__Vfuncout = (((0U == __Vfunc_round_pack32__9025__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9025__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9025__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9025__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9025__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9025__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9025__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__21__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9025__Vfuncout;
    __Vfunc_round_pack32__9019__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9019__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9019__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9019__adjusted = __Vfunc_round_pack32__9019__exponent;
    __Vfunc_round_pack32__9019__shifted = __Vfunc_round_pack32__9019__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9019__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9020__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9019__exponent)));
        vlSelf->__Vfunc_shift_jam27__9020__value = __Vfunc_round_pack32__9019__significand;
        __Vfunc_round_pack32__9019__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9020__distance))) {
            vlSelf->__Vfunc_shift_jam27__9020__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9020__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9020__distance))) {
            vlSelf->__Vfunc_shift_jam27__9020__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9020__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9020__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9020__value, (IData)(vlSelf->__Vfunc_shift_jam27__9020__distance)));
            vlSelf->__Vfunc_shift_jam27__9020__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9020__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9020__distance)))));
            vlSelf->__Vfunc_shift_jam27__9020__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9020__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9020__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9020__discarded))));
        }
        __Vfunc_round_pack32__9019__shifted = vlSelf->__Vfunc_shift_jam27__9020__Vfuncout;
    }
    __Vfunc_round_pack32__9019__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9019__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9019__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9019__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9019__rounded)) {
        __Vfunc_round_pack32__9019__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9019__rounded, 1U));
        __Vfunc_round_pack32__9019__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9019__adjusted)));
    }
    __Vfunc_round_pack32__9019__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9019__rounded)) {
        __Vfunc_round_pack32__9019__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9019__adjusted)));
    }
    __Vfunc_round_pack32__9019__Vfuncout = (((0U == __Vfunc_round_pack32__9019__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9019__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9019__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9019__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9019__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9019__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9019__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__20__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9019__Vfuncout;
    __Vfunc_round_pack32__9013__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9013__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9013__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9013__adjusted = __Vfunc_round_pack32__9013__exponent;
    __Vfunc_round_pack32__9013__shifted = __Vfunc_round_pack32__9013__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9013__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9014__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9013__exponent)));
        vlSelf->__Vfunc_shift_jam27__9014__value = __Vfunc_round_pack32__9013__significand;
        __Vfunc_round_pack32__9013__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9014__distance))) {
            vlSelf->__Vfunc_shift_jam27__9014__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9014__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9014__distance))) {
            vlSelf->__Vfunc_shift_jam27__9014__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9014__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9014__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9014__value, (IData)(vlSelf->__Vfunc_shift_jam27__9014__distance)));
            vlSelf->__Vfunc_shift_jam27__9014__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9014__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9014__distance)))));
            vlSelf->__Vfunc_shift_jam27__9014__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9014__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9014__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9014__discarded))));
        }
        __Vfunc_round_pack32__9013__shifted = vlSelf->__Vfunc_shift_jam27__9014__Vfuncout;
    }
    __Vfunc_round_pack32__9013__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9013__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9013__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9013__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9013__rounded)) {
        __Vfunc_round_pack32__9013__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9013__rounded, 1U));
        __Vfunc_round_pack32__9013__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9013__adjusted)));
    }
    __Vfunc_round_pack32__9013__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9013__rounded)) {
        __Vfunc_round_pack32__9013__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9013__adjusted)));
    }
    __Vfunc_round_pack32__9013__Vfuncout = (((0U == __Vfunc_round_pack32__9013__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9013__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9013__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9013__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9013__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9013__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9013__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__19__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9013__Vfuncout;
    __Vfunc_round_pack32__9007__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9007__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9007__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9007__adjusted = __Vfunc_round_pack32__9007__exponent;
    __Vfunc_round_pack32__9007__shifted = __Vfunc_round_pack32__9007__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9007__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9008__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9007__exponent)));
        vlSelf->__Vfunc_shift_jam27__9008__value = __Vfunc_round_pack32__9007__significand;
        __Vfunc_round_pack32__9007__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9008__distance))) {
            vlSelf->__Vfunc_shift_jam27__9008__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9008__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9008__distance))) {
            vlSelf->__Vfunc_shift_jam27__9008__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9008__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9008__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9008__value, (IData)(vlSelf->__Vfunc_shift_jam27__9008__distance)));
            vlSelf->__Vfunc_shift_jam27__9008__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9008__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9008__distance)))));
            vlSelf->__Vfunc_shift_jam27__9008__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9008__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9008__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9008__discarded))));
        }
        __Vfunc_round_pack32__9007__shifted = vlSelf->__Vfunc_shift_jam27__9008__Vfuncout;
    }
    __Vfunc_round_pack32__9007__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9007__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9007__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9007__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9007__rounded)) {
        __Vfunc_round_pack32__9007__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9007__rounded, 1U));
        __Vfunc_round_pack32__9007__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9007__adjusted)));
    }
    __Vfunc_round_pack32__9007__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9007__rounded)) {
        __Vfunc_round_pack32__9007__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9007__adjusted)));
    }
    __Vfunc_round_pack32__9007__Vfuncout = (((0U == __Vfunc_round_pack32__9007__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9007__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9007__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9007__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9007__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9007__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9007__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__18__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9007__Vfuncout;
    __Vfunc_round_pack32__9001__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__9001__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__9001__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__9001__adjusted = __Vfunc_round_pack32__9001__exponent;
    __Vfunc_round_pack32__9001__shifted = __Vfunc_round_pack32__9001__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__9001__exponent))) {
        vlSelf->__Vfunc_shift_jam27__9002__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__9001__exponent)));
        vlSelf->__Vfunc_shift_jam27__9002__value = __Vfunc_round_pack32__9001__significand;
        __Vfunc_round_pack32__9001__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__9002__distance))) {
            vlSelf->__Vfunc_shift_jam27__9002__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__9002__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__9002__distance))) {
            vlSelf->__Vfunc_shift_jam27__9002__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__9002__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__9002__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9002__value, (IData)(vlSelf->__Vfunc_shift_jam27__9002__distance)));
            vlSelf->__Vfunc_shift_jam27__9002__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__9002__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__9002__distance)))));
            vlSelf->__Vfunc_shift_jam27__9002__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__9002__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__9002__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__9002__discarded))));
        }
        __Vfunc_round_pack32__9001__shifted = vlSelf->__Vfunc_shift_jam27__9002__Vfuncout;
    }
    __Vfunc_round_pack32__9001__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__9001__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__9001__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__9001__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__9001__rounded)) {
        __Vfunc_round_pack32__9001__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__9001__rounded, 1U));
        __Vfunc_round_pack32__9001__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__9001__adjusted)));
    }
    __Vfunc_round_pack32__9001__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__9001__rounded)) {
        __Vfunc_round_pack32__9001__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__9001__adjusted)));
    }
    __Vfunc_round_pack32__9001__Vfuncout = (((0U == __Vfunc_round_pack32__9001__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__9001__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__9001__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__9001__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__9001__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__9001__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__9001__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__17__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__9001__Vfuncout;
    __Vfunc_round_pack32__8995__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8995__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8995__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8995__adjusted = __Vfunc_round_pack32__8995__exponent;
    __Vfunc_round_pack32__8995__shifted = __Vfunc_round_pack32__8995__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8995__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8996__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8995__exponent)));
        vlSelf->__Vfunc_shift_jam27__8996__value = __Vfunc_round_pack32__8995__significand;
        __Vfunc_round_pack32__8995__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8996__distance))) {
            vlSelf->__Vfunc_shift_jam27__8996__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8996__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8996__distance))) {
            vlSelf->__Vfunc_shift_jam27__8996__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8996__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8996__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8996__value, (IData)(vlSelf->__Vfunc_shift_jam27__8996__distance)));
            vlSelf->__Vfunc_shift_jam27__8996__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8996__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8996__distance)))));
            vlSelf->__Vfunc_shift_jam27__8996__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8996__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8996__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8996__discarded))));
        }
        __Vfunc_round_pack32__8995__shifted = vlSelf->__Vfunc_shift_jam27__8996__Vfuncout;
    }
    __Vfunc_round_pack32__8995__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8995__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8995__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8995__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8995__rounded)) {
        __Vfunc_round_pack32__8995__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8995__rounded, 1U));
        __Vfunc_round_pack32__8995__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8995__adjusted)));
    }
    __Vfunc_round_pack32__8995__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8995__rounded)) {
        __Vfunc_round_pack32__8995__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8995__adjusted)));
    }
    __Vfunc_round_pack32__8995__Vfuncout = (((0U == __Vfunc_round_pack32__8995__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8995__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8995__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8995__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8995__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8995__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8995__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__16__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8995__Vfuncout;
    __Vfunc_round_pack32__8989__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8989__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8989__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8989__adjusted = __Vfunc_round_pack32__8989__exponent;
    __Vfunc_round_pack32__8989__shifted = __Vfunc_round_pack32__8989__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8989__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8990__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8989__exponent)));
        vlSelf->__Vfunc_shift_jam27__8990__value = __Vfunc_round_pack32__8989__significand;
        __Vfunc_round_pack32__8989__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8990__distance))) {
            vlSelf->__Vfunc_shift_jam27__8990__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8990__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8990__distance))) {
            vlSelf->__Vfunc_shift_jam27__8990__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8990__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8990__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8990__value, (IData)(vlSelf->__Vfunc_shift_jam27__8990__distance)));
            vlSelf->__Vfunc_shift_jam27__8990__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8990__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8990__distance)))));
            vlSelf->__Vfunc_shift_jam27__8990__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8990__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8990__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8990__discarded))));
        }
        __Vfunc_round_pack32__8989__shifted = vlSelf->__Vfunc_shift_jam27__8990__Vfuncout;
    }
    __Vfunc_round_pack32__8989__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8989__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8989__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8989__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8989__rounded)) {
        __Vfunc_round_pack32__8989__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8989__rounded, 1U));
        __Vfunc_round_pack32__8989__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8989__adjusted)));
    }
    __Vfunc_round_pack32__8989__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8989__rounded)) {
        __Vfunc_round_pack32__8989__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8989__adjusted)));
    }
    __Vfunc_round_pack32__8989__Vfuncout = (((0U == __Vfunc_round_pack32__8989__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8989__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8989__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8989__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8989__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8989__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8989__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__15__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8989__Vfuncout;
    __Vfunc_round_pack32__8983__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8983__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8983__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8983__adjusted = __Vfunc_round_pack32__8983__exponent;
    __Vfunc_round_pack32__8983__shifted = __Vfunc_round_pack32__8983__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8983__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8984__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8983__exponent)));
        vlSelf->__Vfunc_shift_jam27__8984__value = __Vfunc_round_pack32__8983__significand;
        __Vfunc_round_pack32__8983__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8984__distance))) {
            vlSelf->__Vfunc_shift_jam27__8984__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8984__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8984__distance))) {
            vlSelf->__Vfunc_shift_jam27__8984__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8984__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8984__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8984__value, (IData)(vlSelf->__Vfunc_shift_jam27__8984__distance)));
            vlSelf->__Vfunc_shift_jam27__8984__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8984__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8984__distance)))));
            vlSelf->__Vfunc_shift_jam27__8984__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8984__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8984__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8984__discarded))));
        }
        __Vfunc_round_pack32__8983__shifted = vlSelf->__Vfunc_shift_jam27__8984__Vfuncout;
    }
    __Vfunc_round_pack32__8983__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8983__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8983__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8983__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8983__rounded)) {
        __Vfunc_round_pack32__8983__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8983__rounded, 1U));
        __Vfunc_round_pack32__8983__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8983__adjusted)));
    }
    __Vfunc_round_pack32__8983__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8983__rounded)) {
        __Vfunc_round_pack32__8983__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8983__adjusted)));
    }
    __Vfunc_round_pack32__8983__Vfuncout = (((0U == __Vfunc_round_pack32__8983__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8983__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8983__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8983__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8983__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8983__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8983__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__14__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8983__Vfuncout;
    __Vfunc_round_pack32__8977__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8977__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8977__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8977__adjusted = __Vfunc_round_pack32__8977__exponent;
    __Vfunc_round_pack32__8977__shifted = __Vfunc_round_pack32__8977__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8977__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8978__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8977__exponent)));
        vlSelf->__Vfunc_shift_jam27__8978__value = __Vfunc_round_pack32__8977__significand;
        __Vfunc_round_pack32__8977__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8978__distance))) {
            vlSelf->__Vfunc_shift_jam27__8978__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8978__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8978__distance))) {
            vlSelf->__Vfunc_shift_jam27__8978__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8978__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8978__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8978__value, (IData)(vlSelf->__Vfunc_shift_jam27__8978__distance)));
            vlSelf->__Vfunc_shift_jam27__8978__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8978__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8978__distance)))));
            vlSelf->__Vfunc_shift_jam27__8978__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8978__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8978__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8978__discarded))));
        }
        __Vfunc_round_pack32__8977__shifted = vlSelf->__Vfunc_shift_jam27__8978__Vfuncout;
    }
    __Vfunc_round_pack32__8977__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8977__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8977__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8977__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8977__rounded)) {
        __Vfunc_round_pack32__8977__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8977__rounded, 1U));
        __Vfunc_round_pack32__8977__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8977__adjusted)));
    }
    __Vfunc_round_pack32__8977__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8977__rounded)) {
        __Vfunc_round_pack32__8977__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8977__adjusted)));
    }
    __Vfunc_round_pack32__8977__Vfuncout = (((0U == __Vfunc_round_pack32__8977__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8977__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8977__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8977__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8977__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8977__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8977__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__13__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8977__Vfuncout;
    __Vfunc_round_pack32__8971__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8971__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8971__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8971__adjusted = __Vfunc_round_pack32__8971__exponent;
    __Vfunc_round_pack32__8971__shifted = __Vfunc_round_pack32__8971__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8971__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8972__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8971__exponent)));
        vlSelf->__Vfunc_shift_jam27__8972__value = __Vfunc_round_pack32__8971__significand;
        __Vfunc_round_pack32__8971__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8972__distance))) {
            vlSelf->__Vfunc_shift_jam27__8972__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8972__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8972__distance))) {
            vlSelf->__Vfunc_shift_jam27__8972__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8972__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8972__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8972__value, (IData)(vlSelf->__Vfunc_shift_jam27__8972__distance)));
            vlSelf->__Vfunc_shift_jam27__8972__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8972__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8972__distance)))));
            vlSelf->__Vfunc_shift_jam27__8972__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8972__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8972__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8972__discarded))));
        }
        __Vfunc_round_pack32__8971__shifted = vlSelf->__Vfunc_shift_jam27__8972__Vfuncout;
    }
    __Vfunc_round_pack32__8971__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8971__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8971__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8971__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8971__rounded)) {
        __Vfunc_round_pack32__8971__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8971__rounded, 1U));
        __Vfunc_round_pack32__8971__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8971__adjusted)));
    }
    __Vfunc_round_pack32__8971__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8971__rounded)) {
        __Vfunc_round_pack32__8971__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8971__adjusted)));
    }
    __Vfunc_round_pack32__8971__Vfuncout = (((0U == __Vfunc_round_pack32__8971__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8971__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8971__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8971__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8971__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8971__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8971__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__12__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8971__Vfuncout;
    __Vfunc_round_pack32__8965__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8965__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8965__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8965__adjusted = __Vfunc_round_pack32__8965__exponent;
    __Vfunc_round_pack32__8965__shifted = __Vfunc_round_pack32__8965__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8965__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8966__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8965__exponent)));
        vlSelf->__Vfunc_shift_jam27__8966__value = __Vfunc_round_pack32__8965__significand;
        __Vfunc_round_pack32__8965__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8966__distance))) {
            vlSelf->__Vfunc_shift_jam27__8966__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8966__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8966__distance))) {
            vlSelf->__Vfunc_shift_jam27__8966__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8966__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8966__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8966__value, (IData)(vlSelf->__Vfunc_shift_jam27__8966__distance)));
            vlSelf->__Vfunc_shift_jam27__8966__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8966__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8966__distance)))));
            vlSelf->__Vfunc_shift_jam27__8966__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8966__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8966__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8966__discarded))));
        }
        __Vfunc_round_pack32__8965__shifted = vlSelf->__Vfunc_shift_jam27__8966__Vfuncout;
    }
    __Vfunc_round_pack32__8965__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8965__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8965__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8965__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8965__rounded)) {
        __Vfunc_round_pack32__8965__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8965__rounded, 1U));
        __Vfunc_round_pack32__8965__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8965__adjusted)));
    }
    __Vfunc_round_pack32__8965__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8965__rounded)) {
        __Vfunc_round_pack32__8965__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8965__adjusted)));
    }
    __Vfunc_round_pack32__8965__Vfuncout = (((0U == __Vfunc_round_pack32__8965__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8965__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8965__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8965__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8965__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8965__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8965__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__11__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8965__Vfuncout;
    __Vfunc_round_pack32__8959__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8959__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8959__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8959__adjusted = __Vfunc_round_pack32__8959__exponent;
    __Vfunc_round_pack32__8959__shifted = __Vfunc_round_pack32__8959__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8959__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8960__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8959__exponent)));
        vlSelf->__Vfunc_shift_jam27__8960__value = __Vfunc_round_pack32__8959__significand;
        __Vfunc_round_pack32__8959__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8960__distance))) {
            vlSelf->__Vfunc_shift_jam27__8960__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8960__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8960__distance))) {
            vlSelf->__Vfunc_shift_jam27__8960__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8960__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8960__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8960__value, (IData)(vlSelf->__Vfunc_shift_jam27__8960__distance)));
            vlSelf->__Vfunc_shift_jam27__8960__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8960__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8960__distance)))));
            vlSelf->__Vfunc_shift_jam27__8960__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8960__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8960__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8960__discarded))));
        }
        __Vfunc_round_pack32__8959__shifted = vlSelf->__Vfunc_shift_jam27__8960__Vfuncout;
    }
    __Vfunc_round_pack32__8959__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8959__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8959__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8959__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8959__rounded)) {
        __Vfunc_round_pack32__8959__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8959__rounded, 1U));
        __Vfunc_round_pack32__8959__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8959__adjusted)));
    }
    __Vfunc_round_pack32__8959__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8959__rounded)) {
        __Vfunc_round_pack32__8959__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8959__adjusted)));
    }
    __Vfunc_round_pack32__8959__Vfuncout = (((0U == __Vfunc_round_pack32__8959__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8959__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8959__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8959__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8959__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8959__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8959__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__10__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8959__Vfuncout;
    __Vfunc_round_pack32__8953__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8953__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8953__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8953__adjusted = __Vfunc_round_pack32__8953__exponent;
    __Vfunc_round_pack32__8953__shifted = __Vfunc_round_pack32__8953__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8953__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8954__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8953__exponent)));
        vlSelf->__Vfunc_shift_jam27__8954__value = __Vfunc_round_pack32__8953__significand;
        __Vfunc_round_pack32__8953__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8954__distance))) {
            vlSelf->__Vfunc_shift_jam27__8954__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8954__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8954__distance))) {
            vlSelf->__Vfunc_shift_jam27__8954__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8954__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8954__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8954__value, (IData)(vlSelf->__Vfunc_shift_jam27__8954__distance)));
            vlSelf->__Vfunc_shift_jam27__8954__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8954__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8954__distance)))));
            vlSelf->__Vfunc_shift_jam27__8954__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8954__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8954__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8954__discarded))));
        }
        __Vfunc_round_pack32__8953__shifted = vlSelf->__Vfunc_shift_jam27__8954__Vfuncout;
    }
    __Vfunc_round_pack32__8953__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8953__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8953__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8953__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8953__rounded)) {
        __Vfunc_round_pack32__8953__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8953__rounded, 1U));
        __Vfunc_round_pack32__8953__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8953__adjusted)));
    }
    __Vfunc_round_pack32__8953__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8953__rounded)) {
        __Vfunc_round_pack32__8953__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8953__adjusted)));
    }
    __Vfunc_round_pack32__8953__Vfuncout = (((0U == __Vfunc_round_pack32__8953__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8953__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8953__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8953__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8953__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8953__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8953__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__9__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8953__Vfuncout;
    __Vfunc_round_pack32__8947__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8947__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8947__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8947__adjusted = __Vfunc_round_pack32__8947__exponent;
    __Vfunc_round_pack32__8947__shifted = __Vfunc_round_pack32__8947__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8947__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8948__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8947__exponent)));
        vlSelf->__Vfunc_shift_jam27__8948__value = __Vfunc_round_pack32__8947__significand;
        __Vfunc_round_pack32__8947__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8948__distance))) {
            vlSelf->__Vfunc_shift_jam27__8948__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8948__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8948__distance))) {
            vlSelf->__Vfunc_shift_jam27__8948__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8948__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8948__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8948__value, (IData)(vlSelf->__Vfunc_shift_jam27__8948__distance)));
            vlSelf->__Vfunc_shift_jam27__8948__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8948__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8948__distance)))));
            vlSelf->__Vfunc_shift_jam27__8948__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8948__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8948__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8948__discarded))));
        }
        __Vfunc_round_pack32__8947__shifted = vlSelf->__Vfunc_shift_jam27__8948__Vfuncout;
    }
    __Vfunc_round_pack32__8947__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8947__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8947__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8947__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8947__rounded)) {
        __Vfunc_round_pack32__8947__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8947__rounded, 1U));
        __Vfunc_round_pack32__8947__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8947__adjusted)));
    }
    __Vfunc_round_pack32__8947__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8947__rounded)) {
        __Vfunc_round_pack32__8947__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8947__adjusted)));
    }
    __Vfunc_round_pack32__8947__Vfuncout = (((0U == __Vfunc_round_pack32__8947__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8947__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8947__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8947__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8947__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8947__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8947__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__8__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8947__Vfuncout;
    __Vfunc_round_pack32__8941__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8941__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8941__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8941__adjusted = __Vfunc_round_pack32__8941__exponent;
    __Vfunc_round_pack32__8941__shifted = __Vfunc_round_pack32__8941__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8941__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8942__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8941__exponent)));
        vlSelf->__Vfunc_shift_jam27__8942__value = __Vfunc_round_pack32__8941__significand;
        __Vfunc_round_pack32__8941__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8942__distance))) {
            vlSelf->__Vfunc_shift_jam27__8942__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8942__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8942__distance))) {
            vlSelf->__Vfunc_shift_jam27__8942__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8942__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8942__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8942__value, (IData)(vlSelf->__Vfunc_shift_jam27__8942__distance)));
            vlSelf->__Vfunc_shift_jam27__8942__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8942__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8942__distance)))));
            vlSelf->__Vfunc_shift_jam27__8942__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8942__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8942__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8942__discarded))));
        }
        __Vfunc_round_pack32__8941__shifted = vlSelf->__Vfunc_shift_jam27__8942__Vfuncout;
    }
    __Vfunc_round_pack32__8941__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8941__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8941__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8941__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8941__rounded)) {
        __Vfunc_round_pack32__8941__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8941__rounded, 1U));
        __Vfunc_round_pack32__8941__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8941__adjusted)));
    }
    __Vfunc_round_pack32__8941__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8941__rounded)) {
        __Vfunc_round_pack32__8941__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8941__adjusted)));
    }
    __Vfunc_round_pack32__8941__Vfuncout = (((0U == __Vfunc_round_pack32__8941__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8941__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8941__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8941__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8941__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8941__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8941__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__7__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8941__Vfuncout;
    __Vfunc_round_pack32__8935__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8935__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8935__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8935__adjusted = __Vfunc_round_pack32__8935__exponent;
    __Vfunc_round_pack32__8935__shifted = __Vfunc_round_pack32__8935__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8935__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8936__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8935__exponent)));
        vlSelf->__Vfunc_shift_jam27__8936__value = __Vfunc_round_pack32__8935__significand;
        __Vfunc_round_pack32__8935__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8936__distance))) {
            vlSelf->__Vfunc_shift_jam27__8936__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8936__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8936__distance))) {
            vlSelf->__Vfunc_shift_jam27__8936__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8936__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8936__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8936__value, (IData)(vlSelf->__Vfunc_shift_jam27__8936__distance)));
            vlSelf->__Vfunc_shift_jam27__8936__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8936__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8936__distance)))));
            vlSelf->__Vfunc_shift_jam27__8936__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8936__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8936__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8936__discarded))));
        }
        __Vfunc_round_pack32__8935__shifted = vlSelf->__Vfunc_shift_jam27__8936__Vfuncout;
    }
    __Vfunc_round_pack32__8935__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8935__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8935__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8935__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8935__rounded)) {
        __Vfunc_round_pack32__8935__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8935__rounded, 1U));
        __Vfunc_round_pack32__8935__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8935__adjusted)));
    }
    __Vfunc_round_pack32__8935__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8935__rounded)) {
        __Vfunc_round_pack32__8935__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8935__adjusted)));
    }
    __Vfunc_round_pack32__8935__Vfuncout = (((0U == __Vfunc_round_pack32__8935__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8935__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8935__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8935__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8935__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8935__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8935__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__6__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8935__Vfuncout;
    __Vfunc_round_pack32__8929__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8929__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8929__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8929__adjusted = __Vfunc_round_pack32__8929__exponent;
    __Vfunc_round_pack32__8929__shifted = __Vfunc_round_pack32__8929__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8929__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8930__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8929__exponent)));
        vlSelf->__Vfunc_shift_jam27__8930__value = __Vfunc_round_pack32__8929__significand;
        __Vfunc_round_pack32__8929__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8930__distance))) {
            vlSelf->__Vfunc_shift_jam27__8930__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8930__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8930__distance))) {
            vlSelf->__Vfunc_shift_jam27__8930__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8930__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8930__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8930__value, (IData)(vlSelf->__Vfunc_shift_jam27__8930__distance)));
            vlSelf->__Vfunc_shift_jam27__8930__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8930__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8930__distance)))));
            vlSelf->__Vfunc_shift_jam27__8930__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8930__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8930__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8930__discarded))));
        }
        __Vfunc_round_pack32__8929__shifted = vlSelf->__Vfunc_shift_jam27__8930__Vfuncout;
    }
    __Vfunc_round_pack32__8929__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8929__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8929__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8929__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8929__rounded)) {
        __Vfunc_round_pack32__8929__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8929__rounded, 1U));
        __Vfunc_round_pack32__8929__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8929__adjusted)));
    }
    __Vfunc_round_pack32__8929__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8929__rounded)) {
        __Vfunc_round_pack32__8929__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8929__adjusted)));
    }
    __Vfunc_round_pack32__8929__Vfuncout = (((0U == __Vfunc_round_pack32__8929__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8929__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8929__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8929__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8929__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8929__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8929__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__5__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8929__Vfuncout;
    __Vfunc_round_pack32__8923__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8923__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8923__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8923__adjusted = __Vfunc_round_pack32__8923__exponent;
    __Vfunc_round_pack32__8923__shifted = __Vfunc_round_pack32__8923__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8923__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8924__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8923__exponent)));
        vlSelf->__Vfunc_shift_jam27__8924__value = __Vfunc_round_pack32__8923__significand;
        __Vfunc_round_pack32__8923__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8924__distance))) {
            vlSelf->__Vfunc_shift_jam27__8924__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8924__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8924__distance))) {
            vlSelf->__Vfunc_shift_jam27__8924__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8924__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8924__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8924__value, (IData)(vlSelf->__Vfunc_shift_jam27__8924__distance)));
            vlSelf->__Vfunc_shift_jam27__8924__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8924__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8924__distance)))));
            vlSelf->__Vfunc_shift_jam27__8924__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8924__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8924__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8924__discarded))));
        }
        __Vfunc_round_pack32__8923__shifted = vlSelf->__Vfunc_shift_jam27__8924__Vfuncout;
    }
    __Vfunc_round_pack32__8923__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8923__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8923__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8923__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8923__rounded)) {
        __Vfunc_round_pack32__8923__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8923__rounded, 1U));
        __Vfunc_round_pack32__8923__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8923__adjusted)));
    }
    __Vfunc_round_pack32__8923__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8923__rounded)) {
        __Vfunc_round_pack32__8923__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8923__adjusted)));
    }
    __Vfunc_round_pack32__8923__Vfuncout = (((0U == __Vfunc_round_pack32__8923__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8923__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8923__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8923__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8923__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8923__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8923__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__4__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8923__Vfuncout;
    __Vfunc_round_pack32__8917__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8917__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8917__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8917__adjusted = __Vfunc_round_pack32__8917__exponent;
    __Vfunc_round_pack32__8917__shifted = __Vfunc_round_pack32__8917__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8917__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8918__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8917__exponent)));
        vlSelf->__Vfunc_shift_jam27__8918__value = __Vfunc_round_pack32__8917__significand;
        __Vfunc_round_pack32__8917__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8918__distance))) {
            vlSelf->__Vfunc_shift_jam27__8918__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8918__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8918__distance))) {
            vlSelf->__Vfunc_shift_jam27__8918__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8918__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8918__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8918__value, (IData)(vlSelf->__Vfunc_shift_jam27__8918__distance)));
            vlSelf->__Vfunc_shift_jam27__8918__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8918__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8918__distance)))));
            vlSelf->__Vfunc_shift_jam27__8918__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8918__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8918__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8918__discarded))));
        }
        __Vfunc_round_pack32__8917__shifted = vlSelf->__Vfunc_shift_jam27__8918__Vfuncout;
    }
    __Vfunc_round_pack32__8917__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8917__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8917__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8917__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8917__rounded)) {
        __Vfunc_round_pack32__8917__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8917__rounded, 1U));
        __Vfunc_round_pack32__8917__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8917__adjusted)));
    }
    __Vfunc_round_pack32__8917__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8917__rounded)) {
        __Vfunc_round_pack32__8917__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8917__adjusted)));
    }
    __Vfunc_round_pack32__8917__Vfuncout = (((0U == __Vfunc_round_pack32__8917__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8917__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8917__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8917__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8917__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8917__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8917__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__3__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8917__Vfuncout;
    __Vfunc_round_pack32__8911__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8911__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8911__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8911__adjusted = __Vfunc_round_pack32__8911__exponent;
    __Vfunc_round_pack32__8911__shifted = __Vfunc_round_pack32__8911__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8911__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8912__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8911__exponent)));
        vlSelf->__Vfunc_shift_jam27__8912__value = __Vfunc_round_pack32__8911__significand;
        __Vfunc_round_pack32__8911__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8912__distance))) {
            vlSelf->__Vfunc_shift_jam27__8912__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8912__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8912__distance))) {
            vlSelf->__Vfunc_shift_jam27__8912__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8912__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8912__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8912__value, (IData)(vlSelf->__Vfunc_shift_jam27__8912__distance)));
            vlSelf->__Vfunc_shift_jam27__8912__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8912__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8912__distance)))));
            vlSelf->__Vfunc_shift_jam27__8912__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8912__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8912__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8912__discarded))));
        }
        __Vfunc_round_pack32__8911__shifted = vlSelf->__Vfunc_shift_jam27__8912__Vfuncout;
    }
    __Vfunc_round_pack32__8911__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8911__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8911__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8911__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8911__rounded)) {
        __Vfunc_round_pack32__8911__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8911__rounded, 1U));
        __Vfunc_round_pack32__8911__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8911__adjusted)));
    }
    __Vfunc_round_pack32__8911__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8911__rounded)) {
        __Vfunc_round_pack32__8911__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8911__adjusted)));
    }
    __Vfunc_round_pack32__8911__Vfuncout = (((0U == __Vfunc_round_pack32__8911__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8911__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8911__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8911__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8911__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8911__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8911__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__2__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8911__Vfuncout;
    __Vfunc_round_pack32__8905__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8905__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8905__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8905__adjusted = __Vfunc_round_pack32__8905__exponent;
    __Vfunc_round_pack32__8905__shifted = __Vfunc_round_pack32__8905__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8905__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8906__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8905__exponent)));
        vlSelf->__Vfunc_shift_jam27__8906__value = __Vfunc_round_pack32__8905__significand;
        __Vfunc_round_pack32__8905__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8906__distance))) {
            vlSelf->__Vfunc_shift_jam27__8906__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8906__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8906__distance))) {
            vlSelf->__Vfunc_shift_jam27__8906__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8906__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8906__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8906__value, (IData)(vlSelf->__Vfunc_shift_jam27__8906__distance)));
            vlSelf->__Vfunc_shift_jam27__8906__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8906__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8906__distance)))));
            vlSelf->__Vfunc_shift_jam27__8906__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8906__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8906__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8906__discarded))));
        }
        __Vfunc_round_pack32__8905__shifted = vlSelf->__Vfunc_shift_jam27__8906__Vfuncout;
    }
    __Vfunc_round_pack32__8905__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8905__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8905__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8905__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8905__rounded)) {
        __Vfunc_round_pack32__8905__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8905__rounded, 1U));
        __Vfunc_round_pack32__8905__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8905__adjusted)));
    }
    __Vfunc_round_pack32__8905__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8905__rounded)) {
        __Vfunc_round_pack32__8905__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8905__adjusted)));
    }
    __Vfunc_round_pack32__8905__Vfuncout = (((0U == __Vfunc_round_pack32__8905__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8905__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8905__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8905__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8905__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8905__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8905__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__1__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8905__Vfuncout;
    __Vfunc_round_pack32__8899__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__significand3;
    __Vfunc_round_pack32__8899__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__exponent3;
    __Vfunc_round_pack32__8899__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__negative) 
                                                  >> 2U));
    __Vfunc_round_pack32__8899__adjusted = __Vfunc_round_pack32__8899__exponent;
    __Vfunc_round_pack32__8899__shifted = __Vfunc_round_pack32__8899__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8899__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8900__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8899__exponent)));
        vlSelf->__Vfunc_shift_jam27__8900__value = __Vfunc_round_pack32__8899__significand;
        __Vfunc_round_pack32__8899__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8900__distance))) {
            vlSelf->__Vfunc_shift_jam27__8900__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8900__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8900__distance))) {
            vlSelf->__Vfunc_shift_jam27__8900__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8900__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8900__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8900__value, (IData)(vlSelf->__Vfunc_shift_jam27__8900__distance)));
            vlSelf->__Vfunc_shift_jam27__8900__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8900__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8900__distance)))));
            vlSelf->__Vfunc_shift_jam27__8900__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8900__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8900__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8900__discarded))));
        }
        __Vfunc_round_pack32__8899__shifted = vlSelf->__Vfunc_shift_jam27__8900__Vfuncout;
    }
    __Vfunc_round_pack32__8899__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8899__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8899__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8899__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8899__rounded)) {
        __Vfunc_round_pack32__8899__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8899__rounded, 1U));
        __Vfunc_round_pack32__8899__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8899__adjusted)));
    }
    __Vfunc_round_pack32__8899__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8899__rounded)) {
        __Vfunc_round_pack32__8899__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8899__adjusted)));
    }
    __Vfunc_round_pack32__8899__Vfuncout = (((0U == __Vfunc_round_pack32__8899__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8899__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8899__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8899__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8899__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8899__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8899__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__squares__BRA__0__KET____DOT__active_coordinate__DOT__square__DOT__packed4 
        = __Vfunc_round_pack32__8899__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__take_bit 
        = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__remainder 
            << 1U) >= vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__divisor);
    __Vfunc_round_pack32__8893__significand = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__zero)
                                                ? 0U
                                                : (
                                                   (0x7fffffeU 
                                                    & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__quotient) 
                                                   | (1U 
                                                      & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__quotient 
                                                         | (0U 
                                                            != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__remainder)))));
    __Vfunc_round_pack32__8893__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__exponent;
    __Vfunc_round_pack32__8893__negative = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__negative;
    __Vfunc_round_pack32__8893__adjusted = __Vfunc_round_pack32__8893__exponent;
    __Vfunc_round_pack32__8893__shifted = __Vfunc_round_pack32__8893__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__8893__exponent))) {
        vlSelf->__Vfunc_shift_jam27__8894__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__8893__exponent)));
        vlSelf->__Vfunc_shift_jam27__8894__value = __Vfunc_round_pack32__8893__significand;
        __Vfunc_round_pack32__8893__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__8894__distance))) {
            vlSelf->__Vfunc_shift_jam27__8894__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__8894__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__8894__distance))) {
            vlSelf->__Vfunc_shift_jam27__8894__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__8894__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__8894__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8894__value, (IData)(vlSelf->__Vfunc_shift_jam27__8894__distance)));
            vlSelf->__Vfunc_shift_jam27__8894__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__8894__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__8894__distance)))));
            vlSelf->__Vfunc_shift_jam27__8894__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__8894__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__8894__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__8894__discarded))));
        }
        __Vfunc_round_pack32__8893__shifted = vlSelf->__Vfunc_shift_jam27__8894__Vfuncout;
    }
    __Vfunc_round_pack32__8893__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__8893__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__8893__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__8893__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__8893__rounded)) {
        __Vfunc_round_pack32__8893__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__8893__rounded, 1U));
        __Vfunc_round_pack32__8893__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__8893__adjusted)));
    }
    __Vfunc_round_pack32__8893__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__8893__rounded)) {
        __Vfunc_round_pack32__8893__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__8893__adjusted)));
    }
    __Vfunc_round_pack32__8893__Vfuncout = (((0U == __Vfunc_round_pack32__8893__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__8893__rounded))
                                             ? ((QData)((IData)(__Vfunc_round_pack32__8893__negative)) 
                                                << 0x1fU)
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__8893__adjusted))
                                                 ? 0x100000000ULL
                                                 : 
                                                (((QData)((IData)(__Vfunc_round_pack32__8893__negative)) 
                                                  << 0x1fU) 
                                                 | (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__8893__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__8893__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__inverse_root__DOT__packed_result 
        = __Vfunc_round_pack32__8893__Vfuncout;
    if (vlSelf->rst_n) {
        if ((1U & (~ (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort)))) {
            if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_valid) 
                 & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_ready))) {
                __Vilp = 0U;
                while ((__Vilp <= 0x3fU)) {
                    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[__Vilp] 
                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__hb_data[__Vilp];
                    __Vilp = ((IData)(1U) + __Vilp);
                }
            }
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__captured[__Vilp] 
                = Vanvil_qn1_top__ConstPool__CONST_h6be9aa18_0[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->rst_n) {
        if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__abort) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__active = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__value = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__result_failed = 0U;
        } else if ((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__owned) 
                     & (0x2dU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age))) 
                    & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__root_ready))) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__active = 1U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__cycle = 1U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__pairs 
                = (0x3fffffffffffffULL & ((QData)((IData)(
                                                          (0xffffffU 
                                                           & VL_SHIFTL_III(24,24,6, vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__shift))))) 
                                          << ((1U & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__input_exponent))
                                               ? 0x1eU
                                               : 0x1dU)));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__remainder = 0U;
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__root = 0U;
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__exponent 
                = (0xfffU & VL_SHIFTRS_III(12,12,32, (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__input_exponent), 1U));
            vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__negative 
                = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_sum 
                    >> 0x1fU) & (0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw));
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__failed 
                = (((((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellout__attention__rsp_ready) 
                      & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_add__DOT__error5)) 
                     | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__head_failed)) 
                    | ([&]() {
                            __Vfunc_fp32_invalid__8890__value 
                                = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_sum;
                            __Vfunc_fp32_invalid__8890__Vfuncout 
                                = (0xffU == (0xffU 
                                             & (__Vfunc_fp32_invalid__8890__value 
                                                >> 0x17U)));
                        }(), (IData)(__Vfunc_fp32_invalid__8890__Vfuncout))) 
                   | ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__epsilon_sum 
                       >> 0x1fU) & (0U != vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__raw)));
        } else if (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__active) {
            vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__cycle 
                = (0x3fU & ((IData)(1U) + (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__cycle)));
            if ((0x1bU >= (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__cycle))) {
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__pairs 
                    = (0x3ffffffffffffcULL & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__pairs 
                                              << 2U));
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__root 
                    = ((0x7fffffeU & (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__root 
                                      << 1U)) | (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__take_bit));
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__remainder 
                    = (0x1fffffffU & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__next_remainder);
            } else if ((0x1cU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__cycle))) {
                if (((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__failed) 
                     | (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__packed_result 
                        >> 0x20U))) {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_value = 0U;
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_failed = 1U;
                } else {
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_value 
                        = (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__packed_result);
                    vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_failed = 0U;
                }
            } else if ((0x21U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__cycle))) {
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__value 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_value;
                vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__result_failed 
                    = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_failed;
                vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__active = 0U;
            }
        }
    } else {
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__active = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__failed = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__negative = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__cycle = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__pairs = 0ULL;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__remainder = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__root = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__exponent = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__value = 0U;
        vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__result_failed = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_value = 0U;
        vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__square_root__DOT__rounded_failed = 0U;
    }
    __Vfunc_round_pack32__800__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__800__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__800__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__800__adjusted = __Vfunc_round_pack32__800__exponent;
    __Vfunc_round_pack32__800__shifted = __Vfunc_round_pack32__800__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__800__exponent))) {
        vlSelf->__Vfunc_shift_jam27__801__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__800__exponent)));
        vlSelf->__Vfunc_shift_jam27__801__value = __Vfunc_round_pack32__800__significand;
        __Vfunc_round_pack32__800__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__801__distance))) {
            vlSelf->__Vfunc_shift_jam27__801__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__801__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__801__distance))) {
            vlSelf->__Vfunc_shift_jam27__801__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__801__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__801__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__801__value, (IData)(vlSelf->__Vfunc_shift_jam27__801__distance)));
            vlSelf->__Vfunc_shift_jam27__801__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__801__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__801__distance)))));
            vlSelf->__Vfunc_shift_jam27__801__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__801__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__801__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__801__discarded))));
        }
        __Vfunc_round_pack32__800__shifted = vlSelf->__Vfunc_shift_jam27__801__Vfuncout;
    }
    __Vfunc_round_pack32__800__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__800__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__800__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__800__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__800__rounded)) {
        __Vfunc_round_pack32__800__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__800__rounded, 1U));
        __Vfunc_round_pack32__800__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__800__adjusted)));
    }
    __Vfunc_round_pack32__800__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__800__rounded)) {
        __Vfunc_round_pack32__800__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__800__adjusted)));
    }
    __Vfunc_round_pack32__800__Vfuncout = (((0U == __Vfunc_round_pack32__800__significand) 
                                            | (0U == __Vfunc_round_pack32__800__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__800__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__800__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__800__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__800__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__800__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__800__Vfuncout;
    __Vfunc_round_pack32__794__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__794__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__794__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__794__adjusted = __Vfunc_round_pack32__794__exponent;
    __Vfunc_round_pack32__794__shifted = __Vfunc_round_pack32__794__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__794__exponent))) {
        vlSelf->__Vfunc_shift_jam27__795__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__794__exponent)));
        vlSelf->__Vfunc_shift_jam27__795__value = __Vfunc_round_pack32__794__significand;
        __Vfunc_round_pack32__794__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__795__distance))) {
            vlSelf->__Vfunc_shift_jam27__795__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__795__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__795__distance))) {
            vlSelf->__Vfunc_shift_jam27__795__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__795__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__795__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__795__value, (IData)(vlSelf->__Vfunc_shift_jam27__795__distance)));
            vlSelf->__Vfunc_shift_jam27__795__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__795__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__795__distance)))));
            vlSelf->__Vfunc_shift_jam27__795__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__795__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__795__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__795__discarded))));
        }
        __Vfunc_round_pack32__794__shifted = vlSelf->__Vfunc_shift_jam27__795__Vfuncout;
    }
    __Vfunc_round_pack32__794__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__794__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__794__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__794__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__794__rounded)) {
        __Vfunc_round_pack32__794__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__794__rounded, 1U));
        __Vfunc_round_pack32__794__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__794__adjusted)));
    }
    __Vfunc_round_pack32__794__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__794__rounded)) {
        __Vfunc_round_pack32__794__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__794__adjusted)));
    }
    __Vfunc_round_pack32__794__Vfuncout = (((0U == __Vfunc_round_pack32__794__significand) 
                                            | (0U == __Vfunc_round_pack32__794__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__794__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__794__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__794__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__794__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__794__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__794__Vfuncout;
    __Vfunc_round_pack32__788__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__788__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__788__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__788__adjusted = __Vfunc_round_pack32__788__exponent;
    __Vfunc_round_pack32__788__shifted = __Vfunc_round_pack32__788__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__788__exponent))) {
        vlSelf->__Vfunc_shift_jam27__789__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__788__exponent)));
        vlSelf->__Vfunc_shift_jam27__789__value = __Vfunc_round_pack32__788__significand;
        __Vfunc_round_pack32__788__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__789__distance))) {
            vlSelf->__Vfunc_shift_jam27__789__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__789__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__789__distance))) {
            vlSelf->__Vfunc_shift_jam27__789__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__789__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__789__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__789__value, (IData)(vlSelf->__Vfunc_shift_jam27__789__distance)));
            vlSelf->__Vfunc_shift_jam27__789__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__789__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__789__distance)))));
            vlSelf->__Vfunc_shift_jam27__789__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__789__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__789__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__789__discarded))));
        }
        __Vfunc_round_pack32__788__shifted = vlSelf->__Vfunc_shift_jam27__789__Vfuncout;
    }
    __Vfunc_round_pack32__788__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__788__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__788__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__788__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__788__rounded)) {
        __Vfunc_round_pack32__788__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__788__rounded, 1U));
        __Vfunc_round_pack32__788__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__788__adjusted)));
    }
    __Vfunc_round_pack32__788__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__788__rounded)) {
        __Vfunc_round_pack32__788__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__788__adjusted)));
    }
    __Vfunc_round_pack32__788__Vfuncout = (((0U == __Vfunc_round_pack32__788__significand) 
                                            | (0U == __Vfunc_round_pack32__788__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__788__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__788__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__788__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__788__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__788__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__788__Vfuncout;
    __Vfunc_round_pack32__782__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__782__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__782__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__782__adjusted = __Vfunc_round_pack32__782__exponent;
    __Vfunc_round_pack32__782__shifted = __Vfunc_round_pack32__782__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__782__exponent))) {
        vlSelf->__Vfunc_shift_jam27__783__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__782__exponent)));
        vlSelf->__Vfunc_shift_jam27__783__value = __Vfunc_round_pack32__782__significand;
        __Vfunc_round_pack32__782__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__783__distance))) {
            vlSelf->__Vfunc_shift_jam27__783__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__783__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__783__distance))) {
            vlSelf->__Vfunc_shift_jam27__783__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__783__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__783__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__783__value, (IData)(vlSelf->__Vfunc_shift_jam27__783__distance)));
            vlSelf->__Vfunc_shift_jam27__783__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__783__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__783__distance)))));
            vlSelf->__Vfunc_shift_jam27__783__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__783__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__783__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__783__discarded))));
        }
        __Vfunc_round_pack32__782__shifted = vlSelf->__Vfunc_shift_jam27__783__Vfuncout;
    }
    __Vfunc_round_pack32__782__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__782__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__782__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__782__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__782__rounded)) {
        __Vfunc_round_pack32__782__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__782__rounded, 1U));
        __Vfunc_round_pack32__782__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__782__adjusted)));
    }
    __Vfunc_round_pack32__782__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__782__rounded)) {
        __Vfunc_round_pack32__782__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__782__adjusted)));
    }
    __Vfunc_round_pack32__782__Vfuncout = (((0U == __Vfunc_round_pack32__782__significand) 
                                            | (0U == __Vfunc_round_pack32__782__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__782__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__782__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__782__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__782__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__782__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__782__Vfuncout;
    __Vfunc_round_pack32__776__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__776__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__776__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__776__adjusted = __Vfunc_round_pack32__776__exponent;
    __Vfunc_round_pack32__776__shifted = __Vfunc_round_pack32__776__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__776__exponent))) {
        vlSelf->__Vfunc_shift_jam27__777__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__776__exponent)));
        vlSelf->__Vfunc_shift_jam27__777__value = __Vfunc_round_pack32__776__significand;
        __Vfunc_round_pack32__776__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__777__distance))) {
            vlSelf->__Vfunc_shift_jam27__777__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__777__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__777__distance))) {
            vlSelf->__Vfunc_shift_jam27__777__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__777__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__777__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__777__value, (IData)(vlSelf->__Vfunc_shift_jam27__777__distance)));
            vlSelf->__Vfunc_shift_jam27__777__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__777__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__777__distance)))));
            vlSelf->__Vfunc_shift_jam27__777__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__777__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__777__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__777__discarded))));
        }
        __Vfunc_round_pack32__776__shifted = vlSelf->__Vfunc_shift_jam27__777__Vfuncout;
    }
    __Vfunc_round_pack32__776__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__776__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__776__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__776__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__776__rounded)) {
        __Vfunc_round_pack32__776__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__776__rounded, 1U));
        __Vfunc_round_pack32__776__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__776__adjusted)));
    }
    __Vfunc_round_pack32__776__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__776__rounded)) {
        __Vfunc_round_pack32__776__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__776__adjusted)));
    }
    __Vfunc_round_pack32__776__Vfuncout = (((0U == __Vfunc_round_pack32__776__significand) 
                                            | (0U == __Vfunc_round_pack32__776__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__776__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__776__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__776__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__776__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__776__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__776__Vfuncout;
    __Vfunc_round_pack32__770__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__770__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__770__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__770__adjusted = __Vfunc_round_pack32__770__exponent;
    __Vfunc_round_pack32__770__shifted = __Vfunc_round_pack32__770__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__770__exponent))) {
        vlSelf->__Vfunc_shift_jam27__771__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__770__exponent)));
        vlSelf->__Vfunc_shift_jam27__771__value = __Vfunc_round_pack32__770__significand;
        __Vfunc_round_pack32__770__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__771__distance))) {
            vlSelf->__Vfunc_shift_jam27__771__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__771__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__771__distance))) {
            vlSelf->__Vfunc_shift_jam27__771__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__771__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__771__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__771__value, (IData)(vlSelf->__Vfunc_shift_jam27__771__distance)));
            vlSelf->__Vfunc_shift_jam27__771__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__771__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__771__distance)))));
            vlSelf->__Vfunc_shift_jam27__771__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__771__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__771__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__771__discarded))));
        }
        __Vfunc_round_pack32__770__shifted = vlSelf->__Vfunc_shift_jam27__771__Vfuncout;
    }
    __Vfunc_round_pack32__770__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__770__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__770__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__770__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__770__rounded)) {
        __Vfunc_round_pack32__770__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__770__rounded, 1U));
        __Vfunc_round_pack32__770__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__770__adjusted)));
    }
    __Vfunc_round_pack32__770__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__770__rounded)) {
        __Vfunc_round_pack32__770__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__770__adjusted)));
    }
    __Vfunc_round_pack32__770__Vfuncout = (((0U == __Vfunc_round_pack32__770__significand) 
                                            | (0U == __Vfunc_round_pack32__770__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__770__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__770__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__770__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__770__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__770__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__770__Vfuncout;
    __Vfunc_round_pack32__764__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__764__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__764__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__764__adjusted = __Vfunc_round_pack32__764__exponent;
    __Vfunc_round_pack32__764__shifted = __Vfunc_round_pack32__764__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__764__exponent))) {
        vlSelf->__Vfunc_shift_jam27__765__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__764__exponent)));
        vlSelf->__Vfunc_shift_jam27__765__value = __Vfunc_round_pack32__764__significand;
        __Vfunc_round_pack32__764__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__765__distance))) {
            vlSelf->__Vfunc_shift_jam27__765__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__765__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__765__distance))) {
            vlSelf->__Vfunc_shift_jam27__765__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__765__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__765__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__765__value, (IData)(vlSelf->__Vfunc_shift_jam27__765__distance)));
            vlSelf->__Vfunc_shift_jam27__765__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__765__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__765__distance)))));
            vlSelf->__Vfunc_shift_jam27__765__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__765__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__765__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__765__discarded))));
        }
        __Vfunc_round_pack32__764__shifted = vlSelf->__Vfunc_shift_jam27__765__Vfuncout;
    }
    __Vfunc_round_pack32__764__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__764__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__764__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__764__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__764__rounded)) {
        __Vfunc_round_pack32__764__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__764__rounded, 1U));
        __Vfunc_round_pack32__764__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__764__adjusted)));
    }
    __Vfunc_round_pack32__764__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__764__rounded)) {
        __Vfunc_round_pack32__764__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__764__adjusted)));
    }
    __Vfunc_round_pack32__764__Vfuncout = (((0U == __Vfunc_round_pack32__764__significand) 
                                            | (0U == __Vfunc_round_pack32__764__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__764__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__764__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__764__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__764__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__764__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__764__Vfuncout;
    __Vfunc_round_pack32__758__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__758__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__758__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__758__adjusted = __Vfunc_round_pack32__758__exponent;
    __Vfunc_round_pack32__758__shifted = __Vfunc_round_pack32__758__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__758__exponent))) {
        vlSelf->__Vfunc_shift_jam27__759__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__758__exponent)));
        vlSelf->__Vfunc_shift_jam27__759__value = __Vfunc_round_pack32__758__significand;
        __Vfunc_round_pack32__758__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__759__distance))) {
            vlSelf->__Vfunc_shift_jam27__759__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__759__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__759__distance))) {
            vlSelf->__Vfunc_shift_jam27__759__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__759__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__759__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__759__value, (IData)(vlSelf->__Vfunc_shift_jam27__759__distance)));
            vlSelf->__Vfunc_shift_jam27__759__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__759__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__759__distance)))));
            vlSelf->__Vfunc_shift_jam27__759__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__759__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__759__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__759__discarded))));
        }
        __Vfunc_round_pack32__758__shifted = vlSelf->__Vfunc_shift_jam27__759__Vfuncout;
    }
    __Vfunc_round_pack32__758__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__758__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__758__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__758__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__758__rounded)) {
        __Vfunc_round_pack32__758__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__758__rounded, 1U));
        __Vfunc_round_pack32__758__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__758__adjusted)));
    }
    __Vfunc_round_pack32__758__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__758__rounded)) {
        __Vfunc_round_pack32__758__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__758__adjusted)));
    }
    __Vfunc_round_pack32__758__Vfuncout = (((0U == __Vfunc_round_pack32__758__significand) 
                                            | (0U == __Vfunc_round_pack32__758__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__758__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__758__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__758__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__758__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__758__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__758__Vfuncout;
    __Vfunc_round_pack32__752__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__752__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__752__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__752__adjusted = __Vfunc_round_pack32__752__exponent;
    __Vfunc_round_pack32__752__shifted = __Vfunc_round_pack32__752__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__752__exponent))) {
        vlSelf->__Vfunc_shift_jam27__753__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__752__exponent)));
        vlSelf->__Vfunc_shift_jam27__753__value = __Vfunc_round_pack32__752__significand;
        __Vfunc_round_pack32__752__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__753__distance))) {
            vlSelf->__Vfunc_shift_jam27__753__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__753__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__753__distance))) {
            vlSelf->__Vfunc_shift_jam27__753__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__753__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__753__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__753__value, (IData)(vlSelf->__Vfunc_shift_jam27__753__distance)));
            vlSelf->__Vfunc_shift_jam27__753__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__753__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__753__distance)))));
            vlSelf->__Vfunc_shift_jam27__753__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__753__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__753__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__753__discarded))));
        }
        __Vfunc_round_pack32__752__shifted = vlSelf->__Vfunc_shift_jam27__753__Vfuncout;
    }
    __Vfunc_round_pack32__752__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__752__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__752__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__752__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__752__rounded)) {
        __Vfunc_round_pack32__752__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__752__rounded, 1U));
        __Vfunc_round_pack32__752__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__752__adjusted)));
    }
    __Vfunc_round_pack32__752__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__752__rounded)) {
        __Vfunc_round_pack32__752__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__752__adjusted)));
    }
    __Vfunc_round_pack32__752__Vfuncout = (((0U == __Vfunc_round_pack32__752__significand) 
                                            | (0U == __Vfunc_round_pack32__752__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__752__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__752__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__752__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__752__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__752__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__752__Vfuncout;
    __Vfunc_round_pack32__746__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__746__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__746__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__746__adjusted = __Vfunc_round_pack32__746__exponent;
    __Vfunc_round_pack32__746__shifted = __Vfunc_round_pack32__746__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__746__exponent))) {
        vlSelf->__Vfunc_shift_jam27__747__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__746__exponent)));
        vlSelf->__Vfunc_shift_jam27__747__value = __Vfunc_round_pack32__746__significand;
        __Vfunc_round_pack32__746__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__747__distance))) {
            vlSelf->__Vfunc_shift_jam27__747__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__747__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__747__distance))) {
            vlSelf->__Vfunc_shift_jam27__747__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__747__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__747__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__747__value, (IData)(vlSelf->__Vfunc_shift_jam27__747__distance)));
            vlSelf->__Vfunc_shift_jam27__747__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__747__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__747__distance)))));
            vlSelf->__Vfunc_shift_jam27__747__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__747__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__747__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__747__discarded))));
        }
        __Vfunc_round_pack32__746__shifted = vlSelf->__Vfunc_shift_jam27__747__Vfuncout;
    }
    __Vfunc_round_pack32__746__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__746__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__746__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__746__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__746__rounded)) {
        __Vfunc_round_pack32__746__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__746__rounded, 1U));
        __Vfunc_round_pack32__746__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__746__adjusted)));
    }
    __Vfunc_round_pack32__746__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__746__rounded)) {
        __Vfunc_round_pack32__746__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__746__adjusted)));
    }
    __Vfunc_round_pack32__746__Vfuncout = (((0U == __Vfunc_round_pack32__746__significand) 
                                            | (0U == __Vfunc_round_pack32__746__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__746__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__746__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__746__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__746__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__746__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__746__Vfuncout;
    __Vfunc_round_pack32__740__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__740__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__740__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__740__adjusted = __Vfunc_round_pack32__740__exponent;
    __Vfunc_round_pack32__740__shifted = __Vfunc_round_pack32__740__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__740__exponent))) {
        vlSelf->__Vfunc_shift_jam27__741__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__740__exponent)));
        vlSelf->__Vfunc_shift_jam27__741__value = __Vfunc_round_pack32__740__significand;
        __Vfunc_round_pack32__740__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__741__distance))) {
            vlSelf->__Vfunc_shift_jam27__741__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__741__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__741__distance))) {
            vlSelf->__Vfunc_shift_jam27__741__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__741__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__741__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__741__value, (IData)(vlSelf->__Vfunc_shift_jam27__741__distance)));
            vlSelf->__Vfunc_shift_jam27__741__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__741__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__741__distance)))));
            vlSelf->__Vfunc_shift_jam27__741__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__741__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__741__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__741__discarded))));
        }
        __Vfunc_round_pack32__740__shifted = vlSelf->__Vfunc_shift_jam27__741__Vfuncout;
    }
    __Vfunc_round_pack32__740__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__740__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__740__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__740__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__740__rounded)) {
        __Vfunc_round_pack32__740__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__740__rounded, 1U));
        __Vfunc_round_pack32__740__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__740__adjusted)));
    }
    __Vfunc_round_pack32__740__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__740__rounded)) {
        __Vfunc_round_pack32__740__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__740__adjusted)));
    }
    __Vfunc_round_pack32__740__Vfuncout = (((0U == __Vfunc_round_pack32__740__significand) 
                                            | (0U == __Vfunc_round_pack32__740__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__740__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__740__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__740__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__740__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__740__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__740__Vfuncout;
    __Vfunc_round_pack32__734__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__734__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__734__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__734__adjusted = __Vfunc_round_pack32__734__exponent;
    __Vfunc_round_pack32__734__shifted = __Vfunc_round_pack32__734__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__734__exponent))) {
        vlSelf->__Vfunc_shift_jam27__735__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__734__exponent)));
        vlSelf->__Vfunc_shift_jam27__735__value = __Vfunc_round_pack32__734__significand;
        __Vfunc_round_pack32__734__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__735__distance))) {
            vlSelf->__Vfunc_shift_jam27__735__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__735__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__735__distance))) {
            vlSelf->__Vfunc_shift_jam27__735__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__735__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__735__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__735__value, (IData)(vlSelf->__Vfunc_shift_jam27__735__distance)));
            vlSelf->__Vfunc_shift_jam27__735__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__735__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__735__distance)))));
            vlSelf->__Vfunc_shift_jam27__735__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__735__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__735__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__735__discarded))));
        }
        __Vfunc_round_pack32__734__shifted = vlSelf->__Vfunc_shift_jam27__735__Vfuncout;
    }
    __Vfunc_round_pack32__734__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__734__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__734__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__734__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__734__rounded)) {
        __Vfunc_round_pack32__734__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__734__rounded, 1U));
        __Vfunc_round_pack32__734__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__734__adjusted)));
    }
    __Vfunc_round_pack32__734__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__734__rounded)) {
        __Vfunc_round_pack32__734__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__734__adjusted)));
    }
    __Vfunc_round_pack32__734__Vfuncout = (((0U == __Vfunc_round_pack32__734__significand) 
                                            | (0U == __Vfunc_round_pack32__734__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__734__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__734__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__734__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__734__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__734__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__734__Vfuncout;
    __Vfunc_round_pack32__728__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__728__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__728__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__728__adjusted = __Vfunc_round_pack32__728__exponent;
    __Vfunc_round_pack32__728__shifted = __Vfunc_round_pack32__728__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__728__exponent))) {
        vlSelf->__Vfunc_shift_jam27__729__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__728__exponent)));
        vlSelf->__Vfunc_shift_jam27__729__value = __Vfunc_round_pack32__728__significand;
        __Vfunc_round_pack32__728__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__729__distance))) {
            vlSelf->__Vfunc_shift_jam27__729__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__729__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__729__distance))) {
            vlSelf->__Vfunc_shift_jam27__729__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__729__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__729__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__729__value, (IData)(vlSelf->__Vfunc_shift_jam27__729__distance)));
            vlSelf->__Vfunc_shift_jam27__729__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__729__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__729__distance)))));
            vlSelf->__Vfunc_shift_jam27__729__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__729__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__729__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__729__discarded))));
        }
        __Vfunc_round_pack32__728__shifted = vlSelf->__Vfunc_shift_jam27__729__Vfuncout;
    }
    __Vfunc_round_pack32__728__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__728__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__728__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__728__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__728__rounded)) {
        __Vfunc_round_pack32__728__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__728__rounded, 1U));
        __Vfunc_round_pack32__728__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__728__adjusted)));
    }
    __Vfunc_round_pack32__728__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__728__rounded)) {
        __Vfunc_round_pack32__728__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__728__adjusted)));
    }
    __Vfunc_round_pack32__728__Vfuncout = (((0U == __Vfunc_round_pack32__728__significand) 
                                            | (0U == __Vfunc_round_pack32__728__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__728__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__728__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__728__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__728__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__728__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__728__Vfuncout;
    __Vfunc_round_pack32__722__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__722__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__722__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__722__adjusted = __Vfunc_round_pack32__722__exponent;
    __Vfunc_round_pack32__722__shifted = __Vfunc_round_pack32__722__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__722__exponent))) {
        vlSelf->__Vfunc_shift_jam27__723__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__722__exponent)));
        vlSelf->__Vfunc_shift_jam27__723__value = __Vfunc_round_pack32__722__significand;
        __Vfunc_round_pack32__722__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__723__distance))) {
            vlSelf->__Vfunc_shift_jam27__723__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__723__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__723__distance))) {
            vlSelf->__Vfunc_shift_jam27__723__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__723__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__723__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__723__value, (IData)(vlSelf->__Vfunc_shift_jam27__723__distance)));
            vlSelf->__Vfunc_shift_jam27__723__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__723__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__723__distance)))));
            vlSelf->__Vfunc_shift_jam27__723__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__723__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__723__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__723__discarded))));
        }
        __Vfunc_round_pack32__722__shifted = vlSelf->__Vfunc_shift_jam27__723__Vfuncout;
    }
    __Vfunc_round_pack32__722__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__722__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__722__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__722__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__722__rounded)) {
        __Vfunc_round_pack32__722__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__722__rounded, 1U));
        __Vfunc_round_pack32__722__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__722__adjusted)));
    }
    __Vfunc_round_pack32__722__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__722__rounded)) {
        __Vfunc_round_pack32__722__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__722__adjusted)));
    }
    __Vfunc_round_pack32__722__Vfuncout = (((0U == __Vfunc_round_pack32__722__significand) 
                                            | (0U == __Vfunc_round_pack32__722__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__722__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__722__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__722__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__722__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__722__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__722__Vfuncout;
    __Vfunc_round_pack32__716__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__716__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__716__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__716__adjusted = __Vfunc_round_pack32__716__exponent;
    __Vfunc_round_pack32__716__shifted = __Vfunc_round_pack32__716__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__716__exponent))) {
        vlSelf->__Vfunc_shift_jam27__717__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__716__exponent)));
        vlSelf->__Vfunc_shift_jam27__717__value = __Vfunc_round_pack32__716__significand;
        __Vfunc_round_pack32__716__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__717__distance))) {
            vlSelf->__Vfunc_shift_jam27__717__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__717__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__717__distance))) {
            vlSelf->__Vfunc_shift_jam27__717__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__717__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__717__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__717__value, (IData)(vlSelf->__Vfunc_shift_jam27__717__distance)));
            vlSelf->__Vfunc_shift_jam27__717__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__717__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__717__distance)))));
            vlSelf->__Vfunc_shift_jam27__717__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__717__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__717__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__717__discarded))));
        }
        __Vfunc_round_pack32__716__shifted = vlSelf->__Vfunc_shift_jam27__717__Vfuncout;
    }
    __Vfunc_round_pack32__716__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__716__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__716__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__716__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__716__rounded)) {
        __Vfunc_round_pack32__716__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__716__rounded, 1U));
        __Vfunc_round_pack32__716__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__716__adjusted)));
    }
    __Vfunc_round_pack32__716__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__716__rounded)) {
        __Vfunc_round_pack32__716__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__716__adjusted)));
    }
    __Vfunc_round_pack32__716__Vfuncout = (((0U == __Vfunc_round_pack32__716__significand) 
                                            | (0U == __Vfunc_round_pack32__716__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__716__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__716__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__716__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__716__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__716__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__716__Vfuncout;
    __Vfunc_round_pack32__710__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__710__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__710__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__710__adjusted = __Vfunc_round_pack32__710__exponent;
    __Vfunc_round_pack32__710__shifted = __Vfunc_round_pack32__710__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__710__exponent))) {
        vlSelf->__Vfunc_shift_jam27__711__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__710__exponent)));
        vlSelf->__Vfunc_shift_jam27__711__value = __Vfunc_round_pack32__710__significand;
        __Vfunc_round_pack32__710__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__711__distance))) {
            vlSelf->__Vfunc_shift_jam27__711__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__711__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__711__distance))) {
            vlSelf->__Vfunc_shift_jam27__711__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__711__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__711__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__711__value, (IData)(vlSelf->__Vfunc_shift_jam27__711__distance)));
            vlSelf->__Vfunc_shift_jam27__711__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__711__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__711__distance)))));
            vlSelf->__Vfunc_shift_jam27__711__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__711__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__711__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__711__discarded))));
        }
        __Vfunc_round_pack32__710__shifted = vlSelf->__Vfunc_shift_jam27__711__Vfuncout;
    }
    __Vfunc_round_pack32__710__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__710__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__710__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__710__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__710__rounded)) {
        __Vfunc_round_pack32__710__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__710__rounded, 1U));
        __Vfunc_round_pack32__710__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__710__adjusted)));
    }
    __Vfunc_round_pack32__710__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__710__rounded)) {
        __Vfunc_round_pack32__710__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__710__adjusted)));
    }
    __Vfunc_round_pack32__710__Vfuncout = (((0U == __Vfunc_round_pack32__710__significand) 
                                            | (0U == __Vfunc_round_pack32__710__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__710__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__710__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__710__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__710__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__710__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__710__Vfuncout;
    __Vfunc_round_pack32__704__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__704__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__704__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__704__adjusted = __Vfunc_round_pack32__704__exponent;
    __Vfunc_round_pack32__704__shifted = __Vfunc_round_pack32__704__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__704__exponent))) {
        vlSelf->__Vfunc_shift_jam27__705__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__704__exponent)));
        vlSelf->__Vfunc_shift_jam27__705__value = __Vfunc_round_pack32__704__significand;
        __Vfunc_round_pack32__704__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__705__distance))) {
            vlSelf->__Vfunc_shift_jam27__705__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__705__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__705__distance))) {
            vlSelf->__Vfunc_shift_jam27__705__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__705__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__705__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__705__value, (IData)(vlSelf->__Vfunc_shift_jam27__705__distance)));
            vlSelf->__Vfunc_shift_jam27__705__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__705__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__705__distance)))));
            vlSelf->__Vfunc_shift_jam27__705__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__705__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__705__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__705__discarded))));
        }
        __Vfunc_round_pack32__704__shifted = vlSelf->__Vfunc_shift_jam27__705__Vfuncout;
    }
    __Vfunc_round_pack32__704__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__704__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__704__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__704__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__704__rounded)) {
        __Vfunc_round_pack32__704__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__704__rounded, 1U));
        __Vfunc_round_pack32__704__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__704__adjusted)));
    }
    __Vfunc_round_pack32__704__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__704__rounded)) {
        __Vfunc_round_pack32__704__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__704__adjusted)));
    }
    __Vfunc_round_pack32__704__Vfuncout = (((0U == __Vfunc_round_pack32__704__significand) 
                                            | (0U == __Vfunc_round_pack32__704__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__704__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__704__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__704__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__704__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__704__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__704__Vfuncout;
    __Vfunc_round_pack32__698__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__698__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__698__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__698__adjusted = __Vfunc_round_pack32__698__exponent;
    __Vfunc_round_pack32__698__shifted = __Vfunc_round_pack32__698__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__698__exponent))) {
        vlSelf->__Vfunc_shift_jam27__699__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__698__exponent)));
        vlSelf->__Vfunc_shift_jam27__699__value = __Vfunc_round_pack32__698__significand;
        __Vfunc_round_pack32__698__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__699__distance))) {
            vlSelf->__Vfunc_shift_jam27__699__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__699__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__699__distance))) {
            vlSelf->__Vfunc_shift_jam27__699__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__699__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__699__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__699__value, (IData)(vlSelf->__Vfunc_shift_jam27__699__distance)));
            vlSelf->__Vfunc_shift_jam27__699__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__699__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__699__distance)))));
            vlSelf->__Vfunc_shift_jam27__699__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__699__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__699__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__699__discarded))));
        }
        __Vfunc_round_pack32__698__shifted = vlSelf->__Vfunc_shift_jam27__699__Vfuncout;
    }
    __Vfunc_round_pack32__698__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__698__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__698__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__698__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__698__rounded)) {
        __Vfunc_round_pack32__698__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__698__rounded, 1U));
        __Vfunc_round_pack32__698__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__698__adjusted)));
    }
    __Vfunc_round_pack32__698__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__698__rounded)) {
        __Vfunc_round_pack32__698__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__698__adjusted)));
    }
    __Vfunc_round_pack32__698__Vfuncout = (((0U == __Vfunc_round_pack32__698__significand) 
                                            | (0U == __Vfunc_round_pack32__698__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__698__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__698__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__698__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__698__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__698__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__698__Vfuncout;
    __Vfunc_round_pack32__692__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__692__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__692__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__692__adjusted = __Vfunc_round_pack32__692__exponent;
    __Vfunc_round_pack32__692__shifted = __Vfunc_round_pack32__692__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__692__exponent))) {
        vlSelf->__Vfunc_shift_jam27__693__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__692__exponent)));
        vlSelf->__Vfunc_shift_jam27__693__value = __Vfunc_round_pack32__692__significand;
        __Vfunc_round_pack32__692__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__693__distance))) {
            vlSelf->__Vfunc_shift_jam27__693__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__693__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__693__distance))) {
            vlSelf->__Vfunc_shift_jam27__693__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__693__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__693__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__693__value, (IData)(vlSelf->__Vfunc_shift_jam27__693__distance)));
            vlSelf->__Vfunc_shift_jam27__693__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__693__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__693__distance)))));
            vlSelf->__Vfunc_shift_jam27__693__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__693__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__693__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__693__discarded))));
        }
        __Vfunc_round_pack32__692__shifted = vlSelf->__Vfunc_shift_jam27__693__Vfuncout;
    }
    __Vfunc_round_pack32__692__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__692__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__692__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__692__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__692__rounded)) {
        __Vfunc_round_pack32__692__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__692__rounded, 1U));
        __Vfunc_round_pack32__692__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__692__adjusted)));
    }
    __Vfunc_round_pack32__692__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__692__rounded)) {
        __Vfunc_round_pack32__692__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__692__adjusted)));
    }
    __Vfunc_round_pack32__692__Vfuncout = (((0U == __Vfunc_round_pack32__692__significand) 
                                            | (0U == __Vfunc_round_pack32__692__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__692__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__692__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__692__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__692__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__692__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__692__Vfuncout;
    __Vfunc_round_pack32__686__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__686__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__686__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__686__adjusted = __Vfunc_round_pack32__686__exponent;
    __Vfunc_round_pack32__686__shifted = __Vfunc_round_pack32__686__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__686__exponent))) {
        vlSelf->__Vfunc_shift_jam27__687__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__686__exponent)));
        vlSelf->__Vfunc_shift_jam27__687__value = __Vfunc_round_pack32__686__significand;
        __Vfunc_round_pack32__686__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__687__distance))) {
            vlSelf->__Vfunc_shift_jam27__687__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__687__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__687__distance))) {
            vlSelf->__Vfunc_shift_jam27__687__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__687__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__687__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__687__value, (IData)(vlSelf->__Vfunc_shift_jam27__687__distance)));
            vlSelf->__Vfunc_shift_jam27__687__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__687__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__687__distance)))));
            vlSelf->__Vfunc_shift_jam27__687__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__687__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__687__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__687__discarded))));
        }
        __Vfunc_round_pack32__686__shifted = vlSelf->__Vfunc_shift_jam27__687__Vfuncout;
    }
    __Vfunc_round_pack32__686__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__686__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__686__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__686__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__686__rounded)) {
        __Vfunc_round_pack32__686__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__686__rounded, 1U));
        __Vfunc_round_pack32__686__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__686__adjusted)));
    }
    __Vfunc_round_pack32__686__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__686__rounded)) {
        __Vfunc_round_pack32__686__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__686__adjusted)));
    }
    __Vfunc_round_pack32__686__Vfuncout = (((0U == __Vfunc_round_pack32__686__significand) 
                                            | (0U == __Vfunc_round_pack32__686__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__686__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__686__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__686__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__686__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__686__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__686__Vfuncout;
    __Vfunc_round_pack32__680__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__680__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__680__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__680__adjusted = __Vfunc_round_pack32__680__exponent;
    __Vfunc_round_pack32__680__shifted = __Vfunc_round_pack32__680__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__680__exponent))) {
        vlSelf->__Vfunc_shift_jam27__681__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__680__exponent)));
        vlSelf->__Vfunc_shift_jam27__681__value = __Vfunc_round_pack32__680__significand;
        __Vfunc_round_pack32__680__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__681__distance))) {
            vlSelf->__Vfunc_shift_jam27__681__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__681__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__681__distance))) {
            vlSelf->__Vfunc_shift_jam27__681__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__681__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__681__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__681__value, (IData)(vlSelf->__Vfunc_shift_jam27__681__distance)));
            vlSelf->__Vfunc_shift_jam27__681__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__681__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__681__distance)))));
            vlSelf->__Vfunc_shift_jam27__681__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__681__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__681__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__681__discarded))));
        }
        __Vfunc_round_pack32__680__shifted = vlSelf->__Vfunc_shift_jam27__681__Vfuncout;
    }
    __Vfunc_round_pack32__680__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__680__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__680__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__680__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__680__rounded)) {
        __Vfunc_round_pack32__680__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__680__rounded, 1U));
        __Vfunc_round_pack32__680__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__680__adjusted)));
    }
    __Vfunc_round_pack32__680__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__680__rounded)) {
        __Vfunc_round_pack32__680__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__680__adjusted)));
    }
    __Vfunc_round_pack32__680__Vfuncout = (((0U == __Vfunc_round_pack32__680__significand) 
                                            | (0U == __Vfunc_round_pack32__680__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__680__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__680__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__680__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__680__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__680__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__680__Vfuncout;
    __Vfunc_round_pack32__674__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__674__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__674__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__674__adjusted = __Vfunc_round_pack32__674__exponent;
    __Vfunc_round_pack32__674__shifted = __Vfunc_round_pack32__674__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__674__exponent))) {
        vlSelf->__Vfunc_shift_jam27__675__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__674__exponent)));
        vlSelf->__Vfunc_shift_jam27__675__value = __Vfunc_round_pack32__674__significand;
        __Vfunc_round_pack32__674__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__675__distance))) {
            vlSelf->__Vfunc_shift_jam27__675__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__675__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__675__distance))) {
            vlSelf->__Vfunc_shift_jam27__675__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__675__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__675__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__675__value, (IData)(vlSelf->__Vfunc_shift_jam27__675__distance)));
            vlSelf->__Vfunc_shift_jam27__675__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__675__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__675__distance)))));
            vlSelf->__Vfunc_shift_jam27__675__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__675__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__675__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__675__discarded))));
        }
        __Vfunc_round_pack32__674__shifted = vlSelf->__Vfunc_shift_jam27__675__Vfuncout;
    }
    __Vfunc_round_pack32__674__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__674__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__674__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__674__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__674__rounded)) {
        __Vfunc_round_pack32__674__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__674__rounded, 1U));
        __Vfunc_round_pack32__674__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__674__adjusted)));
    }
    __Vfunc_round_pack32__674__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__674__rounded)) {
        __Vfunc_round_pack32__674__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__674__adjusted)));
    }
    __Vfunc_round_pack32__674__Vfuncout = (((0U == __Vfunc_round_pack32__674__significand) 
                                            | (0U == __Vfunc_round_pack32__674__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__674__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__674__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__674__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__674__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__674__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__674__Vfuncout;
    __Vfunc_round_pack32__668__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__668__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__668__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__668__adjusted = __Vfunc_round_pack32__668__exponent;
    __Vfunc_round_pack32__668__shifted = __Vfunc_round_pack32__668__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__668__exponent))) {
        vlSelf->__Vfunc_shift_jam27__669__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__668__exponent)));
        vlSelf->__Vfunc_shift_jam27__669__value = __Vfunc_round_pack32__668__significand;
        __Vfunc_round_pack32__668__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__669__distance))) {
            vlSelf->__Vfunc_shift_jam27__669__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__669__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__669__distance))) {
            vlSelf->__Vfunc_shift_jam27__669__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__669__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__669__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__669__value, (IData)(vlSelf->__Vfunc_shift_jam27__669__distance)));
            vlSelf->__Vfunc_shift_jam27__669__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__669__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__669__distance)))));
            vlSelf->__Vfunc_shift_jam27__669__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__669__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__669__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__669__discarded))));
        }
        __Vfunc_round_pack32__668__shifted = vlSelf->__Vfunc_shift_jam27__669__Vfuncout;
    }
    __Vfunc_round_pack32__668__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__668__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__668__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__668__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__668__rounded)) {
        __Vfunc_round_pack32__668__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__668__rounded, 1U));
        __Vfunc_round_pack32__668__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__668__adjusted)));
    }
    __Vfunc_round_pack32__668__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__668__rounded)) {
        __Vfunc_round_pack32__668__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__668__adjusted)));
    }
    __Vfunc_round_pack32__668__Vfuncout = (((0U == __Vfunc_round_pack32__668__significand) 
                                            | (0U == __Vfunc_round_pack32__668__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__668__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__668__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__668__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__668__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__668__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__668__Vfuncout;
    __Vfunc_round_pack32__662__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__662__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__662__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__662__adjusted = __Vfunc_round_pack32__662__exponent;
    __Vfunc_round_pack32__662__shifted = __Vfunc_round_pack32__662__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__662__exponent))) {
        vlSelf->__Vfunc_shift_jam27__663__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__662__exponent)));
        vlSelf->__Vfunc_shift_jam27__663__value = __Vfunc_round_pack32__662__significand;
        __Vfunc_round_pack32__662__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__663__distance))) {
            vlSelf->__Vfunc_shift_jam27__663__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__663__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__663__distance))) {
            vlSelf->__Vfunc_shift_jam27__663__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__663__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__663__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__663__value, (IData)(vlSelf->__Vfunc_shift_jam27__663__distance)));
            vlSelf->__Vfunc_shift_jam27__663__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__663__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__663__distance)))));
            vlSelf->__Vfunc_shift_jam27__663__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__663__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__663__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__663__discarded))));
        }
        __Vfunc_round_pack32__662__shifted = vlSelf->__Vfunc_shift_jam27__663__Vfuncout;
    }
    __Vfunc_round_pack32__662__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__662__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__662__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__662__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__662__rounded)) {
        __Vfunc_round_pack32__662__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__662__rounded, 1U));
        __Vfunc_round_pack32__662__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__662__adjusted)));
    }
    __Vfunc_round_pack32__662__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__662__rounded)) {
        __Vfunc_round_pack32__662__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__662__adjusted)));
    }
    __Vfunc_round_pack32__662__Vfuncout = (((0U == __Vfunc_round_pack32__662__significand) 
                                            | (0U == __Vfunc_round_pack32__662__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__662__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__662__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__662__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__662__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__662__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__662__Vfuncout;
    __Vfunc_round_pack32__656__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__656__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__656__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__656__adjusted = __Vfunc_round_pack32__656__exponent;
    __Vfunc_round_pack32__656__shifted = __Vfunc_round_pack32__656__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__656__exponent))) {
        vlSelf->__Vfunc_shift_jam27__657__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__656__exponent)));
        vlSelf->__Vfunc_shift_jam27__657__value = __Vfunc_round_pack32__656__significand;
        __Vfunc_round_pack32__656__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__657__distance))) {
            vlSelf->__Vfunc_shift_jam27__657__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__657__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__657__distance))) {
            vlSelf->__Vfunc_shift_jam27__657__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__657__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__657__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__657__value, (IData)(vlSelf->__Vfunc_shift_jam27__657__distance)));
            vlSelf->__Vfunc_shift_jam27__657__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__657__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__657__distance)))));
            vlSelf->__Vfunc_shift_jam27__657__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__657__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__657__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__657__discarded))));
        }
        __Vfunc_round_pack32__656__shifted = vlSelf->__Vfunc_shift_jam27__657__Vfuncout;
    }
    __Vfunc_round_pack32__656__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__656__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__656__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__656__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__656__rounded)) {
        __Vfunc_round_pack32__656__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__656__rounded, 1U));
        __Vfunc_round_pack32__656__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__656__adjusted)));
    }
    __Vfunc_round_pack32__656__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__656__rounded)) {
        __Vfunc_round_pack32__656__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__656__adjusted)));
    }
    __Vfunc_round_pack32__656__Vfuncout = (((0U == __Vfunc_round_pack32__656__significand) 
                                            | (0U == __Vfunc_round_pack32__656__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__656__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__656__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__656__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__656__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__656__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__656__Vfuncout;
    __Vfunc_round_pack32__650__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__650__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__650__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__650__adjusted = __Vfunc_round_pack32__650__exponent;
    __Vfunc_round_pack32__650__shifted = __Vfunc_round_pack32__650__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__650__exponent))) {
        vlSelf->__Vfunc_shift_jam27__651__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__650__exponent)));
        vlSelf->__Vfunc_shift_jam27__651__value = __Vfunc_round_pack32__650__significand;
        __Vfunc_round_pack32__650__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__651__distance))) {
            vlSelf->__Vfunc_shift_jam27__651__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__651__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__651__distance))) {
            vlSelf->__Vfunc_shift_jam27__651__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__651__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__651__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__651__value, (IData)(vlSelf->__Vfunc_shift_jam27__651__distance)));
            vlSelf->__Vfunc_shift_jam27__651__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__651__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__651__distance)))));
            vlSelf->__Vfunc_shift_jam27__651__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__651__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__651__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__651__discarded))));
        }
        __Vfunc_round_pack32__650__shifted = vlSelf->__Vfunc_shift_jam27__651__Vfuncout;
    }
    __Vfunc_round_pack32__650__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__650__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__650__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__650__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__650__rounded)) {
        __Vfunc_round_pack32__650__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__650__rounded, 1U));
        __Vfunc_round_pack32__650__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__650__adjusted)));
    }
    __Vfunc_round_pack32__650__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__650__rounded)) {
        __Vfunc_round_pack32__650__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__650__adjusted)));
    }
    __Vfunc_round_pack32__650__Vfuncout = (((0U == __Vfunc_round_pack32__650__significand) 
                                            | (0U == __Vfunc_round_pack32__650__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__650__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__650__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__650__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__650__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__650__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__650__Vfuncout;
    __Vfunc_round_pack32__644__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__644__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__644__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__644__adjusted = __Vfunc_round_pack32__644__exponent;
    __Vfunc_round_pack32__644__shifted = __Vfunc_round_pack32__644__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__644__exponent))) {
        vlSelf->__Vfunc_shift_jam27__645__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__644__exponent)));
        vlSelf->__Vfunc_shift_jam27__645__value = __Vfunc_round_pack32__644__significand;
        __Vfunc_round_pack32__644__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__645__distance))) {
            vlSelf->__Vfunc_shift_jam27__645__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__645__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__645__distance))) {
            vlSelf->__Vfunc_shift_jam27__645__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__645__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__645__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__645__value, (IData)(vlSelf->__Vfunc_shift_jam27__645__distance)));
            vlSelf->__Vfunc_shift_jam27__645__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__645__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__645__distance)))));
            vlSelf->__Vfunc_shift_jam27__645__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__645__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__645__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__645__discarded))));
        }
        __Vfunc_round_pack32__644__shifted = vlSelf->__Vfunc_shift_jam27__645__Vfuncout;
    }
    __Vfunc_round_pack32__644__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__644__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__644__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__644__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__644__rounded)) {
        __Vfunc_round_pack32__644__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__644__rounded, 1U));
        __Vfunc_round_pack32__644__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__644__adjusted)));
    }
    __Vfunc_round_pack32__644__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__644__rounded)) {
        __Vfunc_round_pack32__644__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__644__adjusted)));
    }
    __Vfunc_round_pack32__644__Vfuncout = (((0U == __Vfunc_round_pack32__644__significand) 
                                            | (0U == __Vfunc_round_pack32__644__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__644__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__644__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__644__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__644__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__644__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__644__Vfuncout;
    __Vfunc_round_pack32__638__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__638__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__638__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__638__adjusted = __Vfunc_round_pack32__638__exponent;
    __Vfunc_round_pack32__638__shifted = __Vfunc_round_pack32__638__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__638__exponent))) {
        vlSelf->__Vfunc_shift_jam27__639__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__638__exponent)));
        vlSelf->__Vfunc_shift_jam27__639__value = __Vfunc_round_pack32__638__significand;
        __Vfunc_round_pack32__638__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__639__distance))) {
            vlSelf->__Vfunc_shift_jam27__639__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__639__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__639__distance))) {
            vlSelf->__Vfunc_shift_jam27__639__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__639__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__639__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__639__value, (IData)(vlSelf->__Vfunc_shift_jam27__639__distance)));
            vlSelf->__Vfunc_shift_jam27__639__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__639__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__639__distance)))));
            vlSelf->__Vfunc_shift_jam27__639__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__639__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__639__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__639__discarded))));
        }
        __Vfunc_round_pack32__638__shifted = vlSelf->__Vfunc_shift_jam27__639__Vfuncout;
    }
    __Vfunc_round_pack32__638__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__638__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__638__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__638__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__638__rounded)) {
        __Vfunc_round_pack32__638__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__638__rounded, 1U));
        __Vfunc_round_pack32__638__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__638__adjusted)));
    }
    __Vfunc_round_pack32__638__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__638__rounded)) {
        __Vfunc_round_pack32__638__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__638__adjusted)));
    }
    __Vfunc_round_pack32__638__Vfuncout = (((0U == __Vfunc_round_pack32__638__significand) 
                                            | (0U == __Vfunc_round_pack32__638__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__638__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__638__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__638__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__638__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__638__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__638__Vfuncout;
    __Vfunc_round_pack32__632__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__632__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__632__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__632__adjusted = __Vfunc_round_pack32__632__exponent;
    __Vfunc_round_pack32__632__shifted = __Vfunc_round_pack32__632__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__632__exponent))) {
        vlSelf->__Vfunc_shift_jam27__633__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__632__exponent)));
        vlSelf->__Vfunc_shift_jam27__633__value = __Vfunc_round_pack32__632__significand;
        __Vfunc_round_pack32__632__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__633__distance))) {
            vlSelf->__Vfunc_shift_jam27__633__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__633__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__633__distance))) {
            vlSelf->__Vfunc_shift_jam27__633__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__633__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__633__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__633__value, (IData)(vlSelf->__Vfunc_shift_jam27__633__distance)));
            vlSelf->__Vfunc_shift_jam27__633__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__633__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__633__distance)))));
            vlSelf->__Vfunc_shift_jam27__633__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__633__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__633__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__633__discarded))));
        }
        __Vfunc_round_pack32__632__shifted = vlSelf->__Vfunc_shift_jam27__633__Vfuncout;
    }
    __Vfunc_round_pack32__632__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__632__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__632__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__632__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__632__rounded)) {
        __Vfunc_round_pack32__632__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__632__rounded, 1U));
        __Vfunc_round_pack32__632__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__632__adjusted)));
    }
    __Vfunc_round_pack32__632__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__632__rounded)) {
        __Vfunc_round_pack32__632__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__632__adjusted)));
    }
    __Vfunc_round_pack32__632__Vfuncout = (((0U == __Vfunc_round_pack32__632__significand) 
                                            | (0U == __Vfunc_round_pack32__632__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__632__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__632__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__632__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__632__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__632__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__632__Vfuncout;
    __Vfunc_round_pack32__626__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__626__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__626__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__626__adjusted = __Vfunc_round_pack32__626__exponent;
    __Vfunc_round_pack32__626__shifted = __Vfunc_round_pack32__626__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__626__exponent))) {
        vlSelf->__Vfunc_shift_jam27__627__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__626__exponent)));
        vlSelf->__Vfunc_shift_jam27__627__value = __Vfunc_round_pack32__626__significand;
        __Vfunc_round_pack32__626__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__627__distance))) {
            vlSelf->__Vfunc_shift_jam27__627__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__627__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__627__distance))) {
            vlSelf->__Vfunc_shift_jam27__627__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__627__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__627__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__627__value, (IData)(vlSelf->__Vfunc_shift_jam27__627__distance)));
            vlSelf->__Vfunc_shift_jam27__627__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__627__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__627__distance)))));
            vlSelf->__Vfunc_shift_jam27__627__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__627__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__627__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__627__discarded))));
        }
        __Vfunc_round_pack32__626__shifted = vlSelf->__Vfunc_shift_jam27__627__Vfuncout;
    }
    __Vfunc_round_pack32__626__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__626__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__626__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__626__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__626__rounded)) {
        __Vfunc_round_pack32__626__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__626__rounded, 1U));
        __Vfunc_round_pack32__626__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__626__adjusted)));
    }
    __Vfunc_round_pack32__626__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__626__rounded)) {
        __Vfunc_round_pack32__626__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__626__adjusted)));
    }
    __Vfunc_round_pack32__626__Vfuncout = (((0U == __Vfunc_round_pack32__626__significand) 
                                            | (0U == __Vfunc_round_pack32__626__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__626__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__626__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__626__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__626__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__626__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__626__Vfuncout;
    __Vfunc_round_pack32__620__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__620__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__620__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__620__adjusted = __Vfunc_round_pack32__620__exponent;
    __Vfunc_round_pack32__620__shifted = __Vfunc_round_pack32__620__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__620__exponent))) {
        vlSelf->__Vfunc_shift_jam27__621__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__620__exponent)));
        vlSelf->__Vfunc_shift_jam27__621__value = __Vfunc_round_pack32__620__significand;
        __Vfunc_round_pack32__620__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__621__distance))) {
            vlSelf->__Vfunc_shift_jam27__621__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__621__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__621__distance))) {
            vlSelf->__Vfunc_shift_jam27__621__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__621__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__621__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__621__value, (IData)(vlSelf->__Vfunc_shift_jam27__621__distance)));
            vlSelf->__Vfunc_shift_jam27__621__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__621__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__621__distance)))));
            vlSelf->__Vfunc_shift_jam27__621__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__621__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__621__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__621__discarded))));
        }
        __Vfunc_round_pack32__620__shifted = vlSelf->__Vfunc_shift_jam27__621__Vfuncout;
    }
    __Vfunc_round_pack32__620__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__620__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__620__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__620__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__620__rounded)) {
        __Vfunc_round_pack32__620__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__620__rounded, 1U));
        __Vfunc_round_pack32__620__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__620__adjusted)));
    }
    __Vfunc_round_pack32__620__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__620__rounded)) {
        __Vfunc_round_pack32__620__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__620__adjusted)));
    }
    __Vfunc_round_pack32__620__Vfuncout = (((0U == __Vfunc_round_pack32__620__significand) 
                                            | (0U == __Vfunc_round_pack32__620__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__620__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__620__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__620__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__620__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__620__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__620__Vfuncout;
    __Vfunc_round_pack32__614__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__614__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__614__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__614__adjusted = __Vfunc_round_pack32__614__exponent;
    __Vfunc_round_pack32__614__shifted = __Vfunc_round_pack32__614__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__614__exponent))) {
        vlSelf->__Vfunc_shift_jam27__615__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__614__exponent)));
        vlSelf->__Vfunc_shift_jam27__615__value = __Vfunc_round_pack32__614__significand;
        __Vfunc_round_pack32__614__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__615__distance))) {
            vlSelf->__Vfunc_shift_jam27__615__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__615__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__615__distance))) {
            vlSelf->__Vfunc_shift_jam27__615__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__615__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__615__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__615__value, (IData)(vlSelf->__Vfunc_shift_jam27__615__distance)));
            vlSelf->__Vfunc_shift_jam27__615__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__615__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__615__distance)))));
            vlSelf->__Vfunc_shift_jam27__615__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__615__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__615__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__615__discarded))));
        }
        __Vfunc_round_pack32__614__shifted = vlSelf->__Vfunc_shift_jam27__615__Vfuncout;
    }
    __Vfunc_round_pack32__614__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__614__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__614__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__614__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__614__rounded)) {
        __Vfunc_round_pack32__614__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__614__rounded, 1U));
        __Vfunc_round_pack32__614__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__614__adjusted)));
    }
    __Vfunc_round_pack32__614__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__614__rounded)) {
        __Vfunc_round_pack32__614__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__614__adjusted)));
    }
    __Vfunc_round_pack32__614__Vfuncout = (((0U == __Vfunc_round_pack32__614__significand) 
                                            | (0U == __Vfunc_round_pack32__614__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__614__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__614__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__614__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__614__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__614__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__614__Vfuncout;
    __Vfunc_round_pack32__608__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__608__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__608__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__608__adjusted = __Vfunc_round_pack32__608__exponent;
    __Vfunc_round_pack32__608__shifted = __Vfunc_round_pack32__608__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__608__exponent))) {
        vlSelf->__Vfunc_shift_jam27__609__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__608__exponent)));
        vlSelf->__Vfunc_shift_jam27__609__value = __Vfunc_round_pack32__608__significand;
        __Vfunc_round_pack32__608__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__609__distance))) {
            vlSelf->__Vfunc_shift_jam27__609__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__609__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__609__distance))) {
            vlSelf->__Vfunc_shift_jam27__609__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__609__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__609__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__609__value, (IData)(vlSelf->__Vfunc_shift_jam27__609__distance)));
            vlSelf->__Vfunc_shift_jam27__609__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__609__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__609__distance)))));
            vlSelf->__Vfunc_shift_jam27__609__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__609__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__609__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__609__discarded))));
        }
        __Vfunc_round_pack32__608__shifted = vlSelf->__Vfunc_shift_jam27__609__Vfuncout;
    }
    __Vfunc_round_pack32__608__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__608__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__608__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__608__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__608__rounded)) {
        __Vfunc_round_pack32__608__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__608__rounded, 1U));
        __Vfunc_round_pack32__608__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__608__adjusted)));
    }
    __Vfunc_round_pack32__608__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__608__rounded)) {
        __Vfunc_round_pack32__608__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__608__adjusted)));
    }
    __Vfunc_round_pack32__608__Vfuncout = (((0U == __Vfunc_round_pack32__608__significand) 
                                            | (0U == __Vfunc_round_pack32__608__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__608__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__608__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__608__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__608__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__608__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__608__Vfuncout;
    __Vfunc_round_pack32__602__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__602__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__602__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__602__adjusted = __Vfunc_round_pack32__602__exponent;
    __Vfunc_round_pack32__602__shifted = __Vfunc_round_pack32__602__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__602__exponent))) {
        vlSelf->__Vfunc_shift_jam27__603__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__602__exponent)));
        vlSelf->__Vfunc_shift_jam27__603__value = __Vfunc_round_pack32__602__significand;
        __Vfunc_round_pack32__602__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__603__distance))) {
            vlSelf->__Vfunc_shift_jam27__603__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__603__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__603__distance))) {
            vlSelf->__Vfunc_shift_jam27__603__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__603__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__603__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__603__value, (IData)(vlSelf->__Vfunc_shift_jam27__603__distance)));
            vlSelf->__Vfunc_shift_jam27__603__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__603__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__603__distance)))));
            vlSelf->__Vfunc_shift_jam27__603__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__603__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__603__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__603__discarded))));
        }
        __Vfunc_round_pack32__602__shifted = vlSelf->__Vfunc_shift_jam27__603__Vfuncout;
    }
    __Vfunc_round_pack32__602__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__602__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__602__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__602__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__602__rounded)) {
        __Vfunc_round_pack32__602__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__602__rounded, 1U));
        __Vfunc_round_pack32__602__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__602__adjusted)));
    }
    __Vfunc_round_pack32__602__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__602__rounded)) {
        __Vfunc_round_pack32__602__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__602__adjusted)));
    }
    __Vfunc_round_pack32__602__Vfuncout = (((0U == __Vfunc_round_pack32__602__significand) 
                                            | (0U == __Vfunc_round_pack32__602__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__602__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__602__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__602__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__602__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__602__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__602__Vfuncout;
    __Vfunc_round_pack32__596__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__596__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__596__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__596__adjusted = __Vfunc_round_pack32__596__exponent;
    __Vfunc_round_pack32__596__shifted = __Vfunc_round_pack32__596__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__596__exponent))) {
        vlSelf->__Vfunc_shift_jam27__597__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__596__exponent)));
        vlSelf->__Vfunc_shift_jam27__597__value = __Vfunc_round_pack32__596__significand;
        __Vfunc_round_pack32__596__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__597__distance))) {
            vlSelf->__Vfunc_shift_jam27__597__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__597__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__597__distance))) {
            vlSelf->__Vfunc_shift_jam27__597__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__597__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__597__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__597__value, (IData)(vlSelf->__Vfunc_shift_jam27__597__distance)));
            vlSelf->__Vfunc_shift_jam27__597__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__597__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__597__distance)))));
            vlSelf->__Vfunc_shift_jam27__597__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__597__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__597__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__597__discarded))));
        }
        __Vfunc_round_pack32__596__shifted = vlSelf->__Vfunc_shift_jam27__597__Vfuncout;
    }
    __Vfunc_round_pack32__596__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__596__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__596__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__596__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__596__rounded)) {
        __Vfunc_round_pack32__596__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__596__rounded, 1U));
        __Vfunc_round_pack32__596__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__596__adjusted)));
    }
    __Vfunc_round_pack32__596__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__596__rounded)) {
        __Vfunc_round_pack32__596__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__596__adjusted)));
    }
    __Vfunc_round_pack32__596__Vfuncout = (((0U == __Vfunc_round_pack32__596__significand) 
                                            | (0U == __Vfunc_round_pack32__596__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__596__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__596__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__596__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__596__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__596__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__596__Vfuncout;
    __Vfunc_round_pack32__590__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__590__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__590__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__590__adjusted = __Vfunc_round_pack32__590__exponent;
    __Vfunc_round_pack32__590__shifted = __Vfunc_round_pack32__590__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__590__exponent))) {
        vlSelf->__Vfunc_shift_jam27__591__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__590__exponent)));
        vlSelf->__Vfunc_shift_jam27__591__value = __Vfunc_round_pack32__590__significand;
        __Vfunc_round_pack32__590__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__591__distance))) {
            vlSelf->__Vfunc_shift_jam27__591__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__591__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__591__distance))) {
            vlSelf->__Vfunc_shift_jam27__591__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__591__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__591__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__591__value, (IData)(vlSelf->__Vfunc_shift_jam27__591__distance)));
            vlSelf->__Vfunc_shift_jam27__591__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__591__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__591__distance)))));
            vlSelf->__Vfunc_shift_jam27__591__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__591__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__591__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__591__discarded))));
        }
        __Vfunc_round_pack32__590__shifted = vlSelf->__Vfunc_shift_jam27__591__Vfuncout;
    }
    __Vfunc_round_pack32__590__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__590__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__590__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__590__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__590__rounded)) {
        __Vfunc_round_pack32__590__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__590__rounded, 1U));
        __Vfunc_round_pack32__590__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__590__adjusted)));
    }
    __Vfunc_round_pack32__590__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__590__rounded)) {
        __Vfunc_round_pack32__590__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__590__adjusted)));
    }
    __Vfunc_round_pack32__590__Vfuncout = (((0U == __Vfunc_round_pack32__590__significand) 
                                            | (0U == __Vfunc_round_pack32__590__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__590__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__590__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__590__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__590__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__590__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__590__Vfuncout;
    __Vfunc_round_pack32__584__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__584__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__584__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__584__adjusted = __Vfunc_round_pack32__584__exponent;
    __Vfunc_round_pack32__584__shifted = __Vfunc_round_pack32__584__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__584__exponent))) {
        vlSelf->__Vfunc_shift_jam27__585__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__584__exponent)));
        vlSelf->__Vfunc_shift_jam27__585__value = __Vfunc_round_pack32__584__significand;
        __Vfunc_round_pack32__584__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__585__distance))) {
            vlSelf->__Vfunc_shift_jam27__585__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__585__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__585__distance))) {
            vlSelf->__Vfunc_shift_jam27__585__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__585__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__585__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__585__value, (IData)(vlSelf->__Vfunc_shift_jam27__585__distance)));
            vlSelf->__Vfunc_shift_jam27__585__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__585__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__585__distance)))));
            vlSelf->__Vfunc_shift_jam27__585__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__585__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__585__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__585__discarded))));
        }
        __Vfunc_round_pack32__584__shifted = vlSelf->__Vfunc_shift_jam27__585__Vfuncout;
    }
    __Vfunc_round_pack32__584__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__584__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__584__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__584__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__584__rounded)) {
        __Vfunc_round_pack32__584__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__584__rounded, 1U));
        __Vfunc_round_pack32__584__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__584__adjusted)));
    }
    __Vfunc_round_pack32__584__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__584__rounded)) {
        __Vfunc_round_pack32__584__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__584__adjusted)));
    }
    __Vfunc_round_pack32__584__Vfuncout = (((0U == __Vfunc_round_pack32__584__significand) 
                                            | (0U == __Vfunc_round_pack32__584__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__584__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__584__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__584__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__584__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__584__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__584__Vfuncout;
    __Vfunc_round_pack32__578__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__578__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__578__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__578__adjusted = __Vfunc_round_pack32__578__exponent;
    __Vfunc_round_pack32__578__shifted = __Vfunc_round_pack32__578__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__578__exponent))) {
        vlSelf->__Vfunc_shift_jam27__579__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__578__exponent)));
        vlSelf->__Vfunc_shift_jam27__579__value = __Vfunc_round_pack32__578__significand;
        __Vfunc_round_pack32__578__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__579__distance))) {
            vlSelf->__Vfunc_shift_jam27__579__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__579__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__579__distance))) {
            vlSelf->__Vfunc_shift_jam27__579__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__579__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__579__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__579__value, (IData)(vlSelf->__Vfunc_shift_jam27__579__distance)));
            vlSelf->__Vfunc_shift_jam27__579__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__579__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__579__distance)))));
            vlSelf->__Vfunc_shift_jam27__579__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__579__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__579__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__579__discarded))));
        }
        __Vfunc_round_pack32__578__shifted = vlSelf->__Vfunc_shift_jam27__579__Vfuncout;
    }
    __Vfunc_round_pack32__578__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__578__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__578__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__578__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__578__rounded)) {
        __Vfunc_round_pack32__578__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__578__rounded, 1U));
        __Vfunc_round_pack32__578__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__578__adjusted)));
    }
    __Vfunc_round_pack32__578__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__578__rounded)) {
        __Vfunc_round_pack32__578__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__578__adjusted)));
    }
    __Vfunc_round_pack32__578__Vfuncout = (((0U == __Vfunc_round_pack32__578__significand) 
                                            | (0U == __Vfunc_round_pack32__578__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__578__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__578__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__578__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__578__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__578__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__578__Vfuncout;
    __Vfunc_round_pack32__572__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__572__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__572__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__572__adjusted = __Vfunc_round_pack32__572__exponent;
    __Vfunc_round_pack32__572__shifted = __Vfunc_round_pack32__572__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__572__exponent))) {
        vlSelf->__Vfunc_shift_jam27__573__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__572__exponent)));
        vlSelf->__Vfunc_shift_jam27__573__value = __Vfunc_round_pack32__572__significand;
        __Vfunc_round_pack32__572__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__573__distance))) {
            vlSelf->__Vfunc_shift_jam27__573__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__573__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__573__distance))) {
            vlSelf->__Vfunc_shift_jam27__573__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__573__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__573__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__573__value, (IData)(vlSelf->__Vfunc_shift_jam27__573__distance)));
            vlSelf->__Vfunc_shift_jam27__573__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__573__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__573__distance)))));
            vlSelf->__Vfunc_shift_jam27__573__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__573__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__573__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__573__discarded))));
        }
        __Vfunc_round_pack32__572__shifted = vlSelf->__Vfunc_shift_jam27__573__Vfuncout;
    }
    __Vfunc_round_pack32__572__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__572__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__572__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__572__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__572__rounded)) {
        __Vfunc_round_pack32__572__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__572__rounded, 1U));
        __Vfunc_round_pack32__572__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__572__adjusted)));
    }
    __Vfunc_round_pack32__572__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__572__rounded)) {
        __Vfunc_round_pack32__572__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__572__adjusted)));
    }
    __Vfunc_round_pack32__572__Vfuncout = (((0U == __Vfunc_round_pack32__572__significand) 
                                            | (0U == __Vfunc_round_pack32__572__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__572__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__572__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__572__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__572__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__572__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__572__Vfuncout;
    __Vfunc_round_pack32__566__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__566__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__566__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__566__adjusted = __Vfunc_round_pack32__566__exponent;
    __Vfunc_round_pack32__566__shifted = __Vfunc_round_pack32__566__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__566__exponent))) {
        vlSelf->__Vfunc_shift_jam27__567__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__566__exponent)));
        vlSelf->__Vfunc_shift_jam27__567__value = __Vfunc_round_pack32__566__significand;
        __Vfunc_round_pack32__566__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__567__distance))) {
            vlSelf->__Vfunc_shift_jam27__567__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__567__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__567__distance))) {
            vlSelf->__Vfunc_shift_jam27__567__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__567__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__567__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__567__value, (IData)(vlSelf->__Vfunc_shift_jam27__567__distance)));
            vlSelf->__Vfunc_shift_jam27__567__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__567__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__567__distance)))));
            vlSelf->__Vfunc_shift_jam27__567__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__567__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__567__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__567__discarded))));
        }
        __Vfunc_round_pack32__566__shifted = vlSelf->__Vfunc_shift_jam27__567__Vfuncout;
    }
    __Vfunc_round_pack32__566__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__566__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__566__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__566__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__566__rounded)) {
        __Vfunc_round_pack32__566__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__566__rounded, 1U));
        __Vfunc_round_pack32__566__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__566__adjusted)));
    }
    __Vfunc_round_pack32__566__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__566__rounded)) {
        __Vfunc_round_pack32__566__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__566__adjusted)));
    }
    __Vfunc_round_pack32__566__Vfuncout = (((0U == __Vfunc_round_pack32__566__significand) 
                                            | (0U == __Vfunc_round_pack32__566__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__566__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__566__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__566__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__566__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__566__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__566__Vfuncout;
    __Vfunc_round_pack32__560__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__560__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__560__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__560__adjusted = __Vfunc_round_pack32__560__exponent;
    __Vfunc_round_pack32__560__shifted = __Vfunc_round_pack32__560__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__560__exponent))) {
        vlSelf->__Vfunc_shift_jam27__561__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__560__exponent)));
        vlSelf->__Vfunc_shift_jam27__561__value = __Vfunc_round_pack32__560__significand;
        __Vfunc_round_pack32__560__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__561__distance))) {
            vlSelf->__Vfunc_shift_jam27__561__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__561__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__561__distance))) {
            vlSelf->__Vfunc_shift_jam27__561__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__561__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__561__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__561__value, (IData)(vlSelf->__Vfunc_shift_jam27__561__distance)));
            vlSelf->__Vfunc_shift_jam27__561__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__561__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__561__distance)))));
            vlSelf->__Vfunc_shift_jam27__561__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__561__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__561__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__561__discarded))));
        }
        __Vfunc_round_pack32__560__shifted = vlSelf->__Vfunc_shift_jam27__561__Vfuncout;
    }
    __Vfunc_round_pack32__560__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__560__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__560__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__560__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__560__rounded)) {
        __Vfunc_round_pack32__560__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__560__rounded, 1U));
        __Vfunc_round_pack32__560__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__560__adjusted)));
    }
    __Vfunc_round_pack32__560__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__560__rounded)) {
        __Vfunc_round_pack32__560__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__560__adjusted)));
    }
    __Vfunc_round_pack32__560__Vfuncout = (((0U == __Vfunc_round_pack32__560__significand) 
                                            | (0U == __Vfunc_round_pack32__560__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__560__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__560__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__560__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__560__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__560__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__560__Vfuncout;
    __Vfunc_round_pack32__554__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__554__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__554__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__554__adjusted = __Vfunc_round_pack32__554__exponent;
    __Vfunc_round_pack32__554__shifted = __Vfunc_round_pack32__554__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__554__exponent))) {
        vlSelf->__Vfunc_shift_jam27__555__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__554__exponent)));
        vlSelf->__Vfunc_shift_jam27__555__value = __Vfunc_round_pack32__554__significand;
        __Vfunc_round_pack32__554__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__555__distance))) {
            vlSelf->__Vfunc_shift_jam27__555__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__555__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__555__distance))) {
            vlSelf->__Vfunc_shift_jam27__555__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__555__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__555__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__555__value, (IData)(vlSelf->__Vfunc_shift_jam27__555__distance)));
            vlSelf->__Vfunc_shift_jam27__555__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__555__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__555__distance)))));
            vlSelf->__Vfunc_shift_jam27__555__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__555__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__555__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__555__discarded))));
        }
        __Vfunc_round_pack32__554__shifted = vlSelf->__Vfunc_shift_jam27__555__Vfuncout;
    }
    __Vfunc_round_pack32__554__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__554__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__554__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__554__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__554__rounded)) {
        __Vfunc_round_pack32__554__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__554__rounded, 1U));
        __Vfunc_round_pack32__554__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__554__adjusted)));
    }
    __Vfunc_round_pack32__554__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__554__rounded)) {
        __Vfunc_round_pack32__554__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__554__adjusted)));
    }
    __Vfunc_round_pack32__554__Vfuncout = (((0U == __Vfunc_round_pack32__554__significand) 
                                            | (0U == __Vfunc_round_pack32__554__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__554__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__554__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__554__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__554__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__554__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__554__Vfuncout;
    __Vfunc_round_pack32__548__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__548__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__548__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__548__adjusted = __Vfunc_round_pack32__548__exponent;
    __Vfunc_round_pack32__548__shifted = __Vfunc_round_pack32__548__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__548__exponent))) {
        vlSelf->__Vfunc_shift_jam27__549__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__548__exponent)));
        vlSelf->__Vfunc_shift_jam27__549__value = __Vfunc_round_pack32__548__significand;
        __Vfunc_round_pack32__548__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__549__distance))) {
            vlSelf->__Vfunc_shift_jam27__549__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__549__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__549__distance))) {
            vlSelf->__Vfunc_shift_jam27__549__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__549__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__549__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__549__value, (IData)(vlSelf->__Vfunc_shift_jam27__549__distance)));
            vlSelf->__Vfunc_shift_jam27__549__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__549__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__549__distance)))));
            vlSelf->__Vfunc_shift_jam27__549__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__549__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__549__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__549__discarded))));
        }
        __Vfunc_round_pack32__548__shifted = vlSelf->__Vfunc_shift_jam27__549__Vfuncout;
    }
    __Vfunc_round_pack32__548__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__548__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__548__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__548__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__548__rounded)) {
        __Vfunc_round_pack32__548__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__548__rounded, 1U));
        __Vfunc_round_pack32__548__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__548__adjusted)));
    }
    __Vfunc_round_pack32__548__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__548__rounded)) {
        __Vfunc_round_pack32__548__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__548__adjusted)));
    }
    __Vfunc_round_pack32__548__Vfuncout = (((0U == __Vfunc_round_pack32__548__significand) 
                                            | (0U == __Vfunc_round_pack32__548__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__548__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__548__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__548__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__548__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__548__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__548__Vfuncout;
    __Vfunc_round_pack32__542__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__542__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__542__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__542__adjusted = __Vfunc_round_pack32__542__exponent;
    __Vfunc_round_pack32__542__shifted = __Vfunc_round_pack32__542__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__542__exponent))) {
        vlSelf->__Vfunc_shift_jam27__543__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__542__exponent)));
        vlSelf->__Vfunc_shift_jam27__543__value = __Vfunc_round_pack32__542__significand;
        __Vfunc_round_pack32__542__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__543__distance))) {
            vlSelf->__Vfunc_shift_jam27__543__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__543__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__543__distance))) {
            vlSelf->__Vfunc_shift_jam27__543__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__543__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__543__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__543__value, (IData)(vlSelf->__Vfunc_shift_jam27__543__distance)));
            vlSelf->__Vfunc_shift_jam27__543__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__543__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__543__distance)))));
            vlSelf->__Vfunc_shift_jam27__543__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__543__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__543__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__543__discarded))));
        }
        __Vfunc_round_pack32__542__shifted = vlSelf->__Vfunc_shift_jam27__543__Vfuncout;
    }
    __Vfunc_round_pack32__542__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__542__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__542__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__542__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__542__rounded)) {
        __Vfunc_round_pack32__542__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__542__rounded, 1U));
        __Vfunc_round_pack32__542__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__542__adjusted)));
    }
    __Vfunc_round_pack32__542__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__542__rounded)) {
        __Vfunc_round_pack32__542__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__542__adjusted)));
    }
    __Vfunc_round_pack32__542__Vfuncout = (((0U == __Vfunc_round_pack32__542__significand) 
                                            | (0U == __Vfunc_round_pack32__542__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__542__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__542__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__542__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__542__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__542__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__542__Vfuncout;
    __Vfunc_round_pack32__536__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__536__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__536__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__536__adjusted = __Vfunc_round_pack32__536__exponent;
    __Vfunc_round_pack32__536__shifted = __Vfunc_round_pack32__536__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__536__exponent))) {
        vlSelf->__Vfunc_shift_jam27__537__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__536__exponent)));
        vlSelf->__Vfunc_shift_jam27__537__value = __Vfunc_round_pack32__536__significand;
        __Vfunc_round_pack32__536__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__537__distance))) {
            vlSelf->__Vfunc_shift_jam27__537__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__537__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__537__distance))) {
            vlSelf->__Vfunc_shift_jam27__537__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__537__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__537__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__537__value, (IData)(vlSelf->__Vfunc_shift_jam27__537__distance)));
            vlSelf->__Vfunc_shift_jam27__537__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__537__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__537__distance)))));
            vlSelf->__Vfunc_shift_jam27__537__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__537__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__537__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__537__discarded))));
        }
        __Vfunc_round_pack32__536__shifted = vlSelf->__Vfunc_shift_jam27__537__Vfuncout;
    }
    __Vfunc_round_pack32__536__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__536__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__536__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__536__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__536__rounded)) {
        __Vfunc_round_pack32__536__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__536__rounded, 1U));
        __Vfunc_round_pack32__536__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__536__adjusted)));
    }
    __Vfunc_round_pack32__536__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__536__rounded)) {
        __Vfunc_round_pack32__536__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__536__adjusted)));
    }
    __Vfunc_round_pack32__536__Vfuncout = (((0U == __Vfunc_round_pack32__536__significand) 
                                            | (0U == __Vfunc_round_pack32__536__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__536__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__536__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__536__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__536__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__536__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__536__Vfuncout;
    __Vfunc_round_pack32__530__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__530__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__530__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__530__adjusted = __Vfunc_round_pack32__530__exponent;
    __Vfunc_round_pack32__530__shifted = __Vfunc_round_pack32__530__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__530__exponent))) {
        vlSelf->__Vfunc_shift_jam27__531__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__530__exponent)));
        vlSelf->__Vfunc_shift_jam27__531__value = __Vfunc_round_pack32__530__significand;
        __Vfunc_round_pack32__530__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__531__distance))) {
            vlSelf->__Vfunc_shift_jam27__531__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__531__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__531__distance))) {
            vlSelf->__Vfunc_shift_jam27__531__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__531__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__531__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__531__value, (IData)(vlSelf->__Vfunc_shift_jam27__531__distance)));
            vlSelf->__Vfunc_shift_jam27__531__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__531__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__531__distance)))));
            vlSelf->__Vfunc_shift_jam27__531__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__531__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__531__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__531__discarded))));
        }
        __Vfunc_round_pack32__530__shifted = vlSelf->__Vfunc_shift_jam27__531__Vfuncout;
    }
    __Vfunc_round_pack32__530__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__530__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__530__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__530__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__530__rounded)) {
        __Vfunc_round_pack32__530__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__530__rounded, 1U));
        __Vfunc_round_pack32__530__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__530__adjusted)));
    }
    __Vfunc_round_pack32__530__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__530__rounded)) {
        __Vfunc_round_pack32__530__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__530__adjusted)));
    }
    __Vfunc_round_pack32__530__Vfuncout = (((0U == __Vfunc_round_pack32__530__significand) 
                                            | (0U == __Vfunc_round_pack32__530__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__530__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__530__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__530__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__530__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__530__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__530__Vfuncout;
    __Vfunc_round_pack32__524__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__524__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__524__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__524__adjusted = __Vfunc_round_pack32__524__exponent;
    __Vfunc_round_pack32__524__shifted = __Vfunc_round_pack32__524__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__524__exponent))) {
        vlSelf->__Vfunc_shift_jam27__525__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__524__exponent)));
        vlSelf->__Vfunc_shift_jam27__525__value = __Vfunc_round_pack32__524__significand;
        __Vfunc_round_pack32__524__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__525__distance))) {
            vlSelf->__Vfunc_shift_jam27__525__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__525__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__525__distance))) {
            vlSelf->__Vfunc_shift_jam27__525__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__525__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__525__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__525__value, (IData)(vlSelf->__Vfunc_shift_jam27__525__distance)));
            vlSelf->__Vfunc_shift_jam27__525__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__525__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__525__distance)))));
            vlSelf->__Vfunc_shift_jam27__525__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__525__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__525__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__525__discarded))));
        }
        __Vfunc_round_pack32__524__shifted = vlSelf->__Vfunc_shift_jam27__525__Vfuncout;
    }
    __Vfunc_round_pack32__524__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__524__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__524__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__524__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__524__rounded)) {
        __Vfunc_round_pack32__524__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__524__rounded, 1U));
        __Vfunc_round_pack32__524__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__524__adjusted)));
    }
    __Vfunc_round_pack32__524__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__524__rounded)) {
        __Vfunc_round_pack32__524__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__524__adjusted)));
    }
    __Vfunc_round_pack32__524__Vfuncout = (((0U == __Vfunc_round_pack32__524__significand) 
                                            | (0U == __Vfunc_round_pack32__524__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__524__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__524__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__524__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__524__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__524__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__524__Vfuncout;
    __Vfunc_round_pack32__518__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__518__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__518__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__518__adjusted = __Vfunc_round_pack32__518__exponent;
    __Vfunc_round_pack32__518__shifted = __Vfunc_round_pack32__518__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__518__exponent))) {
        vlSelf->__Vfunc_shift_jam27__519__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__518__exponent)));
        vlSelf->__Vfunc_shift_jam27__519__value = __Vfunc_round_pack32__518__significand;
        __Vfunc_round_pack32__518__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__519__distance))) {
            vlSelf->__Vfunc_shift_jam27__519__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__519__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__519__distance))) {
            vlSelf->__Vfunc_shift_jam27__519__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__519__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__519__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__519__value, (IData)(vlSelf->__Vfunc_shift_jam27__519__distance)));
            vlSelf->__Vfunc_shift_jam27__519__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__519__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__519__distance)))));
            vlSelf->__Vfunc_shift_jam27__519__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__519__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__519__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__519__discarded))));
        }
        __Vfunc_round_pack32__518__shifted = vlSelf->__Vfunc_shift_jam27__519__Vfuncout;
    }
    __Vfunc_round_pack32__518__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__518__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__518__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__518__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__518__rounded)) {
        __Vfunc_round_pack32__518__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__518__rounded, 1U));
        __Vfunc_round_pack32__518__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__518__adjusted)));
    }
    __Vfunc_round_pack32__518__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__518__rounded)) {
        __Vfunc_round_pack32__518__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__518__adjusted)));
    }
    __Vfunc_round_pack32__518__Vfuncout = (((0U == __Vfunc_round_pack32__518__significand) 
                                            | (0U == __Vfunc_round_pack32__518__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__518__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__518__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__518__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__518__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__518__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__518__Vfuncout;
    __Vfunc_round_pack32__512__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__512__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__512__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__512__adjusted = __Vfunc_round_pack32__512__exponent;
    __Vfunc_round_pack32__512__shifted = __Vfunc_round_pack32__512__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__512__exponent))) {
        vlSelf->__Vfunc_shift_jam27__513__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__512__exponent)));
        vlSelf->__Vfunc_shift_jam27__513__value = __Vfunc_round_pack32__512__significand;
        __Vfunc_round_pack32__512__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__513__distance))) {
            vlSelf->__Vfunc_shift_jam27__513__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__513__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__513__distance))) {
            vlSelf->__Vfunc_shift_jam27__513__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__513__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__513__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__513__value, (IData)(vlSelf->__Vfunc_shift_jam27__513__distance)));
            vlSelf->__Vfunc_shift_jam27__513__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__513__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__513__distance)))));
            vlSelf->__Vfunc_shift_jam27__513__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__513__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__513__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__513__discarded))));
        }
        __Vfunc_round_pack32__512__shifted = vlSelf->__Vfunc_shift_jam27__513__Vfuncout;
    }
    __Vfunc_round_pack32__512__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__512__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__512__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__512__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__512__rounded)) {
        __Vfunc_round_pack32__512__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__512__rounded, 1U));
        __Vfunc_round_pack32__512__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__512__adjusted)));
    }
    __Vfunc_round_pack32__512__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__512__rounded)) {
        __Vfunc_round_pack32__512__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__512__adjusted)));
    }
    __Vfunc_round_pack32__512__Vfuncout = (((0U == __Vfunc_round_pack32__512__significand) 
                                            | (0U == __Vfunc_round_pack32__512__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__512__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__512__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__512__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__512__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__512__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__512__Vfuncout;
    __Vfunc_round_pack32__506__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__506__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__506__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__506__adjusted = __Vfunc_round_pack32__506__exponent;
    __Vfunc_round_pack32__506__shifted = __Vfunc_round_pack32__506__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__506__exponent))) {
        vlSelf->__Vfunc_shift_jam27__507__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__506__exponent)));
        vlSelf->__Vfunc_shift_jam27__507__value = __Vfunc_round_pack32__506__significand;
        __Vfunc_round_pack32__506__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__507__distance))) {
            vlSelf->__Vfunc_shift_jam27__507__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__507__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__507__distance))) {
            vlSelf->__Vfunc_shift_jam27__507__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__507__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__507__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__507__value, (IData)(vlSelf->__Vfunc_shift_jam27__507__distance)));
            vlSelf->__Vfunc_shift_jam27__507__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__507__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__507__distance)))));
            vlSelf->__Vfunc_shift_jam27__507__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__507__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__507__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__507__discarded))));
        }
        __Vfunc_round_pack32__506__shifted = vlSelf->__Vfunc_shift_jam27__507__Vfuncout;
    }
    __Vfunc_round_pack32__506__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__506__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__506__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__506__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__506__rounded)) {
        __Vfunc_round_pack32__506__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__506__rounded, 1U));
        __Vfunc_round_pack32__506__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__506__adjusted)));
    }
    __Vfunc_round_pack32__506__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__506__rounded)) {
        __Vfunc_round_pack32__506__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__506__adjusted)));
    }
    __Vfunc_round_pack32__506__Vfuncout = (((0U == __Vfunc_round_pack32__506__significand) 
                                            | (0U == __Vfunc_round_pack32__506__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__506__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__506__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__506__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__506__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__506__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__506__Vfuncout;
    __Vfunc_round_pack32__500__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__500__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__500__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__500__adjusted = __Vfunc_round_pack32__500__exponent;
    __Vfunc_round_pack32__500__shifted = __Vfunc_round_pack32__500__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__500__exponent))) {
        vlSelf->__Vfunc_shift_jam27__501__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__500__exponent)));
        vlSelf->__Vfunc_shift_jam27__501__value = __Vfunc_round_pack32__500__significand;
        __Vfunc_round_pack32__500__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__501__distance))) {
            vlSelf->__Vfunc_shift_jam27__501__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__501__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__501__distance))) {
            vlSelf->__Vfunc_shift_jam27__501__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__501__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__501__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__501__value, (IData)(vlSelf->__Vfunc_shift_jam27__501__distance)));
            vlSelf->__Vfunc_shift_jam27__501__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__501__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__501__distance)))));
            vlSelf->__Vfunc_shift_jam27__501__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__501__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__501__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__501__discarded))));
        }
        __Vfunc_round_pack32__500__shifted = vlSelf->__Vfunc_shift_jam27__501__Vfuncout;
    }
    __Vfunc_round_pack32__500__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__500__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__500__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__500__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__500__rounded)) {
        __Vfunc_round_pack32__500__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__500__rounded, 1U));
        __Vfunc_round_pack32__500__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__500__adjusted)));
    }
    __Vfunc_round_pack32__500__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__500__rounded)) {
        __Vfunc_round_pack32__500__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__500__adjusted)));
    }
    __Vfunc_round_pack32__500__Vfuncout = (((0U == __Vfunc_round_pack32__500__significand) 
                                            | (0U == __Vfunc_round_pack32__500__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__500__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__500__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__500__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__500__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__500__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__500__Vfuncout;
    __Vfunc_round_pack32__494__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__494__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__494__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__494__adjusted = __Vfunc_round_pack32__494__exponent;
    __Vfunc_round_pack32__494__shifted = __Vfunc_round_pack32__494__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__494__exponent))) {
        vlSelf->__Vfunc_shift_jam27__495__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__494__exponent)));
        vlSelf->__Vfunc_shift_jam27__495__value = __Vfunc_round_pack32__494__significand;
        __Vfunc_round_pack32__494__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__495__distance))) {
            vlSelf->__Vfunc_shift_jam27__495__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__495__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__495__distance))) {
            vlSelf->__Vfunc_shift_jam27__495__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__495__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__495__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__495__value, (IData)(vlSelf->__Vfunc_shift_jam27__495__distance)));
            vlSelf->__Vfunc_shift_jam27__495__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__495__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__495__distance)))));
            vlSelf->__Vfunc_shift_jam27__495__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__495__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__495__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__495__discarded))));
        }
        __Vfunc_round_pack32__494__shifted = vlSelf->__Vfunc_shift_jam27__495__Vfuncout;
    }
    __Vfunc_round_pack32__494__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__494__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__494__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__494__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__494__rounded)) {
        __Vfunc_round_pack32__494__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__494__rounded, 1U));
        __Vfunc_round_pack32__494__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__494__adjusted)));
    }
    __Vfunc_round_pack32__494__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__494__rounded)) {
        __Vfunc_round_pack32__494__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__494__adjusted)));
    }
    __Vfunc_round_pack32__494__Vfuncout = (((0U == __Vfunc_round_pack32__494__significand) 
                                            | (0U == __Vfunc_round_pack32__494__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__494__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__494__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__494__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__494__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__494__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__494__Vfuncout;
    __Vfunc_round_pack32__488__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__488__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__488__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__488__adjusted = __Vfunc_round_pack32__488__exponent;
    __Vfunc_round_pack32__488__shifted = __Vfunc_round_pack32__488__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__488__exponent))) {
        vlSelf->__Vfunc_shift_jam27__489__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__488__exponent)));
        vlSelf->__Vfunc_shift_jam27__489__value = __Vfunc_round_pack32__488__significand;
        __Vfunc_round_pack32__488__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__489__distance))) {
            vlSelf->__Vfunc_shift_jam27__489__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__489__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__489__distance))) {
            vlSelf->__Vfunc_shift_jam27__489__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__489__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__489__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__489__value, (IData)(vlSelf->__Vfunc_shift_jam27__489__distance)));
            vlSelf->__Vfunc_shift_jam27__489__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__489__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__489__distance)))));
            vlSelf->__Vfunc_shift_jam27__489__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__489__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__489__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__489__discarded))));
        }
        __Vfunc_round_pack32__488__shifted = vlSelf->__Vfunc_shift_jam27__489__Vfuncout;
    }
    __Vfunc_round_pack32__488__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__488__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__488__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__488__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__488__rounded)) {
        __Vfunc_round_pack32__488__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__488__rounded, 1U));
        __Vfunc_round_pack32__488__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__488__adjusted)));
    }
    __Vfunc_round_pack32__488__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__488__rounded)) {
        __Vfunc_round_pack32__488__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__488__adjusted)));
    }
    __Vfunc_round_pack32__488__Vfuncout = (((0U == __Vfunc_round_pack32__488__significand) 
                                            | (0U == __Vfunc_round_pack32__488__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__488__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__488__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__488__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__488__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__488__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__488__Vfuncout;
    __Vfunc_round_pack32__482__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__482__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__482__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__482__adjusted = __Vfunc_round_pack32__482__exponent;
    __Vfunc_round_pack32__482__shifted = __Vfunc_round_pack32__482__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__482__exponent))) {
        vlSelf->__Vfunc_shift_jam27__483__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__482__exponent)));
        vlSelf->__Vfunc_shift_jam27__483__value = __Vfunc_round_pack32__482__significand;
        __Vfunc_round_pack32__482__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__483__distance))) {
            vlSelf->__Vfunc_shift_jam27__483__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__483__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__483__distance))) {
            vlSelf->__Vfunc_shift_jam27__483__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__483__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__483__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__483__value, (IData)(vlSelf->__Vfunc_shift_jam27__483__distance)));
            vlSelf->__Vfunc_shift_jam27__483__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__483__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__483__distance)))));
            vlSelf->__Vfunc_shift_jam27__483__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__483__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__483__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__483__discarded))));
        }
        __Vfunc_round_pack32__482__shifted = vlSelf->__Vfunc_shift_jam27__483__Vfuncout;
    }
    __Vfunc_round_pack32__482__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__482__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__482__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__482__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__482__rounded)) {
        __Vfunc_round_pack32__482__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__482__rounded, 1U));
        __Vfunc_round_pack32__482__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__482__adjusted)));
    }
    __Vfunc_round_pack32__482__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__482__rounded)) {
        __Vfunc_round_pack32__482__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__482__adjusted)));
    }
    __Vfunc_round_pack32__482__Vfuncout = (((0U == __Vfunc_round_pack32__482__significand) 
                                            | (0U == __Vfunc_round_pack32__482__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__482__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__482__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__482__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__482__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__482__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__482__Vfuncout;
    __Vfunc_round_pack32__476__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__476__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__476__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__476__adjusted = __Vfunc_round_pack32__476__exponent;
    __Vfunc_round_pack32__476__shifted = __Vfunc_round_pack32__476__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__476__exponent))) {
        vlSelf->__Vfunc_shift_jam27__477__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__476__exponent)));
        vlSelf->__Vfunc_shift_jam27__477__value = __Vfunc_round_pack32__476__significand;
        __Vfunc_round_pack32__476__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__477__distance))) {
            vlSelf->__Vfunc_shift_jam27__477__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__477__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__477__distance))) {
            vlSelf->__Vfunc_shift_jam27__477__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__477__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__477__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__477__value, (IData)(vlSelf->__Vfunc_shift_jam27__477__distance)));
            vlSelf->__Vfunc_shift_jam27__477__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__477__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__477__distance)))));
            vlSelf->__Vfunc_shift_jam27__477__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__477__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__477__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__477__discarded))));
        }
        __Vfunc_round_pack32__476__shifted = vlSelf->__Vfunc_shift_jam27__477__Vfuncout;
    }
    __Vfunc_round_pack32__476__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__476__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__476__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__476__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__476__rounded)) {
        __Vfunc_round_pack32__476__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__476__rounded, 1U));
        __Vfunc_round_pack32__476__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__476__adjusted)));
    }
    __Vfunc_round_pack32__476__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__476__rounded)) {
        __Vfunc_round_pack32__476__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__476__adjusted)));
    }
    __Vfunc_round_pack32__476__Vfuncout = (((0U == __Vfunc_round_pack32__476__significand) 
                                            | (0U == __Vfunc_round_pack32__476__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__476__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__476__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__476__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__476__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__476__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__476__Vfuncout;
    __Vfunc_round_pack32__470__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__470__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__470__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__470__adjusted = __Vfunc_round_pack32__470__exponent;
    __Vfunc_round_pack32__470__shifted = __Vfunc_round_pack32__470__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__470__exponent))) {
        vlSelf->__Vfunc_shift_jam27__471__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__470__exponent)));
        vlSelf->__Vfunc_shift_jam27__471__value = __Vfunc_round_pack32__470__significand;
        __Vfunc_round_pack32__470__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__471__distance))) {
            vlSelf->__Vfunc_shift_jam27__471__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__471__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__471__distance))) {
            vlSelf->__Vfunc_shift_jam27__471__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__471__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__471__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__471__value, (IData)(vlSelf->__Vfunc_shift_jam27__471__distance)));
            vlSelf->__Vfunc_shift_jam27__471__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__471__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__471__distance)))));
            vlSelf->__Vfunc_shift_jam27__471__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__471__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__471__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__471__discarded))));
        }
        __Vfunc_round_pack32__470__shifted = vlSelf->__Vfunc_shift_jam27__471__Vfuncout;
    }
    __Vfunc_round_pack32__470__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__470__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__470__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__470__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__470__rounded)) {
        __Vfunc_round_pack32__470__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__470__rounded, 1U));
        __Vfunc_round_pack32__470__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__470__adjusted)));
    }
    __Vfunc_round_pack32__470__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__470__rounded)) {
        __Vfunc_round_pack32__470__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__470__adjusted)));
    }
    __Vfunc_round_pack32__470__Vfuncout = (((0U == __Vfunc_round_pack32__470__significand) 
                                            | (0U == __Vfunc_round_pack32__470__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__470__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__470__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__470__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__470__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__470__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__470__Vfuncout;
    __Vfunc_round_pack32__464__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__464__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__464__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__464__adjusted = __Vfunc_round_pack32__464__exponent;
    __Vfunc_round_pack32__464__shifted = __Vfunc_round_pack32__464__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__464__exponent))) {
        vlSelf->__Vfunc_shift_jam27__465__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__464__exponent)));
        vlSelf->__Vfunc_shift_jam27__465__value = __Vfunc_round_pack32__464__significand;
        __Vfunc_round_pack32__464__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__465__distance))) {
            vlSelf->__Vfunc_shift_jam27__465__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__465__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__465__distance))) {
            vlSelf->__Vfunc_shift_jam27__465__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__465__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__465__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__465__value, (IData)(vlSelf->__Vfunc_shift_jam27__465__distance)));
            vlSelf->__Vfunc_shift_jam27__465__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__465__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__465__distance)))));
            vlSelf->__Vfunc_shift_jam27__465__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__465__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__465__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__465__discarded))));
        }
        __Vfunc_round_pack32__464__shifted = vlSelf->__Vfunc_shift_jam27__465__Vfuncout;
    }
    __Vfunc_round_pack32__464__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__464__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__464__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__464__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__464__rounded)) {
        __Vfunc_round_pack32__464__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__464__rounded, 1U));
        __Vfunc_round_pack32__464__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__464__adjusted)));
    }
    __Vfunc_round_pack32__464__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__464__rounded)) {
        __Vfunc_round_pack32__464__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__464__adjusted)));
    }
    __Vfunc_round_pack32__464__Vfuncout = (((0U == __Vfunc_round_pack32__464__significand) 
                                            | (0U == __Vfunc_round_pack32__464__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__464__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__464__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__464__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__464__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__464__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__464__Vfuncout;
    __Vfunc_round_pack32__458__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__458__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__458__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__458__adjusted = __Vfunc_round_pack32__458__exponent;
    __Vfunc_round_pack32__458__shifted = __Vfunc_round_pack32__458__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__458__exponent))) {
        vlSelf->__Vfunc_shift_jam27__459__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__458__exponent)));
        vlSelf->__Vfunc_shift_jam27__459__value = __Vfunc_round_pack32__458__significand;
        __Vfunc_round_pack32__458__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__459__distance))) {
            vlSelf->__Vfunc_shift_jam27__459__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__459__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__459__distance))) {
            vlSelf->__Vfunc_shift_jam27__459__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__459__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__459__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__459__value, (IData)(vlSelf->__Vfunc_shift_jam27__459__distance)));
            vlSelf->__Vfunc_shift_jam27__459__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__459__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__459__distance)))));
            vlSelf->__Vfunc_shift_jam27__459__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__459__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__459__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__459__discarded))));
        }
        __Vfunc_round_pack32__458__shifted = vlSelf->__Vfunc_shift_jam27__459__Vfuncout;
    }
    __Vfunc_round_pack32__458__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__458__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__458__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__458__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__458__rounded)) {
        __Vfunc_round_pack32__458__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__458__rounded, 1U));
        __Vfunc_round_pack32__458__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__458__adjusted)));
    }
    __Vfunc_round_pack32__458__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__458__rounded)) {
        __Vfunc_round_pack32__458__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__458__adjusted)));
    }
    __Vfunc_round_pack32__458__Vfuncout = (((0U == __Vfunc_round_pack32__458__significand) 
                                            | (0U == __Vfunc_round_pack32__458__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__458__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__458__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__458__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__458__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__458__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__458__Vfuncout;
    __Vfunc_round_pack32__452__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__452__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__452__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__452__adjusted = __Vfunc_round_pack32__452__exponent;
    __Vfunc_round_pack32__452__shifted = __Vfunc_round_pack32__452__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__452__exponent))) {
        vlSelf->__Vfunc_shift_jam27__453__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__452__exponent)));
        vlSelf->__Vfunc_shift_jam27__453__value = __Vfunc_round_pack32__452__significand;
        __Vfunc_round_pack32__452__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__453__distance))) {
            vlSelf->__Vfunc_shift_jam27__453__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__453__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__453__distance))) {
            vlSelf->__Vfunc_shift_jam27__453__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__453__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__453__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__453__value, (IData)(vlSelf->__Vfunc_shift_jam27__453__distance)));
            vlSelf->__Vfunc_shift_jam27__453__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__453__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__453__distance)))));
            vlSelf->__Vfunc_shift_jam27__453__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__453__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__453__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__453__discarded))));
        }
        __Vfunc_round_pack32__452__shifted = vlSelf->__Vfunc_shift_jam27__453__Vfuncout;
    }
    __Vfunc_round_pack32__452__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__452__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__452__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__452__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__452__rounded)) {
        __Vfunc_round_pack32__452__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__452__rounded, 1U));
        __Vfunc_round_pack32__452__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__452__adjusted)));
    }
    __Vfunc_round_pack32__452__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__452__rounded)) {
        __Vfunc_round_pack32__452__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__452__adjusted)));
    }
    __Vfunc_round_pack32__452__Vfuncout = (((0U == __Vfunc_round_pack32__452__significand) 
                                            | (0U == __Vfunc_round_pack32__452__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__452__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__452__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__452__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__452__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__452__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__452__Vfuncout;
    __Vfunc_round_pack32__446__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__446__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__446__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__446__adjusted = __Vfunc_round_pack32__446__exponent;
    __Vfunc_round_pack32__446__shifted = __Vfunc_round_pack32__446__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__446__exponent))) {
        vlSelf->__Vfunc_shift_jam27__447__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__446__exponent)));
        vlSelf->__Vfunc_shift_jam27__447__value = __Vfunc_round_pack32__446__significand;
        __Vfunc_round_pack32__446__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__447__distance))) {
            vlSelf->__Vfunc_shift_jam27__447__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__447__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__447__distance))) {
            vlSelf->__Vfunc_shift_jam27__447__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__447__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__447__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__447__value, (IData)(vlSelf->__Vfunc_shift_jam27__447__distance)));
            vlSelf->__Vfunc_shift_jam27__447__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__447__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__447__distance)))));
            vlSelf->__Vfunc_shift_jam27__447__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__447__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__447__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__447__discarded))));
        }
        __Vfunc_round_pack32__446__shifted = vlSelf->__Vfunc_shift_jam27__447__Vfuncout;
    }
    __Vfunc_round_pack32__446__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__446__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__446__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__446__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__446__rounded)) {
        __Vfunc_round_pack32__446__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__446__rounded, 1U));
        __Vfunc_round_pack32__446__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__446__adjusted)));
    }
    __Vfunc_round_pack32__446__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__446__rounded)) {
        __Vfunc_round_pack32__446__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__446__adjusted)));
    }
    __Vfunc_round_pack32__446__Vfuncout = (((0U == __Vfunc_round_pack32__446__significand) 
                                            | (0U == __Vfunc_round_pack32__446__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__446__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__446__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__446__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__446__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__446__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__446__Vfuncout;
    __Vfunc_round_pack32__440__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__440__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__440__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__440__adjusted = __Vfunc_round_pack32__440__exponent;
    __Vfunc_round_pack32__440__shifted = __Vfunc_round_pack32__440__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__440__exponent))) {
        vlSelf->__Vfunc_shift_jam27__441__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__440__exponent)));
        vlSelf->__Vfunc_shift_jam27__441__value = __Vfunc_round_pack32__440__significand;
        __Vfunc_round_pack32__440__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__441__distance))) {
            vlSelf->__Vfunc_shift_jam27__441__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__441__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__441__distance))) {
            vlSelf->__Vfunc_shift_jam27__441__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__441__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__441__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__441__value, (IData)(vlSelf->__Vfunc_shift_jam27__441__distance)));
            vlSelf->__Vfunc_shift_jam27__441__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__441__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__441__distance)))));
            vlSelf->__Vfunc_shift_jam27__441__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__441__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__441__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__441__discarded))));
        }
        __Vfunc_round_pack32__440__shifted = vlSelf->__Vfunc_shift_jam27__441__Vfuncout;
    }
    __Vfunc_round_pack32__440__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__440__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__440__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__440__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__440__rounded)) {
        __Vfunc_round_pack32__440__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__440__rounded, 1U));
        __Vfunc_round_pack32__440__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__440__adjusted)));
    }
    __Vfunc_round_pack32__440__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__440__rounded)) {
        __Vfunc_round_pack32__440__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__440__adjusted)));
    }
    __Vfunc_round_pack32__440__Vfuncout = (((0U == __Vfunc_round_pack32__440__significand) 
                                            | (0U == __Vfunc_round_pack32__440__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__440__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__440__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__440__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__440__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__440__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__440__Vfuncout;
    __Vfunc_round_pack32__434__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__434__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__434__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__434__adjusted = __Vfunc_round_pack32__434__exponent;
    __Vfunc_round_pack32__434__shifted = __Vfunc_round_pack32__434__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__434__exponent))) {
        vlSelf->__Vfunc_shift_jam27__435__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__434__exponent)));
        vlSelf->__Vfunc_shift_jam27__435__value = __Vfunc_round_pack32__434__significand;
        __Vfunc_round_pack32__434__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__435__distance))) {
            vlSelf->__Vfunc_shift_jam27__435__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__435__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__435__distance))) {
            vlSelf->__Vfunc_shift_jam27__435__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__435__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__435__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__435__value, (IData)(vlSelf->__Vfunc_shift_jam27__435__distance)));
            vlSelf->__Vfunc_shift_jam27__435__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__435__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__435__distance)))));
            vlSelf->__Vfunc_shift_jam27__435__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__435__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__435__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__435__discarded))));
        }
        __Vfunc_round_pack32__434__shifted = vlSelf->__Vfunc_shift_jam27__435__Vfuncout;
    }
    __Vfunc_round_pack32__434__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__434__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__434__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__434__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__434__rounded)) {
        __Vfunc_round_pack32__434__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__434__rounded, 1U));
        __Vfunc_round_pack32__434__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__434__adjusted)));
    }
    __Vfunc_round_pack32__434__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__434__rounded)) {
        __Vfunc_round_pack32__434__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__434__adjusted)));
    }
    __Vfunc_round_pack32__434__Vfuncout = (((0U == __Vfunc_round_pack32__434__significand) 
                                            | (0U == __Vfunc_round_pack32__434__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__434__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__434__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__434__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__434__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__434__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__434__Vfuncout;
    __Vfunc_round_pack32__428__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__428__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__428__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__428__adjusted = __Vfunc_round_pack32__428__exponent;
    __Vfunc_round_pack32__428__shifted = __Vfunc_round_pack32__428__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__428__exponent))) {
        vlSelf->__Vfunc_shift_jam27__429__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__428__exponent)));
        vlSelf->__Vfunc_shift_jam27__429__value = __Vfunc_round_pack32__428__significand;
        __Vfunc_round_pack32__428__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__429__distance))) {
            vlSelf->__Vfunc_shift_jam27__429__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__429__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__429__distance))) {
            vlSelf->__Vfunc_shift_jam27__429__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__429__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__429__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__429__value, (IData)(vlSelf->__Vfunc_shift_jam27__429__distance)));
            vlSelf->__Vfunc_shift_jam27__429__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__429__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__429__distance)))));
            vlSelf->__Vfunc_shift_jam27__429__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__429__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__429__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__429__discarded))));
        }
        __Vfunc_round_pack32__428__shifted = vlSelf->__Vfunc_shift_jam27__429__Vfuncout;
    }
    __Vfunc_round_pack32__428__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__428__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__428__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__428__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__428__rounded)) {
        __Vfunc_round_pack32__428__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__428__rounded, 1U));
        __Vfunc_round_pack32__428__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__428__adjusted)));
    }
    __Vfunc_round_pack32__428__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__428__rounded)) {
        __Vfunc_round_pack32__428__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__428__adjusted)));
    }
    __Vfunc_round_pack32__428__Vfuncout = (((0U == __Vfunc_round_pack32__428__significand) 
                                            | (0U == __Vfunc_round_pack32__428__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__428__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__428__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__428__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__428__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__428__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__428__Vfuncout;
    __Vfunc_round_pack32__422__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__422__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__422__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__422__adjusted = __Vfunc_round_pack32__422__exponent;
    __Vfunc_round_pack32__422__shifted = __Vfunc_round_pack32__422__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__422__exponent))) {
        vlSelf->__Vfunc_shift_jam27__423__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__422__exponent)));
        vlSelf->__Vfunc_shift_jam27__423__value = __Vfunc_round_pack32__422__significand;
        __Vfunc_round_pack32__422__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__423__distance))) {
            vlSelf->__Vfunc_shift_jam27__423__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__423__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__423__distance))) {
            vlSelf->__Vfunc_shift_jam27__423__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__423__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__423__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__423__value, (IData)(vlSelf->__Vfunc_shift_jam27__423__distance)));
            vlSelf->__Vfunc_shift_jam27__423__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__423__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__423__distance)))));
            vlSelf->__Vfunc_shift_jam27__423__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__423__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__423__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__423__discarded))));
        }
        __Vfunc_round_pack32__422__shifted = vlSelf->__Vfunc_shift_jam27__423__Vfuncout;
    }
    __Vfunc_round_pack32__422__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__422__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__422__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__422__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__422__rounded)) {
        __Vfunc_round_pack32__422__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__422__rounded, 1U));
        __Vfunc_round_pack32__422__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__422__adjusted)));
    }
    __Vfunc_round_pack32__422__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__422__rounded)) {
        __Vfunc_round_pack32__422__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__422__adjusted)));
    }
    __Vfunc_round_pack32__422__Vfuncout = (((0U == __Vfunc_round_pack32__422__significand) 
                                            | (0U == __Vfunc_round_pack32__422__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__422__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__422__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__422__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__422__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__422__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__422__Vfuncout;
    __Vfunc_round_pack32__416__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__416__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__416__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__416__adjusted = __Vfunc_round_pack32__416__exponent;
    __Vfunc_round_pack32__416__shifted = __Vfunc_round_pack32__416__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__416__exponent))) {
        vlSelf->__Vfunc_shift_jam27__417__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__416__exponent)));
        vlSelf->__Vfunc_shift_jam27__417__value = __Vfunc_round_pack32__416__significand;
        __Vfunc_round_pack32__416__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__417__distance))) {
            vlSelf->__Vfunc_shift_jam27__417__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__417__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__417__distance))) {
            vlSelf->__Vfunc_shift_jam27__417__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__417__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__417__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__417__value, (IData)(vlSelf->__Vfunc_shift_jam27__417__distance)));
            vlSelf->__Vfunc_shift_jam27__417__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__417__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__417__distance)))));
            vlSelf->__Vfunc_shift_jam27__417__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__417__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__417__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__417__discarded))));
        }
        __Vfunc_round_pack32__416__shifted = vlSelf->__Vfunc_shift_jam27__417__Vfuncout;
    }
    __Vfunc_round_pack32__416__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__416__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__416__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__416__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__416__rounded)) {
        __Vfunc_round_pack32__416__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__416__rounded, 1U));
        __Vfunc_round_pack32__416__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__416__adjusted)));
    }
    __Vfunc_round_pack32__416__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__416__rounded)) {
        __Vfunc_round_pack32__416__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__416__adjusted)));
    }
    __Vfunc_round_pack32__416__Vfuncout = (((0U == __Vfunc_round_pack32__416__significand) 
                                            | (0U == __Vfunc_round_pack32__416__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__416__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__416__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__416__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__416__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__416__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__416__Vfuncout;
    __Vfunc_round_pack32__410__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__410__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__410__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__410__adjusted = __Vfunc_round_pack32__410__exponent;
    __Vfunc_round_pack32__410__shifted = __Vfunc_round_pack32__410__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__410__exponent))) {
        vlSelf->__Vfunc_shift_jam27__411__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__410__exponent)));
        vlSelf->__Vfunc_shift_jam27__411__value = __Vfunc_round_pack32__410__significand;
        __Vfunc_round_pack32__410__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__411__distance))) {
            vlSelf->__Vfunc_shift_jam27__411__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__411__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__411__distance))) {
            vlSelf->__Vfunc_shift_jam27__411__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__411__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__411__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__411__value, (IData)(vlSelf->__Vfunc_shift_jam27__411__distance)));
            vlSelf->__Vfunc_shift_jam27__411__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__411__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__411__distance)))));
            vlSelf->__Vfunc_shift_jam27__411__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__411__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__411__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__411__discarded))));
        }
        __Vfunc_round_pack32__410__shifted = vlSelf->__Vfunc_shift_jam27__411__Vfuncout;
    }
    __Vfunc_round_pack32__410__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__410__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__410__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__410__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__410__rounded)) {
        __Vfunc_round_pack32__410__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__410__rounded, 1U));
        __Vfunc_round_pack32__410__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__410__adjusted)));
    }
    __Vfunc_round_pack32__410__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__410__rounded)) {
        __Vfunc_round_pack32__410__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__410__adjusted)));
    }
    __Vfunc_round_pack32__410__Vfuncout = (((0U == __Vfunc_round_pack32__410__significand) 
                                            | (0U == __Vfunc_round_pack32__410__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__410__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__410__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__410__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__410__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__410__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__410__Vfuncout;
    __Vfunc_round_pack32__404__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__404__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__404__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__404__adjusted = __Vfunc_round_pack32__404__exponent;
    __Vfunc_round_pack32__404__shifted = __Vfunc_round_pack32__404__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__404__exponent))) {
        vlSelf->__Vfunc_shift_jam27__405__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__404__exponent)));
        vlSelf->__Vfunc_shift_jam27__405__value = __Vfunc_round_pack32__404__significand;
        __Vfunc_round_pack32__404__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__405__distance))) {
            vlSelf->__Vfunc_shift_jam27__405__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__405__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__405__distance))) {
            vlSelf->__Vfunc_shift_jam27__405__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__405__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__405__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__405__value, (IData)(vlSelf->__Vfunc_shift_jam27__405__distance)));
            vlSelf->__Vfunc_shift_jam27__405__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__405__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__405__distance)))));
            vlSelf->__Vfunc_shift_jam27__405__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__405__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__405__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__405__discarded))));
        }
        __Vfunc_round_pack32__404__shifted = vlSelf->__Vfunc_shift_jam27__405__Vfuncout;
    }
    __Vfunc_round_pack32__404__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__404__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__404__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__404__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__404__rounded)) {
        __Vfunc_round_pack32__404__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__404__rounded, 1U));
        __Vfunc_round_pack32__404__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__404__adjusted)));
    }
    __Vfunc_round_pack32__404__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__404__rounded)) {
        __Vfunc_round_pack32__404__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__404__adjusted)));
    }
    __Vfunc_round_pack32__404__Vfuncout = (((0U == __Vfunc_round_pack32__404__significand) 
                                            | (0U == __Vfunc_round_pack32__404__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__404__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__404__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__404__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__404__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__404__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__404__Vfuncout;
    __Vfunc_round_pack32__398__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__398__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__398__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__398__adjusted = __Vfunc_round_pack32__398__exponent;
    __Vfunc_round_pack32__398__shifted = __Vfunc_round_pack32__398__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__398__exponent))) {
        vlSelf->__Vfunc_shift_jam27__399__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__398__exponent)));
        vlSelf->__Vfunc_shift_jam27__399__value = __Vfunc_round_pack32__398__significand;
        __Vfunc_round_pack32__398__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__399__distance))) {
            vlSelf->__Vfunc_shift_jam27__399__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__399__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__399__distance))) {
            vlSelf->__Vfunc_shift_jam27__399__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__399__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__399__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__399__value, (IData)(vlSelf->__Vfunc_shift_jam27__399__distance)));
            vlSelf->__Vfunc_shift_jam27__399__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__399__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__399__distance)))));
            vlSelf->__Vfunc_shift_jam27__399__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__399__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__399__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__399__discarded))));
        }
        __Vfunc_round_pack32__398__shifted = vlSelf->__Vfunc_shift_jam27__399__Vfuncout;
    }
    __Vfunc_round_pack32__398__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__398__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__398__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__398__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__398__rounded)) {
        __Vfunc_round_pack32__398__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__398__rounded, 1U));
        __Vfunc_round_pack32__398__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__398__adjusted)));
    }
    __Vfunc_round_pack32__398__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__398__rounded)) {
        __Vfunc_round_pack32__398__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__398__adjusted)));
    }
    __Vfunc_round_pack32__398__Vfuncout = (((0U == __Vfunc_round_pack32__398__significand) 
                                            | (0U == __Vfunc_round_pack32__398__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__398__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__398__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__398__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__398__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__398__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__398__Vfuncout;
    __Vfunc_round_pack32__392__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__392__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__392__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__392__adjusted = __Vfunc_round_pack32__392__exponent;
    __Vfunc_round_pack32__392__shifted = __Vfunc_round_pack32__392__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__392__exponent))) {
        vlSelf->__Vfunc_shift_jam27__393__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__392__exponent)));
        vlSelf->__Vfunc_shift_jam27__393__value = __Vfunc_round_pack32__392__significand;
        __Vfunc_round_pack32__392__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__393__distance))) {
            vlSelf->__Vfunc_shift_jam27__393__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__393__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__393__distance))) {
            vlSelf->__Vfunc_shift_jam27__393__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__393__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__393__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__393__value, (IData)(vlSelf->__Vfunc_shift_jam27__393__distance)));
            vlSelf->__Vfunc_shift_jam27__393__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__393__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__393__distance)))));
            vlSelf->__Vfunc_shift_jam27__393__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__393__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__393__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__393__discarded))));
        }
        __Vfunc_round_pack32__392__shifted = vlSelf->__Vfunc_shift_jam27__393__Vfuncout;
    }
    __Vfunc_round_pack32__392__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__392__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__392__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__392__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__392__rounded)) {
        __Vfunc_round_pack32__392__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__392__rounded, 1U));
        __Vfunc_round_pack32__392__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__392__adjusted)));
    }
    __Vfunc_round_pack32__392__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__392__rounded)) {
        __Vfunc_round_pack32__392__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__392__adjusted)));
    }
    __Vfunc_round_pack32__392__Vfuncout = (((0U == __Vfunc_round_pack32__392__significand) 
                                            | (0U == __Vfunc_round_pack32__392__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__392__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__392__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__392__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__392__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__392__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__392__Vfuncout;
    __Vfunc_round_pack32__386__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__386__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__386__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__386__adjusted = __Vfunc_round_pack32__386__exponent;
    __Vfunc_round_pack32__386__shifted = __Vfunc_round_pack32__386__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__386__exponent))) {
        vlSelf->__Vfunc_shift_jam27__387__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__386__exponent)));
        vlSelf->__Vfunc_shift_jam27__387__value = __Vfunc_round_pack32__386__significand;
        __Vfunc_round_pack32__386__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__387__distance))) {
            vlSelf->__Vfunc_shift_jam27__387__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__387__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__387__distance))) {
            vlSelf->__Vfunc_shift_jam27__387__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__387__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__387__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__387__value, (IData)(vlSelf->__Vfunc_shift_jam27__387__distance)));
            vlSelf->__Vfunc_shift_jam27__387__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__387__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__387__distance)))));
            vlSelf->__Vfunc_shift_jam27__387__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__387__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__387__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__387__discarded))));
        }
        __Vfunc_round_pack32__386__shifted = vlSelf->__Vfunc_shift_jam27__387__Vfuncout;
    }
    __Vfunc_round_pack32__386__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__386__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__386__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__386__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__386__rounded)) {
        __Vfunc_round_pack32__386__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__386__rounded, 1U));
        __Vfunc_round_pack32__386__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__386__adjusted)));
    }
    __Vfunc_round_pack32__386__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__386__rounded)) {
        __Vfunc_round_pack32__386__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__386__adjusted)));
    }
    __Vfunc_round_pack32__386__Vfuncout = (((0U == __Vfunc_round_pack32__386__significand) 
                                            | (0U == __Vfunc_round_pack32__386__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__386__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__386__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__386__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__386__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__386__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__386__Vfuncout;
    __Vfunc_round_pack32__380__significand = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__380__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__exponent3;
    __Vfunc_round_pack32__380__negative = (1U & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__negative) 
                                                 >> 2U));
    __Vfunc_round_pack32__380__adjusted = __Vfunc_round_pack32__380__exponent;
    __Vfunc_round_pack32__380__shifted = __Vfunc_round_pack32__380__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__380__exponent))) {
        vlSelf->__Vfunc_shift_jam27__381__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__380__exponent)));
        vlSelf->__Vfunc_shift_jam27__381__value = __Vfunc_round_pack32__380__significand;
        __Vfunc_round_pack32__380__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__381__distance))) {
            vlSelf->__Vfunc_shift_jam27__381__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__381__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__381__distance))) {
            vlSelf->__Vfunc_shift_jam27__381__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__381__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__381__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__381__value, (IData)(vlSelf->__Vfunc_shift_jam27__381__distance)));
            vlSelf->__Vfunc_shift_jam27__381__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__381__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__381__distance)))));
            vlSelf->__Vfunc_shift_jam27__381__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__381__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__381__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__381__discarded))));
        }
        __Vfunc_round_pack32__380__shifted = vlSelf->__Vfunc_shift_jam27__381__Vfuncout;
    }
    __Vfunc_round_pack32__380__rounded = (0x1ffffffU 
                                          & ((0xffffffU 
                                              & (__Vfunc_round_pack32__380__shifted 
                                                 >> 3U)) 
                                             + (1U 
                                                & ((__Vfunc_round_pack32__380__shifted 
                                                    >> 2U) 
                                                   & (IData)(
                                                             (0U 
                                                              != 
                                                              (0xbU 
                                                               & __Vfunc_round_pack32__380__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__380__rounded)) {
        __Vfunc_round_pack32__380__rounded = (0x1ffffffU 
                                              & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__380__rounded, 1U));
        __Vfunc_round_pack32__380__adjusted = (0xfffU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_round_pack32__380__adjusted)));
    }
    __Vfunc_round_pack32__380__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__380__rounded)) {
        __Vfunc_round_pack32__380__biased = (0xffU 
                                             & ((IData)(0x7fU) 
                                                + (IData)(__Vfunc_round_pack32__380__adjusted)));
    }
    __Vfunc_round_pack32__380__Vfuncout = (((0U == __Vfunc_round_pack32__380__significand) 
                                            | (0U == __Vfunc_round_pack32__380__rounded))
                                            ? ((QData)((IData)(__Vfunc_round_pack32__380__negative)) 
                                               << 0x1fU)
                                            : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__380__adjusted))
                                                ? 0x100000000ULL
                                                : (
                                                   ((QData)((IData)(__Vfunc_round_pack32__380__negative)) 
                                                    << 0x1fU) 
                                                   | (QData)((IData)(
                                                                     (((IData)(__Vfunc_round_pack32__380__biased) 
                                                                       << 0x17U) 
                                                                      | (0x7fffffU 
                                                                         & __Vfunc_round_pack32__380__rounded)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__packed4 
        = __Vfunc_round_pack32__380__Vfuncout;
    vlSelf->__Vfunc_round_pack32__374__significand 
        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__significand3;
    __Vfunc_round_pack32__374__exponent = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__exponent3;
    vlSelf->__Vfunc_round_pack32__374__negative = (1U 
                                                   & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__negative) 
                                                      >> 2U));
    vlSelf->__Vfunc_round_pack32__374__adjusted = __Vfunc_round_pack32__374__exponent;
    vlSelf->__Vfunc_round_pack32__374__shifted = vlSelf->__Vfunc_round_pack32__374__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__374__exponent))) {
        vlSelf->__Vfunc_shift_jam27__375__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__374__exponent)));
        vlSelf->__Vfunc_shift_jam27__375__value = vlSelf->__Vfunc_round_pack32__374__significand;
        vlSelf->__Vfunc_round_pack32__374__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__375__distance))) {
            vlSelf->__Vfunc_shift_jam27__375__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__375__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__375__distance))) {
            vlSelf->__Vfunc_shift_jam27__375__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__375__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__375__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__375__value, (IData)(vlSelf->__Vfunc_shift_jam27__375__distance)));
            vlSelf->__Vfunc_shift_jam27__375__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__375__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__375__distance)))));
            vlSelf->__Vfunc_shift_jam27__375__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__375__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__375__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__375__discarded))));
        }
        vlSelf->__Vfunc_round_pack32__374__shifted 
            = vlSelf->__Vfunc_shift_jam27__375__Vfuncout;
    }
}
