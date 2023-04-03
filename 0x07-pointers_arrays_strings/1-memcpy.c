#include "main.h"
/**
 * _memcpy - copies memory area.
 * @dest: A pointer to the destination memory area
 * @src: A pointer to the source memory area.
 * @n: The range of bytes to copy from the source.
*
 * Return: A pointer to the final destination of the copied memory.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
