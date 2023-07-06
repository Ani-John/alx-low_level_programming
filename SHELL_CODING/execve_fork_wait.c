#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - a program that executes the command ls -l /tmp in
 * 5 different child processes. Each child should be created by
 * the same process (the father). Wait for a child to exit before
 * creating a new child.
 * Return: Always 0.
 */
int main (void)
{
	pid_t my_pid, child_pid;
	char path[] = "/bin/ls";
	char *argv[] = {"ls", "-l", "/tmp", NULL};
	char *env[] = {NULL};
	int i = 0, status;

	while (i < 5)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			perror("Error:");
			return (1);
		}
		if (child_pid == 0)
		{
			execve(path, argv, env);
		}
		else
		{
			wait(&status);
		}
		i++;
	}
	return (0);
}
