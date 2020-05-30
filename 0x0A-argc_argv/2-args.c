#include <stdio.h>

/**
 *main - program entry point
 *@argc: integer count of arguments
 *@argv: an array of arguments
 *
 *return: return 0
 */

int main(int argc, char *argv[])
{
	int counter;

	for (counter = 0; counter < argc; counter++)
	printf("%s\n", argv[counter]);
	return (0);
}
