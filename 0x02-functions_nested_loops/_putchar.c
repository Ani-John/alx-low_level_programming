#include <stdio.h>
#include "main.h"
/**
 * putonscreen - a function that prints 'putchar'
 * Return: 0
 */
int _putchar(void)
{
	char lett[] = {"_putchar"};
	int i = 0;

	while (i < 8)
	{
		putchar(lett[i]);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
