# Compiler
CXX := g++

# Directories
SRC_DIR := src
INC_DIR := src/includes
BIN_DIR := bin

# Files
SRC := $(SRC_DIR)/ToolChain.cpp
TARGET := $(BIN_DIR)/app

# Compiler flags
CXXFLAGS := -Wall -Wextra -std=c++17 -I$(INC_DIR)

# Default target
all: $(TARGET)

# Build target
$(TARGET): $(SRC)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# Clean build artifacts
clean:
	rm -rf $(BIN_DIR)

# Run the program
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run
