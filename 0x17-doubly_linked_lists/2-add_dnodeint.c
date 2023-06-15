#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - Function that adds a new node at
 * the beginning of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: The value to store in the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *b;

	a = malloc(sizeof(dlistint_t));
	if (a == NULL)
		return (NULL);
	a->n = n;
	a->prev = NULL;
	b = *head;
	if (b != NULL)
	{
		while (b->prev != NULL)
			b = b->prev;
	}
	a->next = b;
	if (b != NULL)
		b->prev = a;
	*head = a;
	return (a);
}
