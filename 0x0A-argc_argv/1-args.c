/**
 * main - prints argv string
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
 */

#include <stdio.h>

int main(int  argc, char __attribute__ ((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
