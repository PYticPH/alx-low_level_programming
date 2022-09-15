#include "main.h"
/**
 * print_alphabet - Function to print alphabet
 *
 * Description: print alphabet in lowercase
 *
 * return: (void)
 */

void print_alphabet(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (void);
}
