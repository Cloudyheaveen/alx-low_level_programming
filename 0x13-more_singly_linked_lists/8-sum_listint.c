#include "lists.h"

/**
 * sum_listint - Function that returns the sum of all the data (n) of a list
 * @head: A pointer to the head of a list
 * Return: If the list is empty, 0
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
