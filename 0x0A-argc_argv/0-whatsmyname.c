#include <stdio.h>
/**
 * main - entry point
 *
 * @argc: parameter count
 * @argv: array of parameters
 *
 * Return: SUCCESS
 */

int print_argv(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0)
}
