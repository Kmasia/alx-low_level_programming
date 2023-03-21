#include "main.h"

/**
 * print_alphabet_x10 - function prints 10x letters
 *
 * Return: returns nothing
 */

void print_alphabet_x10(void)
{
	int x;
	char j;

	for (x = 1 ; x <= 10 ; x++)
	{
		for (j = 'a' ; j <= 'z' ; j++)
			_putchar(j);
		_putchar('\n');
	}
}
