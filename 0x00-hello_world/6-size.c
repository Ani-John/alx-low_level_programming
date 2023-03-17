#include <stdio.h>
/**
 * main - a C program that prints the size of various
 * types on the computer it is compiled and run on.
 * Return: 0
 */
int main(void)
{
char cha;
int in;
long int li;
long long int lli;
float flo;
	printf("Size of a char: %lu byte(s)\n", sizeof(cha));
	printf("Size of a int: %lu byte(s)\n", sizeof(in));
	printf("Size of long int: %lu byte(s)\n", sizeof(li));
	printf("Size of long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of float: %lu byte(s)\n", sizeof(flo));
return (0);
}
