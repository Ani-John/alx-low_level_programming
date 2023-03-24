#include "main.h"
/**
 * print_triangle -  function that prints a triangle, followed
 * by a new line.
 *
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (i = 1; i <= (size - j); i++)
			{
				_putchar(32);
			}
			for (k = 1; k <= j; k++)
			{
				_putchar('#');
			}
			if (j != size)
			_putchar('\n');
		}
	}
	_putchar('\n');
}
