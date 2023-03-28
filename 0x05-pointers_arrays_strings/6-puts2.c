#include "main.h"
#include <stdio.h>
/**
 * puts2 - pa function that prints every other character of a
 * string, starting with the first character, followed by a new line.
 * @str: the string to be printed
 */

void puts2(char *str)
{
	int len = 0;
	int a;

	while (*(str + len) != '\0')
	len++;

	for (a = 0; a <= (len - 1); a++)
	{
		if (a % 2 == 0)
		{
			_putchar(*(str + a));
		}
		else
			continue;
	}
	_putchar('\n');
}
