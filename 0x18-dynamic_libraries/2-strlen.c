#include "main.h"

/**
 * _strlen - gives string length
 * @s: pararmeter
 * Return: count
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
