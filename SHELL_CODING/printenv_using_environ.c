#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * main -  a program that prints the environment using the
 * global variable environ
 * Return: 0 on success
 */
int main()
{
	extern char **environ;
	int i = 0;

	while (environ[i])
	{
		printf("%s\n", environ[i]);
		i++;
	}
	return 0;
}
