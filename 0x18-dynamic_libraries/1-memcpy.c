#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @n: The number of bytes to copy
 * @src: source memory area
 * @dest: destination memory area
 * Return: A pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
