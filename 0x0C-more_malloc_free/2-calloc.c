#include <stdlib.h>

/**
 * _bzero - write zero-valued bytes
 * @b: array/area to be set to zero
 * @n: first n bytes to be set to zero
 */
void _bzero(void *b, unsigned int n)
{
	char *p;

	for (p = b; n; n--)
		*p++ = 0;
}

/**
 * _calloc - allocates memory for an array and sets memory to 0
 * @nmemb: number of elements in array to be allocated
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated memory space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr_ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr_ptr = malloc(size * nmemb);
	if (!arr_ptr)
		return (NULL);

	_bzero(arr_ptr, size * nmemb);

	return (arr_ptr);
}
