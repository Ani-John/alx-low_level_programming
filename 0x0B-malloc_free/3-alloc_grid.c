#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 *
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Else - a pointer to the 2-dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **p, i = 0, j = 0;

	if ((width <= 0) || (height <= 0))
		return (NULL);

	p = malloc(sizeof(int *) * height);
	if (p == NULL)
		return (NULL);

	while (i < height)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			return (NULL);
		}
		i++;
	}

	for (i = 0; i < height; i++)
	{
		while (j < width)
		{
			p[i][j] = 0;
			j++;
		}
	}
	free (p);
	return (p);
}
