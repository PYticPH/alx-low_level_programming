#include "main.h"

/**
* _strlen_recursion - Function to count the length of string using
* _strlen_recursion
*
* @s: pointer parameter to string
*
* Return: int
*/

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
