#include "main.h"

/**
 * create_file - Function that creates a file
 * @filename: The name of the file to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i, j, w;

	if (filename == NULL)
		return (-1);
	j = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (j == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(j);
		return (1);
	}
	for (i = 0; text_content[i]; i++)
		;
	w = write(j, text_content, i);
	close(j);
	if (w == -1)
		return (-1);
	return (1);
}
