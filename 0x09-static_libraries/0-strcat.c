#include "main.h"

/**
 * _strcat - Function with two strings
 * @src: Source string
 * @dest: Destination string
 * Return: A pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
