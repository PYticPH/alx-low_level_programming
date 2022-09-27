#include "main.h"
#include <stddef.h>

/**
 * _strchr - Function to locate a character in a function
 *
 * @s: parameter
 * @c: parameter
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int i, index;
	int n_bytes;

	for (index = 0; s[index] != '\0'; index++)
	{
		;
	}
	n_bytes = index * sizeof(s[0]);
	for (i = 0; i != n_bytes; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
