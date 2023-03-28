#include "main.h"
/**
 * swap_int - a function that swaps the values of two integers.
 * @a: the first swap value.
 * @b: the second swap value
 */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
