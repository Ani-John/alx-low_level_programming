#include "main.h"
#include <stdio.h>
/**
 * _isdigit - a function that checks
 * for a digit (0 through 9).
 *
 * @c: the value to be checked
 *
 * Return: Returns 1 if c is a digit
 * Returns 0 otherwise
 */
int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
		return (1);
	else
		return (0);
}
