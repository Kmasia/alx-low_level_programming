#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content: The string to add
 * Return: If filename is NULL - -1 else 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, wrte, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[length];)
			length++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	wrte = write(opn, text_content, length);

	if (opn == -1 || wrte == -1)
		return (-1);

	close(opn);
	return (1);
}
