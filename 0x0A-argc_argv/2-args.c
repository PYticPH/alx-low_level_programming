#include <stdio.h>
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

	while (argc != 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	exit(EXIT_SUCCESS);
}
