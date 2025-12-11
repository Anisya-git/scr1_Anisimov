// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_tb.h for the primary calling header

#include "Vadder_tb__pch.h"

VL_ATTR_COLD void Vadder_tb___024root___eval_static__TOP(Vadder_tb___024root* vlSelf);
VL_ATTR_COLD void Vadder_tb___024root____Vm_traceActivitySetAll(Vadder_tb___024root* vlSelf);

VL_ATTR_COLD void Vadder_tb___024root___eval_static(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_static\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vadder_tb___024root___eval_static__TOP(vlSelf);
    Vadder_tb___024root____Vm_traceActivitySetAll(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
}

VL_ATTR_COLD void Vadder_tb___024root___eval_static__TOP(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_static__TOP\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.adder_tb__DOT__passed_tests = 0U;
    ++(vlSymsp->__Vcoverage[2]);
    vlSelfRef.adder_tb__DOT__total_tests = 0U;
    ++(vlSymsp->__Vcoverage[3]);
}

VL_ATTR_COLD void Vadder_tb___024root___eval_final(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_final\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vadder_tb___024root___eval_phase__stl(Vadder_tb___024root* vlSelf);

VL_ATTR_COLD void Vadder_tb___024root___eval_settle(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_settle\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vadder_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("adder_tb.sv", 20, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vadder_tb___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vadder_tb___024root___eval_triggers__stl(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_triggers__stl\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vadder_tb___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vadder_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_tb___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vadder_tb___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vadder_tb___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vadder_tb___024root___stl_sequent__TOP__0(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___stl_sequent__TOP__0\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (((IData)(vlSelfRef.clk) ^ (IData)(vlSelfRef.adder_tb__DOT____Vtogcov__clk))) {
        VL_COV_TOGGLE_CHG_ST_I(1, vlSymsp->__Vcoverage + 0, vlSelfRef.clk, vlSelfRef.adder_tb__DOT____Vtogcov__clk);
        vlSelfRef.adder_tb__DOT____Vtogcov__clk = vlSelfRef.clk;
    }
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

VL_ATTR_COLD void Vadder_tb___024root___eval_stl(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_stl\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vadder_tb___024root___stl_sequent__TOP__0(vlSelf);
        Vadder_tb___024root____Vm_traceActivitySetAll(vlSelf);
    }
}

VL_ATTR_COLD bool Vadder_tb___024root___eval_phase__stl(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___eval_phase__stl\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vadder_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vadder_tb___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vadder_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vadder_tb___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_tb___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vadder_tb___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vadder_tb___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vadder_tb___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vadder_tb___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vadder_tb___024root____Vm_traceActivitySetAll(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root____Vm_traceActivitySetAll\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.__Vm_traceActivity[3U] = 1U;
    vlSelfRef.__Vm_traceActivity[4U] = 1U;
}

VL_ATTR_COLD void Vadder_tb___024root___ctor_var_reset(Vadder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___ctor_var_reset\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->adder_tb__DOT__test_vectors[__Vi0].__PVT__op1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16146230083408283496ull);
        vlSelf->adder_tb__DOT__test_vectors[__Vi0].__PVT__op2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16146230083408283496ull);
        vlSelf->adder_tb__DOT__test_vectors[__Vi0].__PVT__cmd = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16146230083408283496ull);
        vlSelf->adder_tb__DOT__test_vectors[__Vi0].__PVT__expected_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16146230083408283496ull);
        vlSelf->adder_tb__DOT__test_vectors[__Vi0].__PVT__expected_pos_ovf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16146230083408283496ull);
        vlSelf->adder_tb__DOT__test_vectors[__Vi0].__PVT__expected_neg_ovf = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16146230083408283496ull);
        vlSelf->adder_tb__DOT__test_vectors[__Vi0].__PVT__expected_main_sum_flags_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16146230083408283496ull);
    }
    vlSelf->adder_tb__DOT__passed_tests = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12644779743808264902ull);
    vlSelf->adder_tb__DOT__total_tests = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11229231220294216941ull);
    vlSelf->adder_tb__DOT____Vcellout__DUT__main_sum_flags_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9441820570165988883ull);
    vlSelf->adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6324289946152899176ull);
    vlSelf->adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2243164687121821489ull);
    vlSelf->adder_tb__DOT____Vcellout__DUT__main_sum_res_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18003632467864422884ull);
    vlSelf->adder_tb__DOT__test_passed = 0;
    vlSelf->adder_tb__DOT____Vtogcov__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11198930843977293002ull);
    vlSelf->adder_tb__DOT____Vtogcov__test_passed = 0;
    vlSelf->adder_tb__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->adder_tb__DOT__DUT__DOT__main_sum_res = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 8106777295589835812ull);
    vlSelf->adder_tb__DOT__DUT__DOT__main_sum_flags = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 9955766321869120278ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op1_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9842213649547696167ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op2_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9920179362459912450ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_cmd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14196945662176111899ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res_out = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12351933047788905693ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_pos_ovflw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17316569383835600074ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_neg_ovflw = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6817375277572765170ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags_out = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13977899256498197517ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res = VL_SCOPED_RAND_RESET_Q(33, __VscopeHash, 5500335421294732988ull);
    vlSelf->adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5621694768914079175ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9526919608049418986ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

VL_ATTR_COLD void Vadder_tb___024root___configure_coverage(Vadder_tb___024root* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vadder_tb___024root___configure_coverage\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[0]), first, "adder_tb.sv", 21, 16, ".adder_tb", "v_toggle/adder_tb", "clk");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[2]), first, "adder_tb.sv", 39, 28, ".adder_tb", "v_line/adder_tb", "block", "39");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[3]), first, "adder_tb.sv", 40, 27, ".adder_tb", "v_line/adder_tb", "block", "40");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[4]), first, "adder_tb.sv", 69, 9, ".adder_tb", "v_branch/adder_tb", "if", "69-72");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[5]), first, "adder_tb.sv", 69, 10, ".adder_tb", "v_branch/adder_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[6]), first, "adder_tb.sv", 75, 9, ".adder_tb", "v_branch/adder_tb", "if", "75-78");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[7]), first, "adder_tb.sv", 75, 10, ".adder_tb", "v_branch/adder_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[8]), first, "adder_tb.sv", 81, 9, ".adder_tb", "v_branch/adder_tb", "if", "81-84");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[9]), first, "adder_tb.sv", 81, 10, ".adder_tb", "v_branch/adder_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[10]), first, "adder_tb.sv", 87, 9, ".adder_tb", "v_branch/adder_tb", "if", "87-89");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[11]), first, "adder_tb.sv", 87, 10, ".adder_tb", "v_branch/adder_tb", "else", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[12]), first, "adder_tb.sv", 55, 28, ".adder_tb", "v_line/adder_tb", "block", "55,67,92-93");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[13]), first, "adder_tb.sv", 96, 9, ".adder_tb", "v_toggle/adder_tb", "test_passed");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[15]), first, "adder_tb.sv", 161, 13, ".adder_tb", "v_branch/adder_tb", "if", "161-163");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[16]), first, "adder_tb.sv", 161, 14, ".adder_tb", "v_branch/adder_tb", "else", "164-165");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[17]), first, "adder_tb.sv", 131, 9, ".adder_tb", "v_line/adder_tb", "block", "131,133,136-139,143-147,152-159,167,170-173");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[18]), first, "adder_tb.sv", 181, 9, ".adder_tb", "v_branch/adder_tb", "if", "181-182");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[19]), first, "adder_tb.sv", 181, 10, ".adder_tb", "v_branch/adder_tb", "else", "183-184");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[20]), first, "adder_tb.sv", 98, 5, ".adder_tb", "v_line/adder_tb", "block", "98-101,105,108,111,114,117,120,123,126,129,131,177-179,187-188");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[21]), first, "adder.sv", 32, 26, ".adder_tb.DUT", "v_toggle/adder", "exu2ialu_main_op1_i");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[85]), first, "adder.sv", 33, 26, ".adder_tb.DUT", "v_toggle/adder", "exu2ialu_main_op2_i");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[149]), first, "adder.sv", 34, 16, ".adder_tb.DUT", "v_toggle/adder", "exu2ialu_cmd_i");
    vlSelf->__vlCoverToggleInsert(0, 31, 1, &(vlSymsp->__Vcoverage[151]), first, "adder.sv", 36, 24, ".adder_tb.DUT", "v_toggle/adder", "main_sum_res_out");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[215]), first, "adder.sv", 37, 19, ".adder_tb.DUT", "v_toggle/adder", "main_sum_pos_ovflw");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[217]), first, "adder.sv", 38, 19, ".adder_tb.DUT", "v_toggle/adder", "main_sum_neg_ovflw");
    vlSelf->__vlCoverToggleInsert(0, 3, 1, &(vlSymsp->__Vcoverage[219]), first, "adder.sv", 40, 23, ".adder_tb.DUT", "v_toggle/adder", "main_sum_flags_out");
    vlSelf->__vlCoverToggleInsert(0, 32, 1, &(vlSymsp->__Vcoverage[227]), first, "adder.sv", 59, 17, ".adder_tb.DUT", "v_toggle/adder", "main_sum_res");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[293]), first, "adder.sv", 60, 40, ".adder_tb.DUT", "v_toggle/adder", "main_sum_flags.z");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[295]), first, "adder.sv", 60, 40, ".adder_tb.DUT", "v_toggle/adder", "main_sum_flags.s");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[297]), first, "adder.sv", 60, 40, ".adder_tb.DUT", "v_toggle/adder", "main_sum_flags.o");
    vlSelf->__vlCoverToggleInsert(0, 0, 0, &(vlSymsp->__Vcoverage[299]), first, "adder.sv", 60, 40, ".adder_tb.DUT", "v_toggle/adder", "main_sum_flags.c");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[301]), first, "adder.sv", 74, 38, ".adder_tb.DUT", "v_expr/adder", "((exu2ialu_cmd_i != 32'sh1)==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[302]), first, "adder.sv", 74, 38, ".adder_tb.DUT", "v_expr/adder", "((exu2ialu_cmd_i != 32'sh1)==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[303]), first, "adder.sv", 75, 53, ".adder_tb.DUT", "v_branch/adder", "cond_then", "75");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[304]), first, "adder.sv", 75, 54, ".adder_tb.DUT", "v_branch/adder", "cond_else", "76");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[305]), first, "adder.sv", 82, 7, ".adder_tb.DUT", "v_expr/adder", "(exu2ialu_main_op1_i[(32'sh20 - 32'sh1)[4:0]+:1]==0 && exu2ialu_main_op2_i[(32'sh20 - 32'sh1)[4:0]+:1]==1 && main_sum_res[(32'sh20 - 32'sh1)[5:0]+:1]==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[306]), first, "adder.sv", 82, 7, ".adder_tb.DUT", "v_expr/adder", "(main_sum_res[(32'sh20 - 32'sh1)[5:0]+:1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[307]), first, "adder.sv", 82, 7, ".adder_tb.DUT", "v_expr/adder", "(exu2ialu_main_op2_i[(32'sh20 - 32'sh1)[4:0]+:1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[308]), first, "adder.sv", 82, 7, ".adder_tb.DUT", "v_expr/adder", "(exu2ialu_main_op1_i[(32'sh20 - 32'sh1)[4:0]+:1]==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[309]), first, "adder.sv", 85, 8, ".adder_tb.DUT", "v_expr/adder", "(exu2ialu_main_op1_i[(32'sh20 - 32'sh1)[4:0]+:1]==1 && exu2ialu_main_op2_i[(32'sh20 - 32'sh1)[4:0]+:1]==0 && main_sum_res[(32'sh20 - 32'sh1)[5:0]+:1]==0) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[310]), first, "adder.sv", 85, 8, ".adder_tb.DUT", "v_expr/adder", "(main_sum_res[(32'sh20 - 32'sh1)[5:0]+:1]==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[311]), first, "adder.sv", 85, 8, ".adder_tb.DUT", "v_expr/adder", "(exu2ialu_main_op2_i[(32'sh20 - 32'sh1)[4:0]+:1]==1) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[312]), first, "adder.sv", 85, 8, ".adder_tb.DUT", "v_expr/adder", "(exu2ialu_main_op1_i[(32'sh20 - 32'sh1)[4:0]+:1]==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[313]), first, "adder.sv", 91, 45, ".adder_tb.DUT", "v_expr/adder", "(main_sum_neg_ovflw==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[314]), first, "adder.sv", 91, 45, ".adder_tb.DUT", "v_expr/adder", "(main_sum_pos_ovflw==1) => 1", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[315]), first, "adder.sv", 91, 45, ".adder_tb.DUT", "v_expr/adder", "(main_sum_pos_ovflw==0 && main_sum_neg_ovflw==0) => 0", "");
    vlSelf->__vlCoverInsert(&(vlSymsp->__Vcoverage[316]), first, "adder.sv", 73, 4, ".adder_tb.DUT", "v_line/adder", "block", "73-74,78,80-85,88-91,93");
}
