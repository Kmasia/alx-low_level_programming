#include "main.h"

/**
 * _puts - output function
 * @str: parameter
 * _putchar - output
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
