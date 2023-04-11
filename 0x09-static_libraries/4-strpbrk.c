#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of
 * a set of bytes
 * @s: string to be searched
 * @accept: set of bytes to be searched for
 * Return: If a set is matched - a pointer to the
 * matched byte. NULL if no match.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for ((i = 0); accept[i]; i++)
		{
			if (*s == *(accept + i))
			return (s);
		}
		s++;
	}
	return ('\0');
}
