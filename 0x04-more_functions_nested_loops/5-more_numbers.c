#include "main.h"

/**
 * more_numbers - Function to print 1 - 14
 *
 * Description: print 1 - 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar(10);
	}
}

