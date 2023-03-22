#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The character to be printed
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}
