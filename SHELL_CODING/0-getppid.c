#include <stdio.h>
#include <unistd.h>

/**
 * main - gets PID and PPID
 *
 * Return: 0.
 */
int main(void)
{
	pid_t my_pid;
	my_pid = getpid();
	printf("pid is %u\n", my_pid);
	my_pid = getppid();
	printf("ppid is %u\n", my_pid);
	return (0);
}
