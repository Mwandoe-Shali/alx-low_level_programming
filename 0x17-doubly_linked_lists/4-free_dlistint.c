#include "lists.h"

/**
 * free_dlistint - frees a DLL
 * @head: Head of DLL
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	dlistint_t *next;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
