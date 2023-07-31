#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the pointer to the head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;

	while (current != NULL)
	{
		/* Move the next node to the temporary variable */
		listint_t *next = current->next;

		/* Reverse the link */
		current->next = prev;

		/* Move prev and current one step forward */
		prev = current;
		current = next;
	}

	/* Update the head of the list to the last node (previously first node) */
	*head = prev;

	return (*head);
}
