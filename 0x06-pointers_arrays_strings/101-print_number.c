#include "main.h"

/**
 * print_number -  Function to print number
 *
 * @n: number to print
 *
 * Return: void
 */

void  print_number(int n)
{
	unsigned int intVal = n;

	if (intVal < 0)
	{
		_putchar('-');
		intVal = -intVal;
	}

	if (intVal / 10 > 0)
		print_number(intVal / 10);

	_putchar((intVal % 10) + '0');
}
