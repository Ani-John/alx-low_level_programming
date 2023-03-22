#include <stdio.h>
#include "main.h"
/**
 * putonscreen - a function that prints 'putchar'
 * Return: 0
 */
int putonscreen(void)
{
	char lett[] = {"putchar"};
	int i = 0;

	while (i < 7)
	{
		putchar(lett[i]);
		i = i + 1;
	}
	putchar('\n');
	return (0);
}
