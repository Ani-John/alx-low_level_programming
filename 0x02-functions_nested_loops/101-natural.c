#include <stdio.h>
/**
 * main - a program that computes and prints the sum of
 * all the multiples of 3 or 5 below 1024 (excluded),
 * followed by a new line.
 * Return: the sum of all the multiples of 3 and 5
 */
int main(void)
{
	int i;
	int j = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
	}
	printf("the sum of all the multiples of 3 or");
	printf("5 below 1024 (excluded) is: %d", j);
	printf("\n");
	return (j);
}
