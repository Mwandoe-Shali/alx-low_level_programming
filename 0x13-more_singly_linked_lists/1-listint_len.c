#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: head of the list
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	/* variable 'count' to keep track of the number of nodes */
	size_t count = 0;
	/* pointer 'current' and initialize it to the head of the list */
	const listint_t *current = h;

	/* Traverse the list until 'current' points to NULL (end of the list) */
	while (current != NULL)
	{
		/* Increment the count to keep track of the number of nodes visited */
		count++;
		/* Move 'current' to the next node in the list */
		current = current->next;
	}

	/* Return the total number of nodes in the linked list */
	return (count);
}
