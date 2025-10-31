# Compiler and flags
CC = clang
CFLAGS = -Wall -Wextra -I./include -I./lib -g

# Directories
SRC_DIR = src
TEST_DIR = tests
LIB_DIR = lib
BUILD_DIR = build

# Source and test files
SRC_FILES = $(SRC_DIR)/math_utils.c
LIB_FILES = $(LIB_DIR)/unity.c
TEST_FILES = $(TEST_DIR)/test_math.c

# Output binary
TARGET = $(BUILD_DIR)/test_math

# Default rule
.PHONY: all

all: clean $(TARGET)

# Link target
$(TARGET): $(SRC_FILES) $(LIB_FILES) $(TEST_FILES)
	@mkdir -p $(BUILD_DIR)
	$(CC) $(CFLAGS) $(SRC_FILES) $(LIB_FILES) $(TEST_FILES) -o $(TARGET)

# Run tests
.PHONY: run
run: $(TARGET)
	./$(TARGET)

# Clean
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
