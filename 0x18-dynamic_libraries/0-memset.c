#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: parameter
 * @b: parameter
 * @n: parmeter
 * Return: Returns a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
