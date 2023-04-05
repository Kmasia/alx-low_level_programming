#include "main.h"

/**
 * _puts_recursion - output funtion like puts
 * @s: parameter
 * _putchar - output functin
 * Return : return 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
