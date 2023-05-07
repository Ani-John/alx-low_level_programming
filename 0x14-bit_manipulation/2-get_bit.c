#include "main.h"

/**
 * get_bit -a function that returns the value of a bit at a
 * given index.
 * @n: The number whose whose binary is to be
 * searched.
 * @index: the index, starting from 0 of the bit is to be
 * returned.
 * Return:  the value of a bit at a given index.
 */
int get_bit(unsigned long int n, unsigned int index)
{

	int k, num;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	num = (n >> (index));
	return ((num & 1));
}
