#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	/*
	* Declare a pointer variable 'current_node'
	* and initialize it to the head of the list
	*/
	const listint_t *current_node = h;
	/* Variable to keep track of the number of nodes */
	size_t count = 0;

	/* Traverse the list while there are nodes (h != NULL) */
	while (current_node != NULL)
	{
		/* Print the value of the current node */
		printf("%d\n", current_node->n);
		/* Move to the next node */
		current_node = current_node->next;
		/* Increment the count of nodes */
		count++;
	}

	/* Return the total number of nodes in the list */
	return (count);
}
