#include "main.h"

/**
 * read_textfile -  a function that reads a text file and prints it to
 * the POSIX standard output.
 * @letters: The number of characters to be read and printed.
 *
 * Return: The number of chars the function could read and print. Or 
 * Returns 0 if the function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ptr;
	ssize_t a, b, c, d = -1;

	ptr = malloc(letters);
	if (ptr == NULL)
		return (0);
	if (filename == NULL)
	{
		free(ptr);
		return (0);
	}

a = open(filename, O_RDONLY);
	if (a == d)
	{
		free(ptr);
		return (0);
	}

	b = read(a, ptr, letters);
	if  (b == d)
	{
		free(ptr);
		return (0);
	}

	c = write(STDOUT_FILENO, ptr, b);
	if  (c != b || c == d)
	{
		free(ptr);
		return (0);
	}
close(a);

	return (c);
}
