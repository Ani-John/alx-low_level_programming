#include "main.h"
/**
 * print_square - a function that prints a
 * square, followed by a new line.
 *
 * @size: the size of the square
 */

void print_square(int size)
{
	if (size > 0)
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
				j = j + 1;
			}

		_putchar('\n');
		i = i + 1;
		}
	}
	else
	_putchar('\n');
}
