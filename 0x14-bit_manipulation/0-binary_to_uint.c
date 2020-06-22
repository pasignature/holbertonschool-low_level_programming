#include "holberton.h"

/**
 * _power - return num to power n
 * @base: base number
 * @exp: exponent
 *
 * Return: base to the power of exp
 */
unsigned int _power(unsigned int base, unsigned int exp)
{
	unsigned int num;

	num = 1;
	while (exp--)
		num *= base;

	return (num);
}

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: pointer to string representing binary number
 *
 * Return: converted number,
 * or 0 if one or more chars in string b is not 0 or 1, or b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, i;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	len--;
	for (i = sum = 0; len >= 0; len--, i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += _power(2, len);
	}
	return (sum);
}
