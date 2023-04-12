#include "main.h"
#include <stdlib.h>

/**
 * count_words - Function that helps to count the number of words
 * @str: The string
 * Return: The number of words
 */
int count_words(char *str)
{
	int i, j, k;

	i = 0;
	k = 0;
	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			k++;
		}
	}
	return (k);
}

/**
 * strtow - Function that splits a string into words
 * @str: The string
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	int i, x, y, z;
	int j = 0, k = 0, l = 0;
	char **abir, *me;

	while (*(str + l))
		l++;
	x = count_words(str);
	if (x == 0)
		return (NULL);
	abir = (char **) malloc(sizeof(char *) * (x + 1));
	if (abir == NULL)
		return (NULL);
	for (i = 0; i <= l; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (k)
			{
				z = i;
				me = (char *) malloc(sizeof(char) * (k + 1));
				if (me == NULL)
					return (NULL);
				while (y < z)
					*me++ = str[y++];
				*me = '\0';
				abir[j] = me - k;
				j++;
				k = 0;
			}
		}
		else if (k++ == 0)
			y = i;
	}
	abir[j] = NULL;
	return (abir);
}
