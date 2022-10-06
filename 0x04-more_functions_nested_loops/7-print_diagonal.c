#include "main.h"

/**
 * print_diagonal - Function to print diagonal
 *
 * @n: parameter
 *
 * Description: print disgonal n number of times
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar(10);
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j == i)
				{
					_putchar('\\');
					_putchar(10);
				}
				else
					_putchar(' ');
			}
		}
	}
}
