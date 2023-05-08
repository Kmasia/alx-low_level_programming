#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: the text file being
 * @letters: number of letters
 * Return: number of bytes read and printed else 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t f;
	ssize_t writer;
	ssize_t x;

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	x = read(f, buffer, letters);
	writer = write(STDOUT_FILENO, buffer, x);

	free(buffer);
	close(f);
	return (writer);
}

