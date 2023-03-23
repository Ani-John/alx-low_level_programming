#include "main.h"
/**
 * print_line - prints new lines
 * @n: the length of line to be printed measured in "_" as one.
 */
void print_line(int n)
{
int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
