
#include <stdio.h>

/**
 * main - Prints the first 52 Fibonacci numbers
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long int a = 0, b = 1, count;

	while (i < 50)
	{
		count = a + b;
		a = b;
		b = count;
		printf("%lu", count);

		if (i < 49)
		{
			printf(",");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
