#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: The array that contains the chessboard
 * Return: Void
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}
