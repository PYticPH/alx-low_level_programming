#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Fuction to print to 98
 *
 * @n: parameter; start point
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
			n--;
		else
			n++;
	}
	printf("%d\n", n);
}

