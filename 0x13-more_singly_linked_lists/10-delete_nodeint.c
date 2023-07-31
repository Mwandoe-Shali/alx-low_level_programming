#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given index in a linked list
 * @head: pointer to the pointer to the head of the list
 * @index: index of the node to be deleted (starts at 0)
 *
 * Return: 1 if the deletion succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);

	/* If index is 0, delete the first node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	/* Find the node before the node to be deleted */
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}

	/* If current is NULL or current's next is NULL, index is invalid */
	if (current == NULL || current->next == NULL)
		return (-1);

	/* Delete the node at the given index */
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
