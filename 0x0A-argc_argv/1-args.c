#include <stdio.h>

/**
 * main - print the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array containing arguments
 *
 * Return: 0 upon success
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc);
	return (0);
}
