#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 * @head: A pointer to the head of a list
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first = NULL, *last = NULL;

	while (*head != NULL)
	{
		last = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = last;
	}
	*head = first;
	return (*head);
}
