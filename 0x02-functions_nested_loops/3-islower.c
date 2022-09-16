#include "main.h"

/**
 * _islower - Function to compare case
 *
 * @c: argument to function _islower
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
