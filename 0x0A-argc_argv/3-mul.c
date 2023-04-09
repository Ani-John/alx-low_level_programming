#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument counts
 * @argv: argument vector
 * Return: 0
 */

int main(int __attribute__ ((unused)) argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	printf("Error\n");
	return (1);
}
