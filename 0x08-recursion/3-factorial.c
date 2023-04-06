#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number
 * @n: The number to calculate
 * Return: The factorial of the number, or -1 if n is negative
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
