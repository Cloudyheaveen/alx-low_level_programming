#include "main.h"

/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to uppercase
 * @m: String to modify
 * Return: m
 */
char *string_toupper(char *m)
{
	int i;

	i = 0;
	while (m[i] != '\0')
	{
		if (m[i] >= 'a' && m[i] <= 'z')
			m[i] = m[i] - 32;
		i++;
	}
	return (m);
}
