#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: Width of the grid
 * @height: Height of the grid
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **abir;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	abir = malloc(sizeof(int *) * height);

	if (abir == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		abir[i] = malloc(sizeof(int) * width);

		if (abir[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(abir[j]);
			free(abir);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			abir[i][j] = 0;
	}
	return (abir);
}
