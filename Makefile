# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Iinclude

# Source files
SRCDIR = src
OBJDIR = obj
BINDIR = bin

SRC = $(wildcard $(SRCDIR)/*.c)
OBJ = $(SRC:$(SRCDIR)/%.c=$(OBJDIR)/%.o)
TARGET = $(BINDIR)/reportcard

# Default rule
all: $(TARGET)

# Create target
$(TARGET): $(OBJ)
	@mkdir -p $(BINDIR)
	$(CC) $(OBJ) -o $@

# Compile .c to .o
$(OBJDIR)/%.o: $(SRCDIR)/%.c | $(OBJDIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Create obj directory
$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Clean all generated files
clean:
	rm -rf $(OBJDIR) $(BINDIR)

# Run the program
run: all
	./$(TARGET)
