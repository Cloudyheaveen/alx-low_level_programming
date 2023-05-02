#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Function that frees a list
 * @h: A pointer to the head of a list
 * Return: The size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *first, *last;
	size_t i = 0;

	if (h == NULL || *h == NULL)
		return (0);
	first = *h;
	*h = NULL;
	while (first != NULL)
	{
		i++;
		if (first < first->next)
		{
			last = first;
			first = first->next;
			free(last);
		}
		else
		{
			free(first);
			break;
		}
	}
	return (i);
}
