#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	if (separator == NULL)
		separator = "";

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (i < n - 1)
			printf("%d%s", va_arg(nums, int), separator);
		else
			printf("%d", va_arg(nums, int));
	}
	va_end(nums);
	printf("\n");
}
