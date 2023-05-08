#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: File to create.
 * @text_content: A string to write to the file.
 * Return: return 1 else - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int file, writer, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[length];)
			length++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writer = write(file, text_content, length);

	if (file == -1 || writer == -1)
		return (-1);

	close(file);
	return (1);
}

