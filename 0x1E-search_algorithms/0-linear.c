#include "search_algos.h"

/**
 * linear_search - search for value in an array of integers using
 * linear search
 *
 * @array: array to search
 *
 * @size: number of elements in the array
 *
 * @value: value to search for
 *
 * Return: int
 */

int linear_search(int *array, size_t size, int value)
{
	int i, j;

	j = size;

	if (array == NULL)
		return (-1);

	for (i = 0; i < j; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
