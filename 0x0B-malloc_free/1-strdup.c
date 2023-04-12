#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: NULL If str is NULL or insufficient memory is availablE, else, returns a pointer to the duplicated string.
 */

char *_strdup(char *str)
{
	char *p = malloc(sizeof(char) * strlen(str));
	int i = 0;

	while (i <= strlen(str))
	{
		p[i] = str[i];
		i++;
	}

	return (p);
}
