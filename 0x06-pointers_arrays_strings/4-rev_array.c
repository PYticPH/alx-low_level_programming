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
	int x;
	
	for (x = 0; x <= n; n--)
		_putchar(a[n] + '0');
}
