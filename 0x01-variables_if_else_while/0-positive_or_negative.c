#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/* betty style doc for function main goes there */
/**
 * main - This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order to
 * print whether the number stored in the variable n is positive or
 * negative.
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n < 0)
		{
			printf("%d is negative\n", n);
		}
		else
		{
			if (n > 0)
			{
				printf("%d is positive\n", n);
			}
			else
			{
				printf("%d is zero\n", n);
			}
		}
	/* your code goes there */
		return (0);
}
