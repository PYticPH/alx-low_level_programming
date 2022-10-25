#include "lists.h"

/**
 * free_listint2 - Free list and set head to null
 *
 * @head: head of a singly linked list
 *
 * Return: void
 */

void  free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptr2;

	ptr = *head;

	while (ptr != NULL)
	{
		ptr2 = ptr;
		ptr = ptr->next;
		free(ptr2);
	}
	*head = NULL;
}
