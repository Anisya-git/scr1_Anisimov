TOP = adder_tb
DUT_SRC = adder.sv
TB_SRC = adder_tb.sv
CPP_SRC = sim_main.cpp
EXE = obj_dir/V$(TOP)

# Компилятор
CXX ?= g++-11
CXXFLAGS = -std=c++20 -fcoroutines -O2 -Wall
LDFLAGS = -pthread -lpthread -latomic

# Verilator flags
VFLAGS = -Wall --trace --coverage --timing \
         -Wno-fatal \
         -Wno-TIMESCALEMOD \
         -Wno-UNUSEDSIGNAL \
         --sv \
         -CFLAGS "$(CXXFLAGS)" \
         -LDFLAGS "$(CXXFLAGS) $(LDFLAGS)"

# Флаги для сборки с coverage
COV_FLAGS = --coverage

all: compile run coverage

compile:
	@echo "=== Compiling with Verilator (with coverage) ==="
	verilator $(VFLAGS) -cc $(DUT_SRC) $(TB_SRC) \
		--top-module $(TOP) --exe $(CPP_SRC) \
		-CFLAGS "$(CXXFLAGS) $(COV_FLAGS)" \
		-LDFLAGS "$(CXXFLAGS) $(COV_FLAGS) -lgcov"
	
	@echo "=== Building executable ==="
	cd obj_dir && make -j -f V$(TOP).mk V$(TOP)

run:
	@echo "=== Running simulation ==="
	./$(EXE)
	@echo "=== Simulation completed ==="

coverage:
	@echo "=== Generating coverage report ==="
	@if [ -f "coverage.dat" ]; then \
		echo "Found coverage.dat, generating annotated report..."; \
		verilator_coverage --annotate coverage.dat; \
		echo "Coverage report generated in 'annotated/' directory"; \
	else \
		echo "No coverage.dat file found. Generating from vlt_coverage.dat..."; \
		if [ -f "vlt_coverage.dat" ]; then \
			verilator_coverage --annotate vlt_coverage.dat; \
			echo "Coverage report generated from vlt_coverage.dat in 'annotated/' directory"; \
		else \
			echo "ERROR: No coverage files found!"; \
			echo "Make sure you ran 'make compile run' first"; \
		fi \
	fi
	@echo "=== Coverage files in current directory ==="
	@ls -la *.dat 2>/dev/null || echo "No .dat files found"

coverage-html:
	@echo "=== Generating HTML coverage report ==="
	@if [ -f "coverage.dat" ]; then \
		verilator_coverage --annotate --rank --write-info coverage.dat; \
		echo "HTML coverage report generated"; \
		if [ -d "annotated" ]; then \
			echo "Open annotated/index.html in your browser"; \
		fi \
	elif [ -f "vlt_coverage.dat" ]; then \
		verilator_coverage --annotate --rank --write-info vlt_coverage.dat; \
		echo "HTML coverage report generated from vlt_coverage.dat"; \
		if [ -d "annotated" ]; then \
			echo "Open annotated/index.html in your browser"; \
		fi \
	else \
		echo "ERROR: No coverage files found!"; \
		exit 1; \
	fi

waves:
	@echo "=== Opening waveform viewer ==="
	@if [ -f "final_tb.vcd" ]; then \
		gtkwave final_tb.vcd & \
	else \
		echo "ERROR: No waveform file found!"; \
		echo "Run 'make run' first to generate final_tb.vcd"; \
	fi

clean:
	@echo "=== Cleaning up ==="
	rm -rf obj_dir *.vcd *.log *.dat annotated/ *.gcda *.gcno *.gcov
	@echo "Clean completed"

help:
	@echo "Available targets:"
	@echo "  make all        - Compile, run and generate coverage (default)"
	@echo "  make compile    - Compile only"
	@echo "  make run        - Run simulation"
	@echo "  make coverage   - Generate coverage report"
	@echo "  make coverage-html - Generate HTML coverage report"
	@echo "  make waves      - Open waveform viewer"
	@echo "  make clean      - Clean all generated files"
	@echo "  make help       - Show this help"

.PHONY: all compile run coverage coverage-html waves clean help