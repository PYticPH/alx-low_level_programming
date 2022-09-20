#include  "main.h"
/**
 * print_rev  - function  to print string in  reverse
 *
 * @s: parameter
 *
 * Return: void
 */

void print_rev(char  *s)
{
	char x = 0;

	while  (*(s + x) != '\0')
	{
		x++;
	}
	while (x > -1)
	{
		_putchar(*(s + x));
		x--;
	}
	_putchar(10);
}
