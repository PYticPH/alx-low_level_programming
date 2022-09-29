#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 *
 * @a: parameter
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;
	int len = sizeof(a) / sizeof(*a[0]);

	while (i < len)
	{
		for (j = 0; j < len; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
		i++;
	}
}
