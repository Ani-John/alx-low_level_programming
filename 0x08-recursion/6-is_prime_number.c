#include "main.h"
/**
 * isp - determines if a number is prime
 * @n: the number to be determined
 * @i: recursive value  which brings the recurssion from n to 1.
 * Return: 1 if prime, 0 if not.
 */

int isp(int n, int i)
{
	if (n <= 2)
		return (0);

	if (i == 1)
		return (1);

	if (!(n % (i)))
		return (0);

	return (isp(n, (i - 1)));
}


/**
 * is_prime_number - determines if a number is prime
 * @n: the number to be determined
 * Return: 1 if prime, 0 if not.
 */

int is_prime_number(int n)
{
	int i = (n - 1);

	return (isp(n, i));
}
