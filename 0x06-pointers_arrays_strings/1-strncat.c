#include "main.h"
/**
 * _strncat - Concatenates the string pointed to by @src, including
 * the terminating null byte, to the end of the string pointed to by @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 * @n: the number of source characters to be concatenated
 * Return: A pointer to the destination string @dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0;
	int len_src = 0;
	int a = 0;
	int b = 0;
	int c;

	while (*(dest + a) != '\0')
	{
		len_dest += 1;
		a++;
	}
	while (*(src + b) != '\0')
	{
		len_src += 1;
		b++;
	}
		if ((n < len_src) && (n > 0))
		{
			for (c = 0; c < n; c++)
			{
				dest[len_dest] = src[c];
				len_dest++;
				c++;
			}
		}
		else if (n >= len_src)
		{
			for (c = 0; c <= (len_src - 1); c++)
			{
				dest[len_dest] = src[c];
				len_dest++;
			}
		}
	return (dest);
}
