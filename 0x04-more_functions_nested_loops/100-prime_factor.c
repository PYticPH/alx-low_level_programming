#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print largest prime factor
 *
 * Return: 0
 */

int main(void)
{
	int i, j, x, z;
	long int num = 612852475143;

	for ( i = 1; i <= num; i++)
	{
		x = 0;
		for (j = 1; j <= i; j++)
		{
			if (i % j == 0)
				x += 1;
		}
		if (x >= 1  && x <= 2)
		{
			if (num % i == 0)
				z = i;
		}
	}
	printf("%d", z);
	return (0);
}
			

