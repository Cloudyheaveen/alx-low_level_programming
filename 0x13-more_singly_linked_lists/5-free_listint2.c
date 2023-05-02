#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - Function that frees a list
 * @head: A pointer to the head of a list
 */
void free_listint2(listint_t **head)
{
	listint_t *i;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		i = *head;
		*head = (*head)->next;
		free(i);
	}
	*head = NULL;
}
