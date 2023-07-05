#include "main.h"

/**
* _puts_recursion - Function to print a string
*
* @s: pointer parameter to string to print
*
* Return: void
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
