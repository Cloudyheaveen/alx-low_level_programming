#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that inserts a new node at a
 * given position
 * @head: A pointer to the head of a list
 * @idx: The index of the list where the new node should be added
 * @n: The number of node to add
 * Return: The address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *first, *last;

	if (head == NULL)
		return (NULL);
	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	if (idx == 0)
	{
		first->next = *head;
		*head = first;
		return (first);
	}
	last = *head;

	for (i = 0; i  < idx - 1 && last != NULL; i++)
	{
		last = last->next;
	}
		if (last == NULL)
		{
			free(first);
			return (NULL);
		}
		first->next = last->next;
		last->next = first;
		return (first);
}
