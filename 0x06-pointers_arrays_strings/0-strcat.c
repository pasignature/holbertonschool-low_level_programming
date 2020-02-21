#include <stdio.h>

/**
 * _strcat - function to concatnate strings
 *
 * @dest: destination for concatnation
 *
 * @src: source of string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

int i, j;

/* length of s1 is stored in i */
for (i = 0; dest[i] != '\0'; ++i)

/* concatenating each character of s2 to s1 */
for (j = 0; src[j] != '\0'; ++j, ++i)
dest[i] = src[j];

/* terminating s1 string */
dest[i] = '\0';

/* returning concatenated string to main*/
return (dest);
}
