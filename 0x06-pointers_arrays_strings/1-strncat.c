#include "main.h"
/**
 * _strncat - fuction to concatenate string
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: concat string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *sptr;
	int x, y;

	for (x = 0; x > -1; x++)
	{
		if (dest[x] == '\0')
		{
			for (y = 0; y < n; y++)
			{
				*(dest + x) = src[y];
				x++;
			}
			break;
		}
		else
			continue;
	}
	sptr = dest;
	return (sptr);
}
