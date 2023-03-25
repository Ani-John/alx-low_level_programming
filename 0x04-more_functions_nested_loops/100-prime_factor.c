#include <stdio.h>

/**
 * main - Finds and prints the largest prime
 *        factor of the number 612852475143.
 *
 * Return: Always 0.
 */

long main(void)
{
	long num = 612852475143;
	int i = 2;
	long lpf = num;

	while (i < lpf)
	{
		if (lpf % i == 0)
			lpf /= i;
		else
			i += 1;
	}
	printf("largest prime factor of %ld is: %ld", num, lpf);
	return (lpf);
}
