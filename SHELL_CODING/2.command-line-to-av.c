#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *  *main - a function that splits a string and returns an array
 *   * of each word of the string.
 *    *Return: 0
 *     */
int main(void)
{
	char *buffer = malloc(1024);
	size_t len = 1024;
	char *token;
	int i = 1;

	while (len)
	{
		printf("$ ");
		getline(&buffer, &len, stdin);
		printf("You typed: %s", buffer);

		token = strtok(buffer, " ");
		while (token)
		{
			printf("token-%d: %s\n", i, token);
			token = strtok(NULL, " ");
			i++;
		}
	}
	return (0);
}
