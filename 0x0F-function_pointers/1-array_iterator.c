#include <stdio.h>
/**
 * array_iterator - Executes a function given as a
 * parameter on each element of an array.
 * @array: The array.
 * @size: The size of array.
 * @action: A pointer to the function to be executed.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;
	unsigned long int j = 0;

	if (array == NULL || size == j || action == NULL)
		return;
	for (i = j; i < size; i++)
	{
		action(array[i]);
	}
}
