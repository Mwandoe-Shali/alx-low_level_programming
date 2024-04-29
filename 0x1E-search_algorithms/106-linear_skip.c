#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *one;

	if (list == NULL)
		return (NULL);

	one = list;

	do {
		list = one;
		one = one->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)one->index, one->n);
	} while (one->express && one->n < value);

	if (one->express == NULL)
	{
		list = one;
		while (one->next)
			one = one->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)one->index);

	while (list != one->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
