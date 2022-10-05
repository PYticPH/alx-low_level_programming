#include "main.h"
#include <stdlib.h>

int _strlen(char *c);
/**
 * _strdup - Function to duplicate a string
 *
 * @str: parameter string to duplicate
 *
 * Return: char
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int len = _strlen(str);
	char *p = malloc(sizeof(str[0]) * len);

	if (str == NULL || p == NULL)
		return ('\0');
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);
}

/**
 * _strlen - Function to count lenght of string
 *
 * @c: parameter string to count
 *
 * Return: int
 */

int _strlen(char *c)
{
	int i;
	int count = 0;

	if (c == NULL)
		return ('\0');
	
	for (i = 0; c[i] != '\0'; i++)
		count += 1;
	return (count + 1);
}

