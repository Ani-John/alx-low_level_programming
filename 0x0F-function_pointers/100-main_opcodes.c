#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own main function.
 * @argc: The number of arguments supplied to the main function.
 * @argv: The argument vector- an array of pointers to the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int j, value;
	unsigned char machinecode;
	int (*funcmem)(int, char **) = main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	value = atoi(argv[1]);

	if (value < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (j = 0; j < value; j++)
	{
		machinecode = *(unsigned char *)funcmem;
		printf("%.2x", machinecode);

		if (j == value - 1)
			continue;
		printf(" ");

		funcmem++;
	}
	printf("\n");
	return (0);
}
