/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * dlistint_t linked list.
 *
 * @h: A pointer to the head of the linked list.
 * @idx: The index of the position where the new node should be inserted.
 * @n: The value of the new node.
 *
 * Return: A pointer to the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new_node;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		/* Insert the new node at the beginning of the linked list. */
		new_node->next = *h;
		new_node->prev = NULL;
		*h = new_node;
		return (new_node);
	}

	current = *h
	for (i = 0; i < idx - 1; i++)
	{
		if (current == NULL)
		{
			/* The index is out of bounds. */
			free(new_node);
			return (NULL);
		}
		current = current->next;
	}

	/* Insert the new node after the current node. */
	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;

	if (new_node->next != NULL)
		new_node->next->prev = new_node;

	return (new_node);
}
