#include "lists.h"

/**
 * list_len - Function to return number of elements
 *
 * @h: singly linked list
 *
 * Return: size_t
 */

size_t list_len(const list_t *h)
{
	size_t numOfelements = 0;

	while (h != NULL)
	{
		numOfelements += 1;
		h = h->next;
	}
	return (numOfelements);
}

