#include "Vadder_tb.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

// Проверяем, определена ли поддержка coverage в этой версии Verilator
#ifdef VM_COVERAGE
#include "verilated_cov.h"
#endif

#include <iostream>
#include <cstdlib>

int main(int argc, char** argv) {
    // Инициализируем Verilator
    Verilated::commandArgs(argc, argv);
    
    // Включаем трассировку VCD
    Verilated::traceEverOn(true);
    
    // Создаем экземпляр тестбенча
    Vadder_tb* top = new Vadder_tb;
    
    // Создаем объект для VCD трассировки
    VerilatedVcdC* tfp = new VerilatedVcdC;
    
    // Подключаем трассировку к тестбенчу
    top->trace(tfp, 99);  // Уровень детализации 99
    tfp->open("final_tb.vcd");
    
    std::cout << "========================================" << std::endl;
    std::cout << "Starting ALU Testbench Simulation" << std::endl;
    std::cout << "========================================" << std::endl;
    
    // Инициализация тактового сигнала
    top->clk = 0;
    
    // Основной цикл симуляции
    int time = 0;
    int max_time = 10000; 
    int cycle_count = 0;
    const int half_period = 5; // 5ns полпериода (100 MHz)
    
    while (time < max_time) {
        top->clk = !top->clk;
        
        // Оцениваем состояние схемы
        top->eval();
        
        // Сохраняем состояние в VCD файл
        tfp->dump(time);
        
        // Увеличиваем время
        time += half_period;
        
        // Считаем такты (на положительном фронте)
        if (top->clk == 1) {
            cycle_count++;
            
        }
        
        // Проверяем, не завершилась ли симуляция внутри Verilog
        if (Verilated::gotFinish()) {
            std::cout << "\nSimulation finished by $finish at cycle " << cycle_count << std::endl;
            break;
        }
    }
    
    // Если достигли максимального времени
    if (time >= max_time) {
        std::cout << "\nMaximum simulation time reached: " << max_time << "ns" << std::endl;
    }
    
    // Сохраняем coverage данные (если поддержка включена)
    #ifdef VM_COVERAGE
    std::cout << "\nSaving coverage data..." << std::endl;
    
    // Сохраняем в несколько возможных файлов
    bool coverage_saved = false;
    
    // Попробуем сохранить coverage
    try {
        VerilatedCov::write("coverage.dat");
        std::cout << "Coverage data saved to: coverage.dat" << std::endl;
        coverage_saved = true;
    } catch (...) {
        // Пробуем альтернативный метод
        try {
            VerilatedCov::write("vlt_coverage.dat");
            std::cout << "Coverage data saved to: vlt_coverage.dat" << std::endl;
            coverage_saved = true;
        } catch (...) {
            std::cout << "Warning: Could not save coverage data" << std::endl;
        }
    }
    #else
    std::cout << "\nNote: Coverage support not enabled in this Verilator build" << std::endl;
    #endif
    
    // Закрываем VCD файл
    tfp->close();
    
    // Освобождаем память
    delete tfp;
    delete top;
    
    // Итоговый вывод
    std::cout << "\n========================================" << std::endl;
    std::cout << "Simulation Summary:" << std::endl;
    std::cout << "  Total cycles:  " << cycle_count << std::endl;
    std::cout << "  Total time:    " << time << "ns" << std::endl;
    std::cout << "  Waveform file: final_tb.vcd" << std::endl;
    #ifdef VM_COVERAGE
    if (coverage_saved) {
        std::cout << "  Coverage file: coverage.dat" << std::endl;
    }
    #endif
    std::cout << "========================================" << std::endl;
    
    return 0;
}