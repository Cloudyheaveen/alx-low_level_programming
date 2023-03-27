#include "main.h"

/**
 * puts_half - Function that prints half of a string, followed by a new line
 * if is odd, n = (length_of_the_string - 1) / 2
 * @str: string to print
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;
	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);
	if ((longi % 2) == 1)
	n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
