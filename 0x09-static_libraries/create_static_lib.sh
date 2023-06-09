#!/usr/bin/bash
# script to create custom library

#compile files to object files
echo "Compiling C files into object files"
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
echo "Compilation done: object files created successfully"

#create custom library
echo "Creating custom library"
ar -rc libmy.a *.o
echo "Done: library created successfully"
