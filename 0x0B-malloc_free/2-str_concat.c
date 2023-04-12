#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 * Return: NULL if concatenation fails, else, returns a
 * pointer the concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned long int i = 0, k = 0, j;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	j = (strlen(s1) + strlen(s2));

	p = malloc(sizeof(char) * j);
	if (p == NULL)
		return (NULL);

	while (s1[i])
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[k])
	{
		p[i] = s2[k];
		i++;
		k++;
	}

	return (p);
}
