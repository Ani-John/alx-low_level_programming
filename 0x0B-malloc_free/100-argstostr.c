#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments of your
 * program and separate them by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 * Return: Returns a pointer to the new string or, NULL if ac is 0,
 * av is NULL, or the function fails.
 */
char *argstostr(int ac, char **av)
{
	char *p;
	int str, val, i, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (str = 0; str < ac; str++)
	{
		len += strlen(av[str]);
	}

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	i = 0;

	for (str = 0; str < ac; str++)
	{
		for (val = 0; av[str][val]; val++)
		{
			p[i] = av[str][val];
			i++;
		}
		p[i] = '\n';
		i++;
	}

	p[i++] = '\0';

	return (p);

