#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - Function that executes a function given
 * as a parameter on each element of an array
 * @array: A pointer to an integer array
 * @size: The size of the array
 * @action: A pointer to the function you need to use
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
