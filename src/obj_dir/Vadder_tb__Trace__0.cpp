// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder_tb__Syms.h"


void Vadder_tb___024root__trace_chg_0_sub_0(Vadder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vadder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_chg_0\n"); );
    // Body
    Vadder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_tb___024root*>(voidSelf);
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vadder_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vadder_tb___024root__trace_chg_0_sub_0(Vadder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_chg_0_sub_0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgIData(oldp+0,(vlSelfRef.adder_tb__DOT__test_vectors
                               [0U].__PVT__op1),32);
        bufp->chgIData(oldp+1,(vlSelfRef.adder_tb__DOT__test_vectors
                               [0U].__PVT__op2),32);
        bufp->chgBit(oldp+2,(vlSelfRef.adder_tb__DOT__test_vectors
                             [0U].__PVT__cmd));
        bufp->chgIData(oldp+3,(vlSelfRef.adder_tb__DOT__test_vectors
                               [0U].__PVT__expected_result),32);
        bufp->chgBit(oldp+4,(vlSelfRef.adder_tb__DOT__test_vectors
                             [0U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+5,(vlSelfRef.adder_tb__DOT__test_vectors
                             [0U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+6,(vlSelfRef.adder_tb__DOT__test_vectors
                               [0U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+7,(vlSelfRef.adder_tb__DOT__test_vectors
                               [1U].__PVT__op1),32);
        bufp->chgIData(oldp+8,(vlSelfRef.adder_tb__DOT__test_vectors
                               [1U].__PVT__op2),32);
        bufp->chgBit(oldp+9,(vlSelfRef.adder_tb__DOT__test_vectors
                             [1U].__PVT__cmd));
        bufp->chgIData(oldp+10,(vlSelfRef.adder_tb__DOT__test_vectors
                                [1U].__PVT__expected_result),32);
        bufp->chgBit(oldp+11,(vlSelfRef.adder_tb__DOT__test_vectors
                              [1U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+12,(vlSelfRef.adder_tb__DOT__test_vectors
                              [1U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+13,(vlSelfRef.adder_tb__DOT__test_vectors
                                [1U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+14,(vlSelfRef.adder_tb__DOT__test_vectors
                                [2U].__PVT__op1),32);
        bufp->chgIData(oldp+15,(vlSelfRef.adder_tb__DOT__test_vectors
                                [2U].__PVT__op2),32);
        bufp->chgBit(oldp+16,(vlSelfRef.adder_tb__DOT__test_vectors
                              [2U].__PVT__cmd));
        bufp->chgIData(oldp+17,(vlSelfRef.adder_tb__DOT__test_vectors
                                [2U].__PVT__expected_result),32);
        bufp->chgBit(oldp+18,(vlSelfRef.adder_tb__DOT__test_vectors
                              [2U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+19,(vlSelfRef.adder_tb__DOT__test_vectors
                              [2U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+20,(vlSelfRef.adder_tb__DOT__test_vectors
                                [2U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+21,(vlSelfRef.adder_tb__DOT__test_vectors
                                [3U].__PVT__op1),32);
        bufp->chgIData(oldp+22,(vlSelfRef.adder_tb__DOT__test_vectors
                                [3U].__PVT__op2),32);
        bufp->chgBit(oldp+23,(vlSelfRef.adder_tb__DOT__test_vectors
                              [3U].__PVT__cmd));
        bufp->chgIData(oldp+24,(vlSelfRef.adder_tb__DOT__test_vectors
                                [3U].__PVT__expected_result),32);
        bufp->chgBit(oldp+25,(vlSelfRef.adder_tb__DOT__test_vectors
                              [3U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+26,(vlSelfRef.adder_tb__DOT__test_vectors
                              [3U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+27,(vlSelfRef.adder_tb__DOT__test_vectors
                                [3U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+28,(vlSelfRef.adder_tb__DOT__test_vectors
                                [4U].__PVT__op1),32);
        bufp->chgIData(oldp+29,(vlSelfRef.adder_tb__DOT__test_vectors
                                [4U].__PVT__op2),32);
        bufp->chgBit(oldp+30,(vlSelfRef.adder_tb__DOT__test_vectors
                              [4U].__PVT__cmd));
        bufp->chgIData(oldp+31,(vlSelfRef.adder_tb__DOT__test_vectors
                                [4U].__PVT__expected_result),32);
        bufp->chgBit(oldp+32,(vlSelfRef.adder_tb__DOT__test_vectors
                              [4U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+33,(vlSelfRef.adder_tb__DOT__test_vectors
                              [4U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+34,(vlSelfRef.adder_tb__DOT__test_vectors
                                [4U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+35,(vlSelfRef.adder_tb__DOT__test_vectors
                                [5U].__PVT__op1),32);
        bufp->chgIData(oldp+36,(vlSelfRef.adder_tb__DOT__test_vectors
                                [5U].__PVT__op2),32);
        bufp->chgBit(oldp+37,(vlSelfRef.adder_tb__DOT__test_vectors
                              [5U].__PVT__cmd));
        bufp->chgIData(oldp+38,(vlSelfRef.adder_tb__DOT__test_vectors
                                [5U].__PVT__expected_result),32);
        bufp->chgBit(oldp+39,(vlSelfRef.adder_tb__DOT__test_vectors
                              [5U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+40,(vlSelfRef.adder_tb__DOT__test_vectors
                              [5U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+41,(vlSelfRef.adder_tb__DOT__test_vectors
                                [5U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+42,(vlSelfRef.adder_tb__DOT__test_vectors
                                [6U].__PVT__op1),32);
        bufp->chgIData(oldp+43,(vlSelfRef.adder_tb__DOT__test_vectors
                                [6U].__PVT__op2),32);
        bufp->chgBit(oldp+44,(vlSelfRef.adder_tb__DOT__test_vectors
                              [6U].__PVT__cmd));
        bufp->chgIData(oldp+45,(vlSelfRef.adder_tb__DOT__test_vectors
                                [6U].__PVT__expected_result),32);
        bufp->chgBit(oldp+46,(vlSelfRef.adder_tb__DOT__test_vectors
                              [6U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+47,(vlSelfRef.adder_tb__DOT__test_vectors
                              [6U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+48,(vlSelfRef.adder_tb__DOT__test_vectors
                                [6U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+49,(vlSelfRef.adder_tb__DOT__test_vectors
                                [7U].__PVT__op1),32);
        bufp->chgIData(oldp+50,(vlSelfRef.adder_tb__DOT__test_vectors
                                [7U].__PVT__op2),32);
        bufp->chgBit(oldp+51,(vlSelfRef.adder_tb__DOT__test_vectors
                              [7U].__PVT__cmd));
        bufp->chgIData(oldp+52,(vlSelfRef.adder_tb__DOT__test_vectors
                                [7U].__PVT__expected_result),32);
        bufp->chgBit(oldp+53,(vlSelfRef.adder_tb__DOT__test_vectors
                              [7U].__PVT__expected_pos_ovf));
        bufp->chgBit(oldp+54,(vlSelfRef.adder_tb__DOT__test_vectors
                              [7U].__PVT__expected_neg_ovf));
        bufp->chgCData(oldp+55,(vlSelfRef.adder_tb__DOT__test_vectors
                                [7U].__PVT__expected_main_sum_flags_out),4);
        bufp->chgIData(oldp+56,(vlSelfRef.adder_tb__DOT__passed_tests),32);
        bufp->chgIData(oldp+57,(vlSelfRef.adder_tb__DOT__total_tests),32);
        bufp->chgBit(oldp+58,(vlSelfRef.adder_tb__DOT__test_passed));
        bufp->chgIData(oldp+59,(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i),32);
        bufp->chgIData(oldp+60,(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i),32);
        bufp->chgBit(oldp+61,(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i));
        bufp->chgIData(oldp+62,(vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i),32);
    }
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[3U] 
                      | vlSelfRef.__Vm_traceActivity
                      [4U])))) {
        bufp->chgIData(oldp+63,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out),32);
        bufp->chgBit(oldp+64,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw));
        bufp->chgBit(oldp+65,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw));
        bufp->chgCData(oldp+66,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_flags_out),4);
        bufp->chgQData(oldp+67,(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res),33);
        bufp->chgCData(oldp+69,(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags),4);
        bufp->chgQData(oldp+70,((QData)((IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out))),33);
    }
    bufp->chgBit(oldp+72,(vlSelfRef.clk));
}

void Vadder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_cleanup\n"); );
    // Body
    Vadder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_tb___024root*>(voidSelf);
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
