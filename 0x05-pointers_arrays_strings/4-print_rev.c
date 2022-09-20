#include  "main.h"

int _strlen(char *c);
/**
 * print_rev  - function  to print string in  reverse
 *
 * @s: parameter
 *
 * Return: void
 */

void print_rev(char  *s)
{
	int len;

	len = _strlen(s) - 1;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar(10);
}

/**
 * _strlen  -generate string length
 *
 * @c: parameter
 *
 * Return: (0)
 */

int _strlen(char *c)
{
	int x;
	int count = 0;

	for (x = 0; c[x] != '\0'; x++)
		count += 1;
	return (count);
}
