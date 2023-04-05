#include "main.h"

int prime(int j, int i);

/**
 * is_prime_number - deduces if an integer is a prime number or not
 * @n: parameter
 *
 * Return: 1 if n is a prime number, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - calculates if a number is prime recursively
 * @j: parameter
 * @i: parameter
 *
 * Return: 1 if n is prime, 0 if not
 */
int prime(int j, int i)
{
	if (i == 1)
		return (1);
	if (j % i == 0 && i > 0)
		return (0);
	return (prime(j, i - 1));
}

