#include "function_pointers.h"

/**
 * print_name - Function to print name
 *
 * @name: string parameter
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{	
	if (name != NULL)
		f(name);
}
