#include "main.h"

/**
 * _memcpy - Function to copy n bytes from memory
 *
 * @dest: parmeter
 * @src: parameter
 * @n: parameter
 *
 * Return: char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;
	int n_bytes =  n * sizeof(src[0]);

	for (index = 0; index != n_bytes; index++)
		dest[index] = src[index];

	return (dest);
}
