#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function given as a parameter
 * on each element of the array
 *
 * @array: array to iterate over
 * @size: the size of the array used 
 * @action: pointer function to be used in the iteration of the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* size_t == unsigned int */

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
