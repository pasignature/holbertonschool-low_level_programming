#include "holberton.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *ptr;
	unsigned int n = 1;

	ptr = (char *)&n;

	if (*ptr)
		return (1);
	else
		return (0);
}
