#include <stdio.h>

/**
 * main - the main function
 *
 * Return: main returns 0
 */

int main(void)
{
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		if (x != 'e' && x != 'q')
			putchar(x);
	putchar('\n');
	return (0);
}
