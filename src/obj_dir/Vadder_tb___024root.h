// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadder_tb.h for the primary calling header

#ifndef VERILATED_VADDER_TB___024ROOT_H_
#define VERILATED_VADDER_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"
#include "Vadder_tb___024root.h"
class Vadder_tb_intf;


class Vadder_tb__Syms;
struct Vadder_tb_adder_tb__DOT__test_vector_t__struct__0 {
    IData/*31:0*/ __PVT__op1;
    IData/*31:0*/ __PVT__op2;
    CData/*0:0*/ __PVT__cmd;
    IData/*31:0*/ __PVT__expected_result;
    CData/*0:0*/ __PVT__expected_pos_ovf;
    CData/*0:0*/ __PVT__expected_neg_ovf;
    CData/*3:0*/ __PVT__expected_main_sum_flags_out;

    bool operator==(const Vadder_tb_adder_tb__DOT__test_vector_t__struct__0& rhs) const {
        return __PVT__op1 == rhs.__PVT__op1
            && __PVT__op2 == rhs.__PVT__op2
            && __PVT__cmd == rhs.__PVT__cmd
            && __PVT__expected_result == rhs.__PVT__expected_result
            && __PVT__expected_pos_ovf == rhs.__PVT__expected_pos_ovf
            && __PVT__expected_neg_ovf == rhs.__PVT__expected_neg_ovf
            && __PVT__expected_main_sum_flags_out == rhs.__PVT__expected_main_sum_flags_out;
    }
    bool operator!=(const Vadder_tb_adder_tb__DOT__test_vector_t__struct__0& rhs) const {
        return !(*this == rhs);
    }

    bool operator<(const Vadder_tb_adder_tb__DOT__test_vector_t__struct__0& rhs) const {
        return std::tie(__PVT__op1, __PVT__op2, __PVT__cmd, __PVT__expected_result, __PVT__expected_pos_ovf, __PVT__expected_neg_ovf, __PVT__expected_main_sum_flags_out)
            <  std::tie(rhs.__PVT__op1, rhs.__PVT__op2, rhs.__PVT__cmd, rhs.__PVT__expected_result, rhs.__PVT__expected_pos_ovf, rhs.__PVT__expected_neg_ovf, rhs.__PVT__expected_main_sum_flags_out);
    }
};
template <>
struct VlIsCustomStruct<Vadder_tb_adder_tb__DOT__test_vector_t__struct__0> : public std::true_type {};

class alignas(VL_CACHE_LINE_BYTES) Vadder_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vadder_tb_intf* __PVT__adder_tb__DOT__intf_inst;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*3:0*/ adder_tb__DOT____Vcellout__DUT__main_sum_flags_out;
    CData/*0:0*/ adder_tb__DOT____Vcellout__DUT__main_sum_neg_ovflw;
    CData/*0:0*/ adder_tb__DOT____Vcellout__DUT__main_sum_pos_ovflw;
    CData/*0:0*/ adder_tb__DOT__test_passed;
    CData/*0:0*/ adder_tb__DOT____Vtogcov__clk;
    CData/*0:0*/ adder_tb__DOT____Vtogcov__test_passed;
    CData/*3:0*/ adder_tb__DOT__DUT__DOT__main_sum_flags;
    CData/*0:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_cmd_i;
    CData/*0:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_pos_ovflw;
    CData/*0:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_neg_ovflw;
    CData/*3:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags_out;
    CData/*3:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_flags;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    IData/*31:0*/ adder_tb__DOT__passed_tests;
    IData/*31:0*/ adder_tb__DOT__total_tests;
    IData/*31:0*/ adder_tb__DOT____Vcellout__DUT__main_sum_res_out;
    IData/*31:0*/ adder_tb__DOT__unnamedblk1__DOT__i;
    IData/*31:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op1_i;
    IData/*31:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__exu2ialu_main_op2_i;
    IData/*31:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res_out;
    IData/*31:0*/ __VactIterCount;
    QData/*32:0*/ adder_tb__DOT__DUT__DOT__main_sum_res;
    QData/*32:0*/ adder_tb__DOT__DUT__DOT____Vtogcov__main_sum_res;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    VlTriggerScheduler __VtrigSched_hd7b2d12f__0;
    VlDelayScheduler __VdlySched;
    VlUnpacked<Vadder_tb_adder_tb__DOT__test_vector_t__struct__0, 8> adder_tb__DOT__test_vectors;

    // INTERNAL VARIABLES
    Vadder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vadder_tb___024root(Vadder_tb__Syms* symsp, const char* v__name);
    ~Vadder_tb___024root();
    VL_UNCOPYABLE(Vadder_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

std::string VL_TO_STRING(const Vadder_tb_adder_tb__DOT__test_vector_t__struct__0& obj);

#endif  // guard
