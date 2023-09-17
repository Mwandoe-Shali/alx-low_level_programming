#include "lists.h"

/**
 * sum_dlistint - Sums of all the data (n) of a DLL.
 * @head: head of the list
 *
 * Return: sum of the data
 *		if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	sum = 0;
	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
