#include "lists.h"

/**
 * print_dlistint - Function to print all the elements
 *
 * Description: print all element of dlistint_t list
 *
 * @h: pointer parameter
 *
 * Return: dlistint_t
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head;

	head = h;
	while (head != NULL)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}

	return (count);
}
