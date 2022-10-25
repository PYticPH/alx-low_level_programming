#include "lists.h"

/**
 * add_nodeint_end - Function to add list at the end
 *
 * @head: head of linked list
 * @n: integer parameter
 *
 * Return: listint_t
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *firstNode, *newNode;

	firstNode = malloc(sizeof(listint_t));
	if (firstNode == NULL)
		return (NULL);
	firstNode->n = n;
	firstNode->next = NULL;

	if (*head == NULL)
	{
		*head = firstNode;
		return (*head);
	}

	newNode = *head;
	while (newNode->next != NULL)
		newNode = newNode->next;
	newNode->next = firstNode;

	return (*head);
}
