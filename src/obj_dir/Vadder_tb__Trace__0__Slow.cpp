// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vadder_tb__Syms.h"


VL_ATTR_COLD void Vadder_tb___024root__trace_init_sub__TOP__adder_tb__DOT__intf_inst__0(Vadder_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vadder_tb___024root__trace_init_sub__TOP__0(Vadder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_init_sub__TOP__0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->pushPrefix("$rootio", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+73,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->pushPrefix("adder_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+73,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("intf_inst", VerilatedTracePrefixType::SCOPE_INTERFACE);
    Vadder_tb___024root__trace_init_sub__TOP__adder_tb__DOT__intf_inst__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("test_vectors", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+1,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+2,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+3,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+4,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+5,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+6,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+8,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+10,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+11,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+12,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+13,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+14,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+15,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+17,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+18,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+19,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+20,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+21,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+22,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+25,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+26,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+28,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[4]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+29,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+31,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+32,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+33,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+34,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+35,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[5]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+36,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+37,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+38,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+39,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+40,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+42,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[6]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+43,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+45,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+46,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+47,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+48,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+49,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("[7]", VerilatedTracePrefixType::STRUCT_UNPACKED);
    tracep->declBus(c+50,0,"op1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+51,0,"op2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+52,0,"cmd",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+53,0,"expected_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+54,0,"expected_pos_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+55,0,"expected_neg_ovf",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+56,0,"expected_main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+57,0,"passed_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBus(c+58,0,"total_tests",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, false,-1, 31,0);
    tracep->declBit(c+59,0,"test_passed",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::BIT, false,-1);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+60,0,"exu2ialu_main_op1_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"exu2ialu_main_op2_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"exu2ialu_cmd_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+64,0,"main_sum_res_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+65,0,"main_sum_pos_ovflw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"main_sum_neg_ovflw",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"main_sum_flags_out",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declQuad(c+68,0,"main_sum_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBus(c+70,0,"main_sum_flags",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+63,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Vadder_tb___024root__trace_init_sub__TOP__adder_tb__DOT__intf_inst__0(Vadder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_init_sub__TOP__adder_tb__DOT__intf_inst__0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    tracep->declBit(c+73,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+60,0,"exu2ialu_main_op1_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"exu2ialu_main_op2_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+62,0,"exu2ialu_cmd_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+71,0,"main_sum_res_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 32,0);
    tracep->declBit(c+65,0,"main_sum_pos_ovflw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+66,0,"main_sum_neg_ovflw",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+67,0,"main_sum_flags_out",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
}

VL_ATTR_COLD void Vadder_tb___024root__trace_init_top(Vadder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_init_top\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vadder_tb___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vadder_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vadder_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vadder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vadder_tb___024root__trace_register(Vadder_tb___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_register\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vadder_tb___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vadder_tb___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vadder_tb___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vadder_tb___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vadder_tb___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_const_0\n"); );
    // Body
    Vadder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_tb___024root*>(voidSelf);
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
}

VL_ATTR_COLD void Vadder_tb___024root__trace_full_0_sub_0(Vadder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vadder_tb___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_full_0\n"); );
    // Body
    Vadder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vadder_tb___024root*>(voidSelf);
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vadder_tb___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vadder_tb___024root__trace_full_0_sub_0(Vadder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root__trace_full_0_sub_0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+1,(vlSelfRef.adder_tb__DOT__test_vectors
                            [0U].__PVT__op1),32);
    bufp->fullIData(oldp+2,(vlSelfRef.adder_tb__DOT__test_vectors
                            [0U].__PVT__op2),32);
    bufp->fullBit(oldp+3,(vlSelfRef.adder_tb__DOT__test_vectors
                          [0U].__PVT__cmd));
    bufp->fullIData(oldp+4,(vlSelfRef.adder_tb__DOT__test_vectors
                            [0U].__PVT__expected_result),32);
    bufp->fullBit(oldp+5,(vlSelfRef.adder_tb__DOT__test_vectors
                          [0U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+6,(vlSelfRef.adder_tb__DOT__test_vectors
                          [0U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+7,(vlSelfRef.adder_tb__DOT__test_vectors
                            [0U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+8,(vlSelfRef.adder_tb__DOT__test_vectors
                            [1U].__PVT__op1),32);
    bufp->fullIData(oldp+9,(vlSelfRef.adder_tb__DOT__test_vectors
                            [1U].__PVT__op2),32);
    bufp->fullBit(oldp+10,(vlSelfRef.adder_tb__DOT__test_vectors
                           [1U].__PVT__cmd));
    bufp->fullIData(oldp+11,(vlSelfRef.adder_tb__DOT__test_vectors
                             [1U].__PVT__expected_result),32);
    bufp->fullBit(oldp+12,(vlSelfRef.adder_tb__DOT__test_vectors
                           [1U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+13,(vlSelfRef.adder_tb__DOT__test_vectors
                           [1U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+14,(vlSelfRef.adder_tb__DOT__test_vectors
                             [1U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+15,(vlSelfRef.adder_tb__DOT__test_vectors
                             [2U].__PVT__op1),32);
    bufp->fullIData(oldp+16,(vlSelfRef.adder_tb__DOT__test_vectors
                             [2U].__PVT__op2),32);
    bufp->fullBit(oldp+17,(vlSelfRef.adder_tb__DOT__test_vectors
                           [2U].__PVT__cmd));
    bufp->fullIData(oldp+18,(vlSelfRef.adder_tb__DOT__test_vectors
                             [2U].__PVT__expected_result),32);
    bufp->fullBit(oldp+19,(vlSelfRef.adder_tb__DOT__test_vectors
                           [2U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+20,(vlSelfRef.adder_tb__DOT__test_vectors
                           [2U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+21,(vlSelfRef.adder_tb__DOT__test_vectors
                             [2U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+22,(vlSelfRef.adder_tb__DOT__test_vectors
                             [3U].__PVT__op1),32);
    bufp->fullIData(oldp+23,(vlSelfRef.adder_tb__DOT__test_vectors
                             [3U].__PVT__op2),32);
    bufp->fullBit(oldp+24,(vlSelfRef.adder_tb__DOT__test_vectors
                           [3U].__PVT__cmd));
    bufp->fullIData(oldp+25,(vlSelfRef.adder_tb__DOT__test_vectors
                             [3U].__PVT__expected_result),32);
    bufp->fullBit(oldp+26,(vlSelfRef.adder_tb__DOT__test_vectors
                           [3U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+27,(vlSelfRef.adder_tb__DOT__test_vectors
                           [3U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+28,(vlSelfRef.adder_tb__DOT__test_vectors
                             [3U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+29,(vlSelfRef.adder_tb__DOT__test_vectors
                             [4U].__PVT__op1),32);
    bufp->fullIData(oldp+30,(vlSelfRef.adder_tb__DOT__test_vectors
                             [4U].__PVT__op2),32);
    bufp->fullBit(oldp+31,(vlSelfRef.adder_tb__DOT__test_vectors
                           [4U].__PVT__cmd));
    bufp->fullIData(oldp+32,(vlSelfRef.adder_tb__DOT__test_vectors
                             [4U].__PVT__expected_result),32);
    bufp->fullBit(oldp+33,(vlSelfRef.adder_tb__DOT__test_vectors
                           [4U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+34,(vlSelfRef.adder_tb__DOT__test_vectors
                           [4U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+35,(vlSelfRef.adder_tb__DOT__test_vectors
                             [4U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+36,(vlSelfRef.adder_tb__DOT__test_vectors
                             [5U].__PVT__op1),32);
    bufp->fullIData(oldp+37,(vlSelfRef.adder_tb__DOT__test_vectors
                             [5U].__PVT__op2),32);
    bufp->fullBit(oldp+38,(vlSelfRef.adder_tb__DOT__test_vectors
                           [5U].__PVT__cmd));
    bufp->fullIData(oldp+39,(vlSelfRef.adder_tb__DOT__test_vectors
                             [5U].__PVT__expected_result),32);
    bufp->fullBit(oldp+40,(vlSelfRef.adder_tb__DOT__test_vectors
                           [5U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+41,(vlSelfRef.adder_tb__DOT__test_vectors
                           [5U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+42,(vlSelfRef.adder_tb__DOT__test_vectors
                             [5U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+43,(vlSelfRef.adder_tb__DOT__test_vectors
                             [6U].__PVT__op1),32);
    bufp->fullIData(oldp+44,(vlSelfRef.adder_tb__DOT__test_vectors
                             [6U].__PVT__op2),32);
    bufp->fullBit(oldp+45,(vlSelfRef.adder_tb__DOT__test_vectors
                           [6U].__PVT__cmd));
    bufp->fullIData(oldp+46,(vlSelfRef.adder_tb__DOT__test_vectors
                             [6U].__PVT__expected_result),32);
    bufp->fullBit(oldp+47,(vlSelfRef.adder_tb__DOT__test_vectors
                           [6U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+48,(vlSelfRef.adder_tb__DOT__test_vectors
                           [6U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+49,(vlSelfRef.adder_tb__DOT__test_vectors
                             [6U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+50,(vlSelfRef.adder_tb__DOT__test_vectors
                             [7U].__PVT__op1),32);
    bufp->fullIData(oldp+51,(vlSelfRef.adder_tb__DOT__test_vectors
                             [7U].__PVT__op2),32);
    bufp->fullBit(oldp+52,(vlSelfRef.adder_tb__DOT__test_vectors
                           [7U].__PVT__cmd));
    bufp->fullIData(oldp+53,(vlSelfRef.adder_tb__DOT__test_vectors
                             [7U].__PVT__expected_result),32);
    bufp->fullBit(oldp+54,(vlSelfRef.adder_tb__DOT__test_vectors
                           [7U].__PVT__expected_pos_ovf));
    bufp->fullBit(oldp+55,(vlSelfRef.adder_tb__DOT__test_vectors
                           [7U].__PVT__expected_neg_ovf));
    bufp->fullCData(oldp+56,(vlSelfRef.adder_tb__DOT__test_vectors
                             [7U].__PVT__expected_main_sum_flags_out),4);
    bufp->fullIData(oldp+57,(vlSelfRef.adder_tb__DOT__passed_tests),32);
    bufp->fullIData(oldp+58,(vlSelfRef.adder_tb__DOT__total_tests),32);
    bufp->fullBit(oldp+59,(vlSelfRef.adder_tb__DOT__test_passed));
    bufp->fullIData(oldp+60,(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i),32);
    bufp->fullBit(oldp+62,(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i));
    bufp->fullIData(oldp+63,(vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+64,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out),32);
    bufp->fullBit(oldp+65,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw));
    bufp->fullBit(oldp+66,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw));
    bufp->fullCData(oldp+67,(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_flags_out),4);
    bufp->fullQData(oldp+68,(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res),33);
    bufp->fullCData(oldp+70,(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags),4);
    bufp->fullQData(oldp+71,((QData)((IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out))),33);
    bufp->fullBit(oldp+73,(vlSelfRef.clk));
}
