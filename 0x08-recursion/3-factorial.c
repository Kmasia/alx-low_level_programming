#include "main.h"

/**
 * factorial - derives factorials of a numberr;
 * @n: parameter
 * Return: returns factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
