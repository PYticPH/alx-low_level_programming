#include "main.h"

/**
* _puts_recursion - Fuction to print a string followed by a new line
*
* @s: pointer to a string
*
* return: void
*/

void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar(10);
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
