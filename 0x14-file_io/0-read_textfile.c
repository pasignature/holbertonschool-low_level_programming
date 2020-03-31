#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it read and printed
 * 0 if file cannot be open or read or if filename is NULL
 * or if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);

	/* opens file with read + write permissions and checks for error */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/* allocates buffer of size letters and checks for error */
	buf = malloc(letters * sizeof(char));
	if (!buf)
		return (0);

	/* reads text into buffer from file and checks for error */
	r = read(fd, buf, letters);
	if (r == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);

	/* write to stdout from buffer and checks for error */
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1)
	{
		free(buf);
		return (0);
	}

	/* checks if write wrote the expected amount of bytes */
	if (w < r)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (w);
}
