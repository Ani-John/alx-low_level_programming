#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/**
 * main - a program that looks for files in the current PATH.
 *
 * Return: Always 0.
 * Usage: _which filename ... ...
 */
int main(int ac, char **av)
{
	unsigned int i;
	struct stat st;
	char *ptr = "_which";
	int r;

	if (ac < 2)
	{
		printf("Usage: %s _which filename ... ...\n", av[0]);
		return (1);
	}
	i = 2;
	while (av[i])
	{
		r = stat(av[i], &st);
		if (r == 0)
			printf("%s: FOUND!\n", av[i]);
		else
			printf("%s: NOT FOUND!\n", av[i]);
		i++;
	}
	    return (0);
}
