#include "function_pointers.h"
/**
 * print_name - A function prints a name.
 * @name:  name to be printed.
 * @f: pointer to a function that will print name the required way.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
