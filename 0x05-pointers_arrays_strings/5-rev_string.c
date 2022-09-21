#include "main.h"

void swap(char *y, char *z);
int _strlen(char *c);
/**
 * rev_string - function to print a string in reverse
 *
 * @s: parameter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len;
	int x = 0;

	len = _strlen(s) - 1;
	while (len > x)
	{
		swap(s + len, s + x);
		x++;
		len--;
	}
}

/**
 * _strlen - function to count length of string
 *
 * @c: parameter
 *
 * Return: 0
 */

int _strlen(char *c)
{
	int k;
	int count = 0;

	for (k = 0; c[k] != '\0'; k++)
		count += 1;
	return (count);
}

/**
 * swap - function to swap elements in array
 *
 * @y: parameter
 * @z: parameter
 *
 * Return: void
 */

void swap(char *y, char *z)
{
	char sub = *y;
	*y = *z;
	*z = sub;
}
