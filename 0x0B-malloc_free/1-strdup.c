#include "main.h"

/**
 * _strdup - Function to duplicate an array
 *
 * @str: array characters/elements
 *
 * Return: success or failure
 */

char *_strdup(char *str)
{
	char *ptr;
	int i = 0, j = 0;

	while (str[i])
	{
		i++;
	}
	ptr = malloc(sizeof(char) * i);

	if (!ptr)
		return (NULL);

	while (j < i)
	{
		ptr[j] = str[j];
		j++;
	}

	return (ptr);
}
