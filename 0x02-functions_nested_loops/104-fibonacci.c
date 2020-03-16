/**
 * printFibonacciNumbers - C program to print first 89 Fibonacci numbers
 *@n: fibonacci number to stop at
 *
 * Return: fibonacci series
 */

#include <stdio.h>

void printFibonacciNumbers(int n)
{
	unsigned long int x = 1, y = 2, z;
	unsigned long int counter = 1;
	while (counter <= n){
		printf("%lu", x);
		z = x + y;
		x = y;
		y = z;
		if (counter < n)
		printf(", ");
		counter++;
	}

		printf("\n");
}

/**
 * main - program entry
 *
 * Return: return 0
 */

int main(void)
{
printFibonacciNumbers(98);
return (0);
}
