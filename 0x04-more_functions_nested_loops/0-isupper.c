#include "holberton.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - function checks if a given character is upper or not.
 *
 * @c: character to be checked
 * Return: 1 or 0.
 */

int _isupper(int c)
{
if (isupper(c))
{
return (1);
}
else
{
return (0);
}
}
