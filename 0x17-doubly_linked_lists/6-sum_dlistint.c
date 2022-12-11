#include "lists.h"

/**
 * sum_dlistint - Fuction that return sum of data
 *
 * Description: return sum of data in a list
 *
 * @head: pointer to head of list
 *
 * Return: int
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
