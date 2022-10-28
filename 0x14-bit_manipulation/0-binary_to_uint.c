#include "main.h"

/**
 * binary_to_uint - Function to convert binary number to unsigned int
 *
 * @b: parameter character to convert/number
 *
 * Return: unsigned int
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int decNum = 0;
	int base = 1;
	int len;

	len = checkString(b);
	if (len == 0)
		return  (0);

	while (b[len - 1] != '\0')
	{
		decNum += (b[len - 1] - '0') * base;
		base *= 2;
		len--;
	}
	return (decNum);
}

/**
 * checkString - check for valid string
 *
 * Description: check for valid string return length of string if valid
 *
 * @c: parameter pointer to string
 *
 * Return: int
 */

unsigned int checkString(const char *c)
{
	int count = 0;

	if (c == NULL)
		return (0);

	while (c[count] != '\0')
	{
		if (c[count] < '0' || c[count] > '1')
			return (0);
		count++;
	}
	return (count);
}
