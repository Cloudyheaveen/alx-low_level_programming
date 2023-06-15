#include "lists.h"

/**
 * free_dlistint - Function that frees a dlistint_t list
 * @head: Pointer to the head of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *a;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((a = head) != NULL)
	{
		head = head->next;
		free(a);
	}
}
