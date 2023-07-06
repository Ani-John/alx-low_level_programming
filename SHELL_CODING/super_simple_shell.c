#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>
#include <errno.h>
#include <stdbool.h>
/**
 * main - a first version of a super simple shell that can run commands with
 * their full path, without any further argument.
 * Return: Always 0.
 */
int main (void)
{
	extern char **environ;
	pid_t child_pid;
	char *path;
	char *argv[] = {"ls", NULL};
	int status, i = 0;
	size_t len = 1024;
	char *buffer = malloc(1024);
	bool file_from_terminal = true;


	while (1 && file_from_terminal)
	{
		if (isatty(0) == 0)
			file_from_terminal = false;
		i = 0;
		printf("#cisfun$ ");

		getline(&buffer, &len, stdin);
		path = malloc(strlen(buffer));
		while (i < strlen(buffer) - 1)
		{
			*(path + i) = *(buffer + i);
			i++;
		}
		argv[0] = path;

		child_pid = fork();
		if (child_pid == -1)
		{
			perror("./simple_shell");
			return (1);
		}
		if (child_pid == 0)
		{
			if (execve(path, argv, environ) == -1)
			{
				perror("./simple_shell");
			}
		}
		else
		{
			wait(&status);
			free(path);
		}
	}
	return (0);
}
