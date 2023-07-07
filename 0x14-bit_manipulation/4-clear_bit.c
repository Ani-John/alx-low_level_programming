#include "main.h"

/**
 * clear_bit -  a function that sets the value of a bit to 0 at a
 * given index.
 * @n: a pointer to the number whose whose binary is to be
 * searched.
 * @index: the index, starting from 0 of the bit is to be
 * set.
 * Return: 1 if success, -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int num;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	num = 1 << index;
	num = ~num;

	*n = *n & (num);

	return (1);
}
