#include "lists.h"

/**
 * listint_len - Function that returns the number of elements in a linked list
 * @h: A pointer of list
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
