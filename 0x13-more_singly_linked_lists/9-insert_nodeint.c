#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at position in a linked list
 * @head: pointer to the pointer to the head of the list
 * @idx: index of the list where the new node should be added (starts at 0)
 * @n: value to be assigned to the new node's data
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int count = 0;

	/* If idx is 0, insert the new node at the beginning of the list */
	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Find the node before the insertion point */
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	/* If current is NULL, it means the list is shorter than idx */
	if (current == NULL)
		return (NULL);

	/* Create the new node and insert it after the current node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
