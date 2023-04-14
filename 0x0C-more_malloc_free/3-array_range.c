#include "main.h"
#include <stdlib.h>

/**
 * *array_range - Function that creates an array of integers
 * @min: The minimum value
 * @max: The maximum value
 * Return: The pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
