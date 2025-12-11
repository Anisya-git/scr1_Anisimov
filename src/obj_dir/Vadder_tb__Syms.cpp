// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vadder_tb__pch.h"
#include "Vadder_tb.h"
#include "Vadder_tb___024root.h"
#include "Vadder_tb_intf.h"

// FUNCTIONS
Vadder_tb__Syms::~Vadder_tb__Syms()
{
}

Vadder_tb__Syms::Vadder_tb__Syms(VerilatedContext* contextp, const char* namep, Vadder_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__adder_tb__DOT__intf_inst{this, Verilated::catName(namep, "adder_tb.intf_inst")}
{
    // Check resources
    Verilated::stackCheck(294);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__adder_tb__DOT__intf_inst = &TOP__adder_tb__DOT__intf_inst;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__adder_tb__DOT__intf_inst.__Vconfigure(true);
}
