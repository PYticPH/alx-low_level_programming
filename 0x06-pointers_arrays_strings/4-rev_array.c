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
	int tmp;

	for (x = 0; x < n / 2; x++)
	{
		tmp = a[n - 1 - x];
		a[n - 1 - x] = a[x];
		a[x] = tmp;
	}
}

