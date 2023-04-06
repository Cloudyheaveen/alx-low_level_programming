#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: The square to calculate
 * Return: The natural square root of `n`,
 * or -1 if `n` does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 0));
}

/**
 * _sqrt_helper - Recursive helper function for _sqrt_recursion
 * @n: The number to calculate the square root of
 * @i: The current number to check
 * Return: The natural square root of `n`,
 * or -1 if `n` does not have a natural square root
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_sqrt_helper(n, i + 1));
}
