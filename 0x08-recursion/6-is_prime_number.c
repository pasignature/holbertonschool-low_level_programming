#include "holberton.h"

/**
 * is_prime_helper - helper function to determine if number is prime
 * @n: number to be determined if prime
 * @m: number to check if is a factor of n
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_helper(int n, int m)
{
	if (n == m)
	{
		return (1);
	}
	else if (!(n % m))
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, m + 1));
	}
}

/**
 * is_prime_number - determines if a number is prime
 * @n: number to be determined if is prime
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	return (is_prime_helper(n, 2));
}
