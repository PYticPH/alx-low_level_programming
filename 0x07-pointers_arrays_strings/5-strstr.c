#include "main.h"

int _strlen(char *c);
/**
 * _strstr - function that locates a substring
 *
 * @haystack: parameter
 * @needle: parameter
 *
 * Return: Pointer or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int x = 0;
	int len, y, test;

	len = _strlen(needle);

	if (*needle == 0)
		return (haystack);

	while (haystack[x + len] != '\0')
	{
		test = 0;
		for (y = 0; y <= len; y++)
		{
			if (haystack[x + y] == needle[y])
			{
				test++;
				if (test == len)
					return (haystack + x);
				continue;
			}
			else
				break;
		}
		x++;
	}
	return ('\0');
}

/**
 * _strlen - Function to return length of string
 *
 * @c: parameter
 *
 * Return: length of string
 */

int _strlen(char *c)
{
	int i, count = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count - 1);
}
