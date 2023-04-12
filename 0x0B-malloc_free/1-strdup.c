#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: The string
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	int i;
	int j = 0;
	char *abir;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	abir = malloc(sizeof(char) * (i + 1));
	if (abir == NULL)
		return (NULL);
	for (j = 0; str[j]; j++)
		abir[j] = str[j];
	return (abir);
}
