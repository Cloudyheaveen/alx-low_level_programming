#include "main.h"

/**
 * _memset - Function with a constant byte
 * @n: The number of bytes
 * @b: The byte
 * @s: The pointer
 * Return: A pointer @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
