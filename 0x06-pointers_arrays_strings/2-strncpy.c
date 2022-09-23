#include "main.h"
/**
 * _strncpy - function to copy a string
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;
	char *ptr;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';
	ptr = dest;
	return (ptr);
}
