#include "main.h"

char autoCap(char n);
/**
 * string_toupper - function to change string case
 *
 * @str: parameter
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	int count = 0;
	char upper, lower;

	while (str[count] != '\0')
	{
		if (str[count] >= 'a' && str[count] <= 'z')
		{
			lower = str[count];
			upper = autoCap(lower);
			str[count] = upper;
		}
		count++;
	}
	return (str);
}

/**
 * autoCap - Function to convert lowercase to uppercase
 *
 * @n: parameter
 *
 * Return: char
 */

char autoCap(char n)
{
	int strpos = 0;
	char asc;
	char ascc = 'A';

	for (asc = 'a'; asc <= 'z'; asc++)
	{
		if (asc == n)
			break;
		strpos += 1;
	}
	return ((ascc + strpos));
}


