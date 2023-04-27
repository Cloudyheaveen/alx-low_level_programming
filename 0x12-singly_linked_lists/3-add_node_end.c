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
	list_t *first, *last = *head;
	unsigned int l = 0;

	while (str[l])
		l++;

	first = malloc(sizeof(list_t));
	if (!first)
		return (NULL);

	first->str = strdup(str);
	first->len = l;
	first->next = NULL;

	if (*head == NULL)
	{
		*head = first;
		return (first);
	}
		while (last->next)
			last = last->next;

		last->next = first;
	return (first);
}
