int sqr(int n, int root);
int _sqrt_recursion(int n);

/**
 * sqr - finds the square root by trying various values of root.
 *
 * @n: The number to find the square root
 *
 * @root: The root to be repeatedly tested
 *
 * Return: the square root if the number has a natural square root.
 * -1 if the number does not have a natural square root
 */

int sqr(int n, int root)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	if (root >= n / 2)
		return (-1);

	if ((root *root) == n)
		return (root);
	return (sqr(n, (root + 1)));
	

}

/**
 *  _sqrt_recursion - a function that returns the natural
 *  square root of a number.
 *  @n: the number
 *  Return: the square root
 */

#include "main.h"
int _sqrt_recursion(int n)
{
	int root = 0;

	return (sqr(n, root));
}
