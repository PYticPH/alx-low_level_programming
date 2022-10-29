#include "main.h"

/**
 * flip_bits - Function to flip bits
 *
 * @n: positive integer parameter
 * @m: positve integer parameter
 *
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int z, count = 0;

	for (z = n ^ m; z != 0; z = z >> 1)
	{
		count += z & 1;
	}
	return (count);
}
