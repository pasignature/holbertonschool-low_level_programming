#include "holberton.h"

/**
 * flip_bits - finds number of bits one needs to flip to get from
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num;
	unsigned int count = 0;

	num = n ^ m;

	while (num > 0)
	{
		if (num & 1)
			count++;
		num >>= 1;
	}

	return (count);
}
