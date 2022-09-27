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
	int  index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			return (s + index);
		}
	}
	return (NULL);
}
