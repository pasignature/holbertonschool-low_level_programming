#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers
 * @argc: size of argv array and number of command line arguments
 * @argv: An array of size argc
 * Return: always successful
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
	printf("Error\n");
        return (98);
return (0);
}
