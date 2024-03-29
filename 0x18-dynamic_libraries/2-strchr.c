#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @c: input
 * @s: input
 * Return: A pointer to the first occurrence
 * of the character c in the string s,
 * or 0 if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
