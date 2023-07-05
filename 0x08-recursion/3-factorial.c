#include "main.h"

/**
* factorial - Function to calculate factorial using recursion
*
* @n: factorial number to calculate
*
* Return: int
*/

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (factorial(n - 1) * n);
}
