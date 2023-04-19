#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function
 * @argc: The number of arguments
 * @argv: An array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	arr = (char *)main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", arr[i]);
		if (i != num_bytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
