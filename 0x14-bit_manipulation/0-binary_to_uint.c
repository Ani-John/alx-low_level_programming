#include "main.h"
#include <math.h>
/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: If b is NULL or contains chars not 0 or 1 -
 * 0. Otherwise - the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1, int_value = 0;
	int len;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (len = (len - 1); len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);

		int_value += ((b[len] - '0') * k);
		k *= 2;
	}
	return (int_value);
}
