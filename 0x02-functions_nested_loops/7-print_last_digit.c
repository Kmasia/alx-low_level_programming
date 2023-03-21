#include "main.h"

/**
 * print_last_digit - prints last digits
 *
 * @a: the parameter
 *
 * Return: returns value of b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;
	if (a < 0)
		b = -b;
	_putchar(b + '0');
	return (b);
}
