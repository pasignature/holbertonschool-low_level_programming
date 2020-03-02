#include <stdio.h>
#define UNUSED(x) (void)(x)

/**
 * main - prints name of program
 * @argc: number of command line arguments
 * @argv: vector of command line arguments
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	UNUSED(argc);
	printf("%s\n", argv[0]);
	return (0);
}
