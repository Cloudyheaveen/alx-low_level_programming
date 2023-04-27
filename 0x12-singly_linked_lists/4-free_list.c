#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees a list
 * @head: A pointer to the list
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		head = head->next;
		free(list->str);
		free(list);
	}
}
