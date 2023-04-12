#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Function that concatenates all the arguments
 * of your program
 * @ac: The number
 * @av: The array
 * Return: A pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int x = 0;
	int y = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			y++;
	}
	y += ac;

	str = malloc(sizeof(char) * y + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[x] = av[i][j];
			x++;
		}
		if (str[x] == '\0')
		{
			str[x++] = '\n';
		}
	}
	return (str);
}
