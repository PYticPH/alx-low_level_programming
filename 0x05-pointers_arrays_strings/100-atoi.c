#include "main.h"

/**
 * _atoi - Function to convert string to integer
 *
 * @s: pointer to string parameter
 *
 * Return: int
 */

int _atoi(char *s)
{
	int index, sign = 1;
	int intNum = 0;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == '-')
			sign *= -1;
		else if (s[index] >= '0' && s[index] <= '9')
		{
			intNum = intNum * 10 + (s[index] - '0');
		}
		else if (intNum > 0)
			break;
	}

	return (sign * intNum);
}

