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
	int i;
	long num = 612852475143;

	for (i = 1; i < (num / 2); i++)
	{
		if (i % 2 == 0)
		{
			num /= 2;
			continue;
		}
		for (i = 3; i < (num / 2); i += 2)
		{
			if ((num % i) == 0)
				num /= i;
		}
	}
	printf("%ld\n", num);
	return (0);
}
