#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node;
	/* Declare pointers to the new node and last node */

	new_node = malloc(sizeof(listint_t));
	/* Allocate memory for the new node */
	if (new_node == NULL)
	{
		/* Check if memory allocation failed */
		return (NULL);
		/* Return NULL if memory allocation failed */
	}

	new_node->n = n;
	/* Set the value of the new node to the given integer 'n' */
	new_node->next = NULL;
	/* The new node will be the last node, so set its 'next' to NULL */

	if (*head == NULL)
	{
		/* If the list is empty (head points to NULL) */
		*head = new_node;
		/* Set the head to point to the new node (it becomes the first node) */
	}
	else
	{
		last_node = *head;
		/* Initialize the last node pointer to the head */

	while (last_node->next != NULL)
	{
		/* Traverse the list to find the last node */
		last_node = last_node->next;
	}

	last_node->next = new_node;
	/* Set the 'next' of the last node to the new node */
	}

	return (new_node);
	/* Return the address of the new element (new node) */
}
