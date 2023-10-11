#include "search_algos.h"

/**
  * interpolation_search - Function that searches for a value in a sorted array
  * of integers using the Interpolation search algorithm
  * @array: A pointer to the first element of the array to search in
  * @size: The number of elements in the array
  * @value: The value to search for
  * Return: If value is not present in array or if array is NULL,
  * your function must return -1
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t x, y, z;

	if (array == NULL)
		return (-1);

	for (y = 0, z = size - 1; z >= y;)
	{
		x = y + (((double)(z - y) / (array[z] - array[y])) * (value - array[y]));
		if (x < size)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", x);
			break;
		}

		if (array[x] == value)
			return (x);
		if (array[x] > value)
			z = x - 1;
		else
			y = x + 1;
	}

	return (-1);
}
