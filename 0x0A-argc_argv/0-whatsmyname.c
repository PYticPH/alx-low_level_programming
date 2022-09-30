#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * 
 * @argc: parameter count
 * @argv: array of parameters
 *
 * return: sucess
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
