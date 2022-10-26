#include "lists.h"

/**
 * pop_listint - Function to delete the head node
 *
 * @head: double pointer parameter to head of list
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL)
		return (0);

	ptr = *head;
	n = ptr->n;
	*head = ptr->next;

	free(ptr);
	ptr = NULL;

	return (n);
}
