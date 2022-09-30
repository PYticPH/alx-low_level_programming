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
	int i = 1;
	int sum = 0;

	do {
		if (argc == 1)
			break;
		else if (!(isdigit(*argv[i])))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
		i++;
	} while (i < argc);
	printf("%d\n", sum);
	return (0);
}
