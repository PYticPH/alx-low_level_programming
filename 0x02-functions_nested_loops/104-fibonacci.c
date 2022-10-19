#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: program to print the first 98 fibonacci sequence
 *
 * Return: 0
 */

int main(void)
{
	int i;
	unsigned long tmp_1 = 0, tmp_2 = 1, tmp_3;
	unsigned long hTmp1, hTmp2, hTmp_1, hTmp_2;
	unsigned long tmp1, tmp2;

	for (i = 1; i <= 92; i++)
	{
		tmp_3 = tmp_1 + tmp_2;
		tmp_1 = tmp_2;
		tmp_2 = tmp_3;
		printf("%lu", tmp_3);
		if (i != 98)
			printf(", ");
	}

	hTmp1 = tmp_1 / 10000000000;
	hTmp2 = tmp_2 / 10000000000;
	hTmp_1 = tmp_1 % 10000000000;
	hTmp_2 = tmp_2 % 10000000000;

	for (i = 93; i <= 98; i++)
	{
		tmp1 = hTmp1 + hTmp2;
		tmp2 = hTmp_1 + hTmp_2;
		if (hTmp_1 + hTmp_2 > 9999999999)
		{
			tmp1 += 1;
			tmp2 %= 10000000000;
		}
		printf("%lu%lu", tmp1, tmp2);
		if (i != 98)
			printf(", ");
		hTmp1 = hTmp2;
		hTmp_1 = hTmp_2;
		hTmp2 = tmp1;
		hTmp_2 = tmp2;
	}
	printf("\n");
	return (0);
}
