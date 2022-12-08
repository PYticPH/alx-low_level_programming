#include "lists.h"

/**
 * add_dnodeint - Function to add node
 *
 * Description: add node at the beginning of dlistint list
 *
 * @head: double pointer parameter to head of list
 * @n: integer parameter
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t *));
	if (newNode == NULL)
	{
		printf("error: can't allocate memory\n");
		exit(EXIT_FAILURE);
	}

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (*head);
	}

	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;

	return (*head);
}
