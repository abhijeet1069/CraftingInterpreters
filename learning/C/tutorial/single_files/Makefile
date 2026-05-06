# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -std=c17

# Directories
SRC_DIR = src
BIN_DIR = bin

# Target name (output executable)
TARGET = $(BIN_DIR)/app

# Source files
SRCS = $(SRC_DIR)/static/static.c

# Default rule
all: clean run

# Build target
build: $(SRCS) | $(BIN_DIR)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

# Ensure bin directory exists
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean rule
clean:
	rm -rf $(BIN_DIR)

run: build
	./$(TARGET)

.PHONY: all clean build