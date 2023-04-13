#include "main.h"
#include <stdlib.h>

/**
 * *_memset - Function helper
 * @s: The string
 * @c: The char
 * @n: The number of times to copy c
 * Return: A pointer to the string @s
 */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		s[i] = c;
	}
	return (s);
}

/**
 * *_calloc - Function that allocates memory for an array, using malloc
 * @nmemb: Number of elements
 * @size: Size of elements
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	_memset(ptr, 0, nmemb * size);
	return (ptr);
}
