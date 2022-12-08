#include "lists.h"

/**
 * dlistint_len - Function to print number of elements
 *
 * Description: print number of elements in dlistint_t list
 *
 * @h: pointer parameter
 *
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head;

	head = h;
	while (head != NULL)
	{
		head = head->next;
		count++;
	}

	return (count);
}
