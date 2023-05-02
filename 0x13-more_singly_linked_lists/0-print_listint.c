#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Function that prints all the elements of a list
 * @h: A pointer of the list
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
