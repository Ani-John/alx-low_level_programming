#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: NULL If str is NULL or insufficient memory is availablE,
 * else, returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *p;
	unsigned long int i = 0;

	if (str == NULL)
		return (NULL);

	p = malloc(sizeof(char) * (1 + strlen(str)));

	if (p == NULL)
		return (NULL);

	while (i <= strlen(str))
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
