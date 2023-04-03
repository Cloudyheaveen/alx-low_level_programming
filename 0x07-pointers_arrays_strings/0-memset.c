#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @n: The number of bytes to be filled starting from s
 * @b: The constant byte to fill the memory area with
 * @s: A pointer to the memory area to be filled
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
