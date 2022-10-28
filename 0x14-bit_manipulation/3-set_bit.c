#include "main.h"

/**
 * set_bit - Function to set value of a bit to 1
 *
 * @n: positive parameter value
 * @index: index on number to set
 *
 * Return: int
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n |= 1 << index;

	return (1);
}
