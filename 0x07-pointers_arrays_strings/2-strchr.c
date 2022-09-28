#include "main.h"

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
	int n_bytes = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		n_bytes += 1;
	}
	n_bytes = (n_bytes * sizeof(s[0])) - 1;
	for (i = 0; i != n_bytes; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
