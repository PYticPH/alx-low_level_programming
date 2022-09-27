#include "main.h"

/**
 * _memset - function memset
 *
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	int index;
	int n_bytes = n * sizeof(s[0]);

	for (index = 0; index != n_bytes; index++)
		s[index] = b;

	return (s);
}
