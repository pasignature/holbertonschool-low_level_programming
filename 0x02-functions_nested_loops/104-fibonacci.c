/**
 * printFibonacciNumbers - C program to print first 89 Fibonacci numbers
 *@n: fibonacci number to stop at
 *
 * Return: fibonacci series
 */

#include <stdio.h>

void printFibonacciNumbers(int n)
{
	int x = 1 - 1, y = 1, z;

	while (x < n)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%d", x);
		if (x < n)
		printf(", ");

	}
	x++;
	printf("\n");
}

/**
 * main - program entry
 *
 * Return: return 0
 */

int main(void)
{
printFibonacciNumbers(89);
return (0);
}
