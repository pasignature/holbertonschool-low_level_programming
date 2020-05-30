#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 * @b: size in bytes to be allocated
 *
 * Return: pointer to newly allocated memory
 * If fails, exit with status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);
	if (!ptr)
	exit(98);
	return (ptr);
}
