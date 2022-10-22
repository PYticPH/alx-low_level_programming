#include "lists.h"
#include <string.h>

/**
 * add_node - Function to add new node at the beginning
 *
 * @head: Start point
 * @str: String value
 *
 * Return: list_t
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int len = 0;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	while (str[len] != '\0')
		len += 1;
	ptr->len = len;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
