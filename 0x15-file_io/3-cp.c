#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char **argv);
int cp_file(const char *src, const char *dest);

/**
 * cp_file - Program that copies the content of a file to another file
 * @src: The source of the file
 * @dest: The destinatin of the file
 * Return: 0
 */
int cp_file(const char *src, const char *dest)
{
	int i, j, r, w;
	char buffer[BUFFER_SIZE];

	i = open(src, O_RDONLY);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		return (98);
	}
	j = open(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
		return (99);
	}
	do {
		w = read(i, buffer, BUFFER_SIZE);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
				return (98);
		}
		r = write(j, buffer, w);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			return (99);
		}
	} while (w > 0);
		if (close(i) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i);
			return (100);
		}
	if (close(j) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", j);
		return (100);
	}
	return (0);
}


/**
 * main - Check the code
 * @argv: The argument vector
 * @argc: The argument count
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	i = cp_file(argv[1], argv[2]);
	exit(i);
}
