#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatinates 2 strings
 * @dest: parameter
 * @src: parameter
 * Return: returns a pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int destln = 0;
	int srcln = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		destln++;
	for (i = 0; src[i] != '\0'; i++)
		srcln++;
	for (i = 0; i <= srcln; i++)
		dest[destln + i] = src[i];
	return (dest);
}
