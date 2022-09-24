#include "main.h"

/**
 * reverse_array - function to  reverse  an  array
 *
 * @a: parameter
 * @b: parameter
 *
 * Return: void
 */

void reverse_string(int *a, int n)
{
	int size_a = sizeof(a);
	int size_int = sizeof(a[0]);
	int limit = size_a +  size_int;

	for (;limit >= n && n > -1; n--)
		_putchar(a[n]);
}
