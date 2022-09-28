#include "main.h"

/**
 * _strpbrk - Function that searches a string for any of a set of bytes
 *
 * @s: parameter
 * @accept: parameter
 *
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i, k = 0;
	char **ptr = 0;

	while (s[k] != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[k] == accept[i])
				return (s + k);
		}
		k++;
	}
	ptr = &s;
	ptr = 0;
	return (*ptr);
}

