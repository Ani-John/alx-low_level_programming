#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */

void print_most_numbers(void)
{
	char i[] = {"0123456789"};
	int j;

	for (j = 0; j <= 9; j++)
	{
		if ((j != 2) && (j != 4))
			_putchar(i[j]);
		else
			continue;
	}
	_putchar('\n');
}
