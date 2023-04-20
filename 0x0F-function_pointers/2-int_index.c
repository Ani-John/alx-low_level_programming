#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - Searches for an integer in an array of integers.
 * @array: array of integers.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compare values.
 *
 * Return: An index of the first element for which
 * the cmp function does not return 0. But if no element matches
 * or size <= 0, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j = 0;
	int k;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = j; i < size; i++)
	{
		k = cmp(array[i]);
		if (k != 0)
			return (i);
	}

	return (-1);
}
