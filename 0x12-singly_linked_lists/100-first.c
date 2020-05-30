#include <stdio.h>

/**
 * first - print message before the main() function executes
 */
void first(void) __attribute__ ((constructor));

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
