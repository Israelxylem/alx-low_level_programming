#!/bin/bash

# Compile each .c file into object files
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library (liball.a)
ar rcs liball.a *.o

# Clean up object files
rm *.o
