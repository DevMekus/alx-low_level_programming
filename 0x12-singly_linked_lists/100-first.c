#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - This will prints a sentence before the main
 * function is executed out
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
