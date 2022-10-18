#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdio.h>
#include <stdarg.h>

/**
 * struct inputType - struct of pointer function
 *
 * @gettr: pointer function
 *
 * Return: void
 */

typedef struct inputType
{
	char *sym;
	void (*getInput)(va_list ap);
} dtype_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void printChar(va_list ap);
void printStr(va_list ap);
void printInt(va_list ap);
void printFloat(va_list ap);
void print_all(const char *const format, ...);

#endif
