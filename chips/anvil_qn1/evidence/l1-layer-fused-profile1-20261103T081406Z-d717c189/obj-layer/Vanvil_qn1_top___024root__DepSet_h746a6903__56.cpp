// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vanvil_qn1_top.h for the primary calling header

#include "Vanvil_qn1_top__pch.h"
#include "Vanvil_qn1_top___024root.h"

VL_INLINE_OPT void Vanvil_qn1_top___024root___nba_sequent__TOP__49(Vanvil_qn1_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vanvil_qn1_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vanvil_qn1_top___024root___nba_sequent__TOP__49\n"); );
    // Init
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__1566__Vfuncout;
    __Vfunc_unsigned32_to_fp32__1566__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__1566__value;
    __Vfunc_unsigned32_to_fp32__1566__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__1566__shift;
    __Vfunc_unsigned32_to_fp32__1566__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__1566__normalized;
    __Vfunc_unsigned32_to_fp32__1566__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__1566__packed_value;
    __Vfunc_unsigned32_to_fp32__1566__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__1567__Vfuncout;
    __Vfunc_leading_zero32__1567__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__1567__value;
    __Vfunc_leading_zero32__1567__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__1567__part;
    __Vfunc_leading_zero32__1567__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__1567__count;
    __Vfunc_leading_zero32__1567__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__1568__Vfuncout;
    __Vfunc_round_pack32__1568__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1568__exponent;
    __Vfunc_round_pack32__1568__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1568__significand;
    __Vfunc_round_pack32__1568__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1568__shifted;
    __Vfunc_round_pack32__1568__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__1568__rounded;
    __Vfunc_round_pack32__1568__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1568__adjusted;
    __Vfunc_round_pack32__1568__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__1568__biased;
    __Vfunc_round_pack32__1568__biased = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__1570__Vfuncout;
    __Vfunc_unsigned32_to_fp32__1570__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__1570__value;
    __Vfunc_unsigned32_to_fp32__1570__value = 0;
    CData/*5:0*/ __Vfunc_unsigned32_to_fp32__1570__shift;
    __Vfunc_unsigned32_to_fp32__1570__shift = 0;
    IData/*31:0*/ __Vfunc_unsigned32_to_fp32__1570__normalized;
    __Vfunc_unsigned32_to_fp32__1570__normalized = 0;
    QData/*32:0*/ __Vfunc_unsigned32_to_fp32__1570__packed_value;
    __Vfunc_unsigned32_to_fp32__1570__packed_value = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__1571__Vfuncout;
    __Vfunc_leading_zero32__1571__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__1571__value;
    __Vfunc_leading_zero32__1571__value = 0;
    IData/*31:0*/ __Vfunc_leading_zero32__1571__part;
    __Vfunc_leading_zero32__1571__part = 0;
    CData/*5:0*/ __Vfunc_leading_zero32__1571__count;
    __Vfunc_leading_zero32__1571__count = 0;
    QData/*32:0*/ __Vfunc_round_pack32__1572__Vfuncout;
    __Vfunc_round_pack32__1572__Vfuncout = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1572__exponent;
    __Vfunc_round_pack32__1572__exponent = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1572__significand;
    __Vfunc_round_pack32__1572__significand = 0;
    IData/*26:0*/ __Vfunc_round_pack32__1572__shifted;
    __Vfunc_round_pack32__1572__shifted = 0;
    IData/*24:0*/ __Vfunc_round_pack32__1572__rounded;
    __Vfunc_round_pack32__1572__rounded = 0;
    SData/*11:0*/ __Vfunc_round_pack32__1572__adjusted;
    __Vfunc_round_pack32__1572__adjusted = 0;
    CData/*7:0*/ __Vfunc_round_pack32__1572__biased;
    __Vfunc_round_pack32__1572__biased = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1587__Vfuncout;
    __Vfunc_awq_lane_shift__1587__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1587__lane;
    __Vfunc_awq_lane_shift__1587__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1588__Vfuncout;
    __Vfunc_awq_lane_shift__1588__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1588__lane;
    __Vfunc_awq_lane_shift__1588__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1589__Vfuncout;
    __Vfunc_awq_lane_shift__1589__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1589__lane;
    __Vfunc_awq_lane_shift__1589__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1590__Vfuncout;
    __Vfunc_awq_lane_shift__1590__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1590__lane;
    __Vfunc_awq_lane_shift__1590__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1591__Vfuncout;
    __Vfunc_awq_lane_shift__1591__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1591__lane;
    __Vfunc_awq_lane_shift__1591__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1592__Vfuncout;
    __Vfunc_awq_lane_shift__1592__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1592__lane;
    __Vfunc_awq_lane_shift__1592__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1593__Vfuncout;
    __Vfunc_awq_lane_shift__1593__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1593__lane;
    __Vfunc_awq_lane_shift__1593__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1594__Vfuncout;
    __Vfunc_awq_lane_shift__1594__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1594__lane;
    __Vfunc_awq_lane_shift__1594__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1595__Vfuncout;
    __Vfunc_awq_lane_shift__1595__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1595__lane;
    __Vfunc_awq_lane_shift__1595__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1596__Vfuncout;
    __Vfunc_awq_lane_shift__1596__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1596__lane;
    __Vfunc_awq_lane_shift__1596__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1597__Vfuncout;
    __Vfunc_awq_lane_shift__1597__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1597__lane;
    __Vfunc_awq_lane_shift__1597__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1598__Vfuncout;
    __Vfunc_awq_lane_shift__1598__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1598__lane;
    __Vfunc_awq_lane_shift__1598__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1599__Vfuncout;
    __Vfunc_awq_lane_shift__1599__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1599__lane;
    __Vfunc_awq_lane_shift__1599__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1600__Vfuncout;
    __Vfunc_awq_lane_shift__1600__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1600__lane;
    __Vfunc_awq_lane_shift__1600__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1601__Vfuncout;
    __Vfunc_awq_lane_shift__1601__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1601__lane;
    __Vfunc_awq_lane_shift__1601__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1602__Vfuncout;
    __Vfunc_awq_lane_shift__1602__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1602__lane;
    __Vfunc_awq_lane_shift__1602__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1603__Vfuncout;
    __Vfunc_awq_lane_shift__1603__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1603__lane;
    __Vfunc_awq_lane_shift__1603__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1604__Vfuncout;
    __Vfunc_awq_lane_shift__1604__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1604__lane;
    __Vfunc_awq_lane_shift__1604__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1605__Vfuncout;
    __Vfunc_awq_lane_shift__1605__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1605__lane;
    __Vfunc_awq_lane_shift__1605__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1606__Vfuncout;
    __Vfunc_awq_lane_shift__1606__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1606__lane;
    __Vfunc_awq_lane_shift__1606__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1607__Vfuncout;
    __Vfunc_awq_lane_shift__1607__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1607__lane;
    __Vfunc_awq_lane_shift__1607__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1608__Vfuncout;
    __Vfunc_awq_lane_shift__1608__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1608__lane;
    __Vfunc_awq_lane_shift__1608__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1609__Vfuncout;
    __Vfunc_awq_lane_shift__1609__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1609__lane;
    __Vfunc_awq_lane_shift__1609__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1610__Vfuncout;
    __Vfunc_awq_lane_shift__1610__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1610__lane;
    __Vfunc_awq_lane_shift__1610__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1611__Vfuncout;
    __Vfunc_awq_lane_shift__1611__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1611__lane;
    __Vfunc_awq_lane_shift__1611__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1612__Vfuncout;
    __Vfunc_awq_lane_shift__1612__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1612__lane;
    __Vfunc_awq_lane_shift__1612__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1613__Vfuncout;
    __Vfunc_awq_lane_shift__1613__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1613__lane;
    __Vfunc_awq_lane_shift__1613__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1614__Vfuncout;
    __Vfunc_awq_lane_shift__1614__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1614__lane;
    __Vfunc_awq_lane_shift__1614__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1615__Vfuncout;
    __Vfunc_awq_lane_shift__1615__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1615__lane;
    __Vfunc_awq_lane_shift__1615__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1616__Vfuncout;
    __Vfunc_awq_lane_shift__1616__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1616__lane;
    __Vfunc_awq_lane_shift__1616__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1617__Vfuncout;
    __Vfunc_awq_lane_shift__1617__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1617__lane;
    __Vfunc_awq_lane_shift__1617__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1618__Vfuncout;
    __Vfunc_awq_lane_shift__1618__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1618__lane;
    __Vfunc_awq_lane_shift__1618__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1619__Vfuncout;
    __Vfunc_awq_lane_shift__1619__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1619__lane;
    __Vfunc_awq_lane_shift__1619__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1620__Vfuncout;
    __Vfunc_awq_lane_shift__1620__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1620__lane;
    __Vfunc_awq_lane_shift__1620__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1621__Vfuncout;
    __Vfunc_awq_lane_shift__1621__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1621__lane;
    __Vfunc_awq_lane_shift__1621__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1622__Vfuncout;
    __Vfunc_awq_lane_shift__1622__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1622__lane;
    __Vfunc_awq_lane_shift__1622__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1623__Vfuncout;
    __Vfunc_awq_lane_shift__1623__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1623__lane;
    __Vfunc_awq_lane_shift__1623__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1624__Vfuncout;
    __Vfunc_awq_lane_shift__1624__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1624__lane;
    __Vfunc_awq_lane_shift__1624__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1625__Vfuncout;
    __Vfunc_awq_lane_shift__1625__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1625__lane;
    __Vfunc_awq_lane_shift__1625__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1626__Vfuncout;
    __Vfunc_awq_lane_shift__1626__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1626__lane;
    __Vfunc_awq_lane_shift__1626__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1627__Vfuncout;
    __Vfunc_awq_lane_shift__1627__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1627__lane;
    __Vfunc_awq_lane_shift__1627__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1628__Vfuncout;
    __Vfunc_awq_lane_shift__1628__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1628__lane;
    __Vfunc_awq_lane_shift__1628__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1629__Vfuncout;
    __Vfunc_awq_lane_shift__1629__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1629__lane;
    __Vfunc_awq_lane_shift__1629__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1630__Vfuncout;
    __Vfunc_awq_lane_shift__1630__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1630__lane;
    __Vfunc_awq_lane_shift__1630__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1631__Vfuncout;
    __Vfunc_awq_lane_shift__1631__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1631__lane;
    __Vfunc_awq_lane_shift__1631__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1632__Vfuncout;
    __Vfunc_awq_lane_shift__1632__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1632__lane;
    __Vfunc_awq_lane_shift__1632__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1633__Vfuncout;
    __Vfunc_awq_lane_shift__1633__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1633__lane;
    __Vfunc_awq_lane_shift__1633__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1634__Vfuncout;
    __Vfunc_awq_lane_shift__1634__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1634__lane;
    __Vfunc_awq_lane_shift__1634__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1635__Vfuncout;
    __Vfunc_awq_lane_shift__1635__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1635__lane;
    __Vfunc_awq_lane_shift__1635__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1636__Vfuncout;
    __Vfunc_awq_lane_shift__1636__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1636__lane;
    __Vfunc_awq_lane_shift__1636__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1637__Vfuncout;
    __Vfunc_awq_lane_shift__1637__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1637__lane;
    __Vfunc_awq_lane_shift__1637__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1638__Vfuncout;
    __Vfunc_awq_lane_shift__1638__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1638__lane;
    __Vfunc_awq_lane_shift__1638__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1639__Vfuncout;
    __Vfunc_awq_lane_shift__1639__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1639__lane;
    __Vfunc_awq_lane_shift__1639__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1640__Vfuncout;
    __Vfunc_awq_lane_shift__1640__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1640__lane;
    __Vfunc_awq_lane_shift__1640__lane = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1641__lane;
    __Vfunc_awq_lane_shift__1641__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1642__Vfuncout;
    __Vfunc_awq_lane_shift__1642__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1642__lane;
    __Vfunc_awq_lane_shift__1642__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1643__Vfuncout;
    __Vfunc_awq_lane_shift__1643__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1643__lane;
    __Vfunc_awq_lane_shift__1643__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1644__Vfuncout;
    __Vfunc_awq_lane_shift__1644__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1644__lane;
    __Vfunc_awq_lane_shift__1644__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1645__Vfuncout;
    __Vfunc_awq_lane_shift__1645__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1645__lane;
    __Vfunc_awq_lane_shift__1645__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1646__Vfuncout;
    __Vfunc_awq_lane_shift__1646__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1646__lane;
    __Vfunc_awq_lane_shift__1646__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1647__Vfuncout;
    __Vfunc_awq_lane_shift__1647__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1647__lane;
    __Vfunc_awq_lane_shift__1647__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1648__Vfuncout;
    __Vfunc_awq_lane_shift__1648__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1648__lane;
    __Vfunc_awq_lane_shift__1648__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1649__Vfuncout;
    __Vfunc_awq_lane_shift__1649__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1649__lane;
    __Vfunc_awq_lane_shift__1649__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1650__Vfuncout;
    __Vfunc_awq_lane_shift__1650__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1650__lane;
    __Vfunc_awq_lane_shift__1650__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1651__Vfuncout;
    __Vfunc_awq_lane_shift__1651__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1651__lane;
    __Vfunc_awq_lane_shift__1651__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1652__Vfuncout;
    __Vfunc_awq_lane_shift__1652__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1652__lane;
    __Vfunc_awq_lane_shift__1652__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1653__Vfuncout;
    __Vfunc_awq_lane_shift__1653__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1653__lane;
    __Vfunc_awq_lane_shift__1653__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1654__Vfuncout;
    __Vfunc_awq_lane_shift__1654__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1654__lane;
    __Vfunc_awq_lane_shift__1654__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1655__Vfuncout;
    __Vfunc_awq_lane_shift__1655__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1655__lane;
    __Vfunc_awq_lane_shift__1655__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1656__Vfuncout;
    __Vfunc_awq_lane_shift__1656__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1656__lane;
    __Vfunc_awq_lane_shift__1656__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1657__Vfuncout;
    __Vfunc_awq_lane_shift__1657__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1657__lane;
    __Vfunc_awq_lane_shift__1657__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1658__Vfuncout;
    __Vfunc_awq_lane_shift__1658__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1658__lane;
    __Vfunc_awq_lane_shift__1658__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1659__Vfuncout;
    __Vfunc_awq_lane_shift__1659__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1659__lane;
    __Vfunc_awq_lane_shift__1659__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1660__Vfuncout;
    __Vfunc_awq_lane_shift__1660__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1660__lane;
    __Vfunc_awq_lane_shift__1660__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1661__Vfuncout;
    __Vfunc_awq_lane_shift__1661__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1661__lane;
    __Vfunc_awq_lane_shift__1661__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1662__Vfuncout;
    __Vfunc_awq_lane_shift__1662__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1662__lane;
    __Vfunc_awq_lane_shift__1662__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1663__Vfuncout;
    __Vfunc_awq_lane_shift__1663__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1663__lane;
    __Vfunc_awq_lane_shift__1663__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1664__Vfuncout;
    __Vfunc_awq_lane_shift__1664__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1664__lane;
    __Vfunc_awq_lane_shift__1664__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1665__Vfuncout;
    __Vfunc_awq_lane_shift__1665__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1665__lane;
    __Vfunc_awq_lane_shift__1665__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1666__Vfuncout;
    __Vfunc_awq_lane_shift__1666__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1666__lane;
    __Vfunc_awq_lane_shift__1666__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1667__Vfuncout;
    __Vfunc_awq_lane_shift__1667__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1667__lane;
    __Vfunc_awq_lane_shift__1667__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1668__Vfuncout;
    __Vfunc_awq_lane_shift__1668__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1668__lane;
    __Vfunc_awq_lane_shift__1668__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1669__Vfuncout;
    __Vfunc_awq_lane_shift__1669__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1669__lane;
    __Vfunc_awq_lane_shift__1669__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1670__Vfuncout;
    __Vfunc_awq_lane_shift__1670__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1670__lane;
    __Vfunc_awq_lane_shift__1670__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1671__Vfuncout;
    __Vfunc_awq_lane_shift__1671__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1671__lane;
    __Vfunc_awq_lane_shift__1671__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1672__Vfuncout;
    __Vfunc_awq_lane_shift__1672__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1672__lane;
    __Vfunc_awq_lane_shift__1672__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1673__Vfuncout;
    __Vfunc_awq_lane_shift__1673__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1673__lane;
    __Vfunc_awq_lane_shift__1673__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1674__Vfuncout;
    __Vfunc_awq_lane_shift__1674__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1674__lane;
    __Vfunc_awq_lane_shift__1674__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1675__Vfuncout;
    __Vfunc_awq_lane_shift__1675__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1675__lane;
    __Vfunc_awq_lane_shift__1675__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1676__Vfuncout;
    __Vfunc_awq_lane_shift__1676__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1676__lane;
    __Vfunc_awq_lane_shift__1676__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1677__Vfuncout;
    __Vfunc_awq_lane_shift__1677__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1677__lane;
    __Vfunc_awq_lane_shift__1677__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1678__Vfuncout;
    __Vfunc_awq_lane_shift__1678__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1678__lane;
    __Vfunc_awq_lane_shift__1678__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1679__Vfuncout;
    __Vfunc_awq_lane_shift__1679__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1679__lane;
    __Vfunc_awq_lane_shift__1679__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1680__Vfuncout;
    __Vfunc_awq_lane_shift__1680__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1680__lane;
    __Vfunc_awq_lane_shift__1680__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1681__Vfuncout;
    __Vfunc_awq_lane_shift__1681__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1681__lane;
    __Vfunc_awq_lane_shift__1681__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1682__Vfuncout;
    __Vfunc_awq_lane_shift__1682__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1682__lane;
    __Vfunc_awq_lane_shift__1682__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1683__Vfuncout;
    __Vfunc_awq_lane_shift__1683__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1683__lane;
    __Vfunc_awq_lane_shift__1683__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1684__Vfuncout;
    __Vfunc_awq_lane_shift__1684__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1684__lane;
    __Vfunc_awq_lane_shift__1684__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1685__Vfuncout;
    __Vfunc_awq_lane_shift__1685__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1685__lane;
    __Vfunc_awq_lane_shift__1685__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1686__Vfuncout;
    __Vfunc_awq_lane_shift__1686__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1686__lane;
    __Vfunc_awq_lane_shift__1686__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1687__Vfuncout;
    __Vfunc_awq_lane_shift__1687__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1687__lane;
    __Vfunc_awq_lane_shift__1687__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1688__Vfuncout;
    __Vfunc_awq_lane_shift__1688__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1688__lane;
    __Vfunc_awq_lane_shift__1688__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1689__Vfuncout;
    __Vfunc_awq_lane_shift__1689__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1689__lane;
    __Vfunc_awq_lane_shift__1689__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1690__Vfuncout;
    __Vfunc_awq_lane_shift__1690__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1690__lane;
    __Vfunc_awq_lane_shift__1690__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1691__Vfuncout;
    __Vfunc_awq_lane_shift__1691__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1691__lane;
    __Vfunc_awq_lane_shift__1691__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1692__Vfuncout;
    __Vfunc_awq_lane_shift__1692__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1692__lane;
    __Vfunc_awq_lane_shift__1692__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1693__Vfuncout;
    __Vfunc_awq_lane_shift__1693__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1693__lane;
    __Vfunc_awq_lane_shift__1693__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1694__Vfuncout;
    __Vfunc_awq_lane_shift__1694__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1694__lane;
    __Vfunc_awq_lane_shift__1694__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1695__Vfuncout;
    __Vfunc_awq_lane_shift__1695__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1695__lane;
    __Vfunc_awq_lane_shift__1695__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1696__Vfuncout;
    __Vfunc_awq_lane_shift__1696__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1696__lane;
    __Vfunc_awq_lane_shift__1696__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1697__Vfuncout;
    __Vfunc_awq_lane_shift__1697__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1697__lane;
    __Vfunc_awq_lane_shift__1697__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1698__Vfuncout;
    __Vfunc_awq_lane_shift__1698__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1698__lane;
    __Vfunc_awq_lane_shift__1698__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1699__Vfuncout;
    __Vfunc_awq_lane_shift__1699__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1699__lane;
    __Vfunc_awq_lane_shift__1699__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1700__Vfuncout;
    __Vfunc_awq_lane_shift__1700__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1700__lane;
    __Vfunc_awq_lane_shift__1700__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1701__Vfuncout;
    __Vfunc_awq_lane_shift__1701__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1701__lane;
    __Vfunc_awq_lane_shift__1701__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1702__Vfuncout;
    __Vfunc_awq_lane_shift__1702__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1702__lane;
    __Vfunc_awq_lane_shift__1702__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1703__Vfuncout;
    __Vfunc_awq_lane_shift__1703__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1703__lane;
    __Vfunc_awq_lane_shift__1703__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1704__Vfuncout;
    __Vfunc_awq_lane_shift__1704__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1704__lane;
    __Vfunc_awq_lane_shift__1704__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1705__Vfuncout;
    __Vfunc_awq_lane_shift__1705__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1705__lane;
    __Vfunc_awq_lane_shift__1705__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1706__Vfuncout;
    __Vfunc_awq_lane_shift__1706__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1706__lane;
    __Vfunc_awq_lane_shift__1706__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1707__Vfuncout;
    __Vfunc_awq_lane_shift__1707__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1707__lane;
    __Vfunc_awq_lane_shift__1707__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1708__Vfuncout;
    __Vfunc_awq_lane_shift__1708__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1708__lane;
    __Vfunc_awq_lane_shift__1708__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1709__Vfuncout;
    __Vfunc_awq_lane_shift__1709__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1709__lane;
    __Vfunc_awq_lane_shift__1709__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1710__Vfuncout;
    __Vfunc_awq_lane_shift__1710__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1710__lane;
    __Vfunc_awq_lane_shift__1710__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1711__Vfuncout;
    __Vfunc_awq_lane_shift__1711__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1711__lane;
    __Vfunc_awq_lane_shift__1711__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1712__Vfuncout;
    __Vfunc_awq_lane_shift__1712__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1712__lane;
    __Vfunc_awq_lane_shift__1712__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1713__Vfuncout;
    __Vfunc_awq_lane_shift__1713__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1713__lane;
    __Vfunc_awq_lane_shift__1713__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1714__Vfuncout;
    __Vfunc_awq_lane_shift__1714__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1714__lane;
    __Vfunc_awq_lane_shift__1714__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1715__Vfuncout;
    __Vfunc_awq_lane_shift__1715__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1715__lane;
    __Vfunc_awq_lane_shift__1715__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1716__Vfuncout;
    __Vfunc_awq_lane_shift__1716__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1716__lane;
    __Vfunc_awq_lane_shift__1716__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1717__Vfuncout;
    __Vfunc_awq_lane_shift__1717__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1717__lane;
    __Vfunc_awq_lane_shift__1717__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1718__Vfuncout;
    __Vfunc_awq_lane_shift__1718__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1718__lane;
    __Vfunc_awq_lane_shift__1718__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1719__Vfuncout;
    __Vfunc_awq_lane_shift__1719__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1719__lane;
    __Vfunc_awq_lane_shift__1719__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1720__Vfuncout;
    __Vfunc_awq_lane_shift__1720__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1720__lane;
    __Vfunc_awq_lane_shift__1720__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1721__Vfuncout;
    __Vfunc_awq_lane_shift__1721__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1721__lane;
    __Vfunc_awq_lane_shift__1721__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1722__Vfuncout;
    __Vfunc_awq_lane_shift__1722__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1722__lane;
    __Vfunc_awq_lane_shift__1722__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1723__Vfuncout;
    __Vfunc_awq_lane_shift__1723__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1723__lane;
    __Vfunc_awq_lane_shift__1723__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1724__Vfuncout;
    __Vfunc_awq_lane_shift__1724__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1724__lane;
    __Vfunc_awq_lane_shift__1724__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1725__Vfuncout;
    __Vfunc_awq_lane_shift__1725__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1725__lane;
    __Vfunc_awq_lane_shift__1725__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1726__Vfuncout;
    __Vfunc_awq_lane_shift__1726__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1726__lane;
    __Vfunc_awq_lane_shift__1726__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1727__Vfuncout;
    __Vfunc_awq_lane_shift__1727__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1727__lane;
    __Vfunc_awq_lane_shift__1727__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1728__Vfuncout;
    __Vfunc_awq_lane_shift__1728__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1728__lane;
    __Vfunc_awq_lane_shift__1728__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1729__Vfuncout;
    __Vfunc_awq_lane_shift__1729__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1729__lane;
    __Vfunc_awq_lane_shift__1729__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1730__Vfuncout;
    __Vfunc_awq_lane_shift__1730__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1730__lane;
    __Vfunc_awq_lane_shift__1730__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1731__Vfuncout;
    __Vfunc_awq_lane_shift__1731__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1731__lane;
    __Vfunc_awq_lane_shift__1731__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1732__Vfuncout;
    __Vfunc_awq_lane_shift__1732__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1732__lane;
    __Vfunc_awq_lane_shift__1732__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1733__Vfuncout;
    __Vfunc_awq_lane_shift__1733__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1733__lane;
    __Vfunc_awq_lane_shift__1733__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1734__Vfuncout;
    __Vfunc_awq_lane_shift__1734__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1734__lane;
    __Vfunc_awq_lane_shift__1734__lane = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1735__lane;
    __Vfunc_awq_lane_shift__1735__lane = 0;
    CData/*4:0*/ __Vfunc_awq_lane_shift__1843__Vfuncout;
    __Vfunc_awq_lane_shift__1843__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_awq_lane_shift__1843__lane;
    __Vfunc_awq_lane_shift__1843__lane = 0;
    // Body
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__192__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__26__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__192__part 
                            = vlSelf->__Vfunc_leading_zero32__192__value;
                        vlSelf->__Vfunc_leading_zero32__192__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__192__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                            vlSelf->__Vfunc_leading_zero32__192__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__192__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__192__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__192__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__192__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__192__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__192__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__192__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__192__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__198__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__27__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__198__part 
                            = vlSelf->__Vfunc_leading_zero32__198__value;
                        vlSelf->__Vfunc_leading_zero32__198__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__198__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                            vlSelf->__Vfunc_leading_zero32__198__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__198__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__198__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__198__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__198__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__198__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__198__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__198__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__198__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__204__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__28__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__204__part 
                            = vlSelf->__Vfunc_leading_zero32__204__value;
                        vlSelf->__Vfunc_leading_zero32__204__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__204__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                            vlSelf->__Vfunc_leading_zero32__204__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__204__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__204__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__204__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__204__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__204__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__204__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__204__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__204__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__210__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__29__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__210__part 
                            = vlSelf->__Vfunc_leading_zero32__210__value;
                        vlSelf->__Vfunc_leading_zero32__210__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__210__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                            vlSelf->__Vfunc_leading_zero32__210__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__210__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__210__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__210__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__210__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__210__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__210__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__210__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__210__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__216__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__30__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__216__part 
                            = vlSelf->__Vfunc_leading_zero32__216__value;
                        vlSelf->__Vfunc_leading_zero32__216__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__216__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                            vlSelf->__Vfunc_leading_zero32__216__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__216__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__216__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__216__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__216__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__216__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__216__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__216__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__216__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__222__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__31__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__222__part 
                            = vlSelf->__Vfunc_leading_zero32__222__value;
                        vlSelf->__Vfunc_leading_zero32__222__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__222__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                            vlSelf->__Vfunc_leading_zero32__222__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__222__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__222__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__222__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__222__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__222__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__222__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__222__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__222__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__228__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__32__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__228__part 
                            = vlSelf->__Vfunc_leading_zero32__228__value;
                        vlSelf->__Vfunc_leading_zero32__228__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__228__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                            vlSelf->__Vfunc_leading_zero32__228__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__228__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__228__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__228__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__228__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__228__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__228__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__228__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__228__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__234__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__33__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__234__part 
                            = vlSelf->__Vfunc_leading_zero32__234__value;
                        vlSelf->__Vfunc_leading_zero32__234__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__234__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                            vlSelf->__Vfunc_leading_zero32__234__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__234__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__234__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__234__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__234__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__234__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__234__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__234__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__234__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__240__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__34__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__240__part 
                            = vlSelf->__Vfunc_leading_zero32__240__value;
                        vlSelf->__Vfunc_leading_zero32__240__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__240__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                            vlSelf->__Vfunc_leading_zero32__240__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__240__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__240__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__240__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__240__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__240__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__240__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__240__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__240__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__246__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__35__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__246__part 
                            = vlSelf->__Vfunc_leading_zero32__246__value;
                        vlSelf->__Vfunc_leading_zero32__246__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__246__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                            vlSelf->__Vfunc_leading_zero32__246__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__246__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__246__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__246__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__246__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__246__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__246__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__246__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__246__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__252__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__36__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__252__part 
                            = vlSelf->__Vfunc_leading_zero32__252__value;
                        vlSelf->__Vfunc_leading_zero32__252__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__252__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                            vlSelf->__Vfunc_leading_zero32__252__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__252__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__252__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__252__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__252__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__252__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__252__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__252__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__252__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__258__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__37__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__258__part 
                            = vlSelf->__Vfunc_leading_zero32__258__value;
                        vlSelf->__Vfunc_leading_zero32__258__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__258__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                            vlSelf->__Vfunc_leading_zero32__258__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__258__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__258__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__258__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__258__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__258__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__258__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__258__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__258__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__264__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__38__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__264__part 
                            = vlSelf->__Vfunc_leading_zero32__264__value;
                        vlSelf->__Vfunc_leading_zero32__264__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__264__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                            vlSelf->__Vfunc_leading_zero32__264__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__264__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__264__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__264__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__264__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__264__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__264__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__264__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__264__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__270__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__39__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__270__part 
                            = vlSelf->__Vfunc_leading_zero32__270__value;
                        vlSelf->__Vfunc_leading_zero32__270__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__270__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                            vlSelf->__Vfunc_leading_zero32__270__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__270__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__270__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__270__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__270__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__270__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__270__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__270__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__270__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__276__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__40__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__276__part 
                            = vlSelf->__Vfunc_leading_zero32__276__value;
                        vlSelf->__Vfunc_leading_zero32__276__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__276__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                            vlSelf->__Vfunc_leading_zero32__276__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__276__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__276__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__276__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__276__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__276__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__276__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__276__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__276__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__282__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__41__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__282__part 
                            = vlSelf->__Vfunc_leading_zero32__282__value;
                        vlSelf->__Vfunc_leading_zero32__282__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__282__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                            vlSelf->__Vfunc_leading_zero32__282__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__282__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__282__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__282__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__282__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__282__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__282__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__282__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__282__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__288__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__42__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__288__part 
                            = vlSelf->__Vfunc_leading_zero32__288__value;
                        vlSelf->__Vfunc_leading_zero32__288__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__288__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                            vlSelf->__Vfunc_leading_zero32__288__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__288__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__288__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__288__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__288__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__288__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__288__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__288__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__288__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__294__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__43__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__294__part 
                            = vlSelf->__Vfunc_leading_zero32__294__value;
                        vlSelf->__Vfunc_leading_zero32__294__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__294__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                            vlSelf->__Vfunc_leading_zero32__294__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__294__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__294__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__294__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__294__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__294__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__294__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__294__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__294__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__300__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__44__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__300__part 
                            = vlSelf->__Vfunc_leading_zero32__300__value;
                        vlSelf->__Vfunc_leading_zero32__300__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__300__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                            vlSelf->__Vfunc_leading_zero32__300__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__300__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__300__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__300__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__300__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__300__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__300__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__300__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__300__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__306__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__45__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__306__part 
                            = vlSelf->__Vfunc_leading_zero32__306__value;
                        vlSelf->__Vfunc_leading_zero32__306__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__306__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                            vlSelf->__Vfunc_leading_zero32__306__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__306__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__306__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__306__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__306__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__306__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__306__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__306__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__306__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__312__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__46__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__312__part 
                            = vlSelf->__Vfunc_leading_zero32__312__value;
                        vlSelf->__Vfunc_leading_zero32__312__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__312__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                            vlSelf->__Vfunc_leading_zero32__312__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__312__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__312__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__312__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__312__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__312__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__312__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__312__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__312__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__318__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__47__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__318__part 
                            = vlSelf->__Vfunc_leading_zero32__318__value;
                        vlSelf->__Vfunc_leading_zero32__318__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__318__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                            vlSelf->__Vfunc_leading_zero32__318__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__318__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__318__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__318__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__318__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__318__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__318__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__318__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__318__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__324__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__48__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__324__part 
                            = vlSelf->__Vfunc_leading_zero32__324__value;
                        vlSelf->__Vfunc_leading_zero32__324__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__324__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                            vlSelf->__Vfunc_leading_zero32__324__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__324__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__324__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__324__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__324__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__324__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__324__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__324__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__324__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__330__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__49__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__330__part 
                            = vlSelf->__Vfunc_leading_zero32__330__value;
                        vlSelf->__Vfunc_leading_zero32__330__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__330__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                            vlSelf->__Vfunc_leading_zero32__330__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__330__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__330__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__330__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__330__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__330__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__330__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__330__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__330__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__336__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__50__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__336__part 
                            = vlSelf->__Vfunc_leading_zero32__336__value;
                        vlSelf->__Vfunc_leading_zero32__336__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__336__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                            vlSelf->__Vfunc_leading_zero32__336__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__336__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__336__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__336__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__336__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__336__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__336__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__336__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__336__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__342__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__51__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__342__part 
                            = vlSelf->__Vfunc_leading_zero32__342__value;
                        vlSelf->__Vfunc_leading_zero32__342__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__342__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                            vlSelf->__Vfunc_leading_zero32__342__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__342__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__342__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__342__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__342__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__342__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__342__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__342__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__342__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__348__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__52__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__348__part 
                            = vlSelf->__Vfunc_leading_zero32__348__value;
                        vlSelf->__Vfunc_leading_zero32__348__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__348__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                            vlSelf->__Vfunc_leading_zero32__348__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__348__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__348__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__348__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__348__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__348__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__348__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__348__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__348__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__354__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__53__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__354__part 
                            = vlSelf->__Vfunc_leading_zero32__354__value;
                        vlSelf->__Vfunc_leading_zero32__354__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__354__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                            vlSelf->__Vfunc_leading_zero32__354__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__354__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__354__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__354__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__354__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__354__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__354__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__354__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__354__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__360__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__54__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__360__part 
                            = vlSelf->__Vfunc_leading_zero32__360__value;
                        vlSelf->__Vfunc_leading_zero32__360__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__360__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                            vlSelf->__Vfunc_leading_zero32__360__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__360__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__360__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__360__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__360__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__360__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__360__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__360__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__360__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__366__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__55__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__366__part 
                            = vlSelf->__Vfunc_leading_zero32__366__value;
                        vlSelf->__Vfunc_leading_zero32__366__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__366__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                            vlSelf->__Vfunc_leading_zero32__366__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__366__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__366__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__366__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__366__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__366__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__366__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__366__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__366__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__372__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__56__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__372__part 
                            = vlSelf->__Vfunc_leading_zero32__372__value;
                        vlSelf->__Vfunc_leading_zero32__372__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__372__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                            vlSelf->__Vfunc_leading_zero32__372__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__372__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__372__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__372__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__372__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__372__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__372__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__372__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__372__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__378__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__57__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__378__part 
                            = vlSelf->__Vfunc_leading_zero32__378__value;
                        vlSelf->__Vfunc_leading_zero32__378__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__378__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                            vlSelf->__Vfunc_leading_zero32__378__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__378__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__378__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__378__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__378__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__378__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__378__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__378__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__378__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__384__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__58__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__384__part 
                            = vlSelf->__Vfunc_leading_zero32__384__value;
                        vlSelf->__Vfunc_leading_zero32__384__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__384__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                            vlSelf->__Vfunc_leading_zero32__384__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__384__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__384__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__384__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__384__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__384__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__384__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__384__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__384__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__390__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__59__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__390__part 
                            = vlSelf->__Vfunc_leading_zero32__390__value;
                        vlSelf->__Vfunc_leading_zero32__390__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__390__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                            vlSelf->__Vfunc_leading_zero32__390__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__390__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__390__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__390__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__390__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__390__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__390__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__390__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__390__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__396__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__60__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__396__part 
                            = vlSelf->__Vfunc_leading_zero32__396__value;
                        vlSelf->__Vfunc_leading_zero32__396__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__396__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                            vlSelf->__Vfunc_leading_zero32__396__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__396__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__396__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__396__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__396__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__396__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__396__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__396__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__396__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__402__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__61__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__402__part 
                            = vlSelf->__Vfunc_leading_zero32__402__value;
                        vlSelf->__Vfunc_leading_zero32__402__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__402__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                            vlSelf->__Vfunc_leading_zero32__402__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__402__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__402__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__402__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__402__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__402__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__402__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__402__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__402__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__408__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__62__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__408__part 
                            = vlSelf->__Vfunc_leading_zero32__408__value;
                        vlSelf->__Vfunc_leading_zero32__408__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__408__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                            vlSelf->__Vfunc_leading_zero32__408__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__408__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__408__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__408__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__408__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__408__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__408__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__408__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__408__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__414__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__63__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__414__part 
                            = vlSelf->__Vfunc_leading_zero32__414__value;
                        vlSelf->__Vfunc_leading_zero32__414__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__414__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                            vlSelf->__Vfunc_leading_zero32__414__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__414__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__414__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__414__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__414__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__414__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__414__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__414__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__414__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__420__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__64__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__420__part 
                            = vlSelf->__Vfunc_leading_zero32__420__value;
                        vlSelf->__Vfunc_leading_zero32__420__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__420__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                            vlSelf->__Vfunc_leading_zero32__420__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__420__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__420__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__420__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__420__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__420__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__420__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__420__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__420__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__426__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__65__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__426__part 
                            = vlSelf->__Vfunc_leading_zero32__426__value;
                        vlSelf->__Vfunc_leading_zero32__426__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__426__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                            vlSelf->__Vfunc_leading_zero32__426__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__426__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__426__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__426__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__426__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__426__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__426__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__426__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__426__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__432__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__66__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__432__part 
                            = vlSelf->__Vfunc_leading_zero32__432__value;
                        vlSelf->__Vfunc_leading_zero32__432__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__432__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                            vlSelf->__Vfunc_leading_zero32__432__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__432__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__432__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__432__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__432__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__432__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__432__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__432__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__432__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__438__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__67__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__438__part 
                            = vlSelf->__Vfunc_leading_zero32__438__value;
                        vlSelf->__Vfunc_leading_zero32__438__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__438__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                            vlSelf->__Vfunc_leading_zero32__438__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__438__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__438__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__438__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__438__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__438__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__438__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__438__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__438__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__444__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__68__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__444__part 
                            = vlSelf->__Vfunc_leading_zero32__444__value;
                        vlSelf->__Vfunc_leading_zero32__444__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__444__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                            vlSelf->__Vfunc_leading_zero32__444__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__444__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__444__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__444__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__444__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__444__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__444__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__444__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__444__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__450__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__69__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__450__part 
                            = vlSelf->__Vfunc_leading_zero32__450__value;
                        vlSelf->__Vfunc_leading_zero32__450__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__450__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                            vlSelf->__Vfunc_leading_zero32__450__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__450__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__450__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__450__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__450__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__450__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__450__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__450__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__450__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__456__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__70__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__456__part 
                            = vlSelf->__Vfunc_leading_zero32__456__value;
                        vlSelf->__Vfunc_leading_zero32__456__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__456__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                            vlSelf->__Vfunc_leading_zero32__456__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__456__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__456__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__456__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__456__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__456__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__456__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__456__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__456__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__462__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__71__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__462__part 
                            = vlSelf->__Vfunc_leading_zero32__462__value;
                        vlSelf->__Vfunc_leading_zero32__462__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__462__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                            vlSelf->__Vfunc_leading_zero32__462__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__462__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__462__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__462__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__462__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__462__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__462__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__462__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__462__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__468__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__72__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__468__part 
                            = vlSelf->__Vfunc_leading_zero32__468__value;
                        vlSelf->__Vfunc_leading_zero32__468__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__468__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                            vlSelf->__Vfunc_leading_zero32__468__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__468__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__468__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__468__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__468__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__468__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__468__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__468__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__468__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__474__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__73__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__474__part 
                            = vlSelf->__Vfunc_leading_zero32__474__value;
                        vlSelf->__Vfunc_leading_zero32__474__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__474__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                            vlSelf->__Vfunc_leading_zero32__474__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__474__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__474__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__474__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__474__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__474__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__474__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__474__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__474__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__480__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__74__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__480__part 
                            = vlSelf->__Vfunc_leading_zero32__480__value;
                        vlSelf->__Vfunc_leading_zero32__480__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__480__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                            vlSelf->__Vfunc_leading_zero32__480__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__480__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__480__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__480__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__480__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__480__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__480__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__480__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__480__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__486__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__75__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__486__part 
                            = vlSelf->__Vfunc_leading_zero32__486__value;
                        vlSelf->__Vfunc_leading_zero32__486__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__486__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                            vlSelf->__Vfunc_leading_zero32__486__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__486__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__486__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__486__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__486__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__486__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__486__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__486__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__486__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__492__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__76__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__492__part 
                            = vlSelf->__Vfunc_leading_zero32__492__value;
                        vlSelf->__Vfunc_leading_zero32__492__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__492__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                            vlSelf->__Vfunc_leading_zero32__492__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__492__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__492__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__492__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__492__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__492__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__492__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__492__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__492__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__498__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__77__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__498__part 
                            = vlSelf->__Vfunc_leading_zero32__498__value;
                        vlSelf->__Vfunc_leading_zero32__498__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__498__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                            vlSelf->__Vfunc_leading_zero32__498__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__498__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__498__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__498__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__498__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__498__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__498__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__498__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__498__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__504__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__78__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__504__part 
                            = vlSelf->__Vfunc_leading_zero32__504__value;
                        vlSelf->__Vfunc_leading_zero32__504__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__504__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                            vlSelf->__Vfunc_leading_zero32__504__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__504__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__504__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__504__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__504__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__504__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__504__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__504__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__504__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__510__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__79__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__510__part 
                            = vlSelf->__Vfunc_leading_zero32__510__value;
                        vlSelf->__Vfunc_leading_zero32__510__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__510__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                            vlSelf->__Vfunc_leading_zero32__510__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__510__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__510__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__510__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__510__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__510__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__510__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__510__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__510__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__516__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__80__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__516__part 
                            = vlSelf->__Vfunc_leading_zero32__516__value;
                        vlSelf->__Vfunc_leading_zero32__516__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__516__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                            vlSelf->__Vfunc_leading_zero32__516__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__516__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__516__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__516__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__516__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__516__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__516__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__516__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__516__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__522__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__81__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__522__part 
                            = vlSelf->__Vfunc_leading_zero32__522__value;
                        vlSelf->__Vfunc_leading_zero32__522__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__522__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                            vlSelf->__Vfunc_leading_zero32__522__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__522__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__522__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__522__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__522__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__522__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__522__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__522__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__522__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__528__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__82__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__528__part 
                            = vlSelf->__Vfunc_leading_zero32__528__value;
                        vlSelf->__Vfunc_leading_zero32__528__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__528__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                            vlSelf->__Vfunc_leading_zero32__528__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__528__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__528__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__528__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__528__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__528__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__528__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__528__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__528__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__534__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__83__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__534__part 
                            = vlSelf->__Vfunc_leading_zero32__534__value;
                        vlSelf->__Vfunc_leading_zero32__534__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__534__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                            vlSelf->__Vfunc_leading_zero32__534__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__534__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__534__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__534__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__534__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__534__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__534__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__534__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__534__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__540__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__84__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__540__part 
                            = vlSelf->__Vfunc_leading_zero32__540__value;
                        vlSelf->__Vfunc_leading_zero32__540__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__540__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                            vlSelf->__Vfunc_leading_zero32__540__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__540__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__540__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__540__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__540__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__540__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__540__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__540__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__540__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__546__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__85__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__546__part 
                            = vlSelf->__Vfunc_leading_zero32__546__value;
                        vlSelf->__Vfunc_leading_zero32__546__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__546__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                            vlSelf->__Vfunc_leading_zero32__546__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__546__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__546__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__546__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__546__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__546__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__546__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__546__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__546__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__552__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__86__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__552__part 
                            = vlSelf->__Vfunc_leading_zero32__552__value;
                        vlSelf->__Vfunc_leading_zero32__552__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__552__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                            vlSelf->__Vfunc_leading_zero32__552__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__552__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__552__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__552__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__552__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__552__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__552__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__552__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__552__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__558__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__87__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__558__part 
                            = vlSelf->__Vfunc_leading_zero32__558__value;
                        vlSelf->__Vfunc_leading_zero32__558__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__558__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                            vlSelf->__Vfunc_leading_zero32__558__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__558__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__558__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__558__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__558__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__558__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__558__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__558__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__558__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__564__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__88__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__564__part 
                            = vlSelf->__Vfunc_leading_zero32__564__value;
                        vlSelf->__Vfunc_leading_zero32__564__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__564__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                            vlSelf->__Vfunc_leading_zero32__564__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__564__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__564__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__564__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__564__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__564__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__564__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__564__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__564__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__570__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__89__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__570__part 
                            = vlSelf->__Vfunc_leading_zero32__570__value;
                        vlSelf->__Vfunc_leading_zero32__570__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__570__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                            vlSelf->__Vfunc_leading_zero32__570__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__570__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__570__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__570__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__570__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__570__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__570__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__570__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__570__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__576__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__90__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__576__part 
                            = vlSelf->__Vfunc_leading_zero32__576__value;
                        vlSelf->__Vfunc_leading_zero32__576__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__576__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                            vlSelf->__Vfunc_leading_zero32__576__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__576__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__576__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__576__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__576__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__576__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__576__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__576__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__576__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__582__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__91__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__582__part 
                            = vlSelf->__Vfunc_leading_zero32__582__value;
                        vlSelf->__Vfunc_leading_zero32__582__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__582__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                            vlSelf->__Vfunc_leading_zero32__582__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__582__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__582__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__582__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__582__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__582__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__582__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__582__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__582__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__588__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__92__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__588__part 
                            = vlSelf->__Vfunc_leading_zero32__588__value;
                        vlSelf->__Vfunc_leading_zero32__588__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__588__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                            vlSelf->__Vfunc_leading_zero32__588__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__588__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__588__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__588__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__588__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__588__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__588__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__588__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__588__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__594__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__93__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__594__part 
                            = vlSelf->__Vfunc_leading_zero32__594__value;
                        vlSelf->__Vfunc_leading_zero32__594__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__594__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                            vlSelf->__Vfunc_leading_zero32__594__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__594__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__594__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__594__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__594__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__594__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__594__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__594__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__594__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__600__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__94__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__600__part 
                            = vlSelf->__Vfunc_leading_zero32__600__value;
                        vlSelf->__Vfunc_leading_zero32__600__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__600__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                            vlSelf->__Vfunc_leading_zero32__600__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__600__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__600__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__600__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__600__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__600__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__600__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__600__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__600__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__606__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__95__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__606__part 
                            = vlSelf->__Vfunc_leading_zero32__606__value;
                        vlSelf->__Vfunc_leading_zero32__606__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__606__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                            vlSelf->__Vfunc_leading_zero32__606__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__606__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__606__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__606__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__606__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__606__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__606__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__606__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__606__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__612__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__96__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__612__part 
                            = vlSelf->__Vfunc_leading_zero32__612__value;
                        vlSelf->__Vfunc_leading_zero32__612__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__612__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                            vlSelf->__Vfunc_leading_zero32__612__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__612__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__612__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__612__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__612__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__612__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__612__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__612__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__612__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__618__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__97__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__618__part 
                            = vlSelf->__Vfunc_leading_zero32__618__value;
                        vlSelf->__Vfunc_leading_zero32__618__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__618__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                            vlSelf->__Vfunc_leading_zero32__618__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__618__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__618__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__618__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__618__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__618__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__618__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__618__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__618__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__624__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__98__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__624__part 
                            = vlSelf->__Vfunc_leading_zero32__624__value;
                        vlSelf->__Vfunc_leading_zero32__624__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__624__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                            vlSelf->__Vfunc_leading_zero32__624__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__624__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__624__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__624__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__624__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__624__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__624__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__624__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__624__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__630__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__99__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__630__part 
                            = vlSelf->__Vfunc_leading_zero32__630__value;
                        vlSelf->__Vfunc_leading_zero32__630__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__630__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                            vlSelf->__Vfunc_leading_zero32__630__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__630__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__630__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__630__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__630__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__630__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__630__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__630__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__630__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__636__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__100__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__636__part 
                            = vlSelf->__Vfunc_leading_zero32__636__value;
                        vlSelf->__Vfunc_leading_zero32__636__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__636__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                            vlSelf->__Vfunc_leading_zero32__636__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__636__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__636__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__636__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__636__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__636__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__636__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__636__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__636__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__642__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__101__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__642__part 
                            = vlSelf->__Vfunc_leading_zero32__642__value;
                        vlSelf->__Vfunc_leading_zero32__642__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__642__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                            vlSelf->__Vfunc_leading_zero32__642__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__642__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__642__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__642__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__642__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__642__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__642__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__642__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__642__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__648__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__102__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__648__part 
                            = vlSelf->__Vfunc_leading_zero32__648__value;
                        vlSelf->__Vfunc_leading_zero32__648__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__648__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                            vlSelf->__Vfunc_leading_zero32__648__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__648__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__648__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__648__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__648__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__648__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__648__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__648__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__648__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__654__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__103__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__654__part 
                            = vlSelf->__Vfunc_leading_zero32__654__value;
                        vlSelf->__Vfunc_leading_zero32__654__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__654__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                            vlSelf->__Vfunc_leading_zero32__654__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__654__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__654__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__654__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__654__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__654__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__654__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__654__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__654__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__660__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__104__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__660__part 
                            = vlSelf->__Vfunc_leading_zero32__660__value;
                        vlSelf->__Vfunc_leading_zero32__660__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__660__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                            vlSelf->__Vfunc_leading_zero32__660__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__660__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__660__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__660__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__660__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__660__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__660__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__660__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__660__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__666__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__105__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__666__part 
                            = vlSelf->__Vfunc_leading_zero32__666__value;
                        vlSelf->__Vfunc_leading_zero32__666__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__666__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                            vlSelf->__Vfunc_leading_zero32__666__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__666__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__666__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__666__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__666__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__666__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__666__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__666__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__666__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__672__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__106__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__672__part 
                            = vlSelf->__Vfunc_leading_zero32__672__value;
                        vlSelf->__Vfunc_leading_zero32__672__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__672__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                            vlSelf->__Vfunc_leading_zero32__672__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__672__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__672__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__672__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__672__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__672__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__672__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__672__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__672__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__678__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__107__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__678__part 
                            = vlSelf->__Vfunc_leading_zero32__678__value;
                        vlSelf->__Vfunc_leading_zero32__678__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__678__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                            vlSelf->__Vfunc_leading_zero32__678__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__678__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__678__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__678__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__678__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__678__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__678__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__678__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__678__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__684__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__108__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__684__part 
                            = vlSelf->__Vfunc_leading_zero32__684__value;
                        vlSelf->__Vfunc_leading_zero32__684__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__684__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                            vlSelf->__Vfunc_leading_zero32__684__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__684__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__684__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__684__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__684__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__684__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__684__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__684__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__684__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__690__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__109__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__690__part 
                            = vlSelf->__Vfunc_leading_zero32__690__value;
                        vlSelf->__Vfunc_leading_zero32__690__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__690__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                            vlSelf->__Vfunc_leading_zero32__690__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__690__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__690__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__690__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__690__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__690__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__690__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__690__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__690__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__696__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__110__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__696__part 
                            = vlSelf->__Vfunc_leading_zero32__696__value;
                        vlSelf->__Vfunc_leading_zero32__696__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__696__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                            vlSelf->__Vfunc_leading_zero32__696__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__696__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__696__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__696__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__696__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__696__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__696__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__696__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__696__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__702__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__111__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__702__part 
                            = vlSelf->__Vfunc_leading_zero32__702__value;
                        vlSelf->__Vfunc_leading_zero32__702__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__702__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                            vlSelf->__Vfunc_leading_zero32__702__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__702__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__702__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__702__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__702__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__702__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__702__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__702__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__702__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__708__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__112__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__708__part 
                            = vlSelf->__Vfunc_leading_zero32__708__value;
                        vlSelf->__Vfunc_leading_zero32__708__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__708__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                            vlSelf->__Vfunc_leading_zero32__708__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__708__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__708__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__708__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__708__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__708__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__708__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__708__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__708__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__714__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__113__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__714__part 
                            = vlSelf->__Vfunc_leading_zero32__714__value;
                        vlSelf->__Vfunc_leading_zero32__714__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__714__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                            vlSelf->__Vfunc_leading_zero32__714__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__714__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__714__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__714__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__714__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__714__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__714__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__714__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__714__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__720__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__114__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__720__part 
                            = vlSelf->__Vfunc_leading_zero32__720__value;
                        vlSelf->__Vfunc_leading_zero32__720__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__720__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                            vlSelf->__Vfunc_leading_zero32__720__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__720__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__720__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__720__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__720__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__720__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__720__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__720__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__720__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__726__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__115__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__726__part 
                            = vlSelf->__Vfunc_leading_zero32__726__value;
                        vlSelf->__Vfunc_leading_zero32__726__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__726__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                            vlSelf->__Vfunc_leading_zero32__726__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__726__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__726__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__726__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__726__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__726__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__726__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__726__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__726__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__732__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__116__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__732__part 
                            = vlSelf->__Vfunc_leading_zero32__732__value;
                        vlSelf->__Vfunc_leading_zero32__732__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__732__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                            vlSelf->__Vfunc_leading_zero32__732__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__732__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__732__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__732__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__732__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__732__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__732__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__732__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__732__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__738__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__117__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__738__part 
                            = vlSelf->__Vfunc_leading_zero32__738__value;
                        vlSelf->__Vfunc_leading_zero32__738__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__738__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                            vlSelf->__Vfunc_leading_zero32__738__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__738__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__738__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__738__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__738__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__738__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__738__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__738__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__738__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__744__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__118__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__744__part 
                            = vlSelf->__Vfunc_leading_zero32__744__value;
                        vlSelf->__Vfunc_leading_zero32__744__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__744__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                            vlSelf->__Vfunc_leading_zero32__744__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__744__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__744__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__744__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__744__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__744__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__744__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__744__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__744__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__750__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__119__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__750__part 
                            = vlSelf->__Vfunc_leading_zero32__750__value;
                        vlSelf->__Vfunc_leading_zero32__750__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__750__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                            vlSelf->__Vfunc_leading_zero32__750__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__750__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__750__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__750__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__750__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__750__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__750__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__750__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__750__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__756__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__120__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__756__part 
                            = vlSelf->__Vfunc_leading_zero32__756__value;
                        vlSelf->__Vfunc_leading_zero32__756__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__756__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                            vlSelf->__Vfunc_leading_zero32__756__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__756__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__756__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__756__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__756__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__756__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__756__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__756__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__756__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__762__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__121__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__762__part 
                            = vlSelf->__Vfunc_leading_zero32__762__value;
                        vlSelf->__Vfunc_leading_zero32__762__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__762__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                            vlSelf->__Vfunc_leading_zero32__762__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__762__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__762__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__762__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__762__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__762__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__762__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__762__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__762__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__768__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__122__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__768__part 
                            = vlSelf->__Vfunc_leading_zero32__768__value;
                        vlSelf->__Vfunc_leading_zero32__768__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__768__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                            vlSelf->__Vfunc_leading_zero32__768__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__768__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__768__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__768__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__768__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__768__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__768__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__768__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__768__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__774__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__123__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__774__part 
                            = vlSelf->__Vfunc_leading_zero32__774__value;
                        vlSelf->__Vfunc_leading_zero32__774__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__774__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                            vlSelf->__Vfunc_leading_zero32__774__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__774__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__774__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__774__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__774__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__774__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__774__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__774__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__774__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__780__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__124__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__780__part 
                            = vlSelf->__Vfunc_leading_zero32__780__value;
                        vlSelf->__Vfunc_leading_zero32__780__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__780__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                            vlSelf->__Vfunc_leading_zero32__780__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__780__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__780__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__780__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__780__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__780__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__780__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__780__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__780__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__786__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__125__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__786__part 
                            = vlSelf->__Vfunc_leading_zero32__786__value;
                        vlSelf->__Vfunc_leading_zero32__786__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__786__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                            vlSelf->__Vfunc_leading_zero32__786__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__786__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__786__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__786__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__786__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__786__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__786__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__786__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__786__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__792__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__126__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__792__part 
                            = vlSelf->__Vfunc_leading_zero32__792__value;
                        vlSelf->__Vfunc_leading_zero32__792__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__792__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                            vlSelf->__Vfunc_leading_zero32__792__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__792__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__792__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__792__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__792__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__792__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__792__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__792__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__792__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__shift_a 
        = ((0U == vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_a)
            ? 0U : (0x3fU & (([&]() {
                        vlSelf->__Vfunc_leading_zero32__798__value 
                            = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__dot_lanes__BRA__127__KET____DOT__multiply__DOT__raw_a;
                        vlSelf->__Vfunc_leading_zero32__798__part 
                            = vlSelf->__Vfunc_leading_zero32__798__value;
                        vlSelf->__Vfunc_leading_zero32__798__count = 0U;
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x10U))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(0x10U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 0x10U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x18U))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(8U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 8U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x1cU))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(4U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 4U);
                        }
                        if ((0U == (vlSelf->__Vfunc_leading_zero32__798__part 
                                    >> 0x1eU))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(2U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                            vlSelf->__Vfunc_leading_zero32__798__part 
                                = VL_SHIFTL_III(32,32,32, vlSelf->__Vfunc_leading_zero32__798__part, 2U);
                        }
                        if ((1U & (~ (vlSelf->__Vfunc_leading_zero32__798__part 
                                      >> 0x1fU)))) {
                            vlSelf->__Vfunc_leading_zero32__798__count 
                                = (0x3fU & ((IData)(1U) 
                                            + (IData)(vlSelf->__Vfunc_leading_zero32__798__count)));
                        }
                        vlSelf->__Vfunc_leading_zero32__798__Vfuncout 
                            = ((0U == vlSelf->__Vfunc_leading_zero32__798__value)
                                ? 0x20U : (IData)(vlSelf->__Vfunc_leading_zero32__798__count));
                    }(), (IData)(vlSelf->__Vfunc_leading_zero32__798__Vfuncout)) 
                             - (IData)(8U))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__remainder;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__difference;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__state;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__received;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_extent;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_done 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_done;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__w4;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__gstate;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__age;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__qknorm_rope__DOT__datapath__DOT__result_valid;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__0__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__1__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__2__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__3__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__4__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__5__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__6__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__7__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__8__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__9__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__10__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__11__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__12__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__13__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__14__KET____DOT__add__DOT__sum3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__large1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__small1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__distance1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__distance1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__exponent1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__exponent1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__exponent2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__exponent2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__exponent3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__exponent3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__negative1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__negative1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__negative2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__negative2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__negative3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__negative3;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract1 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract1;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__failed 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__failed;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__subtract2;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3 
        = vlSelf->__Vdly__anvil_qn1_top__DOT__native__DOT__decoder__DOT__tensor_array__DOT__reduction_levels__BRA__3__KET____DOT__adjacent_pairs__BRA__15__KET____DOT__add__DOT__sum3;
    __Vfunc_unsigned32_to_fp32__1570__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order;
    __Vfunc_leading_zero32__1571__value = __Vfunc_unsigned32_to_fp32__1570__value;
    __Vfunc_leading_zero32__1571__part = __Vfunc_leading_zero32__1571__value;
    __Vfunc_leading_zero32__1571__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__1571__part 
                >> 0x10U))) {
        __Vfunc_leading_zero32__1571__count = (0x3fU 
                                               & ((IData)(0x10U) 
                                                  + (IData)(__Vfunc_leading_zero32__1571__count)));
        __Vfunc_leading_zero32__1571__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1571__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__1571__part 
                >> 0x18U))) {
        __Vfunc_leading_zero32__1571__count = (0x3fU 
                                               & ((IData)(8U) 
                                                  + (IData)(__Vfunc_leading_zero32__1571__count)));
        __Vfunc_leading_zero32__1571__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1571__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__1571__part 
                >> 0x1cU))) {
        __Vfunc_leading_zero32__1571__count = (0x3fU 
                                               & ((IData)(4U) 
                                                  + (IData)(__Vfunc_leading_zero32__1571__count)));
        __Vfunc_leading_zero32__1571__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1571__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__1571__part 
                >> 0x1eU))) {
        __Vfunc_leading_zero32__1571__count = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(__Vfunc_leading_zero32__1571__count)));
        __Vfunc_leading_zero32__1571__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1571__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__1571__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__1571__count = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_leading_zero32__1571__count)));
    }
    __Vfunc_leading_zero32__1571__Vfuncout = ((0U == __Vfunc_leading_zero32__1571__value)
                                               ? 0x20U
                                               : (IData)(__Vfunc_leading_zero32__1571__count));
    __Vfunc_unsigned32_to_fp32__1570__shift = __Vfunc_leading_zero32__1571__Vfuncout;
    __Vfunc_unsigned32_to_fp32__1570__normalized = 
        VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__1570__value, (IData)(__Vfunc_unsigned32_to_fp32__1570__shift));
    __Vfunc_round_pack32__1572__significand = ((0x7fffffeU 
                                                & (__Vfunc_unsigned32_to_fp32__1570__normalized 
                                                   >> 5U)) 
                                               | (0U 
                                                  != 
                                                  (0x3fU 
                                                   & __Vfunc_unsigned32_to_fp32__1570__normalized)));
    __Vfunc_round_pack32__1572__exponent = (0xfffU 
                                            & ((IData)(0x1fU) 
                                               - (IData)(__Vfunc_unsigned32_to_fp32__1570__shift)));
    __Vfunc_round_pack32__1572__adjusted = __Vfunc_round_pack32__1572__exponent;
    __Vfunc_round_pack32__1572__shifted = __Vfunc_round_pack32__1572__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__1572__exponent))) {
        vlSelf->__Vfunc_shift_jam27__1573__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__1572__exponent)));
        vlSelf->__Vfunc_shift_jam27__1573__value = __Vfunc_round_pack32__1572__significand;
        __Vfunc_round_pack32__1572__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__1573__distance))) {
            vlSelf->__Vfunc_shift_jam27__1573__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__1573__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__1573__distance))) {
            vlSelf->__Vfunc_shift_jam27__1573__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__1573__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__1573__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__1573__value, (IData)(vlSelf->__Vfunc_shift_jam27__1573__distance)));
            vlSelf->__Vfunc_shift_jam27__1573__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__1573__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__1573__distance)))));
            vlSelf->__Vfunc_shift_jam27__1573__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__1573__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__1573__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__1573__discarded))));
        }
        __Vfunc_round_pack32__1572__shifted = vlSelf->__Vfunc_shift_jam27__1573__Vfuncout;
    }
    __Vfunc_round_pack32__1572__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__1572__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__1572__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__1572__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__1572__rounded)) {
        __Vfunc_round_pack32__1572__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__1572__rounded, 1U));
        __Vfunc_round_pack32__1572__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__1572__adjusted)));
    }
    __Vfunc_round_pack32__1572__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__1572__rounded)) {
        __Vfunc_round_pack32__1572__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__1572__adjusted)));
    }
    __Vfunc_round_pack32__1572__Vfuncout = (((0U == __Vfunc_round_pack32__1572__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__1572__rounded))
                                             ? 0ULL
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__1572__adjusted))
                                                 ? 0x100000000ULL
                                                 : (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__1572__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__1572__rounded))))));
    __Vfunc_unsigned32_to_fp32__1570__packed_value 
        = __Vfunc_round_pack32__1572__Vfuncout;
    __Vfunc_unsigned32_to_fp32__1570__Vfuncout = ((0U 
                                                   == __Vfunc_unsigned32_to_fp32__1570__value)
                                                   ? 0U
                                                   : (IData)(__Vfunc_unsigned32_to_fp32__1570__packed_value));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__order32 
        = __Vfunc_unsigned32_to_fp32__1570__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__clamped 
        = ((vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum 
            >> 0x1fU) ? 0U : (([&]() {
                    vlSelf->__Vfunc_fp32_greater__1574__a 
                        = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum;
                    vlSelf->__Vfunc_fp32_greater__1574__Vfuncout 
                        = (1U & ((vlSelf->__Vfunc_fp32_greater__1574__a 
                                  >> 0x1fU) ? (~ (vlSelf->__Vfunc_fp32_greater__1574__a 
                                                  >> 0x1fU))
                                  : ((vlSelf->__Vfunc_fp32_greater__1574__a 
                                      >> 0x1fU) ? (0x3f800000U 
                                                   > 
                                                   (0x7fffffffU 
                                                    & vlSelf->__Vfunc_fp32_greater__1574__a))
                                      : (0x3f800000U 
                                         < (0x7fffffffU 
                                            & vlSelf->__Vfunc_fp32_greater__1574__a)))));
                }(), (IData)(vlSelf->__Vfunc_fp32_greater__1574__Vfuncout))
                               ? 0x3f800000U : vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__sum));
    __Vfunc_unsigned32_to_fp32__1566__value = vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent;
    __Vfunc_leading_zero32__1567__value = __Vfunc_unsigned32_to_fp32__1566__value;
    __Vfunc_leading_zero32__1567__part = __Vfunc_leading_zero32__1567__value;
    __Vfunc_leading_zero32__1567__count = 0U;
    if ((0U == (__Vfunc_leading_zero32__1567__part 
                >> 0x10U))) {
        __Vfunc_leading_zero32__1567__count = (0x3fU 
                                               & ((IData)(0x10U) 
                                                  + (IData)(__Vfunc_leading_zero32__1567__count)));
        __Vfunc_leading_zero32__1567__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1567__part, 0x10U);
    }
    if ((0U == (__Vfunc_leading_zero32__1567__part 
                >> 0x18U))) {
        __Vfunc_leading_zero32__1567__count = (0x3fU 
                                               & ((IData)(8U) 
                                                  + (IData)(__Vfunc_leading_zero32__1567__count)));
        __Vfunc_leading_zero32__1567__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1567__part, 8U);
    }
    if ((0U == (__Vfunc_leading_zero32__1567__part 
                >> 0x1cU))) {
        __Vfunc_leading_zero32__1567__count = (0x3fU 
                                               & ((IData)(4U) 
                                                  + (IData)(__Vfunc_leading_zero32__1567__count)));
        __Vfunc_leading_zero32__1567__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1567__part, 4U);
    }
    if ((0U == (__Vfunc_leading_zero32__1567__part 
                >> 0x1eU))) {
        __Vfunc_leading_zero32__1567__count = (0x3fU 
                                               & ((IData)(2U) 
                                                  + (IData)(__Vfunc_leading_zero32__1567__count)));
        __Vfunc_leading_zero32__1567__part = VL_SHIFTL_III(32,32,32, __Vfunc_leading_zero32__1567__part, 2U);
    }
    if ((1U & (~ (__Vfunc_leading_zero32__1567__part 
                  >> 0x1fU)))) {
        __Vfunc_leading_zero32__1567__count = (0x3fU 
                                               & ((IData)(1U) 
                                                  + (IData)(__Vfunc_leading_zero32__1567__count)));
    }
    __Vfunc_leading_zero32__1567__Vfuncout = ((0U == __Vfunc_leading_zero32__1567__value)
                                               ? 0x20U
                                               : (IData)(__Vfunc_leading_zero32__1567__count));
    __Vfunc_unsigned32_to_fp32__1566__shift = __Vfunc_leading_zero32__1567__Vfuncout;
    __Vfunc_unsigned32_to_fp32__1566__normalized = 
        VL_SHIFTL_III(32,32,6, __Vfunc_unsigned32_to_fp32__1566__value, (IData)(__Vfunc_unsigned32_to_fp32__1566__shift));
    __Vfunc_round_pack32__1568__significand = ((0x7fffffeU 
                                                & (__Vfunc_unsigned32_to_fp32__1566__normalized 
                                                   >> 5U)) 
                                               | (0U 
                                                  != 
                                                  (0x3fU 
                                                   & __Vfunc_unsigned32_to_fp32__1566__normalized)));
    __Vfunc_round_pack32__1568__exponent = (0xfffU 
                                            & ((IData)(0x1fU) 
                                               - (IData)(__Vfunc_unsigned32_to_fp32__1566__shift)));
    __Vfunc_round_pack32__1568__adjusted = __Vfunc_round_pack32__1568__exponent;
    __Vfunc_round_pack32__1568__shifted = __Vfunc_round_pack32__1568__significand;
    if (VL_GTS_III(12, 0xf82U, (IData)(__Vfunc_round_pack32__1568__exponent))) {
        vlSelf->__Vfunc_shift_jam27__1569__distance 
            = (0xfffU & ((IData)(0xf82U) - (IData)(__Vfunc_round_pack32__1568__exponent)));
        vlSelf->__Vfunc_shift_jam27__1569__value = __Vfunc_round_pack32__1568__significand;
        __Vfunc_round_pack32__1568__adjusted = 0xf82U;
        if ((0U == (IData)(vlSelf->__Vfunc_shift_jam27__1569__distance))) {
            vlSelf->__Vfunc_shift_jam27__1569__Vfuncout 
                = vlSelf->__Vfunc_shift_jam27__1569__value;
        } else if ((0x1bU <= (IData)(vlSelf->__Vfunc_shift_jam27__1569__distance))) {
            vlSelf->__Vfunc_shift_jam27__1569__Vfuncout 
                = (0U != vlSelf->__Vfunc_shift_jam27__1569__value);
        } else {
            vlSelf->__Vfunc_shift_jam27__1569__shifted 
                = (0x7ffffffU & VL_SHIFTR_III(27,27,12, vlSelf->__Vfunc_shift_jam27__1569__value, (IData)(vlSelf->__Vfunc_shift_jam27__1569__distance)));
            vlSelf->__Vfunc_shift_jam27__1569__discarded 
                = (0x7ffffffU & VL_SHIFTL_III(27,27,12, vlSelf->__Vfunc_shift_jam27__1569__value, 
                                              (0xfffU 
                                               & ((IData)(0x1bU) 
                                                  - (IData)(vlSelf->__Vfunc_shift_jam27__1569__distance)))));
            vlSelf->__Vfunc_shift_jam27__1569__Vfuncout 
                = ((0x7fffffeU & vlSelf->__Vfunc_shift_jam27__1569__shifted) 
                   | (1U & (vlSelf->__Vfunc_shift_jam27__1569__shifted 
                            | (0U != vlSelf->__Vfunc_shift_jam27__1569__discarded))));
        }
        __Vfunc_round_pack32__1568__shifted = vlSelf->__Vfunc_shift_jam27__1569__Vfuncout;
    }
    __Vfunc_round_pack32__1568__rounded = (0x1ffffffU 
                                           & ((0xffffffU 
                                               & (__Vfunc_round_pack32__1568__shifted 
                                                  >> 3U)) 
                                              + (1U 
                                                 & ((__Vfunc_round_pack32__1568__shifted 
                                                     >> 2U) 
                                                    & (IData)(
                                                              (0U 
                                                               != 
                                                               (0xbU 
                                                                & __Vfunc_round_pack32__1568__shifted)))))));
    if ((0x1000000U & __Vfunc_round_pack32__1568__rounded)) {
        __Vfunc_round_pack32__1568__rounded = (0x1ffffffU 
                                               & VL_SHIFTR_III(25,25,32, __Vfunc_round_pack32__1568__rounded, 1U));
        __Vfunc_round_pack32__1568__adjusted = (0xfffU 
                                                & ((IData)(1U) 
                                                   + (IData)(__Vfunc_round_pack32__1568__adjusted)));
    }
    __Vfunc_round_pack32__1568__biased = 0U;
    if ((0x800000U & __Vfunc_round_pack32__1568__rounded)) {
        __Vfunc_round_pack32__1568__biased = (0xffU 
                                              & ((IData)(0x7fU) 
                                                 + (IData)(__Vfunc_round_pack32__1568__adjusted)));
    }
    __Vfunc_round_pack32__1568__Vfuncout = (((0U == __Vfunc_round_pack32__1568__significand) 
                                             | (0U 
                                                == __Vfunc_round_pack32__1568__rounded))
                                             ? 0ULL
                                             : (VL_LTS_III(12, 0x7fU, (IData)(__Vfunc_round_pack32__1568__adjusted))
                                                 ? 0x100000000ULL
                                                 : (QData)((IData)(
                                                                   (((IData)(__Vfunc_round_pack32__1568__biased) 
                                                                     << 0x17U) 
                                                                    | (0x7fffffU 
                                                                       & __Vfunc_round_pack32__1568__rounded))))));
    __Vfunc_unsigned32_to_fp32__1566__packed_value 
        = __Vfunc_round_pack32__1568__Vfuncout;
    __Vfunc_unsigned32_to_fp32__1566__Vfuncout = ((0U 
                                                   == __Vfunc_unsigned32_to_fp32__1566__value)
                                                   ? 0U
                                                   : (IData)(__Vfunc_unsigned32_to_fp32__1566__packed_value));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__exponential_unit__DOT__exponent32 
        = __Vfunc_unsigned32_to_fp32__1566__Vfuncout;
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__load_state 
        = ((2U == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)) 
           | (0xaU == (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__attention__DOT__legal__DOT__state)));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT____Vcellinp__mlp__gemv_done 
        = ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_done) 
           & (IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projection_owner_mlp));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__remaining 
        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__input_extent 
           - vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base);
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT____VdfgTmp_h103a2f0a__0 
        = (vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__base 
           + (0xffU & ((IData)(vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__issued) 
                       >> 1U)));
    __Vfunc_awq_lane_shift__1843__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1843__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1843__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1843__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1843__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1843__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1843__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1843__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1843__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__nibble_shift 
        = __Vfunc_awq_lane_shift__1843__Vfuncout;
    __Vfunc_awq_lane_shift__1587__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1587__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1587__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1587__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1587__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1587__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1587__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1587__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1587__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__0__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1587__Vfuncout;
    __Vfunc_awq_lane_shift__1588__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1588__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1588__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1588__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1588__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1588__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1588__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1588__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1588__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__1__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1588__Vfuncout;
    __Vfunc_awq_lane_shift__1589__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1589__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1589__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1589__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1589__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1589__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1589__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1589__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1589__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__2__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1589__Vfuncout;
    __Vfunc_awq_lane_shift__1590__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1590__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1590__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1590__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1590__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1590__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1590__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1590__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1590__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__3__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1590__Vfuncout;
    __Vfunc_awq_lane_shift__1591__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1591__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1591__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1591__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1591__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1591__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1591__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1591__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1591__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__4__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1591__Vfuncout;
    __Vfunc_awq_lane_shift__1592__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1592__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1592__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1592__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1592__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1592__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1592__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1592__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1592__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__5__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1592__Vfuncout;
    __Vfunc_awq_lane_shift__1593__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1593__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1593__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1593__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1593__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1593__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1593__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1593__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1593__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__6__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1593__Vfuncout;
    __Vfunc_awq_lane_shift__1594__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1594__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1594__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1594__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1594__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1594__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1594__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1594__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1594__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__7__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1594__Vfuncout;
    __Vfunc_awq_lane_shift__1595__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1595__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1595__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1595__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1595__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1595__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1595__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1595__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1595__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__8__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1595__Vfuncout;
    __Vfunc_awq_lane_shift__1596__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1596__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1596__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1596__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1596__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1596__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1596__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1596__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1596__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__9__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1596__Vfuncout;
    __Vfunc_awq_lane_shift__1597__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1597__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1597__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1597__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1597__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1597__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1597__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1597__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1597__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__10__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1597__Vfuncout;
    __Vfunc_awq_lane_shift__1598__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1598__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1598__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1598__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1598__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1598__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1598__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1598__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1598__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__11__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1598__Vfuncout;
    __Vfunc_awq_lane_shift__1599__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1599__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1599__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1599__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1599__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1599__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1599__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1599__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1599__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__12__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1599__Vfuncout;
    __Vfunc_awq_lane_shift__1600__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1600__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1600__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1600__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1600__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1600__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1600__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1600__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1600__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__13__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1600__Vfuncout;
    __Vfunc_awq_lane_shift__1601__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1601__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1601__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1601__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1601__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1601__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1601__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1601__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1601__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__14__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1601__Vfuncout;
    __Vfunc_awq_lane_shift__1602__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1602__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1602__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1602__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1602__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1602__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1602__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1602__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1602__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__15__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1602__Vfuncout;
    __Vfunc_awq_lane_shift__1603__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1603__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1603__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1603__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1603__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1603__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1603__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1603__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1603__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__16__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1603__Vfuncout;
    __Vfunc_awq_lane_shift__1604__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1604__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1604__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1604__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1604__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1604__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1604__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1604__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1604__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__17__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1604__Vfuncout;
    __Vfunc_awq_lane_shift__1605__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1605__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1605__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1605__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1605__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1605__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1605__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1605__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1605__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__18__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1605__Vfuncout;
    __Vfunc_awq_lane_shift__1606__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1606__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1606__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1606__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1606__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1606__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1606__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1606__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1606__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__19__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1606__Vfuncout;
    __Vfunc_awq_lane_shift__1607__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1607__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1607__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1607__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1607__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1607__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1607__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1607__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1607__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__20__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1607__Vfuncout;
    __Vfunc_awq_lane_shift__1608__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1608__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1608__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1608__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1608__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1608__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1608__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1608__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1608__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__21__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1608__Vfuncout;
    __Vfunc_awq_lane_shift__1609__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1609__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1609__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1609__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1609__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1609__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1609__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1609__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1609__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__22__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1609__Vfuncout;
    __Vfunc_awq_lane_shift__1610__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1610__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1610__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1610__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1610__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1610__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1610__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1610__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1610__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__23__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1610__Vfuncout;
    __Vfunc_awq_lane_shift__1611__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1611__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1611__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1611__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1611__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1611__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1611__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1611__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1611__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__24__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1611__Vfuncout;
    __Vfunc_awq_lane_shift__1612__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1612__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1612__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1612__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1612__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1612__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1612__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1612__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1612__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__25__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1612__Vfuncout;
    __Vfunc_awq_lane_shift__1613__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1613__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1613__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1613__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1613__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1613__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1613__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1613__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1613__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__26__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1613__Vfuncout;
    __Vfunc_awq_lane_shift__1614__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1614__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1614__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1614__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1614__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1614__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1614__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1614__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1614__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__27__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1614__Vfuncout;
    __Vfunc_awq_lane_shift__1615__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1615__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1615__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1615__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1615__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1615__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1615__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1615__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1615__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__28__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1615__Vfuncout;
    __Vfunc_awq_lane_shift__1616__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1616__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1616__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1616__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1616__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1616__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1616__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1616__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1616__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__29__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1616__Vfuncout;
    __Vfunc_awq_lane_shift__1617__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1617__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1617__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1617__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1617__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1617__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1617__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1617__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1617__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__30__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1617__Vfuncout;
    __Vfunc_awq_lane_shift__1618__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1618__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1618__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1618__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1618__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1618__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1618__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1618__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1618__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__31__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1618__Vfuncout;
    __Vfunc_awq_lane_shift__1619__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1619__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1619__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1619__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1619__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1619__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1619__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1619__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1619__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__32__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1619__Vfuncout;
    __Vfunc_awq_lane_shift__1620__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1620__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1620__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1620__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1620__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1620__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1620__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1620__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1620__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__33__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1620__Vfuncout;
    __Vfunc_awq_lane_shift__1621__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1621__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1621__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1621__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1621__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1621__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1621__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1621__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1621__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__34__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1621__Vfuncout;
    __Vfunc_awq_lane_shift__1622__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1622__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1622__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1622__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1622__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1622__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1622__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1622__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1622__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__35__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1622__Vfuncout;
    __Vfunc_awq_lane_shift__1623__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1623__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1623__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1623__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1623__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1623__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1623__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1623__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1623__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__36__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1623__Vfuncout;
    __Vfunc_awq_lane_shift__1624__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1624__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1624__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1624__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1624__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1624__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1624__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1624__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1624__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__37__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1624__Vfuncout;
    __Vfunc_awq_lane_shift__1625__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1625__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1625__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1625__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1625__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1625__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1625__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1625__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1625__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__38__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1625__Vfuncout;
    __Vfunc_awq_lane_shift__1626__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1626__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1626__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1626__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1626__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1626__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1626__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1626__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1626__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__39__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1626__Vfuncout;
    __Vfunc_awq_lane_shift__1627__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1627__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1627__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1627__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1627__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1627__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1627__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1627__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1627__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__40__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1627__Vfuncout;
    __Vfunc_awq_lane_shift__1628__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1628__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1628__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1628__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1628__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1628__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1628__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1628__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1628__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__41__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1628__Vfuncout;
    __Vfunc_awq_lane_shift__1629__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1629__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1629__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1629__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1629__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1629__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1629__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1629__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1629__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__42__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1629__Vfuncout;
    __Vfunc_awq_lane_shift__1630__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1630__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1630__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1630__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1630__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1630__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1630__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1630__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1630__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__43__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1630__Vfuncout;
    __Vfunc_awq_lane_shift__1631__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1631__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1631__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1631__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1631__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1631__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1631__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1631__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1631__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__44__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1631__Vfuncout;
    __Vfunc_awq_lane_shift__1632__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1632__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1632__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1632__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1632__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1632__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1632__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1632__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1632__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__45__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1632__Vfuncout;
    __Vfunc_awq_lane_shift__1633__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1633__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1633__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1633__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1633__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1633__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1633__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1633__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1633__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__46__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1633__Vfuncout;
    __Vfunc_awq_lane_shift__1634__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1634__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1634__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1634__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1634__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1634__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1634__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1634__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1634__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__47__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1634__Vfuncout;
    __Vfunc_awq_lane_shift__1635__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1635__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1635__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1635__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1635__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1635__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1635__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1635__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1635__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__48__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1635__Vfuncout;
    __Vfunc_awq_lane_shift__1636__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1636__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1636__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1636__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1636__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1636__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1636__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1636__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1636__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__49__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1636__Vfuncout;
    __Vfunc_awq_lane_shift__1637__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1637__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1637__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1637__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1637__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1637__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1637__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1637__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1637__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__50__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1637__Vfuncout;
    __Vfunc_awq_lane_shift__1638__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1638__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1638__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1638__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1638__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1638__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1638__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1638__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1638__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__51__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1638__Vfuncout;
    __Vfunc_awq_lane_shift__1639__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1639__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1639__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1639__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1639__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1639__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1639__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1639__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1639__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__52__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1639__Vfuncout;
    __Vfunc_awq_lane_shift__1640__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1640__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1640__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1640__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1640__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1640__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1640__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1640__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1640__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__53__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1640__Vfuncout;
    __Vfunc_awq_lane_shift__1641__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    vlSelf->__Vfunc_awq_lane_shift__1641__Vfuncout 
        = ((0U == (IData)(__Vfunc_awq_lane_shift__1641__lane))
            ? 0U : ((1U == (IData)(__Vfunc_awq_lane_shift__1641__lane))
                     ? 0x10U : ((2U == (IData)(__Vfunc_awq_lane_shift__1641__lane))
                                 ? 4U : ((3U == (IData)(__Vfunc_awq_lane_shift__1641__lane))
                                          ? 0x14U : 
                                         ((4U == (IData)(__Vfunc_awq_lane_shift__1641__lane))
                                           ? 8U : (
                                                   (5U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1641__lane))
                                                    ? 0x18U
                                                    : 
                                                   ((6U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1641__lane))
                                                     ? 0xcU
                                                     : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__54__KET____DOT__shift 
        = vlSelf->__Vfunc_awq_lane_shift__1641__Vfuncout;
    __Vfunc_awq_lane_shift__1642__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1642__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1642__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1642__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1642__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1642__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1642__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1642__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1642__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__55__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1642__Vfuncout;
    __Vfunc_awq_lane_shift__1643__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1643__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1643__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1643__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1643__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1643__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1643__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1643__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1643__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__56__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1643__Vfuncout;
    __Vfunc_awq_lane_shift__1644__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1644__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1644__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1644__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1644__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1644__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1644__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1644__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1644__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__57__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1644__Vfuncout;
    __Vfunc_awq_lane_shift__1645__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1645__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1645__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1645__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1645__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1645__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1645__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1645__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1645__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__58__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1645__Vfuncout;
    __Vfunc_awq_lane_shift__1646__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1646__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1646__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1646__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1646__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1646__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1646__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1646__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1646__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__59__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1646__Vfuncout;
    __Vfunc_awq_lane_shift__1647__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1647__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1647__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1647__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1647__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1647__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1647__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1647__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1647__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__60__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1647__Vfuncout;
    __Vfunc_awq_lane_shift__1648__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1648__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1648__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1648__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1648__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1648__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1648__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1648__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1648__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__61__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1648__Vfuncout;
    __Vfunc_awq_lane_shift__1649__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1649__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1649__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1649__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1649__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1649__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1649__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1649__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1649__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__62__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1649__Vfuncout;
    __Vfunc_awq_lane_shift__1650__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1650__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1650__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1650__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1650__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1650__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1650__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1650__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1650__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__63__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1650__Vfuncout;
    __Vfunc_awq_lane_shift__1651__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1651__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1651__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1651__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1651__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1651__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1651__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1651__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1651__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__64__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1651__Vfuncout;
    __Vfunc_awq_lane_shift__1652__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1652__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1652__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1652__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1652__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1652__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1652__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1652__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1652__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__65__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1652__Vfuncout;
    __Vfunc_awq_lane_shift__1653__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1653__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1653__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1653__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1653__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1653__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1653__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1653__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1653__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__66__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1653__Vfuncout;
    __Vfunc_awq_lane_shift__1654__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1654__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1654__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1654__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1654__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1654__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1654__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1654__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1654__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__67__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1654__Vfuncout;
    __Vfunc_awq_lane_shift__1655__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1655__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1655__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1655__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1655__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1655__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1655__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1655__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1655__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__68__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1655__Vfuncout;
    __Vfunc_awq_lane_shift__1656__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1656__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1656__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1656__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1656__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1656__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1656__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1656__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1656__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__69__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1656__Vfuncout;
    __Vfunc_awq_lane_shift__1657__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1657__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1657__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1657__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1657__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1657__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1657__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1657__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1657__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__70__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1657__Vfuncout;
    __Vfunc_awq_lane_shift__1658__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1658__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1658__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1658__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1658__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1658__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1658__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1658__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1658__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__71__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1658__Vfuncout;
    __Vfunc_awq_lane_shift__1659__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1659__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1659__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1659__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1659__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1659__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1659__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1659__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1659__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__72__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1659__Vfuncout;
    __Vfunc_awq_lane_shift__1660__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1660__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1660__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1660__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1660__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1660__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1660__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1660__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1660__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__73__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1660__Vfuncout;
    __Vfunc_awq_lane_shift__1661__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1661__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1661__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1661__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1661__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1661__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1661__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1661__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1661__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__74__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1661__Vfuncout;
    __Vfunc_awq_lane_shift__1662__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1662__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1662__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1662__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1662__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1662__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1662__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1662__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1662__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__75__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1662__Vfuncout;
    __Vfunc_awq_lane_shift__1663__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1663__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1663__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1663__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1663__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1663__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1663__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1663__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1663__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__76__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1663__Vfuncout;
    __Vfunc_awq_lane_shift__1664__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1664__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1664__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1664__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1664__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1664__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1664__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1664__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1664__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__77__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1664__Vfuncout;
    __Vfunc_awq_lane_shift__1665__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1665__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1665__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1665__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1665__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1665__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1665__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1665__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1665__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__78__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1665__Vfuncout;
    __Vfunc_awq_lane_shift__1666__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1666__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1666__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1666__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1666__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1666__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1666__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1666__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1666__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__79__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1666__Vfuncout;
    __Vfunc_awq_lane_shift__1667__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1667__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1667__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1667__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1667__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1667__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1667__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1667__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1667__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__80__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1667__Vfuncout;
    __Vfunc_awq_lane_shift__1668__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1668__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1668__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1668__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1668__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1668__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1668__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1668__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1668__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__81__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1668__Vfuncout;
    __Vfunc_awq_lane_shift__1669__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1669__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1669__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1669__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1669__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1669__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1669__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1669__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1669__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__82__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1669__Vfuncout;
    __Vfunc_awq_lane_shift__1670__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1670__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1670__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1670__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1670__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1670__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1670__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1670__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1670__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__83__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1670__Vfuncout;
    __Vfunc_awq_lane_shift__1671__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1671__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1671__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1671__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1671__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1671__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1671__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1671__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1671__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__84__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1671__Vfuncout;
    __Vfunc_awq_lane_shift__1672__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1672__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1672__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1672__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1672__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1672__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1672__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1672__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1672__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__85__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1672__Vfuncout;
    __Vfunc_awq_lane_shift__1673__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1673__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1673__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1673__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1673__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1673__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1673__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1673__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1673__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__86__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1673__Vfuncout;
    __Vfunc_awq_lane_shift__1674__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1674__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1674__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1674__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1674__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1674__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1674__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1674__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1674__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__87__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1674__Vfuncout;
    __Vfunc_awq_lane_shift__1675__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1675__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1675__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1675__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1675__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1675__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1675__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1675__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1675__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__88__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1675__Vfuncout;
    __Vfunc_awq_lane_shift__1676__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1676__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1676__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1676__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1676__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1676__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1676__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1676__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1676__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__89__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1676__Vfuncout;
    __Vfunc_awq_lane_shift__1677__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1677__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1677__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1677__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1677__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1677__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1677__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1677__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1677__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__90__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1677__Vfuncout;
    __Vfunc_awq_lane_shift__1678__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1678__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1678__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1678__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1678__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1678__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1678__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1678__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1678__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__91__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1678__Vfuncout;
    __Vfunc_awq_lane_shift__1679__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1679__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1679__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1679__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1679__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1679__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1679__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1679__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1679__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__92__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1679__Vfuncout;
    __Vfunc_awq_lane_shift__1680__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1680__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1680__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1680__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1680__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1680__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1680__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1680__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1680__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__93__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1680__Vfuncout;
    __Vfunc_awq_lane_shift__1681__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1681__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1681__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1681__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1681__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1681__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1681__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1681__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1681__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__94__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1681__Vfuncout;
    __Vfunc_awq_lane_shift__1682__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1682__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1682__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1682__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1682__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1682__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1682__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1682__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1682__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__95__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1682__Vfuncout;
    __Vfunc_awq_lane_shift__1683__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1683__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1683__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1683__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1683__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1683__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1683__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1683__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1683__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__96__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1683__Vfuncout;
    __Vfunc_awq_lane_shift__1684__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1684__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1684__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1684__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1684__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1684__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1684__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1684__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1684__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__97__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1684__Vfuncout;
    __Vfunc_awq_lane_shift__1685__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1685__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1685__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1685__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1685__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1685__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1685__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1685__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1685__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__98__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1685__Vfuncout;
    __Vfunc_awq_lane_shift__1686__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1686__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1686__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1686__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1686__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1686__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1686__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1686__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1686__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__99__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1686__Vfuncout;
    __Vfunc_awq_lane_shift__1687__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1687__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1687__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1687__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1687__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1687__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1687__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1687__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1687__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__100__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1687__Vfuncout;
    __Vfunc_awq_lane_shift__1688__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1688__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1688__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1688__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1688__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1688__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1688__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1688__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1688__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__101__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1688__Vfuncout;
    __Vfunc_awq_lane_shift__1689__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1689__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1689__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1689__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1689__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1689__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1689__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1689__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1689__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__102__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1689__Vfuncout;
    __Vfunc_awq_lane_shift__1690__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1690__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1690__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1690__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1690__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1690__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1690__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1690__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1690__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__103__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1690__Vfuncout;
    __Vfunc_awq_lane_shift__1691__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1691__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1691__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1691__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1691__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1691__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1691__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1691__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1691__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__104__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1691__Vfuncout;
    __Vfunc_awq_lane_shift__1692__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1692__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1692__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1692__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1692__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1692__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1692__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1692__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1692__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__105__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1692__Vfuncout;
    __Vfunc_awq_lane_shift__1693__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1693__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1693__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1693__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1693__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1693__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1693__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1693__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1693__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__106__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1693__Vfuncout;
    __Vfunc_awq_lane_shift__1694__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1694__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1694__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1694__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1694__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1694__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1694__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1694__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1694__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__107__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1694__Vfuncout;
    __Vfunc_awq_lane_shift__1695__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1695__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1695__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1695__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1695__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1695__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1695__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1695__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1695__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__108__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1695__Vfuncout;
    __Vfunc_awq_lane_shift__1696__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1696__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1696__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1696__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1696__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1696__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1696__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1696__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1696__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__109__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1696__Vfuncout;
    __Vfunc_awq_lane_shift__1697__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1697__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1697__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1697__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1697__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1697__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1697__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1697__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1697__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__110__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1697__Vfuncout;
    __Vfunc_awq_lane_shift__1698__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1698__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1698__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1698__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1698__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1698__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1698__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1698__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1698__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__111__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1698__Vfuncout;
    __Vfunc_awq_lane_shift__1699__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1699__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1699__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1699__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1699__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1699__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1699__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1699__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1699__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__112__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1699__Vfuncout;
    __Vfunc_awq_lane_shift__1700__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1700__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1700__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1700__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1700__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1700__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1700__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1700__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1700__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__113__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1700__Vfuncout;
    __Vfunc_awq_lane_shift__1701__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1701__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1701__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1701__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1701__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1701__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1701__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1701__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1701__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__114__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1701__Vfuncout;
    __Vfunc_awq_lane_shift__1702__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1702__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1702__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1702__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1702__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1702__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1702__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1702__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1702__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__115__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1702__Vfuncout;
    __Vfunc_awq_lane_shift__1703__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1703__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1703__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1703__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1703__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1703__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1703__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1703__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1703__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__116__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1703__Vfuncout;
    __Vfunc_awq_lane_shift__1704__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1704__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1704__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1704__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1704__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1704__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1704__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1704__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1704__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__117__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1704__Vfuncout;
    __Vfunc_awq_lane_shift__1705__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1705__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1705__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1705__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1705__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1705__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1705__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1705__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1705__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__118__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1705__Vfuncout;
    __Vfunc_awq_lane_shift__1706__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1706__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1706__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1706__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1706__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1706__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1706__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1706__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1706__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__119__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1706__Vfuncout;
    __Vfunc_awq_lane_shift__1707__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1707__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1707__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1707__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1707__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1707__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1707__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1707__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1707__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__120__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1707__Vfuncout;
    __Vfunc_awq_lane_shift__1708__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1708__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1708__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1708__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1708__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1708__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1708__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1708__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1708__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__121__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1708__Vfuncout;
    __Vfunc_awq_lane_shift__1709__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1709__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1709__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1709__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1709__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1709__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1709__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1709__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1709__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__122__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1709__Vfuncout;
    __Vfunc_awq_lane_shift__1710__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1710__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1710__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1710__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1710__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1710__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1710__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1710__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1710__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__123__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1710__Vfuncout;
    __Vfunc_awq_lane_shift__1711__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1711__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1711__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1711__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1711__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1711__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1711__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1711__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1711__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__124__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1711__Vfuncout;
    __Vfunc_awq_lane_shift__1712__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1712__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1712__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1712__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1712__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1712__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1712__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1712__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1712__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__125__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1712__Vfuncout;
    __Vfunc_awq_lane_shift__1713__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1713__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1713__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1713__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1713__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1713__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1713__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1713__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1713__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__126__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1713__Vfuncout;
    __Vfunc_awq_lane_shift__1714__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1714__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1714__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1714__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1714__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1714__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1714__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1714__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1714__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__127__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1714__Vfuncout;
    __Vfunc_awq_lane_shift__1715__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1715__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1715__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1715__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1715__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1715__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1715__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1715__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1715__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__128__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1715__Vfuncout;
    __Vfunc_awq_lane_shift__1716__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1716__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1716__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1716__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1716__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1716__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1716__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1716__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1716__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__129__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1716__Vfuncout;
    __Vfunc_awq_lane_shift__1717__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1717__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1717__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1717__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1717__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1717__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1717__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1717__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1717__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__130__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1717__Vfuncout;
    __Vfunc_awq_lane_shift__1718__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1718__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1718__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1718__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1718__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1718__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1718__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1718__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1718__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__131__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1718__Vfuncout;
    __Vfunc_awq_lane_shift__1719__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1719__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1719__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1719__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1719__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1719__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1719__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1719__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1719__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__132__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1719__Vfuncout;
    __Vfunc_awq_lane_shift__1720__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1720__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1720__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1720__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1720__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1720__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1720__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1720__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1720__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__133__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1720__Vfuncout;
    __Vfunc_awq_lane_shift__1721__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1721__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1721__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1721__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1721__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1721__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1721__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1721__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1721__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__134__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1721__Vfuncout;
    __Vfunc_awq_lane_shift__1722__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1722__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1722__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1722__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1722__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1722__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1722__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1722__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1722__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__135__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1722__Vfuncout;
    __Vfunc_awq_lane_shift__1723__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1723__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1723__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1723__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1723__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1723__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1723__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1723__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1723__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__136__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1723__Vfuncout;
    __Vfunc_awq_lane_shift__1724__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1724__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1724__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1724__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1724__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1724__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1724__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1724__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1724__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__137__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1724__Vfuncout;
    __Vfunc_awq_lane_shift__1725__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1725__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1725__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1725__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1725__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1725__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1725__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1725__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1725__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__138__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1725__Vfuncout;
    __Vfunc_awq_lane_shift__1726__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1726__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1726__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1726__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1726__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1726__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1726__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1726__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1726__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__139__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1726__Vfuncout;
    __Vfunc_awq_lane_shift__1727__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1727__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1727__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1727__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1727__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1727__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1727__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1727__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1727__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__140__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1727__Vfuncout;
    __Vfunc_awq_lane_shift__1728__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1728__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1728__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1728__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1728__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1728__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1728__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1728__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1728__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__141__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1728__Vfuncout;
    __Vfunc_awq_lane_shift__1729__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1729__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1729__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1729__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1729__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1729__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1729__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1729__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1729__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__142__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1729__Vfuncout;
    __Vfunc_awq_lane_shift__1730__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1730__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1730__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1730__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1730__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1730__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1730__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1730__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1730__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__143__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1730__Vfuncout;
    __Vfunc_awq_lane_shift__1731__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1731__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1731__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1731__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1731__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1731__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1731__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1731__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1731__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__144__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1731__Vfuncout;
    __Vfunc_awq_lane_shift__1732__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1732__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1732__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1732__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1732__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1732__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1732__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1732__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1732__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__145__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1732__Vfuncout;
    __Vfunc_awq_lane_shift__1733__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1733__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1733__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1733__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1733__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1733__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1733__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1733__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1733__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__146__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1733__Vfuncout;
    __Vfunc_awq_lane_shift__1734__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    __Vfunc_awq_lane_shift__1734__Vfuncout = ((0U == (IData)(__Vfunc_awq_lane_shift__1734__lane))
                                               ? 0U
                                               : ((1U 
                                                   == (IData)(__Vfunc_awq_lane_shift__1734__lane))
                                                   ? 0x10U
                                                   : 
                                                  ((2U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1734__lane))
                                                    ? 4U
                                                    : 
                                                   ((3U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1734__lane))
                                                     ? 0x14U
                                                     : 
                                                    ((4U 
                                                      == (IData)(__Vfunc_awq_lane_shift__1734__lane))
                                                      ? 8U
                                                      : 
                                                     ((5U 
                                                       == (IData)(__Vfunc_awq_lane_shift__1734__lane))
                                                       ? 0x18U
                                                       : 
                                                      ((6U 
                                                        == (IData)(__Vfunc_awq_lane_shift__1734__lane))
                                                        ? 0xcU
                                                        : 0x1cU)))))));
    vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__lanes__BRA__147__KET____DOT__shift 
        = __Vfunc_awq_lane_shift__1734__Vfuncout;
    __Vfunc_awq_lane_shift__1735__lane = (7U & vlSelf->anvil_qn1_top__DOT__native__DOT__decoder__DOT__projections__DOT__legal__DOT__output_row);
    vlSelf->__Vfunc_awq_lane_shift__1735__Vfuncout 
        = ((0U == (IData)(__Vfunc_awq_lane_shift__1735__lane))
            ? 0U : ((1U == (IData)(__Vfunc_awq_lane_shift__1735__lane))
                     ? 0x10U : ((2U == (IData)(__Vfunc_awq_lane_shift__1735__lane))
                                 ? 4U : ((3U == (IData)(__Vfunc_awq_lane_shift__1735__lane))
                                          ? 0x14U : 
                                         ((4U == (IData)(__Vfunc_awq_lane_shift__1735__lane))
                                           ? 8U : (
                                                   (5U 
                                                    == (IData)(__Vfunc_awq_lane_shift__1735__lane))
                                                    ? 0x18U
                                                    : 
                                                   ((6U 
                                                     == (IData)(__Vfunc_awq_lane_shift__1735__lane))
                                                     ? 0xcU
                                                     : 0x1cU)))))));
}
