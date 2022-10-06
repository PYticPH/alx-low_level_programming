#include "main.h"

/**
 * _isdigit - Function to check for a digit
 *
 * @c: parameter
 *
 * Description: check for a digit
 *
 * Return: success/failure
 */

int _isdigit(int c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
