#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - Function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: The string to check
 * Return: If s is a palindrome then is 1, if not is 0
 */
int is_palindrome(char *s)
{
	int length;

	length = _strlen(s);
	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * is_palindrome_helper - Function to check is the string is a palindrome
 * @s: The string to check
 * @x: The start index
 * @y: The end index
 * Return: If s is a palindrome then is 1, if not is 0
 */
int is_palindrome_helper(char *s, int x, int y)
{
	if (x >= y)
		return (1);
	if (s[x] == s[y])
		return (is_palindrome_helper(s, x + 1, y - 1));
	return (0);
}

/**
 * _strlen - Function to calculate the length og the string
 * @s: The string to check
 * Retrun: The length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}
