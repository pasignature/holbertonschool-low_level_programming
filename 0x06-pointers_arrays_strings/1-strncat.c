#include "holberton.h"
/**
 * _strncat - function to concatnate strings with n bytes
 *
 * @dest: destination for concatnation
 *
 * @src: source of string
 * @n: numbers of characters to append to dest str
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{

	int i, j, slen;

	slen = 0;
	for (i = 0; dest[i] != '\0'; ++i)
	{
		slen = slen + 1;
	}

	if (n > slen)
		n = slen;

	for (j = 0; j < n && src[j] != '\0'; ++j, ++i)
		dest[i] = src[j];

	dest[i] = '\0';

	return (dest);
}
