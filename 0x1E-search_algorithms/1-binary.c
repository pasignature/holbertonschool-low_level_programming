#include "stdio.h"
#include "search_algos.h"

/**
 * binary_search - finds a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: array to search
 * @size: size of the array to search
 * @value: value to retrieve
 * Return: first index where value is found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int i;

	while (left <= right)
	{
		int half = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
			else
				printf("\n");
		}
		if (array[half] < value)
			left = half + 1;
		else if (array[half] > value)
			right = half - 1;
		else
			return (half);
	}
	return (-1);
}
