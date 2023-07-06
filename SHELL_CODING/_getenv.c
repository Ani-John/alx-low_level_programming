#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
char *_getenv(const char *name);
/**
 * main - test file for _getenv function
 * Rteurn: 0
 */
int main(int ac, char **av)
{
	if (ac != 2 )
	{
		printf("Usage: %s variable_name\n", av[0]);
		return (-1);
	}
	const char *name = av[1];
	 printf("%s\n", _getenv(name));
	     return 0;
}

/**
 * _getenv - a function that gets an environment variable. 
 *  (without using getenv)
 *  @name: the variable whose value is sought
 *  Return: a pointer to the value of the variable
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

