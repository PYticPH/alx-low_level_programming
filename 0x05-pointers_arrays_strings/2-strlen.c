#include "main.h"
/**
 * _strlen - function to return length of string
 *
 * @s: parameter
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
