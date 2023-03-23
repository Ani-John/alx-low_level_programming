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
			}
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}
