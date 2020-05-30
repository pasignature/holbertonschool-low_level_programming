#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number in decimal
 */
void print_binary(unsigned long int n)
{
	unsigned long int num;
	int count, x;

	if (n == 0)
		_putchar('0');

	num = n;
	for (count = 0; num > 0; count++)
		num >>= 1;

	for (count--; count >= 0; count--)
	{
		x = n >> count;
		if (x & 1)
			_putchar('1');
		else
			_putchar('0');
	}
}
