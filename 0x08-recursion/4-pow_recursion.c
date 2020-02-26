#include "holberton.h"

/**
 * _pow_recursion - raises x to the power of y
 * @x: base integer
 * @y: exponent integer
 *
 * Return: value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
