#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches for string
 * @s: parameter
 * @accept: parameter
 * Return: returns the pointer of incidence or null
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while(*s)
	{
	for (i = 0; accept[i]; i++)
	{
		if (*s == accept[i])
			return (s);
	}
	s++;
	}
	return ('\0');
}
