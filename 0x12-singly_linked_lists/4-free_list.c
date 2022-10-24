#include "lists.h"

/**
 * free_list - Function to free list
 *
 * @head: pointer to list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr->str);
		free(ptr);
	}
}
