#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>

/**
 * Filetype - C header file
 */

int _putchar(char c);
void print_name(char *name, void (*f) (char *));

#endif
