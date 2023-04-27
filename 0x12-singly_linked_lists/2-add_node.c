#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function that adds a new node at the beginning of a list
 * @head: A pointer to the list
 * @str: Needs to be duplicated
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	if (!head || !str)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (!node)
		return (NULL);
	node->str = strdup(str);
	if (!node->str)
	{
		free(node);
		return (NULL);
	}
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
