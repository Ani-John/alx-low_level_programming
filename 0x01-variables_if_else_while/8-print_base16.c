#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 * 
 * Return: 0
 */
int main(void)
{
	int a = 0;
	char abc[] = "0123456789abcdef";

		for (a = 0; a < 16; a++)
		{	putchar(abc[a]);
		}
		putchar('\n');
	return (0);
}
