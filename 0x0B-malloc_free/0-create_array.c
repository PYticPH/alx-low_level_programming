#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to create an array
 *
 * @size: parameter: size of array
 *
 * @c: paarameter: characters in array
 *
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = malloc(sizeof(c) * size);

	if (size == 0)
		return ('\0');
	else if (p == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}
