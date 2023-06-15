#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * in a linked dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (i);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
