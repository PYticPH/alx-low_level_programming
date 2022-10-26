#include "lists.h"

/**
 * sum_listint - Function to return sum of data
 *
 * Description: return sum of n data in a linked list
 *
 * @head: pointer to link head
 *
 * Return: int
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

