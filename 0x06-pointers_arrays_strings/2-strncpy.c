#include "main.h"
/**
 * _strncpy - copies the string pointed to by @src, including
 * the terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * @n: the number of characters to be copied.
 * Return: A pointer to the destination string @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
int len_src = 0;
int a = 0;
int b;
int c;

	while (*(src + a) != '\0')
	{
		len_src += 1;
		a++;
	}
if (len_src > 0)
{
	if ((n > 0) && (n < len_src))
	{
		for (b = 0; b < n; b++)
		{
			dest[b] = src[b];
		}
	}
	else if (n >= len_src)
	{
		for (c = 0; c < len_src; c++)
		{
			dest[c] = src[c];
		}
		dest[c] = '\0';
	}

	return (dest);
}
else if (!src[0])
return (dest);
}
