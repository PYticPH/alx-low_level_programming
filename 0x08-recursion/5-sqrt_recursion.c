#include "main.h"
#include <stdio.h>

/**
* _sqrt_recursion - Function to calaculate the square root of a number 
* using recursion
*
* @n: number to find its squre root
*
* Return: int
*/

int _sqrt_recursion(int n)
{
	float x;
	
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	x = _sqrt_recursion((float) n - 1);
	printf("x is %.2f\n", x);

	return ((x * x + n) / (2 * x));
}
