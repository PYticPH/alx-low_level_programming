#!/bin/bash
#script to create static library liball.o

echo "Compiling source code to object code..."
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
echo "Done: object code created successfully"
echo "Creating library..."
ar -rc liball.a *.o
echo "Done: library created successfully"
