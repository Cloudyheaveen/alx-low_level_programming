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
	const listint_t *first =  head, *last = head;

	if (head == NULL)
		return (0);
	while (last != NULL && last->next != NULL)
	{
		printf("[%p] %d\n", (void *)first, first->n);
		i++;
		first = first->next;
		last = last->next->next;
		if (first == last)
		{
			printf("-> [%p] %d\n", (void *)first, first->n);
			break;
		}
	}
	if (last == NULL || last->next == NULL)
		while (first != NULL)
		{
			printf("[%p] %d\n", (void *)first, first->n);
			i++;
			first = first->next;
		}
	else
	{
		first = head;
		while (first != last)
		{
			printf("[%p] %d\n", (void *)first, first->n);
			i++;
			first = first->next;
			last = last->next;
		}
		printf("[%p] %d\n", (void *)first, first->n);
		i++;
	}
	return (i);
}
