// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vadder_tb.h for the primary calling header

#include "Vadder_tb__pch.h"

std::string VL_TO_STRING(const Vadder_tb_intf* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vadder_tb_intf::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
