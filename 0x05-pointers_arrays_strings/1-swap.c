#include "main.h"

/**
 * swap_int - swaps parameter values
 * @a: parameter
 * @b: parameter
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
