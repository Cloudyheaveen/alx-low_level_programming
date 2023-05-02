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

	if (head == NULL)
		exit(98);
	first = head;
	last = head;
	while (first && last && first->next)
	{
		first = first->next->next;
		last = last->next;
		printf("[%p] %d\n", (void *)last, last->n);
		if (last == first)
		{
			last = head;
			while (last && first)
			{
				printf("[%p] %d\n", (void *)last, last->n);
				if (last == first)
					return (i);
				last = last->next;
				first = first->next;
				i++;
			}
		}
		i++;
	}
	return (i);
}
