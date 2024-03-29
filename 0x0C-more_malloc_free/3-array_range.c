#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - Creates an array of integers ordered
 * from min to max, inclusive.
 * @min: The first value of the array.
 * @max: The last value of the array
 *
 * Return: If min > max or the function fails - NULL.
 * Otherwise - a pointer to the newly created array.
 */

int *array_range(int min, int max)
{
	int i, len, val = min;
	int *p;

	if (min > max)
		return (NULL);

	len = (max - min + 1);

	p = malloc(len * sizeof(int));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = val;
		val++;
	}
	return (p);
}
