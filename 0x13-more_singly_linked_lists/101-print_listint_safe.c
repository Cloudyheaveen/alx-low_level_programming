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
	size_t i = 0;
	const listint_t *first, *last;

	first = head;
	last = head;

	while (first != NULL && last != NULL && last->next != NULL)
	{
		printf("[%p] %d\n", (void *) first, first->n);
		first = first->next;
		last = last->next->next;
		i++;
		if (first == last)
		{
			printf("[%p] %d\n", (void *) first, first->n);
			printf("-> [%p] %d\n", (void *) last->next, last->next->n);
			i++;
			break;
		}
	}
	while (first != NULL)
	{
		printf("[%p] %d\n", (void *) first, first->n);
		first = first->next;
		i++;
	}
	if (head == NULL || i == 0)
	{
		printf("-> [NULL]\n");
	}
	return (i);
}
