#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * f1 - Function that finds the biggest number
 * @n: The value of username
 * @len: The length of username
 * Return: The biggest number
 */
int f1(char *n, int len)
{
	int a;
	int b;
	unsigned int c;

	a = *n;
	b = 0;
	while (b < len)
	{
		if (a < n[b])
			a = n[b];
		b += 1;
	}

	srand(a ^ 14);
	c = rand();
	return (c & 63);
}

/**
 * f2 - Function that multiplies each char of username
 * @n: The value of username
 * @len: The length of username
 * Return: Multiplied char
 */
int f2(char *n, int len)
{
	int a;
	int b;

	a = b = 0;
	while (b < len)
	{
		a = a + n[b] * n[b];
		b += 1;
	}
	return (((unsigned int)a ^ 239) & 63);
}

/**
 * f3 - Function that generates a random char
 * @n: The value of username
 * Return: A random char
 */
int f3(char *n)
{
	int a;
	int b;

	a = b = 0;
	while (b < *n)
	{
		a = rand();
		b += 1;
	}
	return (((unsigned int)a ^ 229) & 63);
}

/**
 * main - Entry point
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	char keygen[7];
	int a, b, c;
	long alph[] = {
		0x3877445248432d41, 0x42394530534e6c37, 0x4d6e706762695432,
		0x74767a5835737956, 0x2b554c59634a474f, 0x71786636576a6d34,
		0x723161513346655a, 0x6b756f494b646850 };
	(void) argc;

	for (c = 0; argv[1][c]; c++)
		;
	keygen[0] = ((char *)alph)[(c ^ 59) & 63];
	a = b = 0;
	while (b < c)
	{
		a = a + argv[1][b];
		b = b + 1;
	}
	keygen[1] = ((char *)alph)[(a ^ 79) & 63];
	a = 1;
	b = 0;
	while (b < c)
	{
		a = argv[1][b] * a;
		b = b + 1;
	}
	keygen[2] = ((char *)alph)[(a ^ 85) & 63];
	keygen[3] = ((char *)alph)[f1(argv[1], c)];
	keygen[4] = ((char *)alph)[f2(argv[1], c)];
	keygen[5] = ((char *)alph)[f3(argv[1])];
	keygen[6] = '\0';
	for (a = 0; keygen[a]; a++)
		printf("%c", keygen[a]);
	return (0);
}
