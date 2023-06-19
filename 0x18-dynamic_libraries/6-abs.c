#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: The character to be computed
 * Return: absolute value of an integer or 0
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
