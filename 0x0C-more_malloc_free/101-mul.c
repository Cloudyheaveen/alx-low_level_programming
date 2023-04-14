#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERROR_MESSAGE "Errors"
/**
 * is_digit - Check if numbers are 0 - 9
 * @c: char to be checked
 * Return: 1 or 0
 */
int is_digit(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] < '0' || c[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - Function that returns the length of a string
 * @s: The string
 * Return: The length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - The errors in main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - A program that multiplies two positive numbers
 * @argv: The array of arguments
 * @argc: The number of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l, l1, l2, d1, d2, i, c, j = 0, *result;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	result = malloc(sizeof(int) * l);
	if (!result)
		return (1);
	for (i = 0; i <= l1 + l2; i++)
		result[i] = 0;
	for (l1 = l1 - 1; l1 >= 0; l1--)
	{
		d1 = s1[l1] - '0';
		c = 0;
		for (l2 = _strlen(s2) - 1; l2 >= 0; l2--)
		{
			d2 = s2[l2] - '0';
			c += result[l1 + l2 + 1] + (d1 * d2);
			result[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			result[l1 + l2 + 1] += c;
	}
	for (i = 0; i < l - 1; i++)
	{
		if (result[i])
			j = 1;
		if (j)
			_putchar(result[i] + '0');
	}
	if (!j)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
