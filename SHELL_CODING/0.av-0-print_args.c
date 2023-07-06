#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints all the arguments, without using ac
 * @ac:argument count
 * @av: a 2d pointer to arguments passed
 * Return: 0
 */
int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s ", av[i]);
		i++;
	}
	printf("\n");
	return (0);
}
