#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

#include <stdlib.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{

		printf("%d", va_arg(list, int));
		if ((separator != NULL) && (i != n - 1))
			printf("%s", separator);


	}
	va_end(list);

	putchar('\n');
}
