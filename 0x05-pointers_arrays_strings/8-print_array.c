#include "main.h"
#include <stdio.h>
/**
 * print_array - function to print array
 *
 * Description: print n numbers of arrays
 *
 * @a: parameter
 * @n: parameter
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x <= n - 1; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
		else
			break;
	}
	printf("\n");
}
