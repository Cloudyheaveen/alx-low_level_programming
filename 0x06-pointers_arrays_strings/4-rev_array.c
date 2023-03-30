#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @n: The number of elements of the array
 * @a: The array of integers to reverse
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
