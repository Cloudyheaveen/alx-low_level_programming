#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Function that returns the number of elements in a linked list
 * @h: A pointer to the list
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		r++;
		h = h->next;
	}
	return (r);
}
