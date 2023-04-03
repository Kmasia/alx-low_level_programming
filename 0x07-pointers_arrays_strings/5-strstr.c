#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates substring needle in string haystack
 * @haystack: argument
 * @needle: parameter
 * Return: returns poiner or null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while (*i == *j && *j != '\0')
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (haystack);
	}
	return (NULL);
}
