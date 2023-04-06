#include "main.h"
#include <string.h>

/**
 * is_palindrome - Function that returns 1
 * if a string is a palindrome and 0 if not
 * @s: The string to check
 * Return: If s is a palindrome then is 1, if not is 0
 */
int is_palindrome(char *s)
{
	int i;
	int length = strlen(s);

	if (length <= 1)
		return (1);
	for (i = 0; i < length / 2;)
	{
		i++;
		{
		if (s[i] != s[length - i - 1])
			return (0);
		}
	}
	return (1);
}
