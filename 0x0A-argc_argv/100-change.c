#include <stdio.h>
#include <stdlib.h>

int coin_counter(int cents);

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * Usage: ./change cents
 * @argc: number of command line arguments
 * @argv: command line arguments
 *
 * Return: 0 upon sucess, 1 for error
 */
int main(int argc, char *argv[])
{
	int coins, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	coins = coin_counter(cents);

	printf("%d\n", coins);
	return (0);
}

/**
 * coin_counter - counts coins
 * @cents: amount of money to be sorted into coins
 *
 * Return: minimum number of coins to make change
 */
int coin_counter(int cents)
{
	int count = 0;

	while (cents >= 25)
	{
		cents -= 25;
		count++;
	}
	while (cents >= 10)
	{
		cents -= 10;
		count++;
	}
	while (cents >= 5)
	{
		cents -= 5;
		count++;
	}
	while (cents >= 2)
	{
		cents -= 2;
		count++;
	}
	while (cents >= 1)
	{
		cents -= 2;
		count++;
	}
	return (count);
}
