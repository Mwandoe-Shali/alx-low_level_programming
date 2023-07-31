#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list safely
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;

	if (h == NULL || *h == NULL)
		return (0);

	current = *h;

	while (current != NULL)
	{
		count++;
		next = current->next;

		/* Set current node's next pointer to NULL before freeing */
		current->next = NULL;

		/* Free the current node */
		free(current);

		/* Move to the next node */
		current = next;

		/* If the head is revisited, break to avoid infinite loop */
		if (current == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (count);
}
