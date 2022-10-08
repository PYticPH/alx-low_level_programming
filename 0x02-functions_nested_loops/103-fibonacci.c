#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program to print the sum of even values in a fibonacci
 * sequence not greater than 4000000
 *
 * Return: 0
 */

int main(void)
{
	long tmp_1 = 0;
	long tmp_2 = 1;
	long tmp_3;
	long sum = 0;
	int i;

	for (i = 0;; i++)
	{
		tmp_3 = tmp_1 + tmp_2;
		tmp_1 = tmp_2;
		tmp_2 = tmp_3;
		if (tmp_3 > 4000000)
			break;
		if (tmp_3 % 2 == 0)
			sum += tmp_3;
	}
	printf("%lu\n", sum);
	return (0);
}
