#include "main.h"

/**
 * _strcat - Function that concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, b;

	while (dest[a])
	{
		a++;
	}
	for (b = 0; src[b] != 0; b++)
	{
		dest[a] = src[b];
		a++;
	}
	dest[a]  = '\0';
	return (dest);
}
