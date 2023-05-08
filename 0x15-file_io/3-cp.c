#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create(char *filename);
void closed(int f_Des);

/**
 * create - Allocatesspace for buffer.
 * @filename: The name of the file
 * Return: A pointer to the newly-allocated buffer.
 */

char *create(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * closed - Closes file descriptors.
 * @f_Des: The file descriptor.
 */

void closed(int f_Des)
{
	int i;

	i = close(f_Des);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %d\n", f_Des);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int from, to, reader, wrte;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create(argv[2]);
	from = open(argv[1], O_RDONLY);
	reader = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || reader == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		wrte = write(to, buffer, reader);
		if (to == -1 || wrte == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		reader = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (reader > 0);

	free(buffer);
	closed(from);
	closed(to);

	return (0);
}
