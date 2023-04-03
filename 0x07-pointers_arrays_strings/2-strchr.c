#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: The searched string.
 * @c: The searched character.
 * Return:   a pointer to the first occurence if c is present,
 * else, return NULL.
 */

char *_strchr(char *s, char c)
{
int i = 0;

	while (s[i])
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
return ('\0');
}
