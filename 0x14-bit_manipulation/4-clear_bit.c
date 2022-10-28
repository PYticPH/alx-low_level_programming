#include "main.h"

/**
 * clear_bit - Function to set value of bit to 0
 *
 * @n: pointer to positive number
 * @index: index of bit to set
 *
 * Return: int
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > (sizeof(unsigned long int) * 8) - 1)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
