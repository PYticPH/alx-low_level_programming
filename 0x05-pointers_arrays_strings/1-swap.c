#include "main.h"
/**
 * swap_int -function to swap the value of two integers
 *
 * @a: parameter 1
 * @b: parameter 2
 *
 * return: void
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
