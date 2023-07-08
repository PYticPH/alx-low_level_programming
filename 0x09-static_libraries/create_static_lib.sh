#!/bin/bash
# scriot to create a static library liball.

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
