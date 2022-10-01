#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * @argc: parameter
 * @argv: array of parameters
 *
 * Return: SUCCESS
 */

int main(int argc, char *argv[])
{
	int j;
	int i = 1;
	int sum = 0;

	do {
		if (argc == 1)
			break;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
		i++;
	} while (i < argc);
	printf("%d\n", sum);
	return (0);
}
