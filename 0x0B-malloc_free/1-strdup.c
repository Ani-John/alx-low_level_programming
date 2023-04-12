#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and initializes it with a
 * specific char.
 * @size: The size of the array to be initialized.
 * @c: The specific char to intialize the array with.
 *
 * Return: NULL if size is 0 or maloc fails to allocate memory, else returns a
 * pointer to the initialised allocated memory.
 */

#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	p = malloc(sizeof(char) * size);

	if (size <= 0)
		return (NULL);

	if (p == NULL)
		return (NULL);

	while (i < size)
	{
		p[i] = c;
		i++;
	}

	return (p);
}
