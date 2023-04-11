#include "main.h"

/**
 * _strstr - finds a given substring.
 * @haystack: The searched searched main string
 * @needle: The substring.
 *
 * Return:  a pointer to the beginning of the substring in the main
 * string or NULL if not found.
 */

char *_strstr(char *haystack, char *needle)
{

int i = 0;

	if (needle[i] == 0)
	return (&haystack[0]);

	while (*haystack)
	{
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
				return (&haystack[0]);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
