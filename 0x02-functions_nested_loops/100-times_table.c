#include "main.h"

void print_long_num(int n);
/**
 * print_times_table - fuction to print times table
 *
 * @n: parameter
 *
 * Return: void
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (n <= 15 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if ((a * b) < 10)
				{
					if ((a * b) == 0 && b < 1)
					{
						_putchar(0 + '0');
					}
					else
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar((a * b) % 10 + '0');
					}
				}
				else if ((a * b) > 9 && (a * b) <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					print_long_num((a * b));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					print_long_num((a * b));
				}
			}
			_putchar(10);
		}
	}
}

/**
 * print_long_num - Function to print long numbers
 *
 * @n: parameter
 *
 * return: void
 */

void print_long_num(int n)
{
	if (n != 0)
	{
		print_long_num(n / 10);
		_putchar((n % 10) + '0');
	}
}
