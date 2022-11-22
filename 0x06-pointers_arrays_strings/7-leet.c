#include "main.h"

/**
 * leet - Function to encode a string 1337
 *
 * @str: string parameter to encode
 *
 * Return: pointer of type char
 */

char *leet(char *str)
{
	char letArray[5][2] = {{'a', '4'}, {'e', '3'}, {'o', '0'},
		{'t', '7'}, {'l', '1'}};
	int index, index2;

	for (index = 0; str[index] != '\0'; index++)
	{
		for (index2 = 0; index2 < 5; index2++)
		{
			if  (letArray[index2][0] == str[index] ||
					letArray[index2][0] - 32 == str[index])
				str[index] = letArray[index2][1];
		}
	}

	return (str);
}
