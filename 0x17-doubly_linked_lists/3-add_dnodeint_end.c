#include "lists.h"

/**
 * add_dnodeint_end - Function that adds a new node at the end
 * of a dlistint_t list
 * @head: Pointer to the head of the list
 * @n: The value to store in the new node
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *b;

	b = malloc(sizeof(dlistint_t));
	if (b == NULL)
		return (NULL);
	b->n = n;
	b->next = NULL;
	a = *head;
	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = b;
	}
	else
	{
		*head = b;
	}
	b->prev = a;
	return (b);
}
