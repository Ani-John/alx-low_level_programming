#include "main.h"
#include <stdlib.h>

int endofword(char *str);
int numofwordsin(char *str);
char **strtow(char *str);

/**
 * endofword - finds the count for the end of first word
 * in a given string
 * @str: The string.
 *
 * Return: The number of letters.
 */
int endofword(char *str)
{
	int span = 0, count = 0;

	while (str[count] && str[count] != ' ')
	{
		span++;
		count++;
	}

	return (span);
}

/**
 * numofwordsin - Finds the number of words in a given string
 * @str: The given string.
 *
 * Return: The number of words counted.
 */
int numofwordsin(char *str)
{
	int i = 0, num = 0, len = 0;

	for (i = 0; str[i]; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			num++;
			i += endofword(str + i);
		}
	}

	return (num);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * else - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **p;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = numofwordsin(str);
	if (words == 0)
		return (NULL);

	p = malloc(sizeof(char *) * (words + 1));
	if (p == NULL)
		return (NULL);

	for (w = 0; w < words; w++)
	{
		while (str[i] == ' ')
			i++;

		letters = endofword(str + i);

		p[w] = malloc(sizeof(char) * (letters + 1));

		if (p[w] == NULL)
		{
			for (; w >= 0; w--)
				free(p[w]);

			free(p);
			return (NULL);
		}

		for (l = 0; l < letters; l++)
			p[w][l] = str[i++];

		p[w][l] = '\0';
	}
	p[w] = NULL;

	return (p);
}
