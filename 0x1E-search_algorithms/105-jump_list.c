#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, a, b;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	b = (size_t)sqrt((double)size);
	idx = 0;
	a = 0;

	do {
		prev = list;
		a++;
		idx = a * b;

		while (list->next && list->idx < idx)
			list = list->next;

		if (list->next == NULL && idx != list->idx)
			idx = list->idx;

		printf("Value checked at idx [%d] = [%d]\n", (int)idx, list->n);

	} while (idx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->idx, (int)list->idx);

	for (; prev && prev->idx <= list->idx; prev = prev->next)
	{
		printf("Value checked at idx [%d] = [%d]\n", (int)prev->idx, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}