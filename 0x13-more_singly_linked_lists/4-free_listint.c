#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		/* Store the next node in a temporary pointer */
		temp = head->next;
		/* Free the current node */
		free(head);
		/* Move to the next node */
		head = temp;
	}
}
