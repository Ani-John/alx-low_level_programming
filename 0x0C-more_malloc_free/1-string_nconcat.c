#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * based on specified number of bytes (n).
 * @s1: first string.
 * @s2: second string.
 * @n: umber of bytes of s2 to concatenate to s1.
 * Return: INULL. f the function fails, else returns
 * a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int length = n, i;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	i = 0;
	while (s1[i] != '\0')
	{
		length++;
		i++;
	}
	p = malloc(sizeof(char) * (length + 1));
	if (p == NULL)
		return (NULL);
	length = 0;
	i = 0;
	while (s1[i])
	{
		p[length++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		if (i < n)
			p[length++] = s2[i];
		i++;
	}
	p[length] = '\0';
	return (p);
}
