#include "main.h"
/**
 * print_diagonal - a function that draws a
 * diagonal line on the terminal.
 *
 * @n: the number of diagonals to be printed
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			_putchar(32);
		_putchar(92);
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
