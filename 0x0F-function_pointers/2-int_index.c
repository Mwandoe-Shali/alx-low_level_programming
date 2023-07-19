#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  function that searches for an integer.
 * @array: array to search in
 * @size: is the number of elements in the array array
 * @cmp: pointer to a function that is used to compare values
 *
 * Return:  returns the index of the first element
 * for which the cmp function does not return 0,
 * or -1 if no match is found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp !NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
