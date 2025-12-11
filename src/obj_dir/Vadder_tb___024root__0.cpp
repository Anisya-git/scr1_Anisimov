// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_tb.h for the primary calling header

#include "Vadder_tb__pch.h"

VlCoroutine Vadder_tb___024root___eval_initial__TOP__Vtiming__0(Vadder_tb___024root* vlSelf);

void Vadder_tb___024root___eval_initial(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_initial\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vadder_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vadder_tb___024root___eval_initial__TOP__Vtiming__0(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __Vfunc_adder_tb__DOT__check_result__0__Vfuncout;
    __Vfunc_adder_tb__DOT__check_result__0__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_adder_tb__DOT__check_result__0__test_num;
    __Vfunc_adder_tb__DOT__check_result__0__test_num = 0;
    IData/*31:0*/ __Vfunc_adder_tb__DOT__check_result__0__actual;
    __Vfunc_adder_tb__DOT__check_result__0__actual = 0;
    CData/*0:0*/ __Vfunc_adder_tb__DOT__check_result__0__actual_pos_ovf;
    __Vfunc_adder_tb__DOT__check_result__0__actual_pos_ovf = 0;
    CData/*0:0*/ __Vfunc_adder_tb__DOT__check_result__0__actual_neg_ovf;
    __Vfunc_adder_tb__DOT__check_result__0__actual_neg_ovf = 0;
    IData/*31:0*/ __Vfunc_adder_tb__DOT__check_result__0__expected;
    __Vfunc_adder_tb__DOT__check_result__0__expected = 0;
    CData/*0:0*/ __Vfunc_adder_tb__DOT__check_result__0__expected_pos_ovf;
    __Vfunc_adder_tb__DOT__check_result__0__expected_pos_ovf = 0;
    CData/*0:0*/ __Vfunc_adder_tb__DOT__check_result__0__expected_neg_ovf;
    __Vfunc_adder_tb__DOT__check_result__0__expected_neg_ovf = 0;
    CData/*0:0*/ __Vfunc_adder_tb__DOT__check_result__0__success;
    __Vfunc_adder_tb__DOT__check_result__0__success = 0;
    // Body
    VL_WRITEF_NX("========================================\nStarting ALU Testbench with Coverage\n========================================\n",0);
    vlSelfRef.adder_tb__DOT__test_vectors[0U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(1U), .__PVT__op2 = (IData)(2U), 
        .__PVT__cmd = (CData)(1U), .__PVT__expected_result = (IData)(3U), 
        .__PVT__expected_pos_ovf = (CData)(0U), .__PVT__expected_neg_ovf = (CData)(0U), 
        .__PVT__expected_main_sum_flags_out = (CData)(0U)};
    vlSelfRef.adder_tb__DOT__test_vectors[1U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(5U), .__PVT__op2 = (IData)(3U), 
        .__PVT__cmd = (CData)(0U), .__PVT__expected_result = (IData)(2U), 
        .__PVT__expected_pos_ovf = (CData)(0U), .__PVT__expected_neg_ovf = (CData)(0U), 
        .__PVT__expected_main_sum_flags_out = (CData)(0U)};
    vlSelfRef.adder_tb__DOT__test_vectors[2U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(0xffffffffU), .__PVT__op2 = (IData)(1U), 
        .__PVT__cmd = (CData)(1U), .__PVT__expected_result = (IData)(0U), 
        .__PVT__expected_pos_ovf = (CData)(0U), .__PVT__expected_neg_ovf = (CData)(1U), 
        .__PVT__expected_main_sum_flags_out = (CData)(0x0dU)};
    vlSelfRef.adder_tb__DOT__test_vectors[3U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(0x7fffffffU), .__PVT__op2 = (IData)(0x80000000U), 
        .__PVT__cmd = (CData)(1U), .__PVT__expected_result = (IData)(0xffffffffU), 
        .__PVT__expected_pos_ovf = (CData)(1U), .__PVT__expected_neg_ovf = (CData)(0U), 
        .__PVT__expected_main_sum_flags_out = (CData)(3U)};
    vlSelfRef.adder_tb__DOT__test_vectors[4U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(0x80000000U), .__PVT__op2 = (IData)(1U), 
        .__PVT__cmd = (CData)(0U), .__PVT__expected_result = (IData)(0x7fffffffU), 
        .__PVT__expected_pos_ovf = (CData)(0U), .__PVT__expected_neg_ovf = (CData)(1U), 
        .__PVT__expected_main_sum_flags_out = (CData)(1U)};
    vlSelfRef.adder_tb__DOT__test_vectors[5U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(0U), .__PVT__op2 = (IData)(0U), 
        .__PVT__cmd = (CData)(1U), .__PVT__expected_result = (IData)(0U), 
        .__PVT__expected_pos_ovf = (CData)(0U), .__PVT__expected_neg_ovf = (CData)(0U), 
        .__PVT__expected_main_sum_flags_out = (CData)(4U)};
    vlSelfRef.adder_tb__DOT__test_vectors[6U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(0x87654321U), .__PVT__op2 = (IData)(0x12345678U), 
        .__PVT__cmd = (CData)(1U), .__PVT__expected_result = (IData)(0x99999999U), 
        .__PVT__expected_pos_ovf = (CData)(0U), .__PVT__expected_neg_ovf = (CData)(0U), 
        .__PVT__expected_main_sum_flags_out = (CData)(2U)};
    vlSelfRef.adder_tb__DOT__test_vectors[7U] = Vadder_tb_adder_tb__DOT__test_vector_t__struct__0{
        .__PVT__op1 = (IData)(0U), .__PVT__op2 = (IData)(1U), 
        .__PVT__cmd = (CData)(0U), .__PVT__expected_result = (IData)(0xffffffffU), 
        .__PVT__expected_pos_ovf = (CData)(0U), .__PVT__expected_neg_ovf = (CData)(0U), 
        .__PVT__expected_main_sum_flags_out = (CData)(0x0aU)};
    VL_WRITEF_NX("Starting tests...\n",0);
    vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 8U, vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i)) {
        VL_WRITEF_NX("\n[Test#%0d]\n",0,32,vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i);
        vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
            = vlSelfRef.adder_tb__DOT__test_vectors
            [(7U & vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i)]
            .__PVT__op1;
        vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
            = vlSelfRef.adder_tb__DOT__test_vectors
            [(7U & vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i)]
            .__PVT__op2;
        vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i 
            = vlSelfRef.adder_tb__DOT__test_vectors
            [(7U & vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i)]
            .__PVT__cmd;
        co_await vlSelfRef.__VtrigSched_hd7b2d12f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "adder_tb.sv", 
                                                             139);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        VL_WRITEF_NX("  Result: %x, Pos_OVF: %b, Neg_OVF: %b,flags:%x\n",0,
                     33,(QData)((IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out)),
                     1,vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw,
                     1,(IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw),
                     4,vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_flags_out);
        __Vfunc_adder_tb__DOT__check_result__0__expected_neg_ovf 
            = vlSelfRef.adder_tb__DOT__test_vectors
            [(7U & vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i)]
            .__PVT__expected_neg_ovf;
        __Vfunc_adder_tb__DOT__check_result__0__expected_pos_ovf 
            = vlSelfRef.adder_tb__DOT__test_vectors
            [(7U & vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i)]
            .__PVT__expected_pos_ovf;
        __Vfunc_adder_tb__DOT__check_result__0__expected 
            = vlSelfRef.adder_tb__DOT__test_vectors
            [(7U & vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i)]
            .__PVT__expected_result;
        __Vfunc_adder_tb__DOT__check_result__0__actual_neg_ovf 
            = vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw;
        __Vfunc_adder_tb__DOT__check_result__0__actual_pos_ovf 
            = vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw;
        __Vfunc_adder_tb__DOT__check_result__0__actual 
            = vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out;
        __Vfunc_adder_tb__DOT__check_result__0__test_num 
            = vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i;
        __Vfunc_adder_tb__DOT__check_result__0__success = 0;
        __Vfunc_adder_tb__DOT__check_result__0__success = 1U;
        if (VL_UNLIKELY(((__Vfunc_adder_tb__DOT__check_result__0__actual 
                          != __Vfunc_adder_tb__DOT__check_result__0__expected)))) {
            VL_WRITEF_NX("[Test#%0d] ERROR: Result mismatch! Expected: %x, Got: %x\n",0,
                         32,__Vfunc_adder_tb__DOT__check_result__0__test_num,
                         32,__Vfunc_adder_tb__DOT__check_result__0__expected,
                         32,__Vfunc_adder_tb__DOT__check_result__0__actual);
            __Vfunc_adder_tb__DOT__check_result__0__success = 0U;
            ++(vlSymsp->__Vcoverage[4]);
        } else {
            ++(vlSymsp->__Vcoverage[5]);
        }
        if (VL_UNLIKELY((((IData)(__Vfunc_adder_tb__DOT__check_result__0__actual_pos_ovf) 
                          != (IData)(__Vfunc_adder_tb__DOT__check_result__0__expected_pos_ovf))))) {
            VL_WRITEF_NX("[Test#%0d] ERROR: Pos OVF mismatch! Expected: %b, Got: %b\n",0,
                         32,__Vfunc_adder_tb__DOT__check_result__0__test_num,
                         1,(IData)(__Vfunc_adder_tb__DOT__check_result__0__expected_pos_ovf),
                         1,__Vfunc_adder_tb__DOT__check_result__0__actual_pos_ovf);
            __Vfunc_adder_tb__DOT__check_result__0__success = 0U;
            ++(vlSymsp->__Vcoverage[6]);
        } else {
            ++(vlSymsp->__Vcoverage[7]);
        }
        if (VL_UNLIKELY((((IData)(__Vfunc_adder_tb__DOT__check_result__0__actual_neg_ovf) 
                          != (IData)(__Vfunc_adder_tb__DOT__check_result__0__expected_neg_ovf))))) {
            VL_WRITEF_NX("[Test#%0d] ERROR: Neg OVF mismatch! Expected: %b, Got: %b\n",0,
                         32,__Vfunc_adder_tb__DOT__check_result__0__test_num,
                         1,(IData)(__Vfunc_adder_tb__DOT__check_result__0__expected_neg_ovf),
                         1,__Vfunc_adder_tb__DOT__check_result__0__actual_neg_ovf);
            __Vfunc_adder_tb__DOT__check_result__0__success = 0U;
            ++(vlSymsp->__Vcoverage[8]);
        } else {
            ++(vlSymsp->__Vcoverage[9]);
        }
        if (VL_UNLIKELY((__Vfunc_adder_tb__DOT__check_result__0__success))) {
            VL_WRITEF_NX("[Test#%0d] PASSED\n",0,32,
                         __Vfunc_adder_tb__DOT__check_result__0__test_num);
            vlSelfRef.adder_tb__DOT__passed_tests = 
                ((IData)(1U) + vlSelfRef.adder_tb__DOT__passed_tests);
            ++(vlSymsp->__Vcoverage[10]);
        } else {
            ++(vlSymsp->__Vcoverage[11]);
        }
        vlSelfRef.adder_tb__DOT__total_tests = ((IData)(1U) 
                                                + vlSelfRef.adder_tb__DOT__total_tests);
        __Vfunc_adder_tb__DOT__check_result__0__Vfuncout 
            = __Vfunc_adder_tb__DOT__check_result__0__success;
        ++(vlSymsp->__Vcoverage[12]);
        vlSelfRef.adder_tb__DOT__test_passed = __Vfunc_adder_tb__DOT__check_result__0__Vfuncout;
        if (vlSelfRef.adder_tb__DOT__test_passed) {
            VL_WRITEF_NX("  [PASS]\n",0);
            vlSelfRef.adder_tb__DOT__passed_tests = 
                ((IData)(1U) + vlSelfRef.adder_tb__DOT__passed_tests);
            ++(vlSymsp->__Vcoverage[15]);
        } else {
            VL_WRITEF_NX("  [FAIL]\n",0);
            ++(vlSymsp->__Vcoverage[16]);
        }
        vlSelfRef.adder_tb__DOT__total_tests = ((IData)(1U) 
                                                + vlSelfRef.adder_tb__DOT__total_tests);
        vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i = 0U;
        vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i = 0U;
        vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i = 0U;
        co_await vlSelfRef.__VtrigSched_hd7b2d12f__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge clk)", 
                                                             "adder_tb.sv", 
                                                             173);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
        vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.adder_tb__DOT__unnamedblk1__DOT__i);
        ++(vlSymsp->__Vcoverage[17]);
    }
    VL_WRITEF_NX("\n=== Test Summary ===\nTotal: %0d, Passed: %0d, Failed: %0d\n",0,
                 32,vlSelfRef.adder_tb__DOT__total_tests,
                 32,vlSelfRef.adder_tb__DOT__passed_tests,
                 32,(vlSelfRef.adder_tb__DOT__total_tests 
                     - vlSelfRef.adder_tb__DOT__passed_tests));
    if ((vlSelfRef.adder_tb__DOT__passed_tests == vlSelfRef.adder_tb__DOT__total_tests)) {
        VL_WRITEF_NX("ALL TESTS PASSED!\n",0);
        ++(vlSymsp->__Vcoverage[18]);
    } else {
        VL_WRITEF_NX("SOME TESTS FAILED!\n",0);
        ++(vlSymsp->__Vcoverage[19]);
    }
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "adder_tb.sv", 
                                         187);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_FINISH_MT("adder_tb.sv", 188, "");
    ++(vlSymsp->__Vcoverage[20]);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vadder_tb___024root___eval_triggers__ico(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_triggers__ico\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vadder_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vadder_tb___024root___ico_sequent__TOP__0(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___ico_sequent__TOP__0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.adder_tb__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.adder_tb__DOT____Vtogcov__clk);
        vlSelfRef.adder_tb__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
}

void Vadder_tb___024root___eval_ico(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_ico\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vadder_tb___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vadder_tb___024root___eval_phase__ico(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_phase__ico\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vadder_tb___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vadder_tb___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vadder_tb___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vadder_tb___024root___eval_triggers__act(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_triggers__act\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vadder_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vadder_tb___024root___act_comb__TOP__0(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___act_comb__TOP__0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.adder_tb__DOT__test_passed) 
         ^ (IData)(vlSelfRef.adder_tb__DOT____Vtogcov__test_passed))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 13, vlSelfRef.adder_tb__DOT__test_passed, vlSelfRef.adder_tb__DOT____Vtogcov__test_passed);
        vlSelfRef.adder_tb__DOT____Vtogcov__test_passed 
            = vlSelfRef.adder_tb__DOT__test_passed;
    }
    if ((vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
         ^ vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op1_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 21, vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op1_i);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op1_i 
            = vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i;
    }
    if ((vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
         ^ vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op2_i)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 85, vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op2_i);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op2_i 
            = vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i;
    }
    if (((IData)(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i) 
         ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_cmd_i))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 149, vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_cmd_i);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_cmd_i 
            = vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i;
    }
    vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
        = (0x00000001ffffffffULL & ((IData)(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i)
                                     ? ([&]() {
                    ++(vlSymsp->__Vcoverage[304]);
                }(), ((QData)((IData)(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i)) 
                      + (QData)((IData)(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i))))
                                     : ([&]() {
                    ++(vlSymsp->__Vcoverage[303]);
                }(), ((QData)((IData)(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i)) 
                      - (QData)((IData)(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i))))));
    vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out 
        = (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res);
    vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw 
        = (((~ (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
                >> 0x0000001fU)) & (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
                                    >> 0x0000001fU)) 
           & (vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
              >> 0x0000001fU));
    vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw 
        = (((vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
             >> 0x0000001fU) & (~ (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
                                   >> 0x0000001fU))) 
           & (~ (vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
                 >> 0x0000001fU)));
    vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags 
        = ((0x0eU & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags)) 
           | (1U & (IData)((vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
                            >> 0x20U))));
    vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags 
        = ((7U & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags)) 
           | (8U & ((~ (0U != (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res))) 
                    << 3U)));
    vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags 
        = ((9U & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags)) 
           | (((2U & ((IData)((vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
                               >> 0x1fU)) << 1U)) | 
               ((IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw) 
                | (IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw))) 
              << 1U));
    vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_flags_out 
        = ((8U & ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
                  << 3U)) | (7U & ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
                                   >> 1U)));
    if ((1U & (~ (IData)(vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i)))) {
        ++(vlSymsp->__Vcoverage[301]);
    }
    if (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_cmd_i) {
        ++(vlSymsp->__Vcoverage[302]);
    }
    if ((((~ (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
              >> 0x0000001fU)) & (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
                                  >> 0x0000001fU)) 
         & (vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
            >> 0x0000001fU))) {
        ++(vlSymsp->__Vcoverage[305]);
    }
    if ((1U & (~ (IData)((vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
                          >> 0x1fU))))) {
        ++(vlSymsp->__Vcoverage[306]);
    }
    if ((1U & (~ (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
                  >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[307]);
    }
    if ((vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[308]);
    }
    if ((((vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
           >> 0x0000001fU) & (~ (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
                                 >> 0x0000001fU))) 
         & (~ (vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
               >> 0x0000001fU)))) {
        ++(vlSymsp->__Vcoverage[309]);
    }
    if ((1U & (IData)((vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
                       >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[310]);
    }
    if ((vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op2_i 
         >> 0x1fU)) {
        ++(vlSymsp->__Vcoverage[311]);
    }
    if ((1U & (~ (vlSymsp->TOP__adder_tb__DOT__intf_inst.exu2ialu_main_op1_i 
                  >> 0x1fU)))) {
        ++(vlSymsp->__Vcoverage[312]);
    }
    if (vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw) {
        ++(vlSymsp->__Vcoverage[313]);
    }
    if (vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw) {
        ++(vlSymsp->__Vcoverage[314]);
    }
    if ((1U & ((~ (IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw)) 
               & (~ (IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw))))) {
        ++(vlSymsp->__Vcoverage[315]);
    }
    ++(vlSymsp->__Vcoverage[316]);
    if ((vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res 
         ^ vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res)) {
        VL_COV_TOGGLE_CHG_ST_Q(33, vlSymsp->__Vcoverage + 227, vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res 
            = vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_res;
    }
    if ((vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out 
         ^ vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res_out)) {
        VL_COV_TOGGLE_CHG_ST_I(32, vlSymsp->__Vcoverage + 151, vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res_out);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res_out 
            = vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_res_out;
    }
    if (((IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw) 
         ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_pos_ovflw))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 215, vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_pos_ovflw);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_pos_ovflw 
            = vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw;
    }
    if (((IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw) 
         ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_neg_ovflw))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 217, vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_neg_ovflw);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_neg_ovflw 
            = vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw;
    }
    if (((IData)(vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_flags_out) 
         ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags_out))) {
        VL_COV_TOGGLE_CHG_ST_I(4, vlSymsp->__Vcoverage + 219, vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_flags_out, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags_out);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags_out 
            = vlSelfRef.adder_tb__DOT____Vcellout__DUT__main_sum_flags_out;
    }
    if ((8U & ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
               ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 293, 
                               ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
                                >> 3U), ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags) 
                                         >> 3U));
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags 
            = ((7U & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)) 
               | (8U & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags)));
    }
    if ((4U & ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
               ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 295, 
                               ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
                                >> 2U), ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags) 
                                         >> 2U));
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags 
            = ((0x0bU & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)) 
               | (4U & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags)));
    }
    if ((2U & ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
               ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 297, 
                               ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
                                >> 1U), ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags) 
                                         >> 1U));
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags 
            = ((0x0dU & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)) 
               | (2U & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags)));
    }
    if ((1U & ((IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags) 
               ^ (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 299, vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags, vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags);
        vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags 
            = ((0x0eU & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags)) 
               | (1U & (IData)(vlSelfRef.adder_tb__DOT__DUT__DOT__main_sum_flags)));
    }
}

void Vadder_tb___024root___eval_act(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_act\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
        Vadder_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[3U] = 1U;
    }
}

void Vadder_tb___024root___eval_nba(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_nba\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vadder_tb___024root___act_comb__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[4U] = 1U;
    }
}

void Vadder_tb___024root___timing_commit(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___timing_commit\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered[0U]))) {
        vlSelfRef.__VtrigSched_hd7b2d12f__0.commit(
                                                   "@(posedge clk)");
    }
}

void Vadder_tb___024root___timing_resume(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___timing_resume\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hd7b2d12f__0.resume(
                                                   "@(posedge clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vadder_tb___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vadder_tb___024root___eval_phase__act(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_phase__act\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vadder_tb___024root___eval_triggers__act(vlSelf);
    Vadder_tb___024root___timing_commit(vlSelf);
    Vadder_tb___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vadder_tb___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        Vadder_tb___024root___timing_resume(vlSelf);
        Vadder_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

void Vadder_tb___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vadder_tb___024root___eval_phase__nba(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_phase__nba\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vadder_tb___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vadder_tb___024root___eval_nba(vlSelf);
        Vadder_tb___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vadder_tb___024root___eval(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vadder_tb___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("adder_tb.sv", 20, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vadder_tb___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vadder_tb___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("adder_tb.sv", 20, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vadder_tb___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("adder_tb.sv", 20, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vadder_tb___024root___eval_phase__act(vlSelf));
    } while (Vadder_tb___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vadder_tb___024root___eval_debug_assertions(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_debug_assertions\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
}
#endif  // VL_DEBUG

std::string VL_TO_STRING(const Vadder_tb_adder_tb__DOT__test_vector_t__struct__0& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root::VL_TO_STRING\n"); );
    // Body
    std::string out;
    out += "'{op1:" + VL_TO_STRING(obj.__PVT__op1);
    out += ", op2:" + VL_TO_STRING(obj.__PVT__op2);
    out += ", cmd:" + VL_TO_STRING(obj.__PVT__cmd);
    out += ", expected_result:" + VL_TO_STRING(obj.__PVT__expected_result);
    out += ", expected_pos_ovf:" + VL_TO_STRING(obj.__PVT__expected_pos_ovf);
    out += ", expected_neg_ovf:" + VL_TO_STRING(obj.__PVT__expected_neg_ovf);
    out += ", expected_main_sum_flags_out:" + VL_TO_STRING(obj.__PVT__expected_main_sum_flags_out);
    out += "}";
    return (out);
}
