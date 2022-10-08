#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program to print the first 50 fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long tmp_1 = 0;
	long tmp_2 = 1;
	long tmp_3;

	for (i = 1; i <= 50; i++)
	{
		tmp_3 = tmp_1 + tmp_2;
		tmp_1 = tmp_2;
		tmp_2 = tmp_3;
		printf("%lu, ", tmp_3);
	}
	printf("%lu", tmp_3);
	printf("\n");
	return (0);
}
