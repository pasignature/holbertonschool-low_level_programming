#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: first number of bytes of s2 to concatenate
 *
 * Return: pointer to newly allocated space which contains s1,
 * followed by the first n bytes of s2 and a null terminating byte
 * or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *p;

	len1 = 0, len2 = 0;
	i = 0;
	if (s1)
		while (s1[i++])
			len1++;
	i = 0;
	if (s2)
		while (s2[i++])
			len2++;

	/* test whether len2 is greater than n */
	if (len2 > n)
		len2 = n;

	/* allocate space for s1, first n bytes of s2, and null byte */
	p = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!p)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		p[i] = s2[j];

	p[i] = '\0';
	return (p);
}
