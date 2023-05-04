#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: parameter
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int conv = 0;

	if (!b)
		return (0);

	for (; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		conv = 2 * conv + (b[i] - '0');
	}
	return (conv);
}
