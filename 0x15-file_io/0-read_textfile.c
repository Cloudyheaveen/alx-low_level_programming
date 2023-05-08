#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads a text file and prints it to
 * the POSIX standard output
 * @filename: Name of the file to read
 * @letters: The number of letters it should read and print
 * Return: The actual number of letters it could read and print, overwhise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t w, r;
	char *buffer;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	r = read(i, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1 || w != r)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(i);
	return (w);
}
