#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: parameter
 * @m: parameter
 * Return: count
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int curr;
	unsigned long int a = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = a >> i;
		if (curr & 1)
			count++;
	}
	return (count);
}
