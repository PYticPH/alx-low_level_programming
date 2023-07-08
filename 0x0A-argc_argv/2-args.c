#include <stdio.h>

/**
* main - Entry point
*
* @argc: number of argument
* @argv: array of argument
*
* Return: void
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
