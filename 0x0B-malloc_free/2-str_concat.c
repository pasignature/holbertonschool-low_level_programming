#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to newly allocated space containing concatenated string
 * NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *p;

	if (s1 == NULL)
		len1 = 0;
	else
		for (len1 = 0; s1[len1] != '\0'; len1++)
			;
	if (s2 == NULL)
		len2 = 0;
	else
		for (len2 = 0; s2[len2] != '\0'; len2++)
			;

	/* allocate space for the two strings plus null byte */
	p = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	if (s2 == NULL)
		p[i] = '\0';
	else
		for (j = 0; j <= len2; j++, i++)
			p[i] = s2[j];

	return (p);
}
