#include "main.h"
/**
 * string_toupper - Changes all lowercase letters
 * of a string to uppercase.
 * @s: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *s)
{
	int a, len = 0;
	int b = 0;

	while (s[b++])
		len++;
	for (a = 0; a < len; a++)
	{
		if ((*(s + a) >= 'a') && (*(s + a) <= 'z'))
		*(s + a) -= 32;
	}

	return (s);
}
