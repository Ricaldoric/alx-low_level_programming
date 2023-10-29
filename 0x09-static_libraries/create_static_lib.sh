#!/bin/bash
# This script compiles all .c files in the current directory
# and creates a static library liball.a from the object files.

# Compile .c files into .o files with all warning flags
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Clean up: Remove the .o files [this is optional but lets include it
rm -f *.o

