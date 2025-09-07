# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -std=c11
# Add criterion to the libraries
LIBS = -lSDL2 -lcriterion

# Project structure
SRCDIR = src
TESTDIR = tests
INCDIR = include
BUILDDIR = build
TARGET = $(BUILDDIR)/gameboy-dmg
TEST_TARGET = $(BUILDDIR)/tests

# Find all .c source files (excluding main.c for tests)
SOURCES = $(wildcard $(SRCDIR)/*.c)
OBJECTS = $(patsubst $(SRCDIR)/%.c, $(BUILDDIR)/%.o, $(filter-out $(SRCDIR)/main.c, $(SOURCES)))

# Find all test source files
TEST_SOURCES = $(wildcard $(TESTDIR)/*.c)

# --- Build Rules ---

# Default rule: build the final executable
all: $(TARGET)

# Rule to run tests
test: $(TEST_TARGET)
	@./$(TEST_TARGET)

# Rule to link the main executable
$(TARGET): $(BUILDDIR)/main.o $(OBJECTS)
	@mkdir -p $(BUILDDIR)
	$(CC) $^ -o $(TARGET) -lSDL2
	@echo "Build successful! Executable is at $(TARGET)"

# Rule to link the test executable
$(TEST_TARGET): $(OBJECTS) $(TEST_SOURCES)
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) $^ -o $(TEST_TARGET) $(LIBS)
	@echo "Test build successful! Executable is at $(TEST_TARGET)"

# Rule to compile source files into object files
$(BUILDDIR)/%.o: $(SRCDIR)/%.c
	@mkdir -p $(BUILDDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up build files
clean:
	@rm -rf $(BUILDDIR)
	@echo "Build directory cleaned."

