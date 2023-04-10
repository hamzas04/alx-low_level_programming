#!/bin/bash

# Compile each C file in the current directory
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library from the object files
ar rcs liball.a *.o
