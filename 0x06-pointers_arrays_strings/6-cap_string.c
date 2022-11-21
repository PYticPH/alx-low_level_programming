#include "main.h"
#include <stdio.h>

/**
 * cap_string- function to change string case
 *
 * @str: parameter
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int index = 0;

	if (str[index] >= 'a' && str[index] <= 'z')
		str[index] = str[index] - 32;

	for (index = 1; str[index + 1] != '\0'; index++)
	{
		if (sep(str[index]))
		{
			if (str[index + 1] >= 'a' && str[index + 1] <= 'z')
				str[index + 1] = str[index + 1] - 32;
		}
	}

	return (str);
}


/**
 * sep - Function to deterrmine separator
 *
 * @separator: string parameter
 *
 * Return: 0 on success
 */

int sep(char separator)
{
	int index;
	char sym[] = {' ', '\t', '\n', ',', ';',
		'.', '!', '?', '"', '(', ')', '{', '}'};

	for (index = 0; index < (int) sizeof(sym); index++)
	{
		if (separator == sym[index])
			return (1);
	}
	return (0);
}
