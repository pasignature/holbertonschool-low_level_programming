#ifndef _SAlgo_
#define _SAlgo_
#include <stddef.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
int binary_search_ranges(int *array, int value, int left, int right);
int binary_recursion(int *array, int left, int right, int value);
/*listint_t *jump_list(listint_t *list, size_t size, int value);*/
/*skiplist_t *linear_skip(skiplist_t *list, int value);*/

#endif
