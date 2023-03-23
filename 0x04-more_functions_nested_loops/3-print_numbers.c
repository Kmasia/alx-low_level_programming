#include "main.h"

/**
 * print_numbers - prints number 0-9
 * _putchar - output function
 */

void print_numbers(void)
{
	int a;

	for (a = '0' ; a <= '9' ; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
