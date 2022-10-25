#include "lists.h"

/**
 * print_listint - Function to print all elements in a list
 *
 * @h: constant list type
 *
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t numOfelements = 0;

	ptr = h;

	while (!(ptr == NULL))
	{
		numOfelements += 1;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (numOfelements);
}
