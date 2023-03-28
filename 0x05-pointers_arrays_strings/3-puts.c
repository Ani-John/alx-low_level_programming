#include "main.h"
#include <stdio.h>
/**
 * _puts - a function that prints a string, followed by a
 * new line, to stdout.
 * @str: the string
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);
	_putchar('\n');
/*
 * alternative to the above code is as below
 * for(; *str;) - starts from nowhere and proceed to first string
 * _putchar(*str++); - prints first string and proceed to next
 */
}
