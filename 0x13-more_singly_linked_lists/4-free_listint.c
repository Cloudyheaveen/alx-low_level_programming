#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - Function that frees a list
 * @head: A pointer to the head of a list
 */
void free_listint(listint_t *head)
{
	listint_t *i;

	while (head != NULL)
	{
		i = head;
		head = head->next;
		free(i);
	}
}

