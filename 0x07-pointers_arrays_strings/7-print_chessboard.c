#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 */


void print_chessboard(char (*a)[8])
{
int i = 0, j;

	while (i <= 7)
	{
		for (j = 0; j < 8; j++)
			_putchar (a[i][j]);
		_putchar ('\n');
	i++;
	}
}
