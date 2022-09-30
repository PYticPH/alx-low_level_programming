#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: number parameter(s)
 * @argv: array of parameters
 *
 * Return: SUCCESS
 */

int main(int argc, char *argv[])
{
	int mul = 1;
	int i;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
