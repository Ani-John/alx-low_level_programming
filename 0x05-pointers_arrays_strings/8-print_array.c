#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of
 * integers, followed by a new line
 *
 * @a: the array name
 * @n: the number of array elements to be printed
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", *(a + (n - 1)));
	printf("\n");
}
