#include "main.h"

int blklen(char *c);
/**
 * _strspn - Function to get length of prefix substring
 *
 * @s: parameter
 * @accept: parameter
 *
 * Return: char
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int count = 0;

	while (*s)
	{
		for (i = 0;; i++)
		{
			if (accept[i] == *s)
			{
				count += 1;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}
	return (count);
}

