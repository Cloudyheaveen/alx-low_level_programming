#include "search_algos.h"

/**
  * linear_search - Function that searches for a value in an array of integers
  * using the Linear search algorithm
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in the array
  * @value: The value to search for
  * Return: If value is not present in array or if array is NULL,
  * your function must return -1
  */
int linear_search(int *array, size_t size, int value)
{
	size_t a;

	if (array == NULL)
		return (-1);

	for (a = 0; a < size; a++)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		if (array[a] == value)
			return (a);
	}

	return (-1);
}
