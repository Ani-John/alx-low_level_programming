#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - a function that reallocates a memory block
 * using malloc and free
 * @ptr: A pointer to the old memory.
 * @old_size: The size of the old memory.
 * @new_size: The size of new memory
 * Return: Returns a pointer to the reallocated memory block. Returns
 * NULL - If ptr is not NULL and new_size == 0. Returns ptr if
 * 0 new_size == old_size. Returns NULL if new_size == 0 and ptr is not NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}

		return (p);
	}

	if (new_size == old_size)
		return (ptr);

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	if (ptr != NULL)
		free(ptr);

	return (p);
}
