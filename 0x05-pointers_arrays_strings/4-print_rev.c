#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - prints in reverse
 * @s: the string to be reversed
 */

void print_rev(char *s)
{
	int len = 0;
	int a;

	while (*(s + len) != '\0')
	len++;

	for (a = len - 1; a >= 0; a--)
	{
		_putchar(*(s + a));
	}
	_putchar('\n');
}
