#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text to end of a file
 * @filename: name of the file to append to
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure or if filename is NULL
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t len;
	ssize_t w;

	if (!filename)
		return (-1);

	/* opens file for writing and appending + checks for error */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	for (len = 0; text_content[len] != '\0'; len++)
		;

	/* append to file and check for error */
	w = write(fd, text_content, len);
	if (w == -1)
		return (-1);

	close(fd);
	return (1);
}
