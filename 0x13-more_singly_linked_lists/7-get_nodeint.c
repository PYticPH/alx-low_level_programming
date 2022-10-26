#include "lists.h"

/**
 * get_nodeint_at_index - Function to return nth code
 *
 * @head: head of a linked list
 * @index: index number of array
 *
 * Return: listint_t
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int limNum = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	node = head;

	while (limNum < index)
	{
		node = node->next;
		limNum++;
	}

	return (node);
}

