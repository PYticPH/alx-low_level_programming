#include "main.h"

/**
 * get_endianness - Function that checks endianness
 *
 * Return: void
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *endian = (char *) &i;

	if (*endian)
		return (1);
	else
		return (0);
}
