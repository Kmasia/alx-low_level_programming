#include <stdio.h>

/**
 * main - the main function
 *
 * Return: main returns 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int max1 = 98;
	int max2 = 99;

	while (a <= max1)
	{
		b = a + 1;
		while (b <= max2)
		{
			putchar(a < 9 ? 0 + '0' : (a / 10) + '0');
			putchar(a < 9 ? a + '0' : (a % 10) + '0');
			putchar(' ');
			putchar(b < 9 ? 0 + '0' : (b / 10) + '0');
			putchar(b < 9 ? b + '0' : (b % 10) + '0');

			if (a != max1)
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
