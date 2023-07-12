#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates a grid, makes space, frees space
 * @width: width of matrix
 * @height: height of matrix
 *
 * Return: a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int *arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc((sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc((sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= i, j++)
				free(arr[j];
			return (NULL);
		}
	}

	for (i = 0, i < height; i++0
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
	
