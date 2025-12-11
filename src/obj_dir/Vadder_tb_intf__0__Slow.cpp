// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_tb.h for the primary calling header

#include "Vadder_tb__pch.h"

VL_ATTR_COLD void Vadder_tb_intf___ctor_var_reset(Vadder_tb_intf* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadder_tb_intf___ctor_var_reset\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->exu2ialu_main_op1_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15382702465380853945ull);
    vlSelf->exu2ialu_main_op2_i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16508092271525021106ull);
    vlSelf->exu2ialu_cmd_i = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14795934049964811693ull);
}

VL_ATTR_COLD void Vadder_tb_intf___configure_coverage(Vadder_tb_intf* vlSelf, bool first) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadder_tb_intf___configure_coverage\n"); );
    Vadder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    (void)first;  // Prevent unused variable warning
}
