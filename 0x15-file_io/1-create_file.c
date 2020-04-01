#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - creates a file, truncates file if it already exists
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write on the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t w;

	if (!filename)
		return (-1);

	/* creates file with rw permissions for user only & checks for error */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if text is NULL, end program and create empty file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	/* write to file and checks for error */
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
