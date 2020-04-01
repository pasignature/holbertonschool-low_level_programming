#include "holberton.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 upon success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, i, c;
	char buf[1024];
	ssize_t r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* initializing buffer */
	for (i = 0; i < 1024; i++)
		buf[i] = 0;

	/* open fd and error checks if file_from exists and is readable */
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

#include "3-cp_continues.c"

	return (0);
}
