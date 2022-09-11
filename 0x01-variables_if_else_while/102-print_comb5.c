#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print all possible combinations
 *
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <=98; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(32);
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a / 10 != 9 || a % 10 != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar(10);
	return (0);
}
