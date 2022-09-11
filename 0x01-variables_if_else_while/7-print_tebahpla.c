#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'Reverse  alphabet'
 *
 * Return: Alway 0 (Success)
 */

int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
