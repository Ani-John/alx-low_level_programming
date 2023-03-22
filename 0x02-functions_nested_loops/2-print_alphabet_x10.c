#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			putchar(j);
		}
		putchar('\n');
		i = i + 1;
	}
}
