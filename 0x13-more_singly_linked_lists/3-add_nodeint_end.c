#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Function that adds a new node at the end of a list
 * @head: A pointer to the head of a list
 * @n: The number to add
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *first, *last = *head;

	first = malloc(sizeof(listint_t));
	if (first == NULL)
		return (NULL);
	first->n = n;
	first->next = NULL;
	if (*head == NULL)
	{
		*head = first;
		return (first);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = first;
	return (first);
}
