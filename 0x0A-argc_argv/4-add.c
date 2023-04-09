#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers.
 * @argc: argument counts
 * @argv: argument vector containing a sting of the numbers to get added
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int j, i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (((argv[i][0]) < '0') || ((argv[i][0]) > '9'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
