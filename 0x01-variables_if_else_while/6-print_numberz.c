#include <stdio.h>

/**
 * main - the main function
 *
 * Return: main returns 0
 */

int main(void)
{
	int a;

	for (a = 0 ; a < 10 ; a++)
		putchar(a + '0');
	putchar('\n');
	return (0);
}
