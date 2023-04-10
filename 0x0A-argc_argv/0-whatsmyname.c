#include "main.h"
#include <stdio.h>

/**
 * main - Program that prints its name,
 * @argc: The array of arguments
 * @argv: The number of arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
