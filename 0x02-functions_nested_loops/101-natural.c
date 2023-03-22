#include "main.h"

/**
 * main - Prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sum, num;

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			num += sum;
	}
	printf("%d\n", j);

	return (0);
}
