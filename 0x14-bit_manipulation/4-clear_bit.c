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
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number in decimal
 * @index: index is the index starting from 0 of the bit to unset
 *
 * Return: 1 if it worked, or -1 if error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n & ~(_power(2, index));
	return (1);
}
