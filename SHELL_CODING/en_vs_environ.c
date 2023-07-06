#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
/**
 * main - a program that prints the address of env (the third
 * parameter of the main function) and environ (the global
 * variable).
 * Return: 0 on success
 * Description: the final outpout of the printf will be the
 * same. This shows that both env and environ are pointing at
 * the same list of environment variables.
 */
int main(int ac, char **av, char** env)
{
	extern char **environ;
	printf("address of environ is: %p\n", environ);
	printf("address of env is: %p\n", env);
	return 0;
}
