#include "lists.h"

/**
 * insert_dnodeint_at_index - Function that inserts a new node
 * at a given position
 * @h: Pointer to the head of the list
 * @idx: The index of the list where the new node should be added
 * @n: The value to store in the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *a;
	dlistint_t *b;
	unsigned int c;

	a = NULL;
	if (idx == 0)
		a = add_dnodeint(h, n);
	else
	{
		b = *h;
		c = 1;
		if (b != NULL)
			while (b->prev != NULL)
				b = b->prev;
		while (b != NULL)
		{
			if (c == idx)
			{
				if (b->next == NULL)
					a = add_dnodeint_end(h, n);
				else
				{
					a = malloc(sizeof(dlistint_t));
					if (a != NULL)
					{
						a->n = n;
						a->next = b->next;
						a->prev = b;
						b->next->prev = a;
						b->next = a;
					}
				}
				break;
			}
			b = b->next;
			c++;
		}
	}
	return (a);
}
