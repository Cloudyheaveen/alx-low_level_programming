#include "main.h"

/**
 * print_rev - Function that prints a string, in reverse,
 * followed by a new line
 * @s: string to print
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	while (*(s + len) != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	 _putchar('\n');
}
