#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers.
 * @height: The height of the 2d array of integers
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
