#include "holberton.h"
#include <stdlib.h>

/**
* alloc_grid - create a 2D array of integers
* @width: width of array
* @height: height of array
*
* Return: pointer to the 2D array of integers
*/
int **alloc_grid(int width, int height)
{
int i, j;
int **arr;

if (width < 1 || height < 1)
return (NULL);

arr = (int **)malloc(height * sizeof(int *));
if (arr == NULL)
{
free(arr);
return (NULL);
}
for (i = 0; i < height; i++)
{
arr[i] = (int *)malloc(width * sizeof(int));
if (arr[i] == NULL)
{
for (; i >= 0; i--)
{
free(arr[i]);
}
free(arr);
return (NULL);
}
}

for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
arr[i][j] = 0;
}

return (arr);
}
