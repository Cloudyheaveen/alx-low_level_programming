#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: First integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
