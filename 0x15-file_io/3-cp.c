#include "main.h"
char *read_src_to_dest(char *buffer, int *dest, int *src, int *a,
char *src_ptr, char *dest_ptr);
/**
 * main - a program that copies the content of a file to another file
 * @argc: The number of arguments supplied to the program.
 * @argv: Argument vector -  an array of pointer to the supplied
 * arguments.
 *
 * Return: 0 on success.
 *
 * Description: a program that copies the content of a file to
 * another file.
 * if file_to already exists, truncate it
 * if file_from does not exist, or if you can not read it, exit with
 * code 98
 * if can not create or if write to file_to fails, exit with code 99
 * and print
 * Error: Can't write to NAME_OF_THE_FILE.
 * if you can not close a file descriptor , exit with code 100 and
 * print
 * Error: Can't close fd FD_VALUE, followed by a new line, on the
 * POSIX standard
 * error where FD_VALUE is the value of the file descriptor
 */

int main(int argc, char *argv[])
{
	char *buffer = NULL;
	int dest, a, b, c, src;

	if (argc == 3)
	{
		buffer = read_src_to_dest(buffer, &dest, &src, &a, argv[1], argv[2]);

		while (a > 0)
		{
			b = write(dest, buffer, a);
			if (b == -1)
			{
				free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
			a = read(src, buffer, BUFF_SIZE);
			dest = open(argv[2], O_WRONLY | O_APPEND);
		}

		free(buffer);

		c = close(src);
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
			exit(100);
		}
		c = close(dest);
		if (c == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
			exit(100);
		}
		return (0);
	}
	free(buffer);
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * read_src_to_dest - Reads the source file to destination
 * file
 * @buffer: a temp memory
 * @dest: destination file descriptor when opened
 * @src: source file descriptor when opened
 * @a: returned value of read system call
 * @src_ptr: a pointer to source file
 * @dest_ptr: a poinnter to destination file
 * Return: a pointer to allocated memory
 */

char *read_src_to_dest(char *buffer, int *dest, int *src, int *a,
		char *src_ptr, char *dest_ptr)
{

	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_ptr);
		exit(99);
	}

	*dest = open(dest_ptr, O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (*dest == -1)
		{
			free(buffer);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_ptr);
			exit(99);
		}
	*src = open(src_ptr, O_RDONLY);
	*a = read(*src, buffer, BUFF_SIZE);
	if (*a == -1 || *src == -1)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_ptr);
		exit(98);
	}
return (buffer);
}
