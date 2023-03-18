#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - This program will assign a random number to the variable n
 * each time it is executed. Complete the source code in order to
 * print the last digit of the number stored in the variable n.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	k = (n % 10);
		if (k > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, k);
		}
		else if (k == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, k);
		}
		else if ((k < 6) && (k != 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
		}
	return (0);
}
