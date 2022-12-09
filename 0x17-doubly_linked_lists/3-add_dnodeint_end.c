#include "lists.h"

/**
 * add_dnodeint_end - Function to add node
 *
 * Description: Add node at end of list
 *
 * @head: double pointer parameter pointing to head of list
 * @n: intefer parameter data
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *ptr;

	newNode = malloc(sizeof(dlistint_t *));
	if (newNode == NULL)
		return (NULL);

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = newNode;
	newNode->prev = ptr;

	return (*head);
}
