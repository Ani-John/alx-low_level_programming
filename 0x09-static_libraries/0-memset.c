#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: A pointer to the memory area to be filled with a constant value @b.
 * @b: The character to be used in filling the memory area with.
 * @n:Denotes number of bytes to be filled with 'b'.
 *
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char a = b;

	while (i < n)
	{
		s[i] = a;
		i++;
	}

	return (s);
}
