// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VADDER_TB__SYMS_H_
#define VERILATED_VADDER_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vadder_tb.h"

// INCLUDE MODULE CLASSES
#include "Vadder_tb___024root.h"
#include "Vadder_tb_intf.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vadder_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vadder_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vadder_tb___024root            TOP;
    Vadder_tb_intf                 TOP__adder_tb__DOT__intf_inst;

    // COVERAGE
    uint32_t __Vcoverage[317];

    // CONSTRUCTORS
    Vadder_tb__Syms(VerilatedContext* contextp, const char* namep, Vadder_tb* modelp);
    ~Vadder_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
