#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - make a copy of a string
 * @str: string to be duplicated
 *
 * Return: pointer to the newly allocated memory space containing a str copy
 */

char *_strdup(char *str)
{
	unsigned int i, strlen;
	char *p;

	if (str == NULL)
		return (NULL);

	for (strlen = 0; str[strlen] != '\0'; strlen++)

	p = (char *)malloc(sizeof(char) * (strlen + 1));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= strlen; i++)
		p[i] = str[i];

	return (p);
}
