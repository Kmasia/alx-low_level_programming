#include "main.h"

int square_root(int n, int i);
/**
 * _sqrt_recursion
 * @n: parameter
 * Return: returns square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (square_root(n, 0));
}

/**
 * square_root - uses recursion to find natural square root
 * @j: parameter
 * @i: parameter
 * Return: result
 */

int square_root(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (square_root(n, i + 1));
}
