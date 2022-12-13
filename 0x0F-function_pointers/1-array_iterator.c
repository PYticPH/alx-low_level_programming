#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function
 *
 * Description: execute a function given as a parameter
 *
 * @array: array of data
 * @size: size of array
 * @action: pointer to fuction to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int num = size;
	int idx;

	if (array == NULL || num < 0 || action == NULL)
		return;

	for (idx = 0; idx < num; idx++)
	{
		(*action)(array[idx]);
	}
}
