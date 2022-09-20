#include "main.h"
/**
 * _puts - fuction that prints a sting
 *
 * @str: parameter
 *
 * Return: void
 */

void _puts(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar(10);
}
