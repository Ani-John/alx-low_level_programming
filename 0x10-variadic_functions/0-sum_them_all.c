#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - this function sums of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: the unknown number of arguments to sum.
 *
 * Return: 0 if n is 0, or the sum of the passed arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arglist;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arglist, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arglist, int);

	va_end(arglist);

	return (sum);
}
