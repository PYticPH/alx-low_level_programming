#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Program to print all lowercase alphabet
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha = alpha + 1;
	}
	putchar('\n');
	return (0);
}
