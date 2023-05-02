#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Function that deletes the head node of a linked list
 * @head: A pointer to the head of a list
 * Return: The head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *i;

	if (*head == NULL)
		return (0);
	i = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(i);
	return (n);
}
