#include "main.h"

/**
 * get_bit - Function that returns the return bits at a given index
 *
 * @n: positive number
 * @index: index number
 *
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int  bit;

	if (index >  63)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}
