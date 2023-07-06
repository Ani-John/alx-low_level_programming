#include <stdio.h>
#include <stdlib.h>
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
/**
 * main - a program that prints "$ ", wait for the user to enter a
 * command, prints it on the next line.
 * Return: 0
 */
int main(void)
{
	size_t len = 1024, a = 2;
	char *buffer = malloc(1024);

	while (a)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("%s", buffer);
	}
	return (0);
}
