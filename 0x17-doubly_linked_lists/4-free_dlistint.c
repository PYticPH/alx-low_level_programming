#include "lists.h"

/**
 * free_dlistint - Function to free list
 *
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{

	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
