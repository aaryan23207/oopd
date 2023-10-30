# Compiler and compiler flags
CC := g++
DEBUG_FLAGS := -g -O0
OPTIMIZE_FLAGS := -O3

# Source files and output binary names
SRC_FILES := q2.cpp 
DEBUG_BINARY := my_program_debug
OPTIMIZE_BINARY := my_program_optimized

# Default target (build optimized version)
all: $(OPTIMIZE_BINARY)

# Rule to build the debugging version
debug: CXXFLAGS := $(DEBUG_FLAGS)
debug: $(DEBUG_BINARY)

# Rule to build the optimized version
optimized: CXXFLAGS := $(OPTIMIZE_FLAGS)
optimized: $(OPTIMIZE_BINARY)

# Rule for building the debugging version
$(DEBUG_BINARY): $(SRC_FILES)
	$(CC) $(CXXFLAGS) $^ -o $@

# Rule for building the optimized version
$(OPTIMIZE_BINARY): $(SRC_FILES)
	$(CC) $(CXXFLAGS) $^ -o $@

# Clean the generated files
clean:
	rm -f $(DEBUG_BINARY) $(OPTIMIZE_BINARY)

.PHONY: all debug optimized clean
