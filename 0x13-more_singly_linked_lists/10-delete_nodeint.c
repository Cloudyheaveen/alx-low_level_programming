#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Function that deletes the node at index index of a
 * linked list
 * @head: A pointer to the head of a list
 * @index: The index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *first, *last;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		first = *head;
		*head = first->next;
		free(first);
		return (1);
	}
	last = *head;
	first = last->next;
	for (i = 1; first != NULL; i++)
	{
		if (i == index)
		{
			last->next = first->next;
			free(first);
			return (1);
		}
		last = first;
		first = first->next;
	}
	return (-1);
}
