#include "lists.h"

/**
 * add_nodeint - Function to add new node to a list
 *
 * Description: Add new node to the beginning of list
 *
 * @head: pointer to head of list
 * @n: integer element
 *
 * Return: listint_t
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;

	newNode->next = *head;
	*head = newNode;

	return (*head);
}


