#include "main.h"

/**
 * print_line - prints line
 * _putchar - output finction
 * @n: parameter
 * Return: returs value of n
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
