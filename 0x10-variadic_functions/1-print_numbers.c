#include "variadic_functions.h"
#include <stdlib.h>
/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */

#include "stdarg.h"
#include <stdlib.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i;

	if (separator == NULL)
		return;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", va_arg(list, int));
		else
		{
			printf("%d", va_arg(list, int));
			printf("%s", separator);
		}
	}
	va_end(list);

	putchar('\n');
}
