#include "main.h"
#include <stdio.h>
/**
 * puts_half - p function that prints half of a string, followed by a
 * new line. The function should print the second half of the string
 * If the number of characters is odd, the function should print the
 * last n character of the string, where n = (length_of_the_string - 1) / 2
 *
 * @str: the string to be printed from
 */

void puts_half(char *str)
{
	int len = 0;
	int a, n;

	while (*(str + len) != '\0')
		len++;

	if ((len - 1) % 2 == 0)
		n = (len - 1) / 2;
	else
		n = (len - 2) / 2;

	for (a = (n + 1) ; a <= (len - 1); a++)
		_putchar(str[a]);
	putchar('\n');
}
