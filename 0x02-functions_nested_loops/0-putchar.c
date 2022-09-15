#include "main.h"
/**
 * main - Entry point
 *
 * Description: print _putchar
 *
 * Return: 0
 */

int main(void)
{
	char output[9] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
	{
		_putchar(output[i]);
	}
	_putchar('\n');
	return (0);
}
