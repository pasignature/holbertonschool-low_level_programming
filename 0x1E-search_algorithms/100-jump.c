#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - search value in a sorted array of integers
 * @array: array to search
 * @size: size of the array
 * @value: value to retrieve from array
 * Return: first index where value is located
 */
int jump_search(int *array, size_t size, int value)
{
	int jump = sqrt(size), goBack;
	int i = 0, j;

	if (!array || !size)
		return (-1);

	while (i < (int)size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i += jump;
	}
	goBack = i - jump;
	printf("Value found between indexes [%d] and [%d]\n",
			goBack, i);
	for (j = goBack; j < (int)size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
