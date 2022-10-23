#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function to add node at list end
 *
 * @head: start point
 * @str: string character
 *
 * Return: list_t
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *firstNode, *newNode;

	firstNode = malloc(sizeof(list_t));
	if (str == NULL)
	{
		free(firstNode);
		return (NULL);
	}
	firstNode->str = strdup(str);
	firstNode->len = _strlen(str);
	firstNode->next = NULL;
	if (*head == NULL)
		*head = firstNode;
	else
	{
		newNode = *head;
		while (newNode->next != NULL)
			newNode = newNode->next;
		newNode->next = firstNode;
	}
	return (*head);
}


/**
 * _strlen - Function to count length of string
 *
 * @c: String parameter to count
 *
 * Return: int
 */

int _strlen(const char *c)
{
	int lengthOfstring = 0;

	while (c[lengthOfstring])
		lengthOfstring += 1;
	return (lengthOfstring);
}
