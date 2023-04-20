#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of pararmeters
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s, *separator = "";

	va_list lst;

	va_start(lst, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':						printf("%s%c", separator, va_arg(lst, int));
						break;
					case 'i':
						printf("%s%d", separator, va_arg(lst, int));
						break;
					case 'f':
						printf("%s%f", separator, va_arg(lst, double));
						break;
					case 's':
						s = va_arg(lst, char *);
						if (!s)
	s = "(nil)";
						printf("%s%s", separator, s);
						break;
		default:
						i++;
						continue;
		}
		separator = ", ";
		i++;
		}
	}
	printf("\n");
	va_end(lst);
	}
