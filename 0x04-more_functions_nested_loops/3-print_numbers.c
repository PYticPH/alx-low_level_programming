#include "main.h"

/**
 * print_numbers - Function to print numbers
 *
 * Description: print numbers
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar(10);
}
