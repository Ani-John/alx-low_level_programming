#include "main.h"

/**
 * append_text_to_file - a function that appends text at the
 * end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to add at the
 * end of the file
 * Return: Return: 1 on success and -1 on failure
 * If filename is NULL return -1. Return 1 if the file exists
 * and -1 if the file does not exist or if there is no permissions
 * to write the file.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int a, b;

	if (filename == NULL)
		return (-1);
	a = open(filename, O_WRONLY | O_APPEND);
	b = write(a, text_content, strlen(text_content));
	if (a == -1 || b == -1)
		return (-1);

	close(a);
	return (1);
}
