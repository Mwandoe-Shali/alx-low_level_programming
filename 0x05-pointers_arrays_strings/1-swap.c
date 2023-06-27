#include "main.h"

/**
 *swap_int - swaps the value of int a and int b
 *@a: pointer to first value int to be updated
 *@b: pointer to second value int to be updated
 *
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

