/**
 * main - prints argv string
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
 */

#include <stdio.h>

int main(int  argc, char __attribute__ ((unused)) *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
