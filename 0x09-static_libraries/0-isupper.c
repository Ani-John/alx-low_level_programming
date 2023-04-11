#include <stdio.h>
#include "main.h"
/**
 * _isupper - tests for upper case
 * @c: the value to be tested
 * Return: Returns 1 if c is uppercase,
 * returns 0 otherwise
 */
int _isupper(int c)
{
	if ((c > 64) && (c < 91))
		return (1);
	else
		return (0);
}
