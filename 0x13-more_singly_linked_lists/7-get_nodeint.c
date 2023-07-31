#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting at 0
 *
 * Return: pointer to the nth node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current = head;

	for (i = 0; current != NULL; i++)
	{
		if (i == index) /* Check if the current index matches the desired index */
			return (current); /* Return the current node */

		current = current->next; /* Move to the next node */
	}

	return (NULL); /* Return NULL if the node at the desired index is not found */
}
