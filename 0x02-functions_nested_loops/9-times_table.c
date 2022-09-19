#include "main.h"
/**
 * times_table - fuction to print times table
 *
 * Return: void
 */

void times_table(void)
{
	int a;
	int b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if ((a * b) <= 9)
			{
				_putchar((a * b) % 10 + '0');
				if (b == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar((a * b) / 10 + '0');
				_putchar((a * b) % 10 + '0');
				if (b == 9)
					break;
				_putchar(',');
			}
			_putchar(' ');
		}
		_putchar(10);
	}
}

