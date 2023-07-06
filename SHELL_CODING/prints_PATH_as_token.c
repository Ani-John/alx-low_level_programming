#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
char *_getenv(const char *name);
/**
 * main - a function that prints each directory contained
 * in the the environment variable PATH, one directory per
 * line.
 * Return: 0
 */
int main()
{
	const char *name = "PATH";
	const char *dil = ":";
	char *token, *value = _getenv(name);
	int i = 0;

	token = strtok(value, dil);

	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, dil);
	}


	    return 0;
}

/**
 * _getenv - a function that gets an environment variable. 
 * (without using getenv)
 * @name: the variable whose value is sought
 * Return: a pointer to the value of the variable
 */
char *_getenv(const char *name)
{
	extern char **environ;
	int result, i = 0;
	char *value;

	while (environ[i])
	{
		result = strncmp(name, environ[i], strlen(name));
		if ((result == 0) && (environ[i][strlen(name)]== '='))
		{
			value = &environ[i][strlen(name) + 1];
			return (value);
		}
		i++;
	}
	return (NULL);
}

