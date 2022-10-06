#include "main.h"

/**
 * print_triangle - Function to print a triangle
 *
 * @size: parameter
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar(10);
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j >= (size - i) - 1)
					_putchar('#');
				else
					_putchar(' ');
			}
			_putchar(10);
		}
	}
}
