#include <stdio.h>
/**
 * main -  a program that prints the alphabet in
 * lowercase, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	char abc[24] = "abcdfghijklmnoprstuvwxyz";

	for (i = 0; i < 23; i++)
		putchar(abc[i]);
	putchar('\n');
	return (0);
}
