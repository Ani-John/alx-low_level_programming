#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings, followed
 * by a new line.
 * @separator: The string to be printed.
 * @...: A variable number of strings to be printed.
 * @n: The number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	char *ptr;
	unsigned int j;

		va_start(list, n);

		for (j = 0; j < n; j++)
		{
			ptr = va_arg(list, char *);

			if (ptr == NULL)
				printf("(nil)");
			else
				printf("%s", ptr);

			if (j != (n - 1) && separator != NULL)
				printf("%s", separator);
		}
		va_end(list);
		printf("\n");
}
