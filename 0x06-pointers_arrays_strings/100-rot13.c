#include "main.h"

/**
 * rot13 - Function to encode string to rot13
 *
 * @str: String parameter
 *
 * Return: pointer to char type
 */

char *rot13(char *str)
{
	int index, index2;
	char encBlk[52][52] = {{'A', 'N'}, {'B', 'O'}, {'C', 'P'}, {'D', 'Q'},
		{'E', 'R'}, {'F', 'S'}, {'G', 'T'}, {'H', 'U'}, {'I', 'V'},
		{'J', 'W'}, {'K', 'X'}, {'L', 'Y'}, {'M', 'Z'}, {'N', 'A'},
		{'O', 'B'}, {'P', 'C'}, {'Q', 'D'}, {'R', 'E'}, {'S', 'F'},
		{'T', 'G'}, {'U', 'H'}, {'V', 'I'}, {'W', 'J'}, {'X', 'K'},
		{'Y', 'L'}, {'Z', 'M'}, {'a', 'n'}, {'b', 'o'}, {'c', 'p'},
		{'d', 'q'}, {'e', 'r'}, {'f', 's'}, {'g', 't'}, {'h', 'u'},
		{'i', 'v'}, {'j', 'w'}, {'k', 'x'}, {'l', 'y'}, {'m', 'z'},
		{'n', 'a'}, {'o', 'b'}, {'p', 'c'}, {'q', 'd'}, {'r', 'e'},
		{'s', 'f'}, {'t', 'g'}, {'u', 'h'}, {'v', 'i'}, {'w', 'j'},
		{'x', 'k'}, {'y', 'l'}, {'z', 'm'}};

	for (index = 0; str[index] != '\0'; index++)
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (str[index] == encBlk[index2][0])
			{
				str[index] = encBlk[index2][1];
				break;
			}
		}
	}

	return (str);
}

