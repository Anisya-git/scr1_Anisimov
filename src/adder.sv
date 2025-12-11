/// Copyright by Syntacore LLC © 2016-2021. See LICENSE for details
/// @file       <scr1_pipe_ialu.sv>
/// @brief      Integer Arithmetic Logic Unit (IALU)
///

//-------------------------------------------------------------------------------
 //
 // Functionality:
 // - Performs addition/subtraction and arithmetic and branch comparisons
 // - Performs logical operations (AND(I), OR(I), XOR(I))
 // - Performs address calculation for branch, jump, DMEM load and store and AUIPC
 //   instructions
 // - Performs shift operations
 // - Performs MUL/DIV operations
 //
 // Structure:
 // - Main adder
 // - Address adder
 // - Shift logic
 // - MUL/DIV logic
 // - Output result multiplexer
 //
//-------------------------------------------------------------------------------

// `include "scr1_arch_description.svh"
// `include "scr1_riscv_isa_decoding.svh"
// `include "scr1_search_ms1.svh"


module adder (
		       // Main adder
   input logic [32-1:0]  exu2ialu_main_op1_i, // main ALU 1st operand
   input logic [32-1:0]  exu2ialu_main_op2_i, // main ALU 2nd operand
   input logic exu2ialu_cmd_i, // IALU command
   
   output logic [31:0] main_sum_res_out, // main ALU result
   output logic 		main_sum_pos_ovflw,
   output logic 		main_sum_neg_ovflw,

   output logic [3:0] main_sum_flags_out
);

//-------------------------------------------------------------------------------
// Local types declaration
//-------------------------------------------------------------------------------

   typedef struct 		  packed {
      logic 			  z;      // Zero
      logic 			  s;      // Sign
      logic 			  o;      // Overflow
      logic 			  c;      // Carry
   } type_scr1_ialu_flags_s;
   
//-------------------------------------------------------------------------------
   // Local signals declaration
//-------------------------------------------------------------------------------

   // Main adder signals
   logic [32:0] main_sum_res;       // Main adder result
   type_scr1_ialu_flags_s              main_sum_flags;     // Main adder flags  
//-------------------------------------------------------------------------------
// Main adder
//-------------------------------------------------------------------------------
//
 // Main adder is used for the following types of operations:
 // - Addition/subtraction          (ADD/ADDI/SUB)
 // - Branch comparisons            (BEQ/BNE/BLT(U)/BGE(U))
 // - Arithmetic comparisons        (SLT(U)/SLTI(U))
//

// Carry out (MSB of main_sum_res) is evaluated correctly because the result
// width equals to the maximum width of both the right-hand and left-hand side variables
   always_comb begin
      main_sum_res = (exu2ialu_cmd_i != 1)
                     ? ({1'b0, exu2ialu_main_op1_i} - {1'b0, exu2ialu_main_op2_i})   // Subtraction and comparison
		               : ({1'b0, exu2ialu_main_op1_i} + {1'b0, exu2ialu_main_op2_i});  // Addition

      main_sum_res_out = main_sum_res[31:0];
      
      main_sum_pos_ovflw = ~exu2ialu_main_op1_i[32-1]
			   &  exu2ialu_main_op2_i[32-1]
			   &  main_sum_res[32-1];
      main_sum_neg_ovflw =  exu2ialu_main_op1_i[32-1]
			    & ~exu2ialu_main_op2_i[32-1]
			    & ~main_sum_res[32-1];

      // FLAGS1 - flags for comparison (result of subtraction)
      main_sum_flags.c = main_sum_res[32];
      main_sum_flags.z = ~|main_sum_res[32-1:0];
      main_sum_flags.s = main_sum_res[32-1];
      main_sum_flags.o = main_sum_pos_ovflw | main_sum_neg_ovflw;

      main_sum_flags_out = {main_sum_flags.c, main_sum_flags.z, main_sum_flags.s, main_sum_flags.o};
   end // always_comb
   
endmodule : adder
