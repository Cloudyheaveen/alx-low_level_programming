#include "lists.h"

/**
 * sum_dlistint - Function that returns the sum of all the data (n)
 * of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int a;

	a = 0;
	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			a += head->n;
			head = head->next;
		}
	}
	return (a);
}
