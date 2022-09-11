#include <stdio.h>
/**
 * main - Entry point
 *
 * Descriptin: 'print alphabets except e and q'
 *
 * Return: Always 1 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'e' || c == 'q')
			continue;
		putchar(c);
	}
	putchar('\n');
	return (0);
}
