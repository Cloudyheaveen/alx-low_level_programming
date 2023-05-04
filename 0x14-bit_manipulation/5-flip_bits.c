#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to flip
 * to get from one number to another
 * @n: Unsigned long int to be converted
 * @m: A pointer to the number
 * Return: The number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int d = n ^ m;

	while (d)
	{
		i += (d & 1);
		d >>= 1;
	}
	return (i);
}
