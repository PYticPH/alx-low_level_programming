#include "main.h"

/**
 * create_array - Function to create array
 *
 * @size: size of array
 * @c: array characters/elements
 *
 * Return: success or failure
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * size);

	if (ptr == NULL || size == 0)
		return (NULL);

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}

	return (ptr);
}
