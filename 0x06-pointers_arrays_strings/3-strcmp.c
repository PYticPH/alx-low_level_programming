#include "main.h"

int _strlen(char *c);
/**
 * _strcmp - Function to compare two strings
 *
 * @s1: parameter
 * @s2: parameter
 *
 * Return: char
 */

int _strcmp(char *s1, char *s2)
{
	int x, check;

	for (x = 0; s1[x] != '\0'; x++)
	{
		check = s1[x] - s2[x];
		if (check == 0)
			continue;
		else if (s1[x] == '\0' && s2[x] == ' ')
		{
			check = s1[x] - ' ';
			break;
		}
		else
			break;
	}
	return  (check);
}
