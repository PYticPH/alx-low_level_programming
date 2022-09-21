#include "main.h"
/**
 * puts_half - fuction to print half of a string
 *
 * @str: parameter
 *
 * Return: void
 */

void puts_half(char *str)
{
	int len, half_len;
	int x;

	len = _strlen(str);

	if (len % 2 == 0)
		half_len = len / 2;
	else
		half_len = (len - 1) / 2;
	for (x = half_len; x <= len; x++)
		_putchar(*(str + x));
	_putchar(10);
}


/**
 * _strlen - function to count the length of string
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
