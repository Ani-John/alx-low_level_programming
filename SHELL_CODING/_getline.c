#include <stdio.h>
#include <stdlib.h>
/**
 * _getline - reads  an  entire  line  from stream,
 * storing the address of the buffer containing the text
 * into *lineptr.
 * @lineptr - a 2d pointer to storing address after
 * reading.
 * @n: length of bytes to be read on the line.
 * @stream: the file to be read from
 * Return: 1 is success, -1 if failed.
 */
ssize_t _getline(char **lineptr, size_t *n, FILE *stream)
{

	size_t len = 0;
	int c = 0;
	ssize_t i = 0;

	if (lineptr == NULL || n == NULL)
		return -1;

	c = getc(stream);

		while (c != EOF)
		{
			if (i >= len - 1)
			{
				len += 128;
				*lineptr = realloc(*lineptr, len);
				if (*lineptr == NULL)
					return -1;
				*n = 128;
			}

			(*lineptr)[i++] = c;

			if (c == '\n')
				break;
			c = getc(stream);
		}

	(*lineptr)[i] = '\0';

	if (c == EOF && i == 0)
		return (-1);
	return (1);
}
