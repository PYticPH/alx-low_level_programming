#include "main.h"
/**
 * _strcpy - function to copy strings
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int lpn, x;

	lpn = _strlen(src);

	for (x = 0; x <= lpn; x++)
	{
		*(dest + x) = src[x];
	}
	return (dest);
}

/**
 * _strlen - function to count the lenght of a string
 *
 * @s: parameter
 *
 * Return: 0
 */



int _strlen(char *s)
{
	int x;
	int count = 0;

	for (x = 0; s[x] != '\0'; x++)
		count += 1;
	return (count);
}
