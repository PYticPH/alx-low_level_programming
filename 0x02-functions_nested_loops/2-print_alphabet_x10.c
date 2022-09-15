#include "main.h"
/**
 * print_alphabet_x10: Function to print alphabet
 *
 * Description: print alphabet ten times in a new line
 *
 * eeturn: (void)
 */

void print_alphabet_x10(void)
{
	int repeat;
	char alpha;

	for (repeat = 1; repeat <= 10; repeat++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
