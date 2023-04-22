#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Prints a char.
 * @list: A list of arguments pointing to
 * the character to be printed.
 */
void print_char(va_list list)
{
	char n;

	n = va_arg(list, int);
	printf("%c", n);
}

/**
 * print_int - Prints an int.
 * @list: A list of arguments pointing to
 * the integer to be printed.
 */
void print_int(va_list list)
{
	int n;

	n = va_arg(list, int);
	printf("%d", n);
}

/**
 * print_float - Prints a float.
 * @list: A list of arguments pointing to
 * the float to be printed.
 */
void print_float(va_list list)
{
	float n;

	n = va_arg(list, double);
	printf("%f", n);
}

/**
 * print_string - Prints a string.
 * @list: A list of arguments pointing to
 * the string to be printed.
 *
 * Description: for the main function "print_all", any argument
 * not of type char, int, float,
 * or char * is ignored.
 * If a string argument is NULL, (nil) is printed instead.
 */
void print_string(va_list list)
{
	char *n;

	n = va_arg(list, char *);

	if (n == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", n);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *separator = "";
	int a = 0, b = 0;

	p_all opt[] = {
		{"i", print_int},
		{"s", print_string},
		{"f", print_float},
		{"c", print_char}
	};

	va_start(list, format);

	while (format && (*(format + b)))
	{
		a = 0;

		while (a < 4 && (*(format + b) != *(opt[a].symbol)))
			a++;

		if (a < 4)
		{
			printf("%s", separator);
			opt[a].print(list);
			separator = ", ";
		}

		b++;
	}
	va_end(list);
	printf("\n");
}
