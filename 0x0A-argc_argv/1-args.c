#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc: parameter
 * @argv: array of parameters
 *
 * Return: SUCCESS
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int args = 0;

	while (argc > 1)
	{
		args += 1;
		argc--;
	}
	printf("%d\n", args);
	return (0);
}
