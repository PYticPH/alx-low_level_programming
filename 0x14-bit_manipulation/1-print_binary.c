#include "main.h"

/**
 * print_binary - Function to print binary representation of number
 *
 * @n: integer parameter
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}


