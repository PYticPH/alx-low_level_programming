#include "main.h"

/**
 * _isupper - Function to check for uppecase character
 *
 * @c: parameter
 *
 * Description: check uppercase character
 *
 * Return: success/failure
 */

int _isupper(int c)
{

	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}
