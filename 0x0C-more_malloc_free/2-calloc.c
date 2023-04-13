#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _calloc -  a function that allocates memory for an array
 * @nmemb: the number of array members
 * @size: the memory size to be alllocated to each member
 * Return: 0 if nmemb or size is zero, NULL is mollac fails, else
 * returns pointer to the first address of the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;
	char *initialvalue;
	unsigned int i;

	if ((nmemb == 0) || (size == 0))
		return (0);

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	initialvalue = p;
		for (i = 0; i < nmemb; i++)
		initialvalue[i] = '\0';
	return (p);
}
