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
	unsigned int int_value = 0, mult = 1;
	int len, idx = 0;

	if (b == '\0')
		return (0);

	len = strlen(b);

	for (len = (len - 1); len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return (0);

		int_value += (b[len] - '0') * (pow(2, idx));
		idx += 1;
	}
	return (int_value);
}
