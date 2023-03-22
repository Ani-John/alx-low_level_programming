#include "stdio.h"
/**
 * _islower -  a function that checks for lowercase character.
 * Return: 0
 * @c: the input character to be checked
 */
int _islower(int c)
{
	if ((c > 96) && (c < 126))
	{
		return (1);
	}
	else
	return (0);
}
