#include "main.h"

/**
 * _isalpha - prints all alphabets
 *
 * @c: parameter
 *
 * Return: return 1 if alphabet and zero otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);

}
