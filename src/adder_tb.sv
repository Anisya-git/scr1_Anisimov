`timescale 1ns/1ps

/* verilator lint_off DECLFILENAME */
/* verilator coverage_off */

// Простой интерфейс
interface intf(input logic clk);
    logic [31:0] exu2ialu_main_op1_i;
    logic [31:0] exu2ialu_main_op2_i;
    logic exu2ialu_cmd_i;
    logic [32:0] main_sum_res_out;
    logic main_sum_pos_ovflw;
    logic main_sum_neg_ovflw;
    logic [3:0] main_sum_flags_out;
endinterface

/* verilator coverage_on */

module adder_tb(
    input wire clk
);
    
    intf intf_inst(clk);
    
    // Определяем тестовые векторы как структуры
    typedef struct {
        logic [31:0] op1;
        logic [31:0] op2;
        logic cmd;
        logic [31:0] expected_result;
        logic expected_pos_ovf;
        logic expected_neg_ovf;
        logic [3:0] expected_main_sum_flags_out;
    } test_vector_t;
    
    // Массив тестовых векторов с ожидаемыми результатами
    test_vector_t test_vectors[8];
    integer passed_tests = 0;
    integer total_tests = 0;
    
    /* verilator coverage_off */
    adder DUT (
        .exu2ialu_main_op1_i(intf_inst.exu2ialu_main_op1_i),
        .exu2ialu_main_op2_i(intf_inst.exu2ialu_main_op2_i),
        .exu2ialu_cmd_i(intf_inst.exu2ialu_cmd_i),
        .main_sum_res_out(intf_inst.main_sum_res_out),
        .main_sum_pos_ovflw(intf_inst.main_sum_pos_ovflw),
        .main_sum_neg_ovflw(intf_inst.main_sum_neg_ovflw),
        .main_sum_flags_out(intf_inst.main_sum_flags_out)
    );
    /* verilator coverage_on */

    // Функция для проверки результатов
    function automatic bit check_result(
        input integer test_num,
        input logic [31:0] actual,
        input logic actual_pos_ovf,
        input logic actual_neg_ovf,
        input logic [31:0] expected,
        input logic expected_pos_ovf,
        input logic expected_neg_ovf,
        input logic expected_main_sum_flags_out
    );
        bit success;

        success = 1;
        
        if (actual !== expected) begin
            $display("[Test#%0d] ERROR: Result mismatch! Expected: %h, Got: %h",
                     test_num, expected, actual);
            success = 0;
        end
        
        if (actual_pos_ovf !== expected_pos_ovf) begin
            $display("[Test#%0d] ERROR: Pos OVF mismatch! Expected: %b, Got: %b",
                     test_num, expected_pos_ovf, actual_pos_ovf);
            success = 0;
        end
        
        if (actual_neg_ovf !== expected_neg_ovf) begin
            $display("[Test#%0d] ERROR: Neg OVF mismatch! Expected: %b, Got: %b",
                     test_num, expected_neg_ovf, actual_neg_ovf);
            success = 0;
        end
        
        if (success) begin
            $display("[Test#%0d] PASSED", test_num);
            passed_tests++;
        end
        
        total_tests++;
        return success;
    endfunction

    bit test_passed;

    initial begin
        $display("========================================");
        $display("Starting ALU Testbench with Coverage");
        $display("========================================");
        
        // Инициализация тестовых векторов
        // Тест 1: 1 + 2 = 3
        test_vectors[0] = '{32'h00000001, 32'h00000002, 1'b1, 32'h00000003, 1'b0, 1'b0, 4'h0};

        // Тест 2: 5 - 3 = 2
        test_vectors[1] = '{32'h00000005, 32'h00000003, 1'b0, 32'h00000002, 1'b0, 1'b0, 4'h0};
        
        // Тест 3: -1 + 1 = 0
        test_vectors[2] = '{32'hFFFFFFFF, 32'h00000001, 1'b1, 32'h00000000, 1'b0, 1'b1, 4'hd};
        
        // Тест 4: max positive + 1 (проверка переполнения)
        test_vectors[3] = '{32'h7FFFFFFF, 32'h80000000, 1'b1, 32'hFFFFFFFF, 1'b1, 1'b0, 4'h3};
        
        // Тест 5: min negative - 1 (проверка переполнения)
        test_vectors[4] = '{32'h80000000, 32'h00000001, 1'b0, 32'h7FFFFFFF, 1'b0, 1'b1, 4'h1};
        
        // Тест 6: 0 + 0 = 0
        test_vectors[5] = '{32'h00000000, 32'h00000000, 1'b1, 32'h00000000, 1'b0, 1'b0, 4'h4};
        
        // Тест 7: Большие числа
        test_vectors[6] = '{32'h87654321, 32'h12345678, 1'b1, 32'h99999999, 1'b0, 1'b0, 4'h2};
        
        // Тест 8: Вычитание с заемом
        test_vectors[7] = '{32'h00000000, 32'h00000001, 1'b0, 32'hFFFFFFFF, 1'b0, 1'b0, 4'ha};
        
        // Запускаем тесты
        $display("Starting tests...");
    
        for (int i = 0; i < 8; i++) begin
            // Показываем что тестируем
            $display("\n[Test#%0d]", i);

            // Такт 1: Устанавливаем тестовые значения
            intf_inst.exu2ialu_main_op1_i = test_vectors[i].op1;
            intf_inst.exu2ialu_main_op2_i = test_vectors[i].op2;
            intf_inst.exu2ialu_cmd_i = test_vectors[i].cmd;
            @(posedge clk);

            // Такт 2: Читаем результат (ALU комбинационная - результат готов сразу)
            $display("  Result: %h, Pos_OVF: %b, Neg_OVF: %b,flags:%h",
                     intf_inst.main_sum_res_out,
                     intf_inst.main_sum_pos_ovflw,
                     intf_inst.main_sum_neg_ovflw,
                     intf_inst.main_sum_flags_out
);

            // Проверяем и считаем результаты
            test_passed = check_result(i,
                                          intf_inst.main_sum_res_out,
                                          intf_inst.main_sum_pos_ovflw,
                                          intf_inst.main_sum_neg_ovflw,
                                          test_vectors[i].expected_result,
                                          test_vectors[i].expected_pos_ovf,
                                          test_vectors[i].expected_neg_ovf,
                                          test_vectors[i].expected_main_sum_flags_out);

            if (test_passed) begin
                $display("  [PASS]");
                passed_tests++;
            end else begin
                $display("  [FAIL]");
            end
            total_tests++;

            // Такт 3: Сбрасываем входы
            intf_inst.exu2ialu_main_op1_i = 32'h0;
            intf_inst.exu2ialu_main_op2_i = 32'h0;
            intf_inst.exu2ialu_cmd_i = 1'b0;
            @(posedge clk);
        end
    
        // Выводим итоги
        $display("\n=== Test Summary ===");
        $display("Total: %0d, Passed: %0d, Failed: %0d", 
                 total_tests, passed_tests, total_tests - passed_tests);

        if (passed_tests == total_tests) begin
            $display("ALL TESTS PASSED!");
        end else begin
            $display("SOME TESTS FAILED!");
        end

        #100;
        $finish;
    end
    
endmodule

/* verilator lint_on DECLFILENAME */
