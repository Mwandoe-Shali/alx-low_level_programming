#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer value to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node; /* Declare a pointer to the new node */

	new_node = malloc(sizeof(listint_t)); /*Allocate memory for the new node */
	if (new_node == NULL) /* Check if memory allocation failed */
	{
		return (NULL); // Return NULL if memory allocation failed
	}

	new_node->n = n; /* Set the value of the new node to the given integer 'n' */
	new_node->next = *head; /* Set the 'next' pointer of the new node to the current head */

	*head = new_node; /* Update the head of the list to point to the new node */

	return (new_node); /* Return the address of the new element (new node) */
}
