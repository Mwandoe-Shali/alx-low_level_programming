#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of DLL
 *
 * @head: head of the DLL
 * @index: index of the nth node
 * Return: nth node
 *		if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int n;

	current = head;
	for (n = 0; n < index; n++)
	{
		if (current == NULL)
			return (NULL);

		current = current->next;
	}

	return (current);
}	
