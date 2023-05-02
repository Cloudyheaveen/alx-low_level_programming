#include "lists.h"

/**
 * get_nodeint_at_index - Function that returns the nth node of a list
 * @head: A pointer to the head of a list
 * @index: The index of the node
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
