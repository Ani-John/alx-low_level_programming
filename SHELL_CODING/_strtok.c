#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _strtok -  breaks  a string into a sequence of zero
 * or more nonempty tokens.
 * 
 * @str: the string to be broken inot tokens
 * @delim: an argument specifying a set of bytes that
 * delimit the tokens in the parsed string.
 *
 * Return:  a pointer to the next token, or NULL if
 * there are no more tokens.
 */

char *_strtok(char *str, const char *delim)
{
	int i = 0;
	static char *ptr = NULL;
	char *start_of_token, *end_of_token = NULL;

	if (str != NULL)//If it's first call of _strtok
		ptr = str;//then ptr should point at start of str
	else if (ptr == NULL)// If NULL str is passed on firstcall
		return (NULL);

	start_of_token = ptr;

while(ptr[i])
{
	if (*(ptr + i) == *delim)
	{
		*(ptr + i) = '\0';
		end_of_token = (ptr + i + 1);
		break;
	}
	i++;
}
	ptr = end_of_token;
	return (start_of_token);
}
  
/**
 * main - a function that splits a string and returns
 * an array of each word of the string.
 * Return: 0
 */
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

		token = _strtok(buffer, " ");
		while (token)
		{
			printf("token-%d: %s\n", i, token);
			token = _strtok(NULL, " ");
			i++;
		}
	}
	return (0);
}
