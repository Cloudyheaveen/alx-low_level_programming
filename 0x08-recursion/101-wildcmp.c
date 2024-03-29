#include "main.h"

/**
 * wildcmp - Function that compares two strings and returns 1
 * if the strings can be considered identical,
 * otherwise return 0
 * @s1: The first string
 * @s2: The second string
 * Return: it can be considered identical if the string is 1,
 * overwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		else if (!*s1)
			return (wildcmp(s1, s2 + 1));
		else
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (1);
		else
			return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
