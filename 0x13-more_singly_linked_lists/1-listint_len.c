#include "lists.h"

/**
 * listint_len - Function to return number of list
 *
 * @h: singly linked list
 *
 * Return: size_t
 */

size_t listint_len(const listint_t *h)
{
	size_t numOfelements = 0;

	while (!(h == NULL))
	{
		numOfelements += 1;
		h = h->next;
	}
	return (numOfelements);
}
