#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - Function that adds a new node at the end of a list
 * @head: A pointer to the list
 * @str: Needs to be duplicated
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *first, *last;

	if (head == NULL || str == NULL)
		return (NULL);
	first = malloc(sizeof(list_t));
	if (first->str == NULL)
	{
		free(first);
		return (NULL);
	}
	first->len = strlen(str);
	first->next = NULL;
	if (*head == NULL)
		*head = first;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = first;
	}
	return (first);
}
