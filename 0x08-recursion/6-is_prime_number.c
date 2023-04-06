#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the input integer is a prime
 * number, otherwise return 0
 * @n: The number to check
 * Return: If the n is prime then 1, otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - Checks if n is divisible
 * @i: The divisor tocheck with
 * @n: The number ti check
 * Return: If the n is prime then 1, otherwise 0
 */
int is_prime_number_helper(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime_number_helper(n, i + 1));
}
