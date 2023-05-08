#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, k;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (j = 0; text_content[j]; j++)
			continue;
		k = write(i, text_content, j);
		if (k == -1)
		{
			close(i);
			return (-1);
		}
	}
	close(i);
	return (1);
}
