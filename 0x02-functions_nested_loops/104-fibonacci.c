/**
 * C program to print first 89 Fibonacci numbers
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
		if(x < n)
		printf(", ");

	}
	x++;
	printf("\n");
}

int main()
{
printFibonacciNumbers(89);
return 0;
}
