#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: The character to be computed
 * Return: absolute value of an integer or 0
 */
int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (c);
}
