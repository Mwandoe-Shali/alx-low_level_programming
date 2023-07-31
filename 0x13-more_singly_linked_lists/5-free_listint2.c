#include "lists.h"

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (head != NULL && *head != NULL)
	{
		/* Store the next node in a temporary pointer */
		temp = (*head)->next;
		/* Free the current node */
		free(*head);
		/* Move to the next node */
		*head = temp;
	}
}
