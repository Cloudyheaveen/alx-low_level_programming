#include "lists.h"
#include <stdio.h>

/**
 * print_list - Function that prints all the elements of a list_t list
 * @h: A pointer
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t r = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		r++;
	}
	return (r);
}