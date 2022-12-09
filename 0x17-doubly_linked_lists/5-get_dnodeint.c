#include "lists.h"

/**
 * get_dnodeint_at_index - Function to return node at index
 *
 * Description: return node at certain index
 *
 * @head: pointer to head of list
 * @n: integer parameter of list index to return
 *
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int n)
{
	if (head == NULL)
		return (NULL);

	while (n)
	{
		head = head->next;
		n--;
	}
	return (head);
}
