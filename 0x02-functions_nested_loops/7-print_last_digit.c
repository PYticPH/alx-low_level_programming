#include "main.h"
/**
 * print_last_digit - function to print last  digit
 *
 * @a: variable/parameter
 *
 * Return: 0
 */

int print_last_digit(int a)
{
	int pld = a % 10;

	if (pld < 0)
		pld = pld * -1;
	_putchar(pld + '0');
	return (0);
}
