#include "main.h"

/**
 * puts2 - Function that prints every other character of a string,
 * tarting with the first character, followed by a new line.
 * @str: string to print
 * Return: void
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
