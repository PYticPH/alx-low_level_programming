#include "main.h"

/**
* str_concat - Function to concatenate two string
*
* @s1: pointer to first string
* @s2: pointer to second string
*
* Return: success or failure
*/

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int stringLen1 = _strlen(s1);
	unsigned int stringLen2 = _strlen(s2);
	unsigned int totalLen = stringLen1 + stringLen2;
	unsigned int i = 0;

	ptr = malloc(sizeof(char) * totalLen + 1);

	if (!ptr)
		return (NULL);

	while (i < totalLen)
	{
		if (i <= (stringLen1 - 1))
			ptr[i] = s1[i];
		else
			ptr[i] = s2[(i - (stringLen1))];
		i++;
	}

	return (ptr);
}

/**
* _strlen - Function to to get the length of a string
*
* @str: pointer to string
*
* Return: int
*/

int _strlen(char *str)
{
	unsigned int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}
