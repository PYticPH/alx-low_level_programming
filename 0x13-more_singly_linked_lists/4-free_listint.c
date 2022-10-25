#include "lists.h"

/**
 * free_listint - Free list
 *
 * @head: head of a singly linked list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
