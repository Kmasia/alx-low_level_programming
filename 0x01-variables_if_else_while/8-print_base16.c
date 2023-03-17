#include <stdio.h>

/**
 * main - the main function
 *
 * Return: retuns 0
 */

int main(void)
{
	int x;
	char z;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	for (z = 'a' ; z <= 'f' ; z++)
		putchar(z);
	putchar('\n');
	return (0);
}
