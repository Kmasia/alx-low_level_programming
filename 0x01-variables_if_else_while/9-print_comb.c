#include <stdio.h>

/**
 * main - main function
 *
 * Return: main returns 0
 */

int main(void)
{
	int t;

	for (t = 0 ; t < 10 ; t++)
	{
		putchar(t + '0');
		if (t != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
