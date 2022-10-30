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
	unsigned int num;

	num = n;
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}


	if (num > 9)
		print_number(num / 10);
	_putchar((num % 10) + '0');
}
