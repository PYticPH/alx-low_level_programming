#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Program to print all alphabets in u/l case'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower = lower + 1;
	}

	while (upper <= 'Z')
	{
		putchar(upper);
		upper = upper + 1;
	}
	putchar('\n');
	return (0);
}
