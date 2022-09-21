#include "main.h"

/**
 * puts2 -function to print every other characters
 *
 * @str: parameter
 *
 * Return: void
 */


void puts2(char *str)
{
	int len;
	int x;

	len = _strlen(str) - 1;
	for (x = 0; x <= len; x++)
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar(10);
}


/**
 * _strlen - function to count length of a string
 *
 * @c: parameter
 *
 * Return: 0
 */

int _strlen(char *c)
{
	int count = 0;
	int x;

	for (x = 0; c[x] != '\0'; x++)
		count += 1;
	return (count);
}
