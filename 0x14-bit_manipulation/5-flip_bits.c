#include "main.h"

/**
 * flip_bits -   a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * given index.
 * @n: a pointer to the first number whose whose binary is to
 * be searched.
 * @m: a pointer to the second number whose whose binary is to
 * be searched.
 *
 * Return: the number of bits you would need to flip to get
 * from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned lon int sum = 0, num;

	num = n ^ m;

	while (num > 0)
	{
		sum = sum + (num & 1);
		num = num >> 1;
	}
	return (sum);
}
