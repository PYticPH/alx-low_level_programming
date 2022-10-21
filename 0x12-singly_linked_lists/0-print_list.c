#include "lists.h"

/**
 * print_list - Print elemeent in a list
 *
 * @h: list
 *
 * Return: size_t
 */

size_t print_list(const list_t *h)
{
	size_t numOflist = 0;
	const list_t *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		numOflist += 1;
		ptr = ptr->next;
	}
	return (numOflist);
}
