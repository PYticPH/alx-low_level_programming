#include "main.h"

/**
 * reverse_array - function to  reverse  an  array
 *
 * @a: parameter
 * @n: parameter
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	while (n < -1)
	{
		_putchar(a[n]);
		if (n != 0)
		{
			_putchar(',');
			_putchar(' ');

		}
		n--;
	}
	_putchar(10);
}
