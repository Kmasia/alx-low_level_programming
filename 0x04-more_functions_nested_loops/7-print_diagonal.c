#include "main.h"

/**
 * print_diagonal - draws
 * _putchar - prints
 * @n: parameter
 * Return: always 0
 */

void print_diagonal(int n)
{
	int l, m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (l = 1 ; l <= n; l++)
		{
			for (m = 1 ; m < l ; m++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
