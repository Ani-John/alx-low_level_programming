#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: filename is the name of the file to be created
 *
 * @text_content: is a NULL terminated string to write to
 * the file
 *
 * Return: Returns 1 on success, -1 on failure (file can
 * not be created, file can not be written, write “fails”,
 * etc…) if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t a, b;

	if (!(filename != NULL))
		return (-1);

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (a == -1)
		return (-1);

	if (text_content != NULL)
	{
		b = write(a, text_content, strlen(text_content));
	if (b == -1)
		return (-1);
	}
	else
	{
		b = write(a, text_content, 0);
		if (b == -1)
			return (-1);
	}
	close(a);

	return (1);
}
