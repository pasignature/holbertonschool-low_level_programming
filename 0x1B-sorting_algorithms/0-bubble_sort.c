#include "sort.h"

/**
 * bubble_sort - sorts array with bs algorith
 * @size: size of hash table
 * @array: array of ints
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
  size_t checker = size;
  size_t i, holder = 0;

  if (array == NULL || size == 0)
    return;
  while (checker > 0)
    {
      for (i = 0; i < size - 1; i++)
	{
	  if (array[i] > array[i + 1])
	    {
	      holder = array[i + 1];
	      array[i + 1] = array[i];
	      array[i] = holder;
	      print_array(array, size);
	    }
	}
      checker--;
    }
}
