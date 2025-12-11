// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vadder_tb.h for the primary calling header

#ifndef VERILATED_VADDER_TB_INTF_H_
#define VERILATED_VADDER_TB_INTF_H_  // guard

#include "verilated.h"
#include "verilated_cov.h"
#include "verilated_timing.h"


class Vadder_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vadder_tb_intf final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*0:0*/ exu2ialu_cmd_i;
    IData/*31:0*/ exu2ialu_main_op1_i;
    IData/*31:0*/ exu2ialu_main_op2_i;

    // INTERNAL VARIABLES
    Vadder_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vadder_tb_intf(Vadder_tb__Syms* symsp, const char* v__name);
    ~Vadder_tb_intf();
    VL_UNCOPYABLE(Vadder_tb_intf);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __vlCoverInsert(uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp, const char* linescovp);
    void __vlCoverToggleInsert(int begin, int end, bool ranged, uint32_t* countp, bool enable, const char* filenamep, int lineno, int column,
        const char* hierp, const char* pagep, const char* commentp);
};

std::string VL_TO_STRING(const Vadder_tb_intf* obj);

#endif  // guard
