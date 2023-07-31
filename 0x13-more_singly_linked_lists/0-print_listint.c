#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	/* Variable to keep track of the number of nodes */
	unsigned int count = 0;

	/* Traverse the list while there are nodes (h != NULL) */
	while (current != NULL)
	{
		/* Print the value of the current node */
		printf("%d\n", current->n);
		/* Increment the count of nodes */
		count++;
		/* Move to the next node */
		current = current->next;

	}

	/* Return the total number of nodes in the list */
	return (count);
}
