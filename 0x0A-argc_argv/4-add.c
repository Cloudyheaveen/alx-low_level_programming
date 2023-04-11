#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers
 * @argc: The number of arguments
 * @argv: The array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int num;
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

/**
 * check_num - If the string are digit
 * @s: The array string
 * Return: 0
 */
int check_num(char *s)
{
	unsigned int count;

	count = 0;
	while (count < strlen(s))
	{
		if (!isdigit(s[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
