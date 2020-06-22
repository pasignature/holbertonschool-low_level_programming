#include "holberton.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number
 * @index: index, starting from 0, of the bit you want to get
 *
 * Return: the value of the bit at index index, or
 * -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num;
	unsigned int x, count = 0;

	if (n == 0)
	{
		count = 1;
	}
	else
	{
		for (num = n; num > 0; num >>= 1)
			count++;
	}

	/* checks for invalid index */
	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	/* checks if index is past binary number */
	if (index > count - 1)
		return (0);

	x = n >> index;
	if (x & 1)
		return (1);
	else
		return (0);
}
