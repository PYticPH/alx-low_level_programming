#include "main.h"

int _strlen(char *c);
/**
 * _strcat - function to concatenate strings
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	char *sptr;
	int len, x, y;
	int dlen = sizeof(dest);

	len = _strlen(src);
	for (x = 0; x < dlen; x++)
	{
		if (dest[x] == '\0')
		{
			for (y = 0; y <= len; y++)
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

/**
 * _strlen - fuction to return length of string
 *
 * @c: parameter
 *
 * Return: length of src
 */

int _strlen(char *c)
{
	int x;
	int count = 0;

	for (x = 0; c[x] != '\0'; x++)
		count += 1;
	return (count);
}
