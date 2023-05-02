#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Function that prints a linked list
 * @head: A pointer to the head of a list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *first = head, *last = NULL;
	size_t i = 0;

	while (first != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)first, first->n);
		last = first;
		first = first->next;
		if (last <= first)
		{
			printf("-> [%p] %d\n", (void *)first, first->n);
			exit(98);
		}
	}
	return (i);
}
