#include "main.h"

/**
 * print_line - Function to draw a straight line
 *
 * @n: parameter
 *
 * Description: draw a straight line n number of times
 *
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar(10);
}
