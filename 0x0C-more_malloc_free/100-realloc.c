#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - Function that reallocates a memory block using malloc and free
 * @old_size: The old size
 * @new_size: The new size
 * @ptr: A pointer to the memory previously allocated with a call to malloc
 * Return: NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *old_ptr;
	char *new_ptr;
	unsigned int i;

	old_ptr = ptr;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	if (new_size < old_size)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
		free(ptr);
		return (new_ptr);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		if (!new_ptr)
			return (NULL);
		for (i = 0; i < old_size; i++)
			old_ptr[i] = new_ptr[i];
		free(ptr);
		return (new_ptr);
	}
	return (NULL);
}

