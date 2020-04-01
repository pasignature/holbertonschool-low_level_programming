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

	fd = open(filename, O_RDONLY);/* opens file with rd + wr perms */
	buf = malloc(letters * sizeof(char));/* allocates buffer */
	if (!filename || fd == -1 || !buf)
		return (0);
	r = read(fd, buf, letters);/* reads text into buffer */
	w = write(STDOUT_FILENO, buf, r);/* write to stdout from buffer */
	if (r == -1 || w == -1 || w < r)/* checks if wr wrote expected bytes */
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (w);
}
