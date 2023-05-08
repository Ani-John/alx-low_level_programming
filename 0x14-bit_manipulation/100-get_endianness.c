#include "main.h"
/**
 * get_endianness - a function that checks the endianness.
 *
 * Return: Returns 1 if little endian,  OR returns 0 if b
 * endian.
 */
int get_endianness(void)
{
	int k = 3;
	int	num = k >> 1;
	char *ptr;

	ptr = &num;

	if (*ptr == 1)
		return (1);

	return (0);
}
