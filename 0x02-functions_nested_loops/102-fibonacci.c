
#include <stdio.h>

/**
 * main - main block
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), follow by a new line
 * Return: Always 0
 */
int main(void)
{
	int a = 1;
	int b = 2;
	int c;

	printf("%d, %d", a, b);
	for (int i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %d", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
