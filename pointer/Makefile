	
# Compiler and flags
CC = gcc
CFLAGS += -Wall -O2
DBGFLAGS += -g -O0
ASFLAGS = -S -masm=intel -fno-stack-protector -g0 -s -fverbose-asm


# Source files
SRC_FILES = swap.c struct.c array_pointer.c

# Output executables
BIN_FILES = $(SRC_FILES:.c=)

# Assembly files
ASM_FILES = $(SRC_FILES:.c=.s)

# Default target: build all executables and assembly files
all: $(BIN_FILES) $(ASM_FILES)

# Rule to build each executable
%: %.c
	$(CC) $(CFLAGS) $(DBGFLAGS) $< -o $@

# Rule to generate assembly files
%.s: %.c
	$(CC) $(ASFLAGS) $< -o $@

# Clean rule: remove all executables and assembly files
clean:
	rm -f $(BIN_FILES) $(ASM_FILES)

# Phony targets
.PHONY: all clean

