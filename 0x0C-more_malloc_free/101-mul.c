#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3 || !isdigit(argv[1]) || !isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	else
	{
		long int *mul = malloc(atoi(argv[1]) * atoi(argv[2]));
		printf("%ld\n", *mul);
	}
	return (0);
}
