#include "main.h"

/**
 * _sqrt_recursion - Function that returns the natural square root of a number
 * @n: The square to calculate
 * Return: The natural square root of `n`,
 * or -1 if `n` does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	i = 1;
	while (i * i <= n)
		i++;
	i--;
	if (i * i == n)
		return (i);
	else
		return (-1);
}
