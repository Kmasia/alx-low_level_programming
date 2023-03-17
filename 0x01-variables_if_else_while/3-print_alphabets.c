#include <stdio.h>

/**
 * main - is the main function
 *
 * Return: main returns 0
 */

int main(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
		putchar(b);
	for (b = 'A' ; b <= 'Z' ; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
