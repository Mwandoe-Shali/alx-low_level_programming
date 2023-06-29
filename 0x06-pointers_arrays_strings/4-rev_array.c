#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	/* Iterate over the array up to the middle element */
	for (i = 0; i < n / 2; i++)
	{
		/*
		 * Swap elements at current index and its corresponding
		 * index from the end
		 */
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

