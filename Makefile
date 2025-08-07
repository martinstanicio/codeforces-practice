# By ChatGPT

# Compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

# Directories
SRC_DIR := src
DIST_DIR := dist

# Get all .cpp files in src
SRCS := $(wildcard $(SRC_DIR)/*.cpp)

# Convert to executables in dist/
EXES := $(patsubst $(SRC_DIR)/%.cpp, $(DIST_DIR)/%, $(SRCS))

# Default target: build everything
all: $(DIST_DIR) $(EXES)

# Compile each .cpp directly into its own executable
$(DIST_DIR)/%: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

# Create dist directory if it doesn't exist
$(DIST_DIR):
	mkdir -p $(DIST_DIR)

# Clean everything
clean:
	rm -rf $(DIST_DIR)

.PHONY: all clean
