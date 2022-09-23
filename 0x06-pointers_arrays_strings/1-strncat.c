#include "main.h"

int _strlen(char *c);
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
	int x, len_dest;

	len_dest = _strlen(dest);
	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[len_dest + x] = src[x];
	dest[len_dest + 1 + x] = '\0';
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
