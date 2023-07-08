#include <stdio.h>

/**
* main - Entry point
*
* @argc: number of argument
* @argv: array of argument
*
* Return: void
*/

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
