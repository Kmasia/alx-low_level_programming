#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings
 * @separator: The string that separates others
 * @n: Parameter number for strings
 * @...: A variable number of strings
 * Description: Null separator is not printed
 *        If one of the strings is NULL,print (nil).
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *s;
	unsigned int i;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(string, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
		va_end(string);
}
