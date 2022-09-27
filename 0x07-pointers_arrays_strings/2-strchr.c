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
	int  index;
	char *ptr;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
		{
			ptr = &(s[index]);
			return (ptr);
		}
	}
	ptr = 0;
	return (ptr);
}
