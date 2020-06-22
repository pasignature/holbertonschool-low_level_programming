#include <stdlib.h>

/**
 * array_range - create an array of integers from min to max
 * @min: smallest value (included)
 * @max: largest value (included)
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	unsigned int i, range;
	int *nums;

	if (min > max)
		return (NULL);

	/* find range, including both max and min */
	range = max - min + 1;

	nums = malloc(sizeof(int) * range);
	if (!nums)
		return (NULL);

	for (i = 0; i < range; i++)
		nums[i] = min++;

	return (nums);
}
