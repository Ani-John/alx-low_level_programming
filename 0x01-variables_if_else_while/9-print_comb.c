#include <stdio.h>
/**
 * main - a program that prints all possible
 * combinations of single-digit numbers.
 *
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == '9')
		{
			putchar(a);
		}
		else
		{
			putchar(a);
			putchar(',');
			putchar(' ');
		}
	}
	return (0);
}
