#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a characte in string
 * @s: parameter
 * @c: parameter
 *
 * Return: returns 1st occurence
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (NULL);
}
