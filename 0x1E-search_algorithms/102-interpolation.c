#include "search_algos.h"

/**
 * interpolation_search - searches for a value in an array of
 * integers using the Interpolation search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t cur, down, up;
	double n;

	if (array == NULL)
		return (-1);

	down = 0;
	up = size - 1;

	while (size)
	{
		n = (double)(up - down) / (array[up] - array[down]) * (value - array[down]);
		cur = (size_t)(down + n);
		printf("Value checked array[%d]", (int)cur);

		if (cur >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[cur]);
		}

		if (array[cur] == value)
			return ((int)cur);

		if (array[cur] < value)
			down = cur + 1;
		else
			up = cur - 1;

		if (down == up)
			break;
	}

	return (-1);
}
