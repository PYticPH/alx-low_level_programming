#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Program to compute the sum of multiples of 3 and 5 below 1024
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int sum_of_num = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum_of_num += i;
	}
	printf("%d\n", sum_of_num);
	return (0);
}
