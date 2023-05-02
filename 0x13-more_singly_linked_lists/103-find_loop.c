#include "lists.h"

/**
 * find_listint_loop - Function that finds the loop in a linked list
 * @head: A pointer to the head of a list
 * Return: The address of the node where the loop starts
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first = head, *last = head;

	while (first && last && last->next)
	{
		first = first->next;
		last = last->next->next;
		if (first == last)
		{
			first = head;
			while (first && last)
			{
				if (first == last)
					return (first);
				first = first->next;
				last = last->next;
			}
		}
	}
	return (NULL);
}
