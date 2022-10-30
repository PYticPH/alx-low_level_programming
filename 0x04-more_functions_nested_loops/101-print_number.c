#include "main.h"

/**
 * print_number - Function to print number
 *
 * Description: print number using _putchar only
 *
 * @n: integer parameter number
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number((n - n % 10) / 10);
	_putchar((n % 10) + '0');
}