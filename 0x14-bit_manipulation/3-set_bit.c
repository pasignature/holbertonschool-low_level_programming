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
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number in decimal
 * @index: index at which to set bit to 1
 *
 * Return: 1 if it worked, -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);

	*n = *n | _power(2, index);
	return (1);
}
