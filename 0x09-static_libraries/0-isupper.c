#include "main.h"

/**
 * _isupper - If the character is uppercase
 * @c: The character
 * Return: 1 or 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
