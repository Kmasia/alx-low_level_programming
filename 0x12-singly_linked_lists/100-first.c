#include <stdio.h>

void priority_f(void) __attribute__ ((constructor));

/**
 * priority_f - prioritized over  main
 */

void priority_f(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
